from __future__ import print_function
import sys
import struct
import binascii
from util import get_u8, get_s16, get_u16, get_s32, get_u32, get_raw, get_str

with open("baserom.gba", "rb") as f:
    data = bytearray(f.read())
with open("pmd_red.map", "r") as f:
    mapfile = f.read()
maplines = mapfile[mapfile.find("Linker script and memory map"):mapfile.find(".debug")].rstrip("\n").split("\n")

boundaries = set()
endings = set()
bdict = {}
isthumb = { 0x8000000: 0 }

for l in maplines[1:]:
    if not l: continue
    if l[16:18] != "0x": continue
    addr = int(l[18:34],16)
    boundaries.add(addr)
    bdict[addr] = bdict.get(addr,[])
    bdict[addr].append(l[50:])
    size = None
    if l[:16].strip(" ") != "":
        s = l[35:].lstrip()
        assert s[:2] == "0x"
        size = int(s[2:s.find(" ",2)],16)
        endings.add(addr + size)

with open("pmd_red.syms", "r") as f:
    symfile = f.read()
symlines = symfile[symfile.find("SYMBOL TABLE"):].rstrip("\n").split("\n")
for s in symlines[1:]:
    if not s: continue
    addr = int(s[0:8],16)
    flags = s[9:16]
    if "F" not in flags: continue
    info = s[17:].split()
    assert len(info) == 3
    sec, size, name = info
    size = int(size,16)
    thumb = addr&1
    addr &= ~1
    boundaries.add(addr)
    isthumb[addr] = thumb
    bdict[addr] = bdict.get(addr, [])
    if name not in bdict[addr]:
        #print("added %08x %4x %s" % (addr,size,name))
        #print(s)
        bdict[addr].append(name)
    endings.add(addr+size)

isptr = lambda p: p & 0xfe000000 == 0x08000000
base = lambda p: p &~0x8000000

code_start = 0x80000c0
code_start = 0x8000000
code_end   = 0x80b6904

#describe = lambda i: " | ".join([l[50:] for l in bdict.get(i,[])])
describe = lambda i: " | ".join(bdict.get(i,[]))
dataaddrs = set()
notdataaddrs = set()

