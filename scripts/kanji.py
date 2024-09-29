import sys
import struct

gMainDirectory = 0x8300500

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
        #print("%s: 0x%08x" % (name, buf))
        if name in ret:
            print("WARNING: Duplicate file \"%s\"" % name)
        ret[name] = buf

    return ret

gTextShadowMask = 0x88888888

def drawchar(data, array, x, y, chardata, color=0, charheight=12, charflag=0b10, useShadows=False):
    flag = charflag & 1
    shadow = charflag & 2 if useShadows else 0

    color &= 0x0f
    color = color - 1 if color else 6
    color *= 0x11111111

    charprev = chardata - 6

    if not flag:
        notfirst = False
        tileY = y // 8 # technically should be signed C division (round to zero)
        tileX = x // 8
        horizontalShift = x - 8 * tileX # Yes, this is wrong for negative values
        for i in range(charheight):
            raw = get_u32(data, chardata)
            real = (raw & 0x11111111) + (raw & color)
            if shadow:
                # This 'misses' shadows every 8 pixels, but it's corrected later
                # still misses shadows between characters, which doesn't matter
                real |= (raw << 4) & ~raw & gTextShadowMask
                if notfirst:
                    prev = get_u32(data, charprev)
                    real |= ((prev << 4) ^ raw) & ~raw & gTextShadowMask
            if real != 0:
                for _x in range(8):
                    array[y][x + _x] |= (real >> (4 * _x)) & 15
            raw = get_u16(data, chardata + 4)
            real = (raw & 0x11111111) + (raw & color)
            if shadow:
                real |= ((get_u16(data, chardata + 4) << 4) | (get_u16(data, chardata + 2) >> 12)) & ~raw & gTextShadowMask
                if notfirst:
                    real |= ((get_u16(data, charprev + 4) << 4) | (get_u16(data, charprev + 2) >> 12)) & ~raw & gTextShadowMask
            if real != 0:
                for _x in range(8):
                    array[y][x + 8 + _x] |= (real >> (4 * _x)) & 15
            notfirst = True
            chardata += 6
            charprev += 6
            y += 1
            if y & 7 == 0:
                tileY += 1
                # tileheight check
    else:
        tileY = y // 8 # technically should be signed C division (round to zero)
        tileX = x // 8
        horizontalShift = x - 8 * tileX # Yes, this is wrong for negative values
        for i in range(charheight):
            raw = get_u32(data, chardata)
            real = (raw & 0x11111111) + (raw & color)
            if real != 0:
                for _x in range(8):
                    array[y][x + _x] |= (real >> (4 * _x)) & 15
            raw = get_u16(data, chardata + 4)
            real = (raw & 0x11111111) + (raw & color)
            if real != 0:
                for _x in range(8):
                    array[y][x + 8 + _x] |= (real >> (4 * _x)) & 15
            chardata += 6
            y += 1
            if y & 7 == 0:
                tileY += 1
                # tileheight check

def main():
    with open("baserom.gba", "rb") as f:
        data = f.read()

    maindir = readdir(data, gMainDirectory)

    codes = {}

    for whichkanji in [u"kanji_a", u"kanji_b"]:
        codes[whichkanji] = {}

        t = whichkanji[-1]
        ptr = maindir[whichkanji]
        assert data[ptr & 0x7FFFFFF : (ptr & 0x7FFFFFF) + 4] == b'SIRO'
        ptr = get_u32(data, ptr + 4)

        numchars = get_u32(data, ptr)
        arrptr = get_u32(data, ptr + 4)

        drawarr = [[0] * (6 * 4 + 3 + 16) for i in range(numchars * 13)]

        for i in range(numchars):
            base = arrptr + 12 * i
            chardata = get_u32(data, base + 0)
            charcode = get_u16(data, base + 4)
            charwidth = get_u16(data, base + 6)
            assert get_u8(data, base + 8) == 0
            assert get_u8(data, base + 9) == 0
            assert get_u8(data, base + 11) == 0
            flagA = get_u8(data, base + 10)
            codes[whichkanji][charcode] = (chardata, charwidth, flagA)

        for i in range(numchars):
            base = arrptr + 12 * i
            charcode = get_u16(data, base + 4)
            longmode = charcode > 0xff
            for x in range(0 if longmode else 2, 4):
                drawchar(data, drawarr, 6*x, 13*i, codes[u"kanji_a"][ord(hex(charcode)[2:].zfill(4)[x])][0], color=0, useShadows=True)
            chardata, _, flag = codes[whichkanji][charcode]
            drawchar(data, drawarr, 6*4+3, i * 13, chardata, charflag=flag, color=15)

        try:
            import png
            png.from_array(drawarr, "L;4").save(whichkanji+".png")
            print("Saved successfully: %s.png" % whichkanji)

            colorarr = [[0,0,0] * len(drawarr[0]) for i in range(len(drawarr))]
            palette = [[get_u8(data, 0x830612c + i + 4*j) for i in range(3)] for j in range(16)]
            for y in range(len(drawarr)):
                for x in range(len(drawarr[0])):
                    for w in range(3):
                        colorarr[y][3*x+w] = palette[drawarr[y][x]][w]
            png.from_array(colorarr, "RGB").save(whichkanji+".color.png")
            print("Saved successfully: %s.color.png" % whichkanji)
        except ImportError:
            print("could not find PurePNG - not creating an image")


if __name__ == "__main__":
    main()
