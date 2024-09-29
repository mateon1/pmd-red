import sys
import struct

def get_str(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    return data[pointer:data.find(b'\0', pointer)].decode("iso-8859-1")

def get_u32(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    return struct.unpack("<I", data[pointer:pointer+4])[0]

def get_s32(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    return struct.unpack("<i", data[pointer:pointer+4])[0]

def get_u16(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    return struct.unpack("<H", data[pointer:pointer+2])[0]

def get_u8(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    return struct.unpack("<B", data[pointer:pointer+1])[0]

def readdir(data, pointer):
    assert get_str(data, pointer) == u"pksdir0"

    filecount = get_s32(data, pointer + 8)
    fileptr = get_u32(data, pointer + 12)

    ret = {}

    for i in range(filecount):
        base = fileptr + 8 * i
        name = get_str(data, get_u32(data, base + 0))
        buf = get_u32(data, base + 4)
        print("%s: 0x%08x" % (name, buf))
        if name in ret:
            print("WARNING: Duplicate file \"%s\"" % name)
        ret[name] = buf

    return ret

def decode(data):
    assert data[0:4] == b"AT4P"
    assert data[4:5] == b"X"
    print(get_u16(data, 5), len(data))
    assert get_u16(data, 5) == len(data)
    flags = struct.unpack("B"*9, data[7:16])
    expected_length = get_u16(data, 16)
    print(expected_length)
    data = data[18:]

    # now for actual decoding
    buf = bytearray([0] * expected_length)
    ptr = 0

    control = 0
    bit = 8

    while len(data):
        if bit == 8:
            control, = struct.unpack("B", data[:1])
            print("control: %s" % ("0000000"+bin(control)[2:])[-8:][::-1])
            bit = 0
            data = data[1:]

        if control & 0x80:
            buf[ptr], = struct.unpack("B",data[:1])
            print("copy byte %02x" % buf[ptr])
            ptr += 1
            data = data[1:]
        else:
            e, = struct.unpack("B",data[:1])
            data = data[1:]
            comm = e >> 4
            if comm in flags:
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
                print("special %s: %x %x %x %x" % (name, a, b, c, d))
                buf[ptr] = (a<<4) | b; ptr += 1
                buf[ptr] = (c<<4) | d; ptr += 1

            else:
                ref = ((e & 0xf) << 8) + struct.unpack("B", data[:1])[0]
                data = data[1:]
                off = ref + ptr - 0x1000
                print("copy from 0x%x, len 0x%x (ref = %d)" % (off, comm + 3, ref))
                assert off >= 0
                print("... 0x" + " 0x".join("%02x" % x for x in buf[off:off+comm+3]))
                for i in range(comm + 3):
                    buf[ptr] = buf[off + i]
                    ptr += 1

        control <<= 1
        bit += 1

    assert ptr == expected_length
    return buf

def main():
    with open("baserom.gba", "rb") as f:
        data = f.read()

    isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    d = readdir(data, 0x8510000)
    for kao, ptr in d.items():
        if kao[:3] != u"kao": continue
        assert data[base(ptr):][:4] == b"SIRO"
        hdr = get_u32(data, ptr+4)
        i = 0
        while isptr(get_u32(data, hdr + 8*i)) and isptr(get_u32(data, hdr + 8*i + 4)):
            ppal = get_u32(data, hdr + 8*i)
            pimg = get_u32(data, hdr + 8*i + 4)
            imlen = get_u16(data, pimg + 5)
            handle_image("%s_%02d" % (kao, i), data[base(pimg):][:imlen], data[base(ppal):base(pimg)])
            i += 1

def handle_image(name, data, paldata):
    TILE_W = TILE_H = 5
    uncompressed = decode(data)
    basename = "data/kao/%s" % name
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
    assert len(uncompressed) % 32 == 0
    pal = []
    while True:
        singlepal = paldata[:16*4]
        paldata = paldata[16*4:]
        if len(singlepal) == 0: break
        paltmp = []
        for i in range(16):
            for c in range(3):
                paltmp.append(struct.unpack("B", singlepal[4*i+c:][:1])[0])
            assert get_u8(singlepal, 4*i+3) == 0x80
        pal.append(paltmp)
        print("palette:", paltmp)
    colors = True
    ntile = len(uncompressed) // 32
    print("num tiles: %d" % ntile)
    assert ntile == 5 * 5
    LIMWIDTH = 5
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
        png.from_array(array, "L;4").save(basename+".raw.png")
        print("Saved successfully: %s.raw.png" % basename)
        screen = [[0] * (TILE_W * 8) for i in range(TILE_H * 8)]
        screenpal = [[0] * (TILE_W * 8) for i in range(TILE_H * 8)]
        colored = [[0,0,0] * (TILE_W * 8) for i in range(TILE_H * 8)]
        row=[]
        for i in range(0, TILE_W * TILE_H * 2, 2):
            tile = i//2
            idx = i//2
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
            for x,c in enumerate(uncompressed[idx * 32:][:32]):
                x+=x
                screen[ty*8+(7-x//8 if flipy else x//8)][tx*8+(7-x%8 if flipx else x%8)]=c&15
                if colors:
                    for y in range(3):
                        colored[ty*8+(7-x//8 if flipy else x//8)][(tx*8+(7-x%8 if flipx else x%8))*3+y] = pal[tilepal][(c&15)*3+y]
                    screenpal[ty*8+(7-x//8 if flipy else x//8)][(tx*8+(7-x%8 if flipx else x%8))] = (tilepal<<4)+(c&15)
                x += 1
                screen[ty*8+(7-x//8 if flipy else x//8)][tx*8+(7-x%8 if flipx else x%8)]=c>>4
                if colors:
                    for y in range(3):
                        colored[ty*8+(7-x//8 if flipy else x//8)][(tx*8+(7-x%8 if flipx else x%8))*3+y] = pal[tilepal][(c>>4)*3+y]
                    screenpal[ty*8+(7-x//8 if flipy else x//8)][(tx*8+(7-x%8 if flipx else x%8))] = (tilepal<<4)+(c>>4)
        print("".join(row))
        png.from_array(screen, "L;4").save(basename+".screen.png")
        print("Saved successfully: %s.screen.png" % basename)
        if colors:
            png.from_array(colored, "RGB").save(basename+".color.png")
            print("Saved successfully: %s.color.png" % basename)
            with open(basename+".idx.png", "wb") as f:
                assert len(pal) == 1
                png.Writer(width=TILE_W*8, height=TILE_H*8, bitdepth=(4 if len(pal) == 1 else 8), palette=sum([[p[i:i+3] for i in range(0,48,3)] for p in pal],[])).write(f, screenpal)
            print("Saved successfully: %s.idx.png" % basename)
    except ImportError:
        print("could not find PurePNG - not creating an image")


if __name__ == "__main__":
    main()
