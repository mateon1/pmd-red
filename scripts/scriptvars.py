import sys
import struct
from util import get_u8, get_s16, get_u16, get_s32, get_u32, get_raw, get_str
import binascii

gScriptVarInfo = 0x80B7394
num_global_vars = 82
gLocalScriptVarInfo = 0x80B6D30

def get_var_info(data, var):
    if var < 0x400:
        assert var < num_global_vars
        p = gScriptVarInfo + 0x10 * var
    else:
        var -= 0x400
        assert var < 4
        p = gLocalScriptVarInfo + 0x10 * var
    ty, unk2, bufOffs, bitOffs, arrCnt, default, name = struct.unpack("<HHHHHHI", get_raw(data, p, 0x10))
    namestr = get_str(data, name)
    return (ty, unk2, bufOffs, bitOffs, arrCnt, default, namestr)

def get_var_type_desc(data, var, just=False):
    ty, _, _, _, arrCnt, _, _ = get_var_info(data, var)
    TYPES = {
        0: "???",
        1: "bool",
        2: "u8",
        3: "s8",
        4: "u16",
        5: "s16",
        6: "u32",
        7: "byte?",
        8: "MAGIC",
    }
    if just:
        return "%s[%s]" % (TYPES[ty].rjust(5), str(arrCnt).rjust(2))
    return "%s[%d]" % (TYPES[ty], arrCnt)

def get_var_name(data, var):
    return get_var_info(data, var)[6]

def main():
    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())

    isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    for i in range(num_global_vars):
        ty, unk2, bufOffs, bitOffs, arrCnt, default, namestr = get_var_info(data, i)
        print("Script var %3d (0x%02x): %s (type %d) at offset %4d.%d - unk2: %04x, default: %04x - %s" % (i, i, get_var_type_desc(data, i, True), ty, bufOffs, bitOffs, unk2, default, namestr))
    for i in range(4):
        ty, unk2, bufOffs, bitOffs, arrCnt, default, namestr = get_var_info(data, 0x400 + i)
        print("Local SVar %2d (0x%03x): %s (type %d) at offset %4d.%d - unk2: %04x, default: %04x - %s" % (i, 0x400+i, get_var_type_desc(data, 0x400 + i, True), ty, bufOffs, bitOffs, unk2, default, namestr))


if __name__ == "__main__":
    main()
