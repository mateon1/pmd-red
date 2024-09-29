import sys
import struct
import ast
import binascii
from util import *

gMainDirectory = 0x08300500

def main():
    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())

    files = read_pksdir(data, gMainDirectory)

    for f, p in files.items():
        if not f.startswith("lvmp"): continue
        print("%s: 0x%08x" % (f, p))
        hexdump(data, p, 512)

if __name__ == "__main__":
    main()
