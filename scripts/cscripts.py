from __future__ import print_function
import sys
import struct
from util import get_u8, get_s16, get_u16, get_s32, get_u32, get_raw, get_str, xdump
import binascii
from scriptvars import *
from script import *
from bisect import bisect

def main():
    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())

    isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    ptrinfo, objfileboundaries, descs = scan_locations(data)

    last = None
    for i in sorted(list(ptrinfo.items()) + [(o, ("file", descs[o])) for o in objfileboundaries if o in descs]):
        addr, v = i
        if v[0] == "file":
            print(" --- ")
            last = addr
        if last < addr:
            print("0x%x bytes unaccounted" % (addr-last))
            xdump(data, last, addr-last, offs=0)
        print((hex(i[0]),) + i[1])
        assert last <= addr, (hex(last), hex(addr))
        if   v[0] == "file":
            last = addr+8
            xdump(data, addr, last-addr, offs=0)
        elif v[0] == "str":
            last = addr+v[2]
            while last & 3 and get_u8(data, last) == 0: last += 1
            xdump(data, addr, last-addr, offs=0)
        elif v[0] == "script":
            last = addr + 16*v[2]
            h = {i*16+j for i in range(v[2]) for j in {12,13,14,15} if get_u32(data, addr+i*16+12)!=0}
            xdump(data, addr, last-addr, offs=0, highlight={addr + i for i in h})
        elif v[0] == "psref":
            last = addr + 4
            h = {0,1,2,3}
            xdump(data, addr, last-addr, offs=0, highlight={addr + i for i in h})
        elif v[0] == "sref":
            last = addr + 12
            h = {j+k for j in {4,8} for k in {0,1,2,3} if get_u32(data, addr+j)!=0}
            xdump(data, addr, last-addr, offs=0, highlight={addr + i for i in h})
        elif v[0] == "lives" or v[0] == "objs":
            last = addr + 24*v[2]
            h = {i*24+j+k for i in range(v[2]) for j in {8,12,16,20} for k in {0,1,2,3} if get_u32(data, addr+i*24+j)!=0}
            xdump(data, addr, last-addr, cols=24, offs=0, highlight={addr + i for i in h})
        elif v[0] == "effs" or v[0] == "evts":
            last = addr + 12*v[2]
            h = {i*12+8+k for i in range(v[2]) for k in {0,1,2,3} if get_u32(data, addr+i*12+8)!=0}
            xdump(data, addr, last-addr, cols=12, offs=0, highlight={addr + i for i in h})
        elif v[0] == "sector":
            last = addr + 40*v[2]
            h = {i*40+j+k for i in range(v[2]) for j in {4,12,20,28,36} for k in {0,1,2,3} if get_u32(data, addr+i*40+j)!=0}
            xdump(data, addr, last-addr, cols=40, offs=0, highlight={addr + i for i in h})
        elif v[0] == "group":
            last = addr + 8*v[2]
            h = {i*8+j+k for i in range(v[2]) for j in {4} for k in {0,1,2,3} if get_u32(data, addr+i*8+j)!=0}
            xdump(data, addr, last-addr, cols=8, offs=0, highlight={addr + i for i in h})
        elif v[0] == "link":
            last = addr + 8*v[2]
            xdump(data, addr, last-addr, cols=8, offs=0)
        elif v[0] == "gs":
            last = addr + 12
            h = {j+k for j in {4,8} for k in {0,1,2,3} if get_u32(data, addr+j)!=0}
            xdump(data, addr, last-addr, cols=12, offs=0, highlight={addr + i for i in h})
        else: assert False, v[0]


if __name__ == "__main__":
    main()
