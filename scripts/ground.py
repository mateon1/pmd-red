from __future__ import print_function
import sys
import struct
from util import get_u8, get_s16, get_u16, get_s32, get_u32, get_raw, get_str
import binascii


gGroundSbin = 0x9890000
gGroundInfo = 0x81188F0
num_grounds = 245
def main():
    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())

    isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    for i in range(num_grounds):
        base = gGroundInfo + i * 0x1c
        normal, c, m, v1, v2, v3, v4 = [get_str(data, p) if p else None for p in struct.unpack("<IIIIIII", get_raw(data, base, 0x1c))]
        
        print("Ground info %03d: %7s %8s %8s %r" % (i, normal, c, m, (v1, v2, v3, v4)))

if __name__ == "__main__":
    main()
