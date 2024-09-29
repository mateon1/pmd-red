import sys
import struct

def command_stream(data):
    orig_length = len(data)
    assert data[:4] == b"AT4P"
    assert data[4:5] == b"X"
    length, = struct.unpack_from("<H", data, 5)
    assert length == len(data), (length, len(data))
    del length, orig_length
    flags = struct.unpack_from("B"*9, data, 7)
    src = 18

    control = 0
    bit = 8

    while src < len(data):
        if bit == 8:
            control, = struct.unpack_from("B", data, src)
            bit = 0
            src += 1
        if control & 0x80:
            yield (1, data[src:src+1])
            src += 1
        else:
            e, = struct.unpack_from("B", data, src)
            comm = e >> 4
            if comm in flags:
                yield (0, data[src:src+1])
                src += 1
            else:
                yield (0, data[src:src+2])
                src += 2
        control <<= 1
        bit += 1

def decode(data, loud=False, spc=False):
    orig_length = len(data)
    assert data[:4] == b"AT4P"
    assert data[4:5] == b"X"
    length, = struct.unpack_from("<H", data, 5)
    assert length == len(data), (length, len(data))
    del length, orig_length
    flags = struct.unpack_from("B"*9, data, 7)
    expected_length, = struct.unpack_from("<H", data, 16)
    #print(expected_length)
    src = 18

    # now for actual decoding
    buf = bytearray(expected_length)
    ptr = 0

    control = 0
    bit = 8

    if spc:
        spa = [0] * 9
        lna = [0] * 16

    while src < len(data):
        if bit == 8:
            control, = struct.unpack_from("B", data, src)
            if loud: print("control: %s" % ("0000000"+bin(control)[2:])[-8:][::-1])
            bit = 0
            src += 1

        if control & 0x80:
            buf[ptr], = struct.unpack_from("B", data, src)
            if loud: print("copy byte %02x" % buf[ptr])
            ptr += 1
            src += 1
        else:
            e, = struct.unpack_from("B", data, src)
            src += 1
            comm = e >> 4
            if comm in flags:
                if spc: spa[flags.index(comm)] += 1
                a,b,c,d = [(0,0,0,0), (0,1,1,1), (0,-1,0,0), (0,0,-1,0), (0,0,0,-1), (0,-1,-1,-1), (0,1,0,0), (0,0,1,0), (0,0,0,1)][flags.index(comm)]
                name = ["aaaa", "abbb", "babb", "bbab", "bbba", "baaa", "abaa", "aaba", "aaab"][flags.index(comm)]
                a+=e
                b+=e
                c+=e
                d+=e
                a&=15
                b&=15
                c&=15
                d&=15
                if loud: print("special %s: %x %x %x %x" % (name, a, b, c, d))
                buf[ptr] = (a<<4) | b; ptr += 1
                buf[ptr] = (c<<4) | d; ptr += 1

            else:
                if spc: lna[comm] += 1
                ref = ((e & 0xf) << 8) + struct.unpack_from("B", data, src)[0]
                src += 1
                off = ref + ptr - 0x1000
                if ref - 0x1000 + comm + 3 > 0 and loud: print("overlapping copy, from 0x%x, len 0x%x (ref = %d)" % (off, comm + 3, ref))
                if loud: print("copy from 0x%x, len 0x%x (ref = %d)" % (off, comm + 3, ref))
                assert off >= 0
                if loud: print("... 0x" + " 0x".join("%02x" % x for x in buf[off:off+comm+3]))
                for i in range(comm + 3):
                    buf[ptr] = buf[off + i]
                    ptr += 1

        control <<= 1
        bit += 1

    assert ptr == expected_length
    if spc: return buf, spa, lna
    return buf

