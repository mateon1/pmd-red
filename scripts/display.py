import sys
import struct
import ast

def get_raw(data, pointer, length):
    if pointer > len(data): pointer -= 0x8000000
    return data[pointer:pointer+length]

def main():
    offset = ast.literal_eval(sys.argv[1])
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
    if len(rest): force_portrait = bool(ast.literal_eval(rest[0]))
    else: force_portrait = False
    rest = rest[1:]
    basename = "img-0x%08x" % (offset|0x8000000)

    with open("baserom.gba", "rb") as f:
        data = f.read()
    uncompressed = get_raw(data, offset, TILE_W*TILE_H*(NUMMAPS+1)*32 + 8*1024)

    with open(basename + ".bin", "wb") as f:
        f.write(uncompressed)
    print("Saved to %s.bin" % basename)

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
    if force_portrait:
        PORTRAIT = True
        NUMMAPS = 0
    else:
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
            buf = get_raw(uncompressed, i * 32, 32)
            ty, tx = i // LIMWIDTH, i % LIMWIDTH
            for x,c in enumerate(bytearray(buf)):
                x+=x
                array[ty * 8 + x // 8][tx * 8 + x % 8] = c&15
                array[ty * 8 + x // 8][tx * 8 + x % 8 + 1] = c>>4
        png.from_array(array, "L;4").save(basename+".raw.png")
        print("Saved successfully: %s.png" % basename)
        screen = [[0] * (TILE_W * 8) for i in range(TILE_H * 8)]
        colored = [[0,0,0] * (TILE_W * 8) for i in range(TILE_H * 8)]
        row=[]
        for i in range(0, TILE_W * TILE_H * 2, 2):
            if PORTRAIT:
                tile = i//2
                idx = i//2
            else:
                tile, = struct.unpack_from("<H", uncompressed, MAINMAP*TILE_W*TILE_H*2 + i)
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
            for x,c in enumerate(bytearray(get_raw(uncompressed, idx * 32 + NUMMAPS*TILE_W*TILE_H*2, 32))):
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
