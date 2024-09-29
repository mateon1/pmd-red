import struct

with open("baserom.gba", "rb") as f:
    data = f.read()

# is this seriously the only 2/3-agnostic way for this to work?
AT4P = bytearray([0x41, 0x54, 0x34, 0x50])

idx = 0
while True:
    idx = data.find(AT4P, idx+1)
    if idx == -1: break
    length, = struct.unpack("<H", data[idx+5:][:2])
    fname = "compressed/data_%08X.at4p" % (0x08000000 + idx)
    with open(fname, "wb") as f:
        f.write(data[idx:][:length])
    print("Extracted %s" % fname)