def main():
    fname = sys.argv[1]
    rest = sys.argv[2:]
    if len(rest) == 0:
        TILE_W = TILE_H = 32
    elif len(rest) == 1:
        TILE_W = TILE_H = int(rest[0])
    else:
        TILE_W = int(rest[0])
        TILE_H = int(rest[1])
    rest = rest[2:]
    if len(rest): NUMMAPS = int(rest[0])
    else: NUMMAPS = 1
    rest = rest[1:]
    if len(rest): MAINMAP = int(rest[0])
    else: MAINMAP = 0
    rest = rest[1:]
    if fname[-6:].lower() != ".at4px" and fname[-5:].lower() != ".at4p":
        raise RuntimeError("Filename must end with .at4p or .at4px")
    basename = fname[:(-6 if fname[-1] == "x" else -5)]

    with open(fname, "rb") as f:
        data = f.read()

    uncompressed = decode(data)
    with open(basename + ".bin", "wb") as f:
        f.write(uncompressed)
    print("Saved to %s.bin" % basename)

    names = ["aaaa", "abbb", "babb", "bbab", "bbba", "baaa", "abaa", "aaba", "aaab"]
    other = ["aabb", "abab", "baab", "abba", "baba", "bbaa"]
    toidx = [tuple([1 if x == "b" else 0 for x in name]) for name in names]
    otidx = [tuple([1 if x == "b" else 0 for x in name]) for name in other]
    flaguse = [0] * 9
    otuse = [0] * 6
    for i in range(len(uncompressed)-1):
        a=uncompressed[i]>>4
        b=uncompressed[i]&15
        c=uncompressed[i+1]>>4
        d=uncompressed[i+1]&15
        if len(set([a,b,c,d]))>2: continue
        m=min([a,b,c,d])
        a=(a-m)&15
        b=(b-m)&15
        c=(c-m)&15
        d=(d-m)&15
        if min([a,b,c,d]) == 0 and max([a,b,c,d]) == 15:
            a=(a+1)&15
            b=(b+1)&15
            c=(c+1)&15
            d=(d+1)&15
        if min([a,b,c,d]) < max([a,b,c,d])-1: continue
        if (a,b,c,d) in toidx:
            idx = toidx.index((a,b,c,d))
            flaguse[idx] += 1
        else:
            idx = otidx.index((a,b,c,d))
            otuse[idx] += 1
    print("Statistics (flag use):")
    for i,name in enumerate(names):
        print("  %s: %d" % (name, flaguse[i]))
    print("nonstandard flags:")
    for i,name in enumerate(other):
        print("  %s: %d" % (name, otuse[i]))

    print("actual flags:")
    print("%x %x %x %x %x %x %x %x %x"%struct.unpack("B"*9,data[7:16]))

    print("data size: %d" % len(uncompressed))
    if len(uncompressed) % 32 != 0:
        print("NOT DIVISIBLE INTO 8x8 TILES!")
        print("Skipping png generation")
    else:
        try:
            with open(basename+".pal","rb") as f:
                pal = []
                while True:
                    singlepal = f.read(16*4)
                    if len(singlepal) == 0: break
                    paltmp = []
                    for i in range(16):
                        for c in range(3):
                            paltmp.append(struct.unpack("B", singlepal[4*i+c:][:1])[0])
                    pal.append(paltmp)
                    print("palette:", paltmp)
            colors = True
        except IOError:
            print("Couldn't find palette data, continuing without colors")
            colors = False
        ntile = len(uncompressed) // 32
        print("num tiles: %d" % ntile)
        if ntile == 5 * 5:
            print("Portrait mode detected, loading consecutive tiles into 5x5 image")
            PORTRAIT = True
            TILE_W = TILE_H = 5
            NUMMAPS = 0
        else:
            PORTRAIT = False
        LIMWIDTH = 16
        itw = min(ntile,LIMWIDTH)
        ith = (ntile+LIMWIDTH-1)//LIMWIDTH
        array = [[0] * (8 * itw) for i in range(ith * 8)]
        try:
            import png
            for i in range(ntile):
                buf = uncompressed[i * 32:][:32]
                ty, tx = i // LIMWIDTH, i % LIMWIDTH
                for x,c in enumerate(buf):
                    x+=x
                    array[ty * 8 + x // 8][tx * 8 + x % 8] = c&15
                    array[ty * 8 + x // 8][tx * 8 + x % 8 + 1] = c>>4
            png.from_array(array, "L;4").save(basename+".png")
            print("Saved successfully: %s.png" % basename)
            screen = [[0] * (TILE_W * 8) for i in range(TILE_H * 8)]
            colored = [[0,0,0] * (TILE_W * 8) for i in range(TILE_H * 8)]
            row=[]
            for i in range(0, TILE_W * TILE_H * 2, 2):
                if PORTRAIT:
                    tile = i//2
                    idx = i//2
                else:
                    tile, = struct.unpack("<H", uncompressed[MAINMAP*TILE_W*TILE_H*2 + i:][:2])
                    idx = tile & 0x3ff
                    #extra, = struct.unpack("<H",uncompressed[i+TILE_W*TILE_H*2:][:2])
                    #if extra == 0x0000:
                    #    assert tile == 0x0000
                    #    continue
                    #print("%04x"%extra) # 4001
                    #assert extra in [0x0000, 0x0020]
                tilepal = tile >> 12
                tx, ty = i//2%TILE_W, i//2//TILE_W
                flipy = False
                flipx = False
                if tile & 0x0800: flipy = True
                if tile & 0x0400: flipx = True
                if tx == 0:
                    print("".join(row))
                    row =  ["row %2d: " % ty]
                row.append(" %s%04x\x1b[0m"%(("\x1b[7m"if tile&0x0400 else""),tile))
                #% (tx, ty, idx, extra))
                for x,c in enumerate(uncompressed[idx * 32 + NUMMAPS*TILE_W*TILE_H*2:][:32]):
                    x+=x
                    screen[ty*8+(7-x//8 if flipy else x//8)][tx*8+(7-x%8 if flipx else x%8)]=c&15
                    if colors:
                        for y in range(3):
                            colored[ty*8+(7-x//8 if flipy else x//8)][(tx*8+(7-x%8 if flipx else x%8))*3+y] = pal[tilepal][(c&15)*3+y]
                    x += 1
                    screen[ty*8+(7-x//8 if flipy else x//8)][tx*8+(7-x%8 if flipx else x%8)]=c>>4
                    if colors:
                        for y in range(3):
                            colored[ty*8+(7-x//8 if flipy else x//8)][(tx*8+(7-x%8 if flipx else x%8))*3+y] = pal[tilepal][(c>>4)*3+y]
            print("".join(row))
            png.from_array(screen, "L;4").save(basename+".screen.png")
            print("Saved successfully: %s.screen.png" % basename)
            if colors:
                png.from_array(colored, "RGB").save(basename+".color.png")
                print("Saved successfully: %s.color.png" % basename)
        except ImportError:
            print("could not find PurePNG - not creating an image")


if __name__ == "__main__":
    main()