def main():
    hi = None
    wasterm = False
    sortedbounds = sorted(boundaries)
    bi = -1
    outf = open("localjumps.txt", "w")
    armmode = False
    toreg = lambda x: {15:"pc", 14:"lr", 13:"sp"}.get(x, "r%d"%x)
    for i in range(code_start, code_end, 2):
        if i in endings:
            print("-- end of object --")
            wasterm = True
        if i in boundaries:
            print("-- %08x --" % i, ("[ARM func] " if isthumb.get(i) == 0 else "") + describe(i))
            armmode = isthumb.get(i) == 0
            wasterm = False
        if i in dataaddrs and i not in notdataaddrs:
            print("%08x: %02x %02x %02x %02x .word %08x ; (%d) %s" % (i, get_u8(data, i), get_u8(data, i+1), get_u8(data, i+2), get_u8(data, i+3), get_u32(data, i), get_s32(data, i), describe(get_u32(data, i))))
            continue
        if i-2 in dataaddrs and i-2 not in notdataaddrs:
            continue
        while bi+1 < len(sortedbounds) and sortedbounds[bi+1] <= i: bi += 1
        if armmode and i%4!=0: continue
        if armmode:
            insn = get_u32(data, i)
            cond = insn>>28
            assert cond != 0xf
            condst = "EQ NE CS CC MI PL VS VC HI LS GE LT GT LE ".split(" ")[cond]
            condhi = "== != u>= u< - 0+ overflow no-overflow u> u<= s>= s< s> s<= ALWAYS".split(" ")[cond]
            rn = insn>>16&0xf
            rd = insn>>12&0xf
            rs = insn>>8 &0xf
            rm = insn    &0xf
            op = "???"
            if   insn & 0x0a000000 == 0x00000000:
                immo = insn>>24&1
                imms = str(((insn&0xff)>>(rs*2))|((insn&0xff)<<(32-rs*2))&~(~0<<32)) if immo else "%s,%02x"%(toreg(rm),insn>>4&0xff)
                op = "AND XOR SUB RSB ADD ADC SBC RSC TST TEQ CMP CMN ORR MOV BIC MVN".split(" ")[insn>>21&0xf]
                if insn>>20&1: op += "S"
                op = op.ljust(4)
                print("%08x: %08x   %s%6s %s,%s,%s" % (i, insn, op, "."+condst + ":" + condhi if condst else "", toreg(rd), toreg(rn), imms))
                continue
            if   insn & 0x0e000000 == 0x0a000000:
                l = insn>>24 & 1
                op = "BL" if l else "B"
                offs = insn &~(~0<<24)
                fstart = sortedbounds[bi]
                fend   = sortedbounds[bi+1]
                o = (insn&~(~0<<24))<<2
                o = (o&0x3fffff^(1<<25))-(1<<25)
                tgt = i + o + 8
                local = fstart <= tgt < fend
                tdesc = describe(tgt)
                if not local and tgt in boundaries:
                    isthumb[tgt] = 0
                print("%08x: %08x   %s%6s %08x" % (i, insn, op, "."+condst + ":" + condhi if condst else "", tgt), ("; " + tdesc if tdesc else ""))
                continue
            print("%08x: %08x   %s%6s" % (i, insn, op, "."+condst + ":" + condhi if condst else ""))
        else:
            insn = get_u16(data, i)
            if insn & 0xf000 != 0xf000: hi = None
            if insn == 0x0000 and wasterm:
                continue

            wasterm = False

            if insn & 0xf800 == 0x4800: # LDR PC-rel
                rd = (insn & 0x700)>>16
                imm = (insn & 0xff)<<2
                addr = ((i + 4)&~3) + imm
                if addr > sortedbounds[bi+1]:
                    print("%08x: %04x       ldr [pc+#%d] -- FAKE" % (i, insn, imm))
                    continue
                dataaddrs.add(addr)
                print("%08x: %04x       ldr [pc+#%d]" % (i, insn, imm))
            elif insn & 0xff00 == 0x4700:
                rd = (insn & 0x80)>>4 | (insn & 0x07)
                rs = (insn & 0x78)>>3
                wasterm = True
                print("%08x: %04x       bx %s"            % (i,insn,("r%d"%rs).ljust(3)) + (" (FAKE)" if rd else ""))
            elif insn & 0xff00 == 0xbd00:
                print("%08x: %04x       pop {..., pc}" % (i,insn))
                wasterm = True
            elif insn & 0xf800 == 0xf800 and hi is not None:
                fstart = sortedbounds[bi]
                fend   = sortedbounds[bi+1]
                o = (hi&0x7ff)<<12 | (insn&0x7ff)<<1
                o = (o&0x3fffff^0x200000)-0x200000
                tgt = i + o + 2
                local = fstart <= tgt < fend
                tdesc = describe(tgt)
                if not code_start <= tgt < code_end:
                    ty = "FAKE!"
                elif get_u16(data, tgt) & 0xff00 == 0x4700: # call -> bx
                    ty = "NULL"
                else:
                    ty = [["FAKE?","CALL"],["LOCAL", "SELF?"]][local][tgt in boundaries]
                    if local and tgt not in boundaries:
                        outf.write("0x%08x,\n" % (i-2,));
                print("%08x: %04x%04x   bl %08x"%(i-2,hi,insn,tgt), ty.ljust(6), ("; " + tdesc if tdesc else ""))
                wasterm = True
            elif insn & 0xf800 == 0xf000:
                hi = insn
            elif insn & 0xf800 == 0xe000:
                o = (insn & 0x7ff)<<1
                o = (o&0xfff^0x800)-0x800
                tgt = i + o + 4
                notdataaddrs.add(tgt)
                tdesc = describe(tgt)
                print("%08x: %04x       b %08x"%(i,insn,tgt), ("; " + tdesc if tdesc else ""))
                wasterm = True
            else:
                op = "(???)"
                if   insn & 0xe000 == 0x0000: #op = "(move shifted reg)"
                    if insn & 0xf800 == 0x1800: #op = "(add/sub)"
                        isimm = (insn>>10)&1
                        ty = ["add","sub"][(insn>>9)&1]
                        rd = toreg(insn   &7)
                        rs = toreg(insn>>3&7)
                        rnoff = insn>>6 & 0x7
                        op = "%s %s, %s, %s" % (ty, rd, rs, "#%d"%rnoff if isimm else toreg(rnoff))
                        if isimm and rnoff == 0 and ty == "add":
                            op = "mov %s, %s" % (rd, rs)
                            if rd == rs:
                                op = "nop %s" % rd
                    else:
                        ty = ["lsl", "lsr", "asr"][(insn&0x1800)>>11]
                        rd = toreg(insn   &7)
                        rs = toreg(insn>>3&7)
                        off = insn>>6 & 0x1f
                        op = "%s %s, %s,#%d" % (ty, rd, rs, off)
                elif insn & 0xe000 == 0x2000: op = "(mov/cmp/add/sub imm)"
                elif insn & 0xfc00 == 0x4000: op = "(ALU op)"
                elif insn & 0xfc00 == 0x4400: op = "(hi reg/bx)"
                #elif insn& 0xf800 == 0x4800:
                elif insn & 0xf200 == 0x5000: op = "(ld/st reg offset)"
                elif insn & 0xf200 == 0x5200: op = "(ld/st sb/sh)"
                elif insn & 0xe000 == 0x6000: op = "(ld/st imm offset)"
                elif insn & 0xf000 == 0x8000: op = "(ld/st h)"
                elif insn & 0xf000 == 0x9000: op = "(ld/st SP-rel)"
                elif insn & 0xf000 == 0xa000: op = "(ld addr)"
                elif insn & 0xff00 == 0xb000: op = "(add sp)"
                elif insn & 0xf600 == 0xb400: op = "(push/pop)"
                elif insn & 0xf000 == 0xc000: op = "(ldm/stm)"
                elif insn & 0xff00 == 0xdf00: op = "(swi 0x%04x" % (insn & 0xff)
                elif insn & 0xf000 == 0xd000: op = "(cond branch)"
                #if op[0] == "(": continue
                print("%08x: %04x       %s" % (i, insn, op))

    outf.close()


if __name__ == "__main__":
    main()
