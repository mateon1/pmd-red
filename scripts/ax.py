import sys
import struct
import ast
import binascii

def get_raw(data, pointer, length):
    if pointer > len(data): pointer -= 0x8000000
    return data[pointer:pointer+length]

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

def get_s16(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    return struct.unpack("<h", data[pointer:pointer+2])[0]

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

class Canvas:
    def __init__(this, width, narrow=False):
        assert width % 64 == 0
        this.narrow = narrow
        this.width = width
        this.canvas = []
        this.partialtiles = {}
        this.nextfree = (0, 0)

    def extend(this):
        for i in range(64): this.canvas.append(bytearray(int(this.width//2 if this.narrow else this.width)))

    def getmeta(this):
        if this.nextfree[1] >= len(this.canvas):
            this.extend()
        ret = (x,y) = this.nextfree
        x += 64
        if x >= this.width:
            x, y = 0, y + 64
        this.nextfree = (x, y)
        return ret

    def getpartial(this, w, h):
        t, i = this.partialtiles[(w,h)]
        lim = 64//w//h
        if i+1 == lim:
            del this.partialtiles[(w,h)]
        else:
            this.partialtiles[(w,h)] = (t,i+1)
        xr = w*(i%(8//w))
        yr = h*(w*i//8)
        return (t[0]+xr*8,t[1]+yr*8)

    def gettile(this, w, h):
        assert (w,h) in [(8,8),(8,4),(4,8),(4,4),(4,2),(2,4),(2,2),(2,1),(1,2),(1,1),(4,1),(1,4)]
        if (w,h) in this.partialtiles:
            return this.getpartial(w, h)
        t = this.getmeta()
        this.partialtiles[(w,h)] = (t,0)
        return this.getpartial(w, h)

def read_ax(data, ptr, name):
    print("Reading %s at 0x%08x" % (name, ptr))
    #isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    hdr = get_u32(data, ptr+4)

    ax1 = get_u32(data, hdr+0)
    ax2 = get_u32(data, hdr+4)
    ax2cnt = get_u32(data, hdr+8)
    psprites = get_u32(data, hdr+12)
    ppal = get_u32(data, hdr+16)
    spritetab = data[base(psprites):base(hdr)]
    sprites = struct.unpack("<"+"I"*(len(spritetab)//4), spritetab)
    spriteattr = [None]*len(sprites)

    assert ptr + 0x10 == get_u32(data, ax1) < sprites[-1] < ax1 < ppal < get_u32(data, ax2) < ax2 < psprites
    assert psprites - ax2 == 4 * ax2cnt

    ax1cnt = (ppal - ax1) // 4
    print("Counts: %d, %d, %d" % (ax1cnt, ax2cnt, len(sprites)))

    ax1ref = [set() for i in range(ax1cnt)]
    sprref = [set() for i in range(len(sprites))]

    print("ax1: 0x%08x (poses)" % ax1)
    ax1l = [None]*ax1cnt
    for i in range(ax1cnt):
        ax1st = get_u32(data, ax1+i*4)
        j = 0
        ax1l[i] = []
        while get_raw(data, ax1st+j*10, 10) != bytearray([0xff]*10):
            d = get_raw(data, ax1st+j*10, 10)
            sprite, unk, f1, f2, f3 = struct.unpack("<hhHHH", d)
            ax1l[i].append((sprite, unk, f1, f2, f3))
            j += 1
            flag1 = f1>>14
            flag2 = f2>>14
            print("ax1[%3d][%d] @ 0x%08x: %4d, %d, %s"%(i, j-1, ax1st, sprite, unk, binascii.hexlify(d[4:])))
            if get_u16(d, 2) != 0:
                print("Weird ax1[%3d][%d] @ 0x%08x: %4d, %d, %s"%(i, j-1, ax1st, sprite, unk, binascii.hexlify(d[4:])))
            if sprite == -1:
                continue
            if not 0 <= sprite < len(sprites):
                print("Bad ax1[%3d][%d] @ 0x%08x: %4d, %d, %s"%(i, j-1, ax1st, sprite, unk, binascii.hexlify(d[4:])))
                continue
            assert spriteattr[sprite] is None or spriteattr[sprite] == (flag1, flag2)
            spriteattr[sprite] = (flag1, flag2)
            sprref[sprite] |= {i}

    print("ax2: 0x%08x (anims)" % ax2)
    ax2l = []
    for i in range(ax2cnt):
        arr=get_u32(data, ax2+i*4)
        print("ax2[%d]: 0x%08x" % (i, arr))
        li = []
        for j in range(8):
            ax2st=get_u32(data, arr+j*4)
            print("ax2[%d][%d]: 0x%08x" % (i, j, ax2st))
            lj=[]
            li.append(lj)
            k = 0
            while any(get_raw(data, ax2st, 12)):
                d = get_raw(data, ax2st, 12)
                (fr, unk, ax1ix, sprX, sprY, shdX, shdY) = ax2f = struct.unpack("<BBhhhhh", d)
                assert 0 <= ax1ix < len(ax1l), ax1ix
                ax1ref[ax1ix] |= {(i, j, k)}
                print("ax2[%d][%d][%d]: %2d %2d %4d [%s]; %4d %4d %4d %4d" % (i, j, k, fr, unk, ax1ix, "|".join("%4d %4d %04x %04x %04x"%ax1el for ax1el in ax1l[ax1ix]), sprX, sprY, shdX, shdY))
                lj.append(ax2f)
                ax2st += 12
                k += 1
            print("%d elements: [%s]" % (len(lj), ", ".join(["%df [%d?] ax1=%d +(%d,%d) shadow +(%d,%d)" % ax2f for ax2f in lj])))
        ax2l.append(tuple(li))

    assert all(spriteattr)

    print("%s [%d]" % (name, len(sprites)))

    for i,r in enumerate(ax1ref):
        print("->ax1[%3d]: %r" % (i,r))
    for i,r in enumerate(sprref):
        print("->spr[%3d]: %r" % (i,r))
        anims = set()
        for e in r:
            print("  ax1[%d] = [%s] <- {%s}"%(e,"|".join("%4d %4d %04x %04x %04x"%ax1el for ax1el in ax1l[e]),", ".join(["ax2[%d][%d][%d]"%t for t in ax1ref[e]]) and "{[%d elems]}"%len(ax1ref[e])))
            anims |= set([t[0] for t in ax1ref[e]])
        print("  anims %r" % (anims,))

    totaltiles = 0

    spriteres = []

    for i, s in enumerate(sprites):
        ptr = s
        ofs = 0
        while True:
            dptr = get_u32(data, ptr)
            dlen = get_u32(data, ptr+4)
            if dptr == 0 and dlen == 0: break
            ofs += dlen
            ptr += 8
        spriteres.append((s, spriteattr[i], ofs//32))
        totaltiles += ofs//32
    return (totaltiles, spriteres, ax1l, ax2l, sprites)

def flagtosize(f1, f2):
    assert 0 <= f1 <= 2
    assert 0 <= f2 <= 3
    tbase = [2,2,4,8][f2]
    if (f1, f2) == (0, 0):
        w, h = 1, 1
    elif f2!=1:
        w, h = [(tbase,tbase),(tbase,tbase//2),(tbase//2,tbase),None][f1]
    else:
        w, h = [(2, 2), (4, 1), (1, 4)][f1]
    #print("FLAGS %d %d: %dx%d" % (flags[0], flags[1], w, h))
    return (w, h)

def loadfont(data):
    codes = {}

    maindir = readdir(data, 0x8300500)
    for whichkanji in [u"kanji_a", u"kanji_b"]:
        codes[whichkanji] = {}

        t = whichkanji[-1]
        ptr = maindir[whichkanji]
        assert get_raw(data, ptr, 4) == b'SIRO'
        ptr = get_u32(data, ptr + 4)

        numchars = get_u32(data, ptr)
        arrptr = get_u32(data, ptr + 4)

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

    return codes

def main():
    import png
    assert png.from_array # Need PurePNG

    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())

    #isptr = lambda p: p & 0xfe000000 == 0x08000000
    #base = lambda p: p &~0x8000000

    filt = sys.argv[1] if len(sys.argv)>1 else u"ax003"
    spread = len(sys.argv)>2

    kanji = loadfont(data)

    totaltiles = 0
    d = readdir(data, 0x8510000)
    overall_bounds = (9999,9999,0,0)
    for kao, ptr in d.items():
        if not kao.startswith(filt): continue
        canvas = Canvas(512, narrow=True)
        assert get_raw(data, ptr, 4) == b"SIRO"
        til, sres, poses, anims, sprites = read_ax(data, ptr, kao)
        totaltiles += til
        for i, (s, flags, tiles) in enumerate(sres):
            assert tiles in [1, 2, 4, 8, 16, 32, 64]
            assert flags
            #if flags is None:
            #    w, h = [(1,1), (2,1), (2,2), (2,4), (4,4), (8,4), (8,8)][[1,2,4,8,16,32,64].index(tiles)]
            #    print("No flags, guessing! %d tiles is %dx%d" % (tiles, w, h))
            #else:
            w, h = flagtosize(flags[0], flags[1])
            print(w, h, tiles)
            assert tiles == w * h
            x, y = canvas.gettile(8,8) if spread else canvas.gettile(w,h)
            print("%4d: %r %dx%d, %d at %d, %d" % (i, flags, w, h, tiles, x, y))
            render_sprite(data, canvas.canvas, x, y, s, w, h, False, False, False) # don't blend, we have no overlapping sprites
        print("%d tiles drawn" % (til,))
        w = png.Writer(width=len(canvas.canvas[0])*2,height=len(canvas.canvas),bitdepth=4,greyscale=True)
        with open("data/ax/%s.png"%kao,"wb") as f:
          w.write_packed(f, canvas.canvas)
        print("Saved to data/ax/%s.png"%kao)
        minx = 0xfff
        miny = 0xfff
        maxx = 0
        maxy = 0
        for pose in poses:
            for sprix, unk, f1, f2, f3 in pose:
                x = (f2&0x3ff)-256
                y = (f1&0x3ff)-512
                w,h = flagtosize(f1>>14,f2>>14)
                x2=x+w*8
                y2=y+h*8
                minx = min(minx, x)
                miny = min(miny, y)
                maxx = max(maxx, x2)
                maxy = max(maxy, y2)
        overall_bounds = (min(minx,overall_bounds[0]), min(miny,overall_bounds[1]),
                          max(maxx,overall_bounds[2]), max(maxy,overall_bounds[3]))
        maxx = max(maxx, minx+6*8)
        drawwidth = maxx-minx+((minx-maxx)&7)
        drawheight = maxy-miny
        print("Allocating %dx%d draw area with offset (%d,%d)" % (drawwidth,drawheight,minx,miny))
        for i, pose in enumerate(poses):
            drawarea = [bytearray(drawwidth//2) for _ in range(drawheight)]
            drawtext(data, drawarea, 2, 0, kanji["kanji_a"], kao, color=7, narrow=True)
            drawtext(data, drawarea, 2, 10, kanji["kanji_a"], "pose%03d" % i, color=7, narrow=True)
            #lastspr = -1
            renderstack = []
            for sprix, unk, f1, f2, f3 in pose:
                print("t%03d %3d %04x %04x %04x" % (sprix, unk, f1, f2, f3))
                if sprix != -1: lastspr = sprix
                if sprix == -1:
                    sprix = lastspr #continue
                assert f1 & 0x3c00 == 0, f1 & 0x3c00
                assert f2 & 0x0800 == 0, f2 & 0x0800
                vflip = f2 & 0x2000 > 0
                hflip = f2 & 0x1000 > 0
                x = (f2 & 0x3ff)-256
                y = (f1 & 0x3ff)-512
                w, h = flagtosize(f1>>14, f2>>14)
                print("at %d,%d;%d,%d;%d,%d" % (x-minx,y-miny,drawwidth,drawheight,w,h))
                if sprix == -1:
                    print("WARNING!!! Sprite without previous index set!")
                    continue
                if sres[sprix][2] != w*h:
                    print("WARNING!!! UNEXPECTED SPRITE TILE COUNT! Need %dx%d, but sprite has %d tiles" % (w, h, sres[sprix][2]))
                    continue
                assert 0 <= sprix < len(sprites)
                renderstack.append((data, drawarea, x-minx, y-miny, sprites[sprix], w, h, hflip, vflip, True))
            for args in renderstack[::-1]:
                render_sprite(*args)
            w = png.Writer(width=len(drawarea[0])*2,height=len(drawarea),bitdepth=4,greyscale=True)
            name = "%sp%03d" % (kao, i)
            with open("data/ax/pose/%s.png"%name,"wb") as f:
              w.write_packed(f, drawarea)
            print("Saved to data/ax/pose/%s.png"%name)
    print("Overall bounds: %d,%d to %d,%d" % overall_bounds)

def render_sprite(data, to, x, y, ptr, w, h, hflip, vflip, blend=True):
    ofs = 0
    while True:
        dptr = get_u32(data, ptr)
        dlen = get_u32(data, ptr+4)
        if dptr == 0 and dlen == 0: break
        if dptr:
            if blend or x&1:
                render_tiles_blend(data, dptr, to, w, h, x, y, ofs, dlen, hflip=hflip, vflip=vflip)
            else:
                render_tiles_fast(data, dptr, to, w, h, x, y, ofs, dlen, hflip=hflip, vflip=vflip)
        ofs += dlen
        assert ofs <= 32 * w * h
        ptr += 8

def render_tiles_fast(uncompressed, ptr, to, tw, th, xo, yo, tofs=0x0, tlen=0x200, hflip=False, vflip=False):
    assert not xo&1
    xo >>= 1
    for i in range(tofs, tofs+tlen, 32):
        ty, tx = divmod(i>>5, tw)
        if hflip: tx = tw-tx-1
        if vflip: ty = th-ty-1
        if hflip:
            d = struct.unpack(">IIIIIIII",get_raw(uncompressed,ptr+i-tofs,32))
        else:
            d = struct.unpack("<IIIIIIII",get_raw(uncompressed,ptr+i-tofs,32))
        for y, c in enumerate(d if not vflip else d[::-1]):
            if not hflip: c=((c&0x0f0f0f0f)<<4)|((c&0xf0f0f0f0)>>4)
            struct.pack_into("<I",to[yo+ty*8+y],xo+tx*4,c)

def render_tiles_blend(uncompressed, ptr, to, tw, th, xo, yo, tofs=0x0, tlen=0x200, hflip=False, vflip=False):
    half = bool(xo&1)
    xo >>= 1
    for i in range(tofs, tofs+tlen, 32):
        ty, tx = divmod(i>>5, tw)
        if hflip: tx = tw-tx-1
        if vflip: ty = th-ty-1
        # 98 ba dc fe - flat gradient
        d = struct.unpack(">IIIIIIII",get_raw(uncompressed,ptr+i-tofs,32))
        for y, c in enumerate(d if not vflip else d[::-1]):
            r = 0
            # 98badcfe
            c = ((c&0x0f0f0f0f)<<4)|((c&0xf0f0f0f0)>>4)
            # 89abcdef
            #origc=c
            if half:
                if hflip:
                    # 89abcdef -> 9abcdef0, 8
                    r = c >> 28
                    c = (c << 4) & 0xffffffff
                else:
                    # 89abcdef -> 089abcde, f
                    r = c & 0xf
                    c >>= 4
            if hflip: c = ((c&0x0f0f0f0f)<<4)|((c&0xf0f0f0f0)>>4)
            # flip: a9cbed0f, 8
            # nat : 089abcde, f
            o, = struct.unpack_from("<I" if hflip else ">I",to[yo+ty*8+y],xo+tx*4)
            #origo=o
            if o == 0:
                o = c
            else:
                m = 0
                for x in range(8):
                    if (c>>(4*x))&0xf:
                        m|=0xf<<(4*x)
                o = o&~m|c&m
            struct.pack_into("<I" if hflip else ">I",to[yo+ty*8+y],xo+tx*4,o)
            # flip: ?f ed cb a9, 8
            # nat : ?8 9a bc de, f
            c >>= 32
            if r:
                to[yo+ty*8+y][xo+tx*4+4] = to[yo+ty*8+y][xo+tx*4+4]&0xf|(r<<4)
            #print("%08x -> %08x (%08x + %x)" % (origo, o, origc, r))

def drawtext(data, to, x, y, kanji, text, color=0, charheight=12, useShadows=False, fixed=None, narrow=False):
    for c in text:
        chardata, width, flag = kanji[ord(c)]
        drawchar(data, to, x, y, chardata, color=color, charheight=charheight, charflag=flag, useShadows=useShadows, narrow=narrow)
        x += width if not fixed else 6

gTextShadowMask = 0x88888888

def drawchar(data, array, x, y, chardata, color=0, charheight=12, charflag=0b10, useShadows=False, narrow=False):

    flag = charflag & 1
    shadow = charflag & 2 if useShadows else 0

    color &= 0x0f
    color = color - 1 if color else 6
    color *= 0x11111111

    charprev = chardata - 6

    notfirst = False
    tileY = y // 8 # technically should be signed C division (round to zero)
    tileX = x // 8
    horizontalShift = x - 8 * tileX # Yes, this is wrong for negative values
    for i in range(charheight):
        raw = get_u32(data, chardata)
        real = raw if flag else (raw & 0x11111111) + (raw & color)
        if shadow and not flag:
            # This 'misses' shadows every 8 pixels, but it's corrected later
            # still misses shadows between characters, which doesn't matter
            real |= (raw << 4) & ~raw & gTextShadowMask
            if notfirst:
                prev = get_u32(data, charprev)
                real |= ((prev << 4) ^ raw) & ~raw & gTextShadowMask
        if real != 0:
            if narrow:
                if x&1==0:
                    struct.pack_into("<I", array[y], x//2, ((real&0xf0f0f0f0)>>4)|((real&0x0f0f0f0f)<<4) | struct.unpack_from("<I", array[y], x//2)[0])
                    #struct.pack_into("<I", array[y], x//2, real | struct.unpack_From("<I", array[y], x//2))
                else:
                    real1 = real >> 28
                    real <<= 4
                    struct.pack_into("<I", array[y], x//2, ((real&0xf0f0f0f0)>>4)|((real&0x0f0f0f0f)<<4) | struct.unpack_from("<I", array[y], x//2)[0])
                    #struct.pack_into("<I", array[y], x//2, real | struct.unpack_from("<I", array[y], x//2))
                    array[y][x//2+4] |= real1 << 4
            else:
                for _x in range(8):
                   array[y][x + _x] |= (real >> (4 * _x)) & 15
        raw = get_u16(data, chardata + 4)
        real = raw if flag else (raw & 0x11111111) + (raw & color)
        if shadow and not flag:
            real |= ((get_u16(data, chardata + 4) << 4) | (get_u16(data, chardata + 2) >> 12)) & ~raw & gTextShadowMask
            if notfirst:
                real |= ((get_u16(data, charprev + 4) << 4) | (get_u16(data, charprev + 2) >> 12)) & ~raw & gTextShadowMask
        if real != 0:
            if narrow:
                if x&1 == 0:
                    struct.pack_into("<I", array[y], x//2+4, ((real&0xf0f0f0f0)>>4)|((real&0x0f0f0f0f)<<4) | struct.unpack_from("<I", array[y], x//2)[0])
                    #struct.pack_into("<I", array[y], x//2+4, real)
                else:
                    real1 = real >> 28
                    real <<= 4
                    struct.pack_into("<I", array[y], x//2+4, ((real&0xf0f0f0f0)>>4)|((real&0x0f0f0f0f)<<4) | struct.unpack_from("<I", array[y], x//2)[0])
                    #struct.pack_into("<I", array[y], x//2+4, real)
                    array[y][x//2+8] = real1 << 4
            else:
                for _x in range(8):
                    array[y][x + 8 + _x] |= (real >> (4 * _x)) & 15
        notfirst = True
        chardata += 6
        charprev += 6
        y += 1
        if y & 7 == 0:
            tileY += 1
            # tileheight check

if __name__ == "__main__":
    main()
