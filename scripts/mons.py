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

def main():
    with open("baserom.gba", "rb") as f:
        data = f.read()

    d = readdir(data, gMainDirectory)
    t = get_u32(data, d["monspara"] + 4)

    for i in range(424):
        base = t + i * 72
        species = get_str(data, get_u32(data, base + 0))
        category = get_str(data, get_u32(data, base + 4))
        print("%03d: %10s, the %s Pokemon" % (i, species, category))


if __name__ == "__main__":
    main()
