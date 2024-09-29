import sys
import struct
import array

rodata_start = 0x80b6904
rodata_end = 0x8272724

def get_str(data, pointer):
    if pointer > len(data): pointer -= 0x8000000
    return data[pointer:data.find(b'\0', pointer)]

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

def main():
    global data, ints
    with open("baserom.gba", "rb") as f:
        data = f.read()

    ints = array.array("I")
    ints.fromstring(data[rodata_start&0x1ffffff:rodata_end&0x1ffffff])

    for i, p in enumerate(ints):
        if not p & 3 and rodata_start <= p < rodata_end:
            pointer = p
            if pointer > len(data): pointer -= 0x8000000
            nulp = data.find(b'\0', pointer)
            if nulp > pointer:# and all(c == 0 for c in data[nulp:(nulp+3)&~3]):
                idx = 4*i + rodata_start
                print("%08x -> %08x: %r" % (idx, p, data[pointer:nulp]))

if __name__ == "__main__":
    main()
