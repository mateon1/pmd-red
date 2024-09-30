from __future__ import print_function
import sys
import struct
from util import get_u8, get_s16, get_u16, get_s32, get_u32, get_raw, get_str, xdump
import binascii
from scriptvars import *
from scripts import *
from bisect import bisect
try:
    with open("/dev/zero","r",encoding="utf8") as f: pass
except TypeError:
    from io import open

def main():
    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())

    isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    ptrinfo, objfileboundaries, descs = scan_locations(data)

    pdesc = lambda p, s=True: (
              u"gFunctionScriptTable[%d]"%((p-0x812f1f8)//12,)
            if 0x812f1f8 <= p < 0x812f1f8 + 12*len(FUNCS)
            else
              ("gs"[s] + ("_" if "." in descs[p] or " " in descs[p] or "_" in descs[p] else "") + descs[p].replace(".", "_").replace(" ", "_"))
            )
    cstr = lambda s: u'_("%s")' % s.replace(u'"', u"\\\"").replace(u"\n",u"\\n")

    outfile = None
    last = None
    firstpsref = None
    arrayactive = None
    curline = 0

    SCRIPTNAMES = {}
    for i,e in FUNCS.items():
        SCRIPTNAMES[i] = e[0]

    for i in sorted(list(ptrinfo.items()) + [(o, ("file", descs[o])) for o in objfileboundaries if o in descs]):
        addr, v = i
        if addr < 0x811ee5c: continue
        if v[0] == "file":
            print(" --- ")
            last = addr
        if last < addr:
            print("0x%x bytes unaccounted" % (addr-last))
            xdump(data, last, addr-last, offs=0)
        print((hex(i[0]),) + i[1])
        assert last <= addr, (hex(last), hex(addr))
        if arrayactive is not None and v[0] != arrayactive:
            arrayactive = None
            outfile.write(u'};\n\n')
            curline += 2

        if   v[0] == "file":
            last = addr+8
            firstpsref = None
            if outfile is not None:
                outfile.close()
            basename = v[1][v[1].rfind("/")+1:-2]
            outfile = open("src/data/ground/%s.h" % basename, "w", encoding="utf8")
            curline = 1
            with open(("src/data_%s.c" if "_data" not in basename else "src/%s.c") % basename, "w", encoding="utf8") as outcfile:
                outcfile.write(u"""#include "global.h"
#include "data_script.h"

#define FAKE_FILENAME "%s"

#include "globaldata.h"
#include "data/ground/%s.h"
""" % (v[1], basename))
        elif v[0] == "str":
            last = addr+v[2]
            while last & 3 and get_u8(data, last) == 0: last += 1
            # do not emit, defined in-line
        elif v[0] == "script":
            last = addr + 16*v[2]
            #xdump(data, addr, last-addr, offs=0)
            expectline = get_s16(data, addr+2)
            assert expectline > curline
            outfile.write(u'\n'*(expectline - curline - 1))
            curline += expectline - curline - 1
            outfile.write(u'static const struct ScriptCommand %s[] = { /* 0x%07x */\n' % (pdesc(addr), addr))
            curline += 1
            for i in range(v[2]):
                p = addr + 16*i
                op, b, h, a1, a2, ap = get_u8(data, p+0), get_u8(data, p+1), get_s16(data, p+2), get_s32(data, p+4), get_s32(data, p+8), get_u32(data, p+12)
                if False: pass
                elif op == 0xcf:
                    assert a2 == ap == 0
                    outfile.write(u'    MSG_VAR(%d, %s, %d),\n' % (b, get_var_name(data, h), a1))
                elif op == 0xd0:
                    assert b == a1 == a2 == 0
                    outfile.write(u'    VARIANT(/* == */%3d, %s),\n' % (h, cstr(get_str(data, ap))))
                elif op == 0xd1:
                    assert b == h == a1 == a2 == 0
                    outfile.write(u'    VARIANT_DEFAULT(%s),\n' % (cstr(get_str(data, ap)),))
                elif 0xd2 <= op <= 0xd8:
                    if op <= 0xd5: assert a2 == 0
                    else: assert ap == 0
                    assert b in {0,1}
                    mname = "ASK%d" % ((op-0xd3)%3+1,)
                    if 0xd6 <= op: mname += "_VAR"
                    if op == 0xd2: mname = "ASK_DEBUG"
                    outfile.write(u'    %s(%s, /*default*/ %d, /* speaker */ %d' % (mname, " TRUE" if b else "FALSE", h, a1))
                    if op >= 0xd6: outfile.write(u', %s),\n' % get_var_name(data, a2))
                    else: outfile.write(u', %s),\n' % ("NULL" if not ap else cstr(get_str(data, ap)),))
                elif op == 0xd9:
                    assert b == a1 == a2 == 0
                    outfile.write(u'    CHOICE(/* label */%3d, %s),\n' % (h, cstr(get_str(data, ap))))
                #elif op == 0xda: # LockCheck1
                elif op == 0xdb:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    WAIT(%d),\n' % (h))
                elif op == 0xdc:
                    assert b == a2 == ap == 0
                    outfile.write(u'    WAIT_RANDOM(%d, %d),\n' % (h, a1))
                # dd..e2: in HandleAction
                #elif op == 0xe3: # LockCheck(h)
                #elif op == 0xe4: # LockZero(h)
                #elif op == 0xe5: # LockCond(h,b)
                elif op == 0xe6:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CALL_LABEL(%d),\n' % h)
                elif op == 0xe7:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    JUMP_LABEL(%d),\n' % h)
                elif op == 0xe8:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CALL_SCRIPT(%s),\n' % (SCRIPTNAMES[h],))
                elif op == 0xe9:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    JUMP_SCRIPT(%s),\n' % (SCRIPTNAMES[h],))
                elif op == 0xee:
                    assert b == h == a1 == a2 == ap == 0
                    outfile.write(u'    RET_DIRECT,\n')
                elif op == 0xef:
                    assert b == h == a1 == a2 == ap == 0
                    outfile.write(u'    RET,\n')
                elif op == 0xf0:
                    assert b == h == a1 == a2 == ap == 0
                    outfile.write(u'    HALT,\n')
                elif op == 0xf1:
                    assert b == h == a1 == a2 == ap == 0
                    outfile.write(u'    END_DELETE,\n')
                elif op == 0xf4:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'  LABEL(%d), /* = 0x%02x */\n' % (h, h));
                elif op == 0xf6 and curline == h:
                    outfile.write(u'    DEBUGINFO,\n')
                else:
                    outfile.write(u'    { 0x%02x, 0x%02x, %c0x%04x, %c0x%08x, %c0x%08x, %s },\n' % (op, b, " -"[h<0],abs(h), " -"[a1<0], abs(a1), " -"[a2<0], abs(a2), "NULL" if ap == 0 else cstr(get_str(data, ap))))
                curline += 1
            outfile.write(u"};\n\n");
            curline += 2
        elif v[0] == "psref":
            last = addr + 4
            if firstpsref is None:
                arrayactive = "psref"
                firstpsref = addr
                outfile.write(u'static const struct ScriptRef * const (sStationScripts[]) = { /* 0x%07x */\n' % addr)
                curline += 1
            outfile.write(u"    &%s,\n" % pdesc(get_u32(data, addr)))
            curline += 1
        elif v[0] == "sref":
            last = addr + 12
            if "gFuncs" in descs[addr] or arrayactive:
                if arrayactive is None:
                    arrayactive = "sref"
                    outfile.write(u"/*extern*/ const struct ScriptRef gFunctionScriptTable[] = { /* 0x%07x */\n" % addr)
                    curline += 1
                sid, sty, pname, pscript = struct.unpack("<HHII", get_raw(data, addr, 12))
                assert pname
                SCRIPTNAMES[sid] = get_str(data, pname)
                outfile.write(u"    { %d, %d, %s, %s },\n" % (sid, sty,
                    cstr(get_str(data, pname)),
                    pdesc(pscript) if pscript else "NULL")
                )
                curline += 1
            else:
                sid, sty, pname, pscript = struct.unpack("<HHII", get_raw(data, addr, 12))
                outfile.write(u"static const struct ScriptRef %s = { %d, %d, %s, %s }; /* 0x%07x */\n" % (pdesc(addr),
                    sid, sty,
                    "NULL /* %s */" % SCRIPTNAMES[sid] if pname == 0 else cstr(get_str(data, pname)),
                    pdesc(pscript) if pscript else "NULL",
                    addr)
                )
                curline += 1
        elif v[0] == "lives" or v[0] == "objs":
            last = addr + 24*v[2]
            sname = "GroundLivesData" if v[0] == "lives" else "GroundObjectData"
            outfile.write(u"static const struct %s %s[] = { /* 0x%07x */\n" % (sname, pdesc(addr), addr))
            curline += 1
            for i in range(v[2]):
                k, a, w, h, x, y, xf, yf, s0, s1, s2, s3 = struct.unpack("<BBBBBBBBIIII", get_raw(data, addr+i*24, 24))
                assert xf & ~6 == 0, xf
                assert yf & ~6 == 0, yf
                outfile.write(u"    /*%3d */ { %3d, %3d, %3d, %3d, { %3d, %3d, %s, %s }, {" % (
                    i,
                    k, a, w, h,
                    x, y,
                    "|".join(([s for s in ["CPOS_HALFTILE"] if xf&2] + [s for s in ["CPOS_CURRENT"] if xf&4]) or ["0"]),
                    "|".join(([s for s in ["CPOS_HALFTILE"] if yf&2] + [s for s in ["CPOS_CURRENT"] if yf&4]) or ["0"]),
                ))
                if s0 == s1 == s2 == s3 == 0:
                    outfile.write(u"} },\n")
                    curline += 1
                else:
                    for i,p in enumerate([s0, s1, s2, s3]):
                        if p:
                            assert ptrinfo[p][0] == "script"
                            outfile.write("\n        [%d] = %s," % (i, pdesc(p)))
                            curline += 1
                    outfile.write(u"\n    } },\n")
                    curline += 2
            outfile.write(u"};\n\n")
            curline += 2
        elif v[0] == "effs" or v[0] == "evts":
            last = addr + 12*v[2]
            sname = "GroundEffectData" if v[0] == "effs" else "GroundEventData"
            outfile.write(u"static const struct %s %s[] = { /* 0x%07x */\n" % (sname, pdesc(addr), addr))
            curline += 1
            for i in range(v[2]):
                k, a, w, h, x, y, xf, yf, ps = struct.unpack("<BBBBBBBBI", get_raw(data, addr+i*12, 12))
                assert xf & ~6 == 0, xf
                assert yf & ~6 == 0, yf
                assert not ps or ptrinfo[ps][0] == ("sref" if v[0] == "evts" else "script")
                outfile.write(u"    /*%3d */ { %3d, %3d, %3d, %3d, { %3d, %3d, %s, %s }, %s },\n" % (
                    i,
                    k, a, w, h,
                    x, y,
                    "|".join(([s for s in ["CPOS_HALFTILE"] if xf&2] + [s for s in ["CPOS_CURRENT"] if xf&4]) or ["0"]),
                    "|".join(([s for s in ["CPOS_HALFTILE"] if yf&2] + [s for s in ["CPOS_CURRENT"] if yf&4]) or ["0"]),
                    u"NULL" if ps == 0 else ("&" + pdesc(ps) if v[0] == "evts" else pdesc(ps)),
                ))
                curline += 1
            outfile.write(u"};\n\n")
            curline += 2
        elif v[0] == "sector":
            last = addr + 40*v[2]
            outfile.write(u"static const struct GroundScriptSector %s[] = { /* 0x%07x */\n" % (pdesc(addr), addr))
            curline += 1
            for i in range(v[2]):
                ll,pl, lo,po, le,pe, lv,pv, ls,ps = struct.unpack("<IIIIIIIIII", get_raw(data, addr + 40*i, 40))
                outfile.write(u"    { ")
                if pl:
                    assert ll == ptrinfo[pl][2]
                    outfile.write(u"LPARRAY(%s), " % pdesc(pl))
                else:
                    assert ll == 0
                    outfile.write(u"0,NULL, ")
                if po:
                    assert lo == ptrinfo[po][2]
                    outfile.write(u"LPARRAY(%s), " % pdesc(po))
                else:
                    assert lo == 0
                    outfile.write(u"0,NULL, ")
                if pe:
                    assert le == ptrinfo[pe][2]
                    outfile.write(u"LPARRAY(%s), " % pdesc(pe))
                else:
                    assert le == 0
                    outfile.write(u"0,NULL, ")
                if pv:
                    assert lv == ptrinfo[pv][2]
                    outfile.write(u"LPARRAY(%s), " % pdesc(pv))
                else:
                    assert lv == 0
                    outfile.write(u"0,NULL, ")
                if ps:
                    assert ls == 1
                    outfile.write(u"1,&sStationScripts[%d]," % ((ps - firstpsref) // 4, ))
                else:
                    assert ls == 0
                    outfile.write(u"0,NULL,")

                outfile.write(u" },\n")
                curline += 1
            outfile.write(u"};\n\n")
            curline += 2
        elif v[0] == "group":
            last = addr + 8*v[2]
            outfile.write(u"static const struct GroundScriptGroup %s[] = { /* 0x%07x */\n" % (pdesc(addr), addr))
            curline += 1
            for i in range(v[2]):
                l, p = struct.unpack("<II", get_raw(data, addr + 8*i, 8))
                if p:
                    assert l == ptrinfo[p][2]
                    outfile.write(u"    { LPARRAY(%s) },\n" % (pdesc(p),))
                else:
                    outfile.write(u"    {},\n")
                curline += 1
            outfile.write(u"};\n\n")
            curline += 2
        elif v[0] == "link":
            last = addr + 8*v[2]
            outfile.write(u"static const struct GroundLink %s[] = { /* 0x%07x */\n" % (pdesc(addr), addr))
            curline += 1
            for i in range(v[2]):
                x, y, xf, yf, w, h, r, u = struct.unpack("BBBBBBBB", get_raw(data, addr + 8*i, 8))
                assert xf & ~6 == 0, hex(xf)
                assert yf & ~6 == 0, hex(yf)
                if x == y == xf == yf == w == h == r == u == 0:
                    outfile.write(u"    {},\n")
                else:
                    outfile.write(u"    /* link %3d */ { { /*x*/ %3d, /*y*/ %3d, /*flags*/ %s, %s }, /*w*/ %2d, /*h*/ %2d, /*ret*/ %d, /*?*/ %d },\n" % (
                        i,
                        x, y,
                        "|".join(([s for s in ["CPOS_HALFTILE"] if xf&2] + [s for s in ["CPOS_CURRENT"] if xf&4]) or ["0"]),
                        "|".join(([s for s in ["CPOS_HALFTILE"] if yf&2] + [s for s in ["CPOS_CURRENT"] if yf&4]) or ["0"]),
                        w, h,
                        r, u,
                    ))
                curline += 1
            outfile.write(u"};\n\n")
            curline += 2
        elif v[0] == "gs":
            last = addr + 12
            ngroups, groups, links = struct.unpack("<III", get_raw(data, addr, 12))
            assert ptrinfo[groups][0] == "group"
            assert ptrinfo[groups][2] == ngroups
            outfile.write(u"/*extern*/ const struct GroundScriptHeader gGroundScript_%s = { LPARRAY(%s), %s }; /* 0x%07x */\n" % (
                v[1], pdesc(groups), pdesc(links), addr
            ))
            curline += 1
        else: assert False, v[0]


if __name__ == "__main__":
    main()
