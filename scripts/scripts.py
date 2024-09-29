from __future__ import print_function
import sys
import struct
from util import get_u8, get_s16, get_u16, get_s32, get_u32, get_raw, get_str, xdump
import binascii
from scriptvars import *
from bisect import bisect

stops = set()
descs = {}
nostart = []
printed = set()

ptrinfo = {}
objfileboundaries = []

FUNCS = {}

# script ret vals: 0: RET, 1: FINISH? ERROR?, 2: CONTINUE_ACTION, 3: WAIT/BREAK, 4: FINISH_DELETE
def read_script(data, start, desc=None, loud=None):
    if not start: return None
    loud = start not in printed if loud is None else loud
    if desc is not None:
        if start in descs:
            if loud: print("desc 0x%08x: %s -> %s" % (start, descs[start], desc))
        else:
            descs[start] = desc
    stops.add(start)
    if loud:
        print(hex(start), descs.get(start))
        printed.add(start)
    res = []
    p = start
    while True:
        comments = []
        op, b, h, a1, a2, ap = get_u8(data, p+0), get_u8(data, p+1), get_s16(data, p+2), get_s32(data, p+4), get_s32(data, p+8), get_u32(data, p+12)
        #print("%02x %02x %04x %08x %08x %08x" % (op, b, h, a1, a2, ap))
        if ap:
            assert ap > 0x8000000, (hex(ap), hex(p))
            stops.add(ap)
            ptrinfo[ap] = ("str", "sText_%07x"%ap, len(get_str(data, ap, True))+1)
            ap = get_str(data, ap)
        else:
            ap = None
        if op == 0xf6:
            ofilebase = objfileboundaries[bisect(objfileboundaries, p) - 1]
            if ofilebase not in descs: descs[ofilebase] = ap
            assert descs[ofilebase] == ap, (hex(ofilebase), descs[ofilebase], ap)
        funcRefType = "ref"
        if op in {0x19, 0x1a}: # arg1
            funcRef = a1
            funcRefType = "obj ref" if op == 0x19 else "eff ref"
        elif op in {0x1c}: # argH
            funcRef = h
            funcRefType = "exec evt"
        elif op in {0x20}: # argH
            funcRef = h
            funcRefType = "exec dynamic"
        elif op in {0xe8, 0xe9}: # argH
            funcRef = h
            funcRefType = "call" if op == 0xe8 else "jump"
        else:
            funcRef = None
        if funcRef is not None:
            comments.append("%s %s (%d)" % (funcRefType,FUNCS[funcRef][0],funcRef))
        if op == 0xbf: comments.append("if HasItem(%d) -> jump label %d (hex %04x)" % (h&0xff, b, b))
        if op in {0xcc, 0xcd, 0xce}:
            if op == 0xcc:
                cond = "== %d" % a1
            elif op == 0xcd:
                cond = ["TRUE [%d]","FALSE [%d]","== %d","> %d","< %d",">= %d","<= %d","!= %d", "& 0x%08x", "^ 0x%08x != 0", ">> %d & 1"][b] % a1
            elif op == 0xce:
                cond = ["TRUE [%s]","FALSE [%s]","== %s","> %s","< %s",">= %s","<= %s","!= %s", "& %s", "^ %s != 0", ">> %s & 1"][b] % get_var_name(data, a1)
            comments.append("cond, (%s) -> label %d (hex %04x)" % (cond, h, h))
        CALCS = ":-+*/%&|^SCR" # obvious + set bit, clear bit, randint
        if op in {0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb}:
            val = "???"
            if   op == 0xc0: val = "SVar %s" % get_var_name(data, h)
            elif op == 0xc1: val = "Calc[%s](SVar %s, %d)" % (CALCS[b], get_var_name(data, h), a1)
            elif op == 0xc2: val = "Calc[%s](SVar %s, SVar %s, op=%d)" % (CALCS[b], get_var_name(data, h), get_var_name(data, a1))
            elif op == 0xc3: val = "Rand(%d)" % h
            elif op == 0xc4: val = "svar %s[0]" % get_var_name(data, h)
            elif op == 0xc5: val = "svar %s[1]" % get_var_name(data, h)
            comments.append("condjump, val = %s" % val)
        if op == 0xa4: comments.append("Reset SVar %s" % get_var_name(data, h))
        if op == 0xa5: comments.append("Clear SVar %s" % get_var_name(data, h))
        if op == 0xa6: comments.append("Update SVar %s %s= %d" % (get_var_name(data, h), CALCS[b], a1))
        if op == 0xa7: comments.append("Update SVar %s %s= SVar %s" % (get_var_name(data, h), CALCS[b], get_var_name(data, a1)))
        if op == 0xa8: comments.append("Set SVar %s[%d] = %d" % (get_var_name(data, h), a1, a2))
        if op == 0xa9: comments.append("ScenarioCalc SVar %s: %d %d" % (get_var_name(data, h), a1, a2))
        if op == 0xaa: comments.append("ScenarioCalc SVar %s increment" % (get_var_name(data, h)))
        if op == 0xf4:
            comments.append("label %d (hex %04x)" % (h, h))

        if op == 0xcf: comments.append("variant = SVar %s" % (get_var_name(data, h)))
        if op in range(0xd6, 0xd8+1): comments.append("variant = SVar %s" % (get_var_name(data, a2)))

        if op == "0xda":
            comments.append("branch on condvar 1")
            comments.append("wait for input")

        link = None
        if op in {0x51}: link = h
        if op in {0x5b, 0x5c, 0x63, 0x6b, 0x64, 0x6c, 0x65, 0x6d, 0x74, 0x7a, 0x80, 0x86, 0x75, 0x7b, 0x81, 0x87, 0x90, 0xca}:
            link = a1&0xffff
        if link is not None:
            assert curGroundScript is not None
            linkraw = curGroundScript[1][link]
            x = linkraw[0] * 0x2
            y = linkraw[1] * 0x2
            if linkraw[2] & 2: x += 0x1
            if linkraw[3] & 2: y += 0x1
            w = linkraw[4] * 0x2
            h = linkraw[5] * 0x2
            flags = []
            if linkraw[2] & 4: flags.append("x ignored")
            if linkraw[3] & 4: flags.append("y ignored")
            comments.append("Link[%d] 0x%x×0x%x +0x%x,0x%x (KiU)%s, ret %d, unk %02x" % (link, w, h, x, y, (" [" + " ".join(flags) + "]" if flags else ""), linkraw[6], linkraw[7]))

        wait = None
        waitCond = None
        # 0x3b is a fucking uber-command
        if op in {0x3b, 0x93, 0x94, 0x95, 0x91, 0x92}:
            wait = 0
        if op in {0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5e, 0x60, 0x64, 0x6c, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90}:
            wait = b
        if op in {0x65, 0x6d}:
            wait = (0, b)
        if op in {0x61, 0x69, 0x62, 0x6a, 0x63, 0x6b, 0x68, 0x70}:
            wait = -1
        if op in {0x5d, 0x66, 0x67, 0x6e, 0x6f}:
            wait = b
            waitCond = "possibly"
        if op in set(range(0x7d, 0x88+1)):
            wait = "for movement at %d u/f" % h
            if op in {0x82, 0x88}: waitCond = "possibly"
        if op in set(range(0x71, 0x7c+1)) | {0xdb}:
            wait = h
            if op in {0x76, 0x7c}: waitCond = "possibly"
        if op == 0xdc: wait = (h, a1)
        if wait is not None:
            pfx = waitCond + " " if waitCond is not None else ""
            if isinstance(wait, tuple):
                val = "for %d..%d frames" % wait
            elif isinstance(wait, str):
                val = wait
            else:
                assert isinstance(wait, int)
                val = "for %d frames" % wait if wait != -1 else "indefinitely"
            comments.append("(%swaits %s)"%(pfx, val))
        if op == 0xe6: comments.append("call label %d (hex %04x)"%(h,h))
        if op == 0xe7: comments.append("jump label %d (hex %04x)"%(h,h))
        if op == 0xea: comments.append("call gs[cur].g%d.s%d.station"%(h,b))
        if op == 0xeb: comments.append("jump gs[cur].g%d.s%d.station"%(h,b))
        if op == 0xec: comments.append("GroundMap enter, SVar %s" % (get_var_name(data, h),))
        if op == 0xed: comments.append("clear return func")
        if op == 0xee: comments.append("terminal, RET_DIRECT")
        if op == 0xef: comments.append("terminal, RET")
        if op == 0xf0: comments.append("terminal, HALT")
        if op == 0xf1: comments.append("terminal, END_DELETE")
        if op == 246 and res:
            print("Warning! Missing start at 0x%x" % p)
            nostart.append(p)
            pat = struct.pack("<I", p)
            cand = []
            offs = -1
            while True:
                offs = data.find(pat, offs+1)
                if offs == -1: break
                cand.append(offs | 0x8000000)
            if cand: print("Candidate pointer locations: {%s}" % ", ".join("0x%x" % c for c in cand))
            else: print("Location completely unreferenced!!")
        res.append((op, b, h, a1, a2, ap, comments))
        p += 16
        if any(p+i in stops for i in range(16)): break
        #if res[-1][0] == 0xef: break
    if loud:
        for op, b, h, a1, a2, ap, comments in res:
            if comments:
                tail = " ; " + " | ".join(comments)
            else:
                tail = ""
            print("- %02x: %02x %04x %08x %08x %r%s" % (op, b, h&0xffff, a1&0xffffffff, a2&0xffffffff, ap, tail))
    ptrinfo[start] = ("script", descs.get(start) or desc, (p - start)//16)
    return res

def read_script_ref(data, p, deep=False, desc="?", loud=None):
    assert p
    stops.add(p)
    if p not in ptrinfo:
        ptrinfo[p] = ("sref", "%s.sref"%desc)
        descs[p] = "%s.sref"%desc
    assert p in descs
    # u2 kind, unk2, unk4, script
    sid = get_u16(data, p+0)
    sty = get_u16(data, p+2)
    name = get_u32(data, p+4)
    if name:
        if name not in ptrinfo: ptrinfo[name] = ("str", "%s.name"%desc, len(get_str(data, name, True))+1)
        name = get_str(data, name)
    else: name = None
    script = get_u32(data, p+8)
    stops.add(script)
    return (sid, sty, name, read_script(data, script, desc="script %s"%name if name else "%s.sref.script"%desc, loud=loud) if deep else script)

def read_lives(data, base, n, deep=False, desc="?", loud=None):
    assert base
    # 24 bytes: unk4, iwram, script, script, script, script
    res = []
    for i in range(n):
        p = base + 24 * i
        unka = get_u32(data, p+0)
        # not IWRAM pointer, probably x,y, then... size?
        iwram = get_u32(data, p+4)
        script1 = get_u32(data, p+8)
        script2 = get_u32(data, p+12)
        script3 = get_u32(data, p+16)
        script4 = get_u32(data, p+20)
        stops.add(script1)
        stops.add(script2)
        stops.add(script3)
        stops.add(script4)
        res.append((unka, iwram,
            read_script(data, script1, desc="%s.lives%d.dlg0"%(desc,i), loud=loud) if deep else script1,
            read_script(data, script2, desc="%s.lives%d.dlg1"%(desc,i), loud=loud) if deep else script2,
            read_script(data, script3, desc="%s.lives%d.dlg2"%(desc,i), loud=loud) if deep else script3,
            read_script(data, script4, desc="%s.lives%d.dlg3"%(desc,i), loud=loud) if deep else script4,
        ))
    return (base, res)

def read_objs(data, base, n, deep=False, desc="?", loud=None):
    assert base
    # 24 bytes: unk4, iwram, unk4, unk4, script, unk4
    res = []
    for i in range(n):
        p = base + 24 * i
        unka = get_u32(data, p+0)
        iwram = get_u32(data, p+4)
        script1 = get_u32(data, p+8)
        script2 = get_u32(data, p+12)
        script3 = get_u32(data, p+16)
        script4 = get_u32(data, p+20)
        stops.add(script1)
        stops.add(script2)
        stops.add(script3)
        stops.add(script4)
        res.append((unka, iwram,
            read_script(data, script1, desc="%s.obj%d.dlg0"%(desc,i), loud=loud) if deep else script1,
            read_script(data, script2, desc="%s.obj%d.dlg1"%(desc,i), loud=loud) if deep else script2,
            read_script(data, script3, desc="%s.obj%d.dlg2"%(desc,i), loud=loud) if deep else script3,
            read_script(data, script4, desc="%s.obj%d.dlg3"%(desc,i), loud=loud) if deep else script4,
        ))
    return (base, res)

def read_effects(data, base, n, deep=False, desc="?", loud=None):
    assert base
    # 12 bytes: unk flags4, iwram, script(nullable)
    res = []
    for i in range(n):
        p = base + 12 * i
        unka = get_u32(data, p+0)
        iwram = get_u32(data, p+4)
        script = get_u32(data, p+8)
        stops.add(script)
        res.append((unka, iwram, read_script(data, script, desc="%s.eff%d.script"%(desc,i), loud=loud) if deep else script))
    return (base, res)

def read_events(data, base, n, deep=False, desc="?", loud=None):
    assert base
    # 12 bytes: unk4, unk4, ScriptRef
    res = []
    for i in range(n):
        p = base + 12 * i
        unka = get_u32(data, p+0)
        unkb = get_u32(data, p+4)
        script = get_u32(data, p+8)
        stops.add(script)
        res.append((unka, unkb, read_script_ref(data, script, deep, desc="%s.evt%d"%(desc,i), loud=loud)))
    return (base, res)

def read_scripts(data, p, loud=False, deep=False, desc="gs?"):
    assert p
    global curGroundScript
    stops.add(p)
    ptrinfo[p] = ("gs", desc)
    unk_0x8 = get_u32(data, p+8)
    stops.add(unk_0x8)
    if loud: print("unknown data @ 0x%x (storage init?):" % unk_0x8)
    unks = []
    for i in range(unk_0x8, p, 8):
        unk = get_raw(data, i, 8)
        if loud: print("0x%08x: "%i + binascii.hexlify(unk))
        unks.append(unk)
    ngroups = get_u32(data, p)
    groupbase = get_u32(data, p+4)
    stops.add(groupbase)
    ptrinfo[groupbase] = ("group", desc + ".groups", ngroups)
    descs[groupbase] = desc + ".groups"
    linkbase = get_u32(data, p+8)
    stops.add(linkbase)
    i = 0
    while linkbase + 8*i < p:
        link = struct.unpack("BBBBBBBB", get_raw(data, linkbase + 8*i, 8))
        if deep and loud != False: print("Link[%3d]: %02x %02x %02x %02x %02x %02x %02x %02x" % ((i,) + link))
        i += 1
    ptrinfo[linkbase] = ("link", desc + ".links", i)
    descs[linkbase] = desc + ".links"
    if loud: print("%d groups @ 0x%x:" % (ngroups, groupbase))
    groups = []
    curGroundScript = (groups, unks)
    for i in range(ngroups):
        sects = []
        groups.append(sects)
        nsect = get_u32(data, groupbase+8*i+0)
        if loud: print("* Group %d - %d sectors:" % (i, nsect))
        sectbase = get_u32(data, groupbase+8*i+4)
        if sectbase == 0: continue
        ptrinfo[sectbase] = ("sector", desc + ".g%d.sectors" % (i,), nsect)
        descs[sectbase] = ptrinfo[sectbase][1]
        stops.add(sectbase)
        for j in range(nsect):
            if loud: print("** Group %d, Sector %d:" % (i, j))
            nlives = get_u32(data, sectbase+40*j+0)
            livesbase = get_u32(data, sectbase+40*j+4)
            assert livesbase if nlives else not livesbase
            if livesbase:
                ptrinfo[livesbase] = ("lives", desc + ".g%d.s%d.lives" % (i, j), nlives)
                descs[livesbase] = ptrinfo[livesbase][1]
            nobjs = get_u32(data, sectbase+40*j+8)
            objbase = get_u32(data, sectbase+40*j+12)
            assert objbase if nobjs else not objbase
            if objbase:
                ptrinfo[objbase] = ("objs", desc + ".g%d.s%d.objs" % (i, j), nobjs)
                descs[objbase] = ptrinfo[objbase][1]
            neff = get_u32(data, sectbase+40*j+16)
            effbase = get_u32(data, sectbase+40*j+20)
            assert effbase if neff else not effbase
            if effbase:
                ptrinfo[effbase] = ("effs", desc + ".g%d.s%d.effs" % (i, j), neff)
                descs[effbase] = ptrinfo[effbase][1]
            nevt = get_u32(data, sectbase+40*j+24)
            evtbase = get_u32(data, sectbase+40*j+28)
            assert evtbase if nevt else not evtbase
            if evtbase:
                ptrinfo[evtbase] = ("evts", desc + ".g%d.s%d.evts" % (i, j), nevt)
                descs[evtbase] = ptrinfo[evtbase][1]
            nstat = get_u32(data, sectbase+40*j+32)
            assert 0 <= nstat <= 1
            station = get_u32(data, sectbase+40*j+36)
            assert station if nstat else not station
            if station:
                ptrinfo[station] = ("psref", desc + ".g%d.s%d.station" % (i, j))
                descs[station] = ptrinfo[station][1]
            if loud:
                print("- %3d lives   @ 0x%x" % (nlives, livesbase))
                print("- %3d objs    @ 0x%x" % (nobjs , objbase))
                print("- %3d effects @ 0x%x" % (neff  , effbase))
                print("- %3d events  @ 0x%x" % (nevt  , evtbase))
                print("- %3d station @ 0x%x" % (nstat , station))
            stops.add(livesbase)
            stops.add(objbase)
            stops.add(effbase)
            stops.add(evtbase)
            stops.add(station)
            stops.add(get_u32(data, station))
            sects.append((
                read_lives(data, livesbase, nlives, deep, desc="%s.g%d.s%d"%(desc,i,j), loud=loud) if nlives else [],
                read_objs(data, objbase, nobjs, deep, desc="%s.g%d.s%d"%(desc,i,j), loud=loud) if nobjs else [],
                read_effects(data, effbase, neff, deep, desc="%s.g%d.s%d"%(desc,i,j), loud=loud) if neff else [],
                read_events(data, evtbase, nevt, deep, desc="%s.g%d.s%d"%(desc,i,j), loud=loud) if nevt else [],
                (read_script_ref(data, get_u32(data, station), deep, desc="%s.g%d.s%d.station"%(desc,i,j), loud=loud)) if nstat else None,
            ))
    curGroundScript = None
    return groups

specialScripts = [
(0x81164e4, "null script"),
(0x81182f4, "GroundObject unsized default"),
(0x8118350, "GroundObject sized default"),
(0x8118598, "unused GroundEffect script"),
]
extraStops = [0x81183A0]

gGroundScriptPointers = 0x811E258
gGroundTriggers = 0x812F1F8

def scan_locations(data):
    isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    p = -1
    while p < len(data):
        p = data.find(b"pksdir0\0", p+1)
        if p < 0: break
        objfileboundaries.append(p | 0x8000000)
        stops.add(p     | 0x8000000)
        stops.add((p+8) | 0x8000000)

    stops.update(extraStops)
    for p, n in specialScripts:
        stops.add(p)
        descs[p] = n
        read_script(data, p, loud=False)

    stops.add(gGroundTriggers)
    descs[gGroundTriggers] = "gGroundTriggers"
    for i in range(407):
        res = read_script_ref(data, gGroundTriggers + i*12, desc=u"gFuncs[%d]"%i, deep=False, loud=False)
        FUNCS[i] = (res[2], res[3])
        #namep = get_u32(data, gGroundTriggers + i*12+4)
        #ptrinfo[namep] = ("str", "sFuncName%03d"%i, len(get_str(data, namep, True))+1)
        #name = get_str(data, namep)
        #p = get_u32(data, gGroundTriggers + i*12 + 8)
        #stops.add(p)
        #descs[p] = "FUNCTION %s (%d)" % (name, i)

    for i in range(407):
        res = read_script_ref(data, gGroundTriggers + i*12, desc=u"gFuncs[%d]"%i, deep=True, loud=False)
        #p = get_u32(data, gGroundTriggers + i*12 + 8)
        #read_script(data, p, loud=False)

    seen = {}
    ptrs = [(i, get_u32(data, gGroundScriptPointers + 4*i)) for i in range(229)]
    for i in range(229):
        p = get_u32(data, gGroundScriptPointers + 4*i)
        assert isptr(p)
        if p in seen:
            continue
        seen[p] = i
        read_scripts(data, p, deep=False, desc=u"gs%d"%i, loud=False)
        read_scripts(data, p, deep=True, desc=u"gs%d"%i, loud=False)

    return ptrinfo, objfileboundaries, descs

def main():
    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())

    isptr = lambda p: p & 0xfe000000 == 0x08000000
    base = lambda p: p &~0x8000000

    scan_locations(data)

    seen = {}
    for i in range(407):
        tid, flags = get_u16(data, gGroundTriggers + i*12 + 0), get_u16(data, gGroundTriggers + i*12 + 2)
        #name = get_str(data, get_u32(data, gGroundTriggers + i*12 + 4))
        #p = get_u32(data, gGroundTriggers + i*12 + 8)
        # print("=== FUNCTION %d: %s (0x%x) ===" % (i, name, p))
        #read_script(data, p)
    for i in range(229):
        p = get_u32(data, gGroundScriptPointers + 4*i)
        #print("=== LOCATION %d: 0x%x ===" % (i, p))
        assert isptr(p)
        if p in seen:
            #print("<duplicate of SCRIPT %d>" % seen[p])
            continue
        seen[p] = i
        #(read_scripts(data, p, deep=True, desc=u"gs%d"%i))
if __name__ == "__main__":
    main()
