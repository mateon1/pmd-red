import sys
import struct

def get_raw(data, pointer, length):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < pointer + length <= len(data)
    return data[pointer:pointer+length]

special = {
    0x8d: u"{sup e}",
    0x96: u"{er}",
    0x97: u"{re}",
    0xbc: u"{<-}",
    0xbd: u"♂'", #u"{MALE}",
    0xbe: u"♀'", #u"{FEMALE}",
    #0x8159: u"{fancy blank}",
    #0x815b: u"{turning thingy}",
    #0x839f: u"\x1b[7m0\x1b27m",
    #0x83a0: u"\x1b[7m1\x1b27m",
    #0x83a1: u"\x1b[7m2\x1b27m",
    #0x83a2: u"\x1b[7m3\x1b27m",
    #0x83a3: u"\x1b[7m4\x1b27m",
    #0x83a4: u"\x1b[7m5\x1b27m",
    #0x83a5: u"\x1b[7m6\x1b27m",
    #0x83a6: u"\x1b[7m7\x1b27m",
    #0x83a7: u"\x1b[7m8\x1b27m",
    #0x83a8: u"\x1b[7m9\x1b27m",
    #0x83bf: u"{Po}",
    #0x83c4: u"{Ke}",
    0x8745: u"{SPEECH_BUBBLE}",
}

def decode_str(raw, strict=True):
    raw = bytearray(raw)
    _bytes = type(b"")
    s = u""
    i = 0
    while i < len(raw):
        c = raw[i]
        i += 1
        if c in {0x81, 0x82, 0x83, 0x87}:
            c <<= 8
            c |= raw[i]
            i += 1
        if 0x20 <= c <= 0x7e: s += chr(c)
        elif c in {0xa}: s += chr(c)
        elif 0x80 <= c <= 0xff: s += _bytes(bytearray([c])).decode("windows-1252")
        elif c in special: s += special[c]
        elif 0x8100 < c <= 0x83ff: s += _bytes(bytearray([c>>8, c&0xff])).decode("shift_jis")
        else: assert False, ("Unhandled character!", c, hex(c))
    return s

def hexdump(data, pointer, length):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < len(data)
    raw = bytearray(get_raw(data, pointer, length))
    for i in range(0, length, 16):
        pfx = "%08x:"%(pointer+i)
        hexes = []
        chars = "  "
        for j in range(16):
            if i+j < length:
                c = raw[i+j]
                hexes.append(" %02x"%c)
                chars += chr(c) if 0x20 <= c <= 0x7e else "."
            else:
                hexes.append(b"   ")
        print(pfx+"".join(hexes)+chars)

def xdump(data, p, l, base=16, cols=16, highlight=set(), offs=None, autoskip=True):
    assert base in {2,4,8,16}
    realoffs = p-(p&~0x8000000)
    p &= ~0x8000000
    bpc = {2: 1, 4: 2, 8: 3, 16: 4}[base]
    dpb = {2: 8, 4: 4, 8: 3, 16: 2}[base]
    end = p + l
    offs = offs % cols if offs is not None else p % cols
    nextp = p + cols - offs
    canskip = False
    skipped = False
    while p < end:
        if autoskip and canskip and nextp < end and not any(data[p:nextp]):
            skipped = "zeros"
            p = nextp
            offs = 0
            nextp = p + cols
            continue
        if autoskip and canskip and nextp < end and not any(c ^ 0xaa for c in data[p:nextp]):
            skipped = "padding"
            p = nextp
            offs = 0
            nextp = p + cols
            continue
        if skipped:
            print("[2;37m-* %s omitted *-[0m" % skipped)
            skipped = False
        sys.stdout.write("%08x:"%(realoffs+p-offs) + " "*(offs*(dpb+1)))
        op = p
        while p < nextp and p < end:
            sys.stdout.write(" \x1b[7m" if p in highlight or realoffs+p in highlight else "\x1b[0m ")
            for i in reversed(range(0, 8, bpc)):
                sys.stdout.write("0123456789abcdef"[(data[p]>>i)&(base-1)])
            p += 1
        sys.stdout.write("[0m")
        if nextp > end: sys.stdout.write(" "*((nextp-end)*(dpb+1)))
        sys.stdout.write(" " * (offs+1))
        while op < nextp and op < end:
            c = "[1;32m%s[0m" % chr(data[op]) if 0x20 <= data[op] <= 0x7e else "[1;30m.[0m" if data[op] == 0 else "[1;30m~[0m" if data[op] == 0xaa else "[47m#[0m" if data[op] == 0xff else "[0;36mx[0m"
            sys.stdout.write(c)
            op += 1
        sys.stdout.write("\n")
        offs = 0
        nextp = p + cols
        canskip = True
    sys.stdout.flush()

def get_str(data, pointer, raw=False):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < len(data)
    rawstr = data[pointer:data.find(b'\0', pointer)]
    if raw: return rawstr
    return decode_str(rawstr)

def get_var_array(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < len(data)

    a = []
    p = pointer
    while True:
        v = get_u8(data, p)
        if not v: break
        p += 1
        if v & 0x80:
            c = get_u8(data, p)
            assert not c & 0x80, ("0x%08x"%(p-1), hex(v), hex(c))
            v = (v & 0x7f) << 7 | (c & 0x7f)
            p += 1
        a.append(v)
    return a

def get_u32(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < pointer + 4 <= len(data)
    return struct.unpack_from("<I", data, pointer)[0]

def get_s32(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < pointer + 4 <= len(data)
    return struct.unpack_from("<i", data, pointer)[0]

def get_u16(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < pointer + 2 <= len(data)
    return struct.unpack_from("<H", data, pointer)[0]

def get_s16(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < pointer + 2 <= len(data)
    return struct.unpack_from("<h", data, pointer)[0]

def get_u8(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    assert 0 <= pointer < len(data)
    return struct.unpack_from("B", data, pointer)[0]

def read_pksdir(data, pointer):
    assert get_raw(data, pointer, 8) == b"pksdir0\0"

    filecnt = get_s32(data, pointer + 8)
    fileptr = get_u32(data, pointer + 12)
    assert filecnt >= 0

    ret = {}

    for i in range(filecnt):
        entry = fileptr + 8 * i
        name = get_str(data, get_u32(data, entry + 0))
        fdata = get_u32(data, entry + 4)
        assert name not in ret, "Duplicate file"
        ret[name] = fdata

    return ret
