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
describe = lambda i, filt=False: " | ".join(e for e in bdict.get(i,[]) if not filt or '.' not in e)
dataaddrs = set()
notdataaddrs = set()

class Flags:
    def __init__(self, val=None, n=None, z=None, c=None, v=None):
        self.n = val&(1<<31)>0 if val is not None else n
        self.z = val==0 if val is not None else z
        self.c = c
        self.v = v

class Val:
    @staticmethod
    def of(val):
        if isinstance(val, int): return Val(val)
        assert isinstance(val, Val)
        return val
    @staticmethod
    def new1(a, val=lambda x:None, desc=lambda x:None):
        return Val(val(a.v) if a.v is not None else None, desc(a))
    @staticmethod
    def new2(a, b, val=lambda a,b:None, desc=lambda a,b:None):
        return Val(val(a.v, b.v) if a.v is not None and b.v is not None else None, desc(a, b))
    def known(self):
        return self.v or self.desc
    def then(self, val):
        if self.v is None and self.desc is None: return self
        return val
    def dthen(self, desc):
        if self.desc is None: return None
        return desc
    def dthen2(self, other, desc):
        if self.desc is None and other.desc is None:
            if self.v is None and other.v is None: return None
            if self.v is not None and other.v is not None: return None
        return desc
    def __str__(self):
        if self.desc is None and self.v is None: return "?"
        return str(self.vs()) if self.v is not None else self.desc
    def __init__(self, v=None, desc=None):
        self.v = v&~(~0<<32) if v is not None else v
        self.desc = desc
    def vs(self):
        return (self.v^(1<<31))-(1<<31) if self.v is not None else None
    def __add__(self, other):
        return Val.new2(self, Val.of(other), lambda a,b:a+b, lambda a,b:a.dthen2(b,"(%s+%s)"%(a,b)))
    def __sub__(self, other):
        return Val.new2(self, Val.of(other), lambda a,b:a-b, lambda a,b:a.dthen2(b,"(%s-%s)"%(a,b)))
    def __mul__(self, other):
        return Val.new2(self, Val.of(other), lambda a,b:a*b, lambda a,b:a.dthen2(b,"(%s*%s)"%(a,b)))
    def __lshift__(self, other):
        return Val.new2(self, Val.of(other), lambda a,b:a<<b, lambda a,b:a.dthen2(b,"(%s<<%s)"%(a,b)) if b.v is None or b.v != 0 else a.desc)
    def __rshift__(self, other):
        return Val.new2(self, Val.of(other), lambda a,b:a>>b, lambda a,b:a.dthen2(b,"(%s>>%s)"%(a,b)) if b.v is None or b.v != 0 else a.desc)
    def asr(self, other):
        return Val.new2(self, Val.of(other), lambda a,b:Val(a).vs() >> b, lambda a,b:a.dthen2(b,"(%s>>s%s)"%(a,b)) if b.v is None or b.v != 0 else a.desc)
    def __and__(self, other):
        if self is other: return self
        other = Val.of(other)
        if self.v  is not None and self.v == 0: return Val(0)
        if other.v is not None and other.v == 0: return Val(0)
        if self.v  is not None and self.v == ~(~0<<32): return other
        if other.v is not None and other.v == ~(~0<<32): return self
        return Val.new2(self, Val.of(other), lambda a,b:a&b, lambda a,b:a.dthen2(b,"(%s&%s)"%(a,b)))
    def __or__(self, other):
        if self is other: return self
        other = Val.of(other)
        if self.v  is not None and self.v == 0: return self
        if other.v is not None and other.v == 0: return other
        if self.v  is not None and self.v == ~(~0<<32): return Val(~(~0<<32))
        if other.v is not None and other.v == ~(~0<<32): return Val(~(~0<<32))
        return Val.new2(self, Val.of(other), lambda a,b:a|b, lambda a,b:a.dthen2(b,"(%s|%s)"%(a,b)))
    def __xor__(self, other):
        if self is other: return Val(0)
        other = Val.of(other)
        if self.v  is not None and self.v == 0: return other
        if other.v is not None and other.v == 0: return self
        return Val.new2(self, Val.of(other), lambda a,b:a^b, lambda a,b:a.dthen2(b,"(%s^%s)"%(a,b)))

    def __radd__(self, other):
        return Val.of(other) + self
    def __rsub__(self, other):
        return Val.of(other) - self
    def __rmul__(self, other):
        return Val.of(other) * self
    def __rlshift__(self, other):
        return Val.of(other) << self
    def __rrshift__(self, other):
        return Val.of(other) >> self
    def __rand__(self, other):
        return Val.of(other) & self
    def __ror__(self, other):
        return Val.of(other) | self
    def __rxor__(self, other):
        return Val.of(other) ^ self
def main():
    hi = None
    wasterm = False
    sortedbounds = sorted(boundaries)
    bi = -1
    #outf = open("localjumps.txt", "w")
    outf = open("/dev/null", "w")
    armmode = False
    toreg = lambda x: {15:"pc", 14:"lr", 13:"sp"}.get(x, "r%d"%x)

    in_rom = lambda a: 0x8000000 <= a < 0xa000000
    resetregstate = lambda: [Val(None, "in_%s" % toreg(x)) for x in range(15)] + [None]
    unkregstate = lambda addr=None: [Val(None, None if addr is None else "post_%07x_%s"%(addr,toreg(x))) for x in range(15)] + [None]
    regstate = resetregstate()
    regval = lambda r: regstate[r].v
    utos = lambda v:(v^(1<<31))-(1<<31)
    prettyreg = lambda r: "%s = %s" % (toreg(r), regstate[r])
    stackstate = []
    for i in range(code_start, code_end, 2):
        for r in regstate: assert r is None or isinstance(r, Val)
        assert i%2==0
        if i in endings:
            print("-- end of object --")
            stackstate = []
            wasterm = True
        if i in boundaries:
            regstate = resetregstate()
            stackstate = []
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
            regstate = unkregstate(i)
            regstate[15] = Val(i+8)
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
            regstate[15] = Val(i+4)
            if insn & 0xf000 != 0xf000: hi = None
            if insn == 0x0000 and wasterm:
                continue
            if insn & 0xff00 in {0xb100, 0xb200, 0xb300, 0xb600, 0xb700, 0xb800, 0xb900, 0xba00, 0xbb00, 0xbf00, 0xde00}:
                wasterm = True
                print("%08x: %04x       ! UNDEF !" % (i, insn))
                regstate = unkregstate()
                continue

            wasterm = False

            if insn & 0xf800 == 0x4800: # LDR PC-rel
                rd = (insn>>8 & 0x7)
                imm = (insn & 0xff)<<2
                addr = ((i + 4)&~3) + imm
                regstate[rd] = Val(get_u32(data, addr), describe(get_u32(data, addr), True) or None)
                if addr > sortedbounds[bi+1]:
                    print("%08x: %04x       ldr %s, [pc+#%d] ; =0x%08x -- FAKE" % (i, insn, toreg(rd), imm, get_u32(data, addr)))
                    continue
                dataaddrs.add(addr)
                print("%08x: %04x       ldr %s, [pc+#%d] ; =0x%08x" % (i, insn, toreg(rd), imm, get_u32(data, addr)))
            elif insn & 0xff00 == 0x4700:
                rd = (insn & 0x80)>>4 | (insn & 0x07)
                rs = (insn & 0x78)>>3
                wasterm = True
                print("%08x: %04x       bx %s ; %s"            % (i,insn,toreg(rs).ljust(3),prettyreg(rs) if rs<15 else i+2) + (" (FAKE)" if rd else ""))
                regstate = unkregstate()
            elif insn & 0xff00 == 0xbd00:
                print("%08x: %04x       pop {..., pc}" % (i,insn))
                wasterm = True
                regstate = unkregstate()
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
                for r in {0,1,2,3,12,14}: # Trust the ABI
                    regstate[r] = Val(None, "post_%x_%s"%(tgt,toreg(r)))
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
                regstate = unkregstate()
            else:
                op = "(???)"
                comm = None
                if   insn & 0xe000 == 0x0000: #op = "(move shifted reg)"
                    if insn & 0xf800 == 0x1800: #op = "(add/sub)"
                        isimm = (insn>>10)&1
                        ty = ["add","sub"][(insn>>9)&1]
                        rd = (insn   &7)
                        rs = (insn>>3&7)
                        rnoff = insn>>6 & 0x7
                        if isimm and rnoff == 0 and ty == "add":
                            op = "mov %s, %s" % (toreg(rd), toreg(rs))
                            regstate[rd] = regstate[rs]
                            if rd == rs:
                                op = "nop %s" % toreg(rd)
                        else:
                            op = "%s %s, %s, %s" % (ty, toreg(rd), toreg(rs), "#%d"%rnoff if isimm else toreg(rnoff))
                            symb = False
                            a = regstate[rs]
                            if isimm: b = rnoff
                            else:
                                b = regstate[rnoff]
                            regstate[rd] = a + b if ty == "add" else a - b
                            if regstate[rd].known(): comm = prettyreg(rd)
                    else:
                        ty = ["lsl", "lsr", "asr"][(insn&0x1800)>>11]
                        rd = (insn   &7)
                        rs = (insn>>3&7)
                        off = insn>>6 & 0x1f
                        op = "%s %s, %s,#%d" % (ty, toreg(rd), toreg(rs), off)
                        if off == 0:
                            if ty == "lsl": regstate[rd] = regstate[rs]
                            if ty == "lsr": regstate[rd] = Val(0) # + carry
                            if ty == "asr": regstate[rd] = Val.new1(regstate[rs], lambda x:(~(~0<<32)) if x>>31 else 0, lambda x:"(%s>>s32)" % x)
                        else:
                            if ty == "lsl": regstate[rd] = regstate[rs] << off
                            if ty == "lsr": regstate[rd] = regstate[rs] >> off
                            if ty == "asr": regstate[rd] = regstate[rs].asr(off)
                        if regstate[rd].known(): comm = prettyreg(rd)
                elif insn & 0xe000 == 0x2000:
                    imm = insn & 0xff
                    rd = (insn >> 8) &7
                    ty = ["mov","cmp","add","sub"][(insn>>11)&3]
                    op = "%s %s, #%d" % (ty, toreg(rd), imm)
                    if ty == "mov":
                        regstate[rd] = Val(imm)
                    if ty == "add" or ty == "sub":
                        regstate[rd] = regstate[rd] + imm if ty == "add" else regstate[rd] - imm
                elif insn & 0xfc00 == 0x4000:
                    op = "(ALU op)"
                    rd = (insn    &7)
                    rs = (insn>>3 &7)
                    ty = ["and","xor","lsl","lsr","asr","adc","sbc","ror","tst","neg","cmp","cmn","or","mul","bic","mvn"][(insn>>6 &15)]
                    op = "%s %s, %s" % (ty, toreg(rd), toreg(rs))
                    if ty == "neg":   regstate[rd] = Val.new1(regstate[rs], lambda x:-x, lambda x:x.dthen("-%s"%x))
                    elif ty == "mvn": regstate[rd] = Val.new1(regstate[rs], lambda x:~x, lambda x:x.dthen("~%s"%x))
                    elif ty == "and": regstate[rd] &= regstate[rs]
                    elif ty == "or":  regstate[rd] |= regstate[rs]
                    elif ty == "xor": regstate[rd] ^= regstate[rs]
                    elif ty == "adc": regstate[rd] += regstate[rs] + Val(None,"C")
                    elif ty == "sbc": regstate[rd] -= regstate[rs] + Val(None,"!C")
                    elif ty == "lsl": regstate[rd] <<= regstate[rs] & 0xff
                    elif ty == "lsr": regstate[rd] >>= regstate[rs] & 0xff
                    elif ty == "asr": regstate[rd] = regstate[rd].asr(regstate[rs] & 0xff)
                    elif ty == "ror":
                        if regstate[rd].known():
                            regstate[rd] = Val.new2(regstate[rd], regstate[rs], lambda x,y:(x<<32|x)>>y, lambda a,b:"(%s ror %s)"%(a,b))
                    elif ty not in "tst cmp cmn":
                        regstate[rd] = Val()
                    if regstate[rd].known() and ty not in "tst cmp cmn":
                        comm = prettyreg(rd)
                elif insn & 0xfc00 == 0x4400:
                    op = "(hi reg/bx)"
                #elif insn& 0xf800 == 0x4800:
                elif insn & 0xf200 == 0x5000:
                    op = "(ld/st reg offset)"
                elif insn & 0xf200 == 0x5200:
                    op = "(ld/st sb/sh)"
                elif insn & 0xe000 == 0x6000:
                    op = "(ld/st imm offset)"
                    ld = (insn>>11&1)
                    db = (insn>>12&1)
                    rd = (insn    &7)
                    rb = (insn>>3 &7)
                    off = insn>>6 & 0x1f
                    orb = toreg(rb) if off == 0 else "[%s, #%d]" % (toreg(rb), off if db else off<<2)
                    if not ld:
                        op = "st%c %s, %s" % ("rb"[db], toreg(rd), orb)
                    else:
                        op = "ld%c %s, %s" % ("rb"[db], toreg(rd), orb)
                        regstate[rd] = Val()
                        if regval(rb) is not None:
                            addr = regval(rb) + (off if db else off<<2)
                            regstate[rd] = Val((get_u8 if db else get_u32)(data, addr) if in_rom(addr) else None, describe(addr, True) or None)
                        if regstate[rd].known():
                            comm = prettyreg(rd)
                elif insn & 0xf000 == 0x8000:
                    op = "(ld/st h)"
                elif insn & 0xf000 == 0x9000:
                    op = "(ld/st SP-rel)"
                elif insn & 0xf000 == 0xa000:
                    op = "(ld addr)"
                elif insn & 0xff00 == 0xb000:
                    op = "(add sp)"
                elif insn & 0xf600 == 0xb400:
                    op = "(push/pop)"
                    regstate = unkregstate()
                elif insn & 0xf000 == 0xc000:
                    ld = insn>>11&1
                    rb = insn>>8&7
                    regs = insn&0xff
                    #assert regs # empty rlist = {r15} on v4, but rb+=0x40
                    #assert regs&1<<rb == 0 # rb in rlist is weird/unportable
                    rcnt = (regs&0x55)+(regs>>1&0x55)
                    rcnt = (rcnt&0x33)+(rcnt>>2&0x33)
                    rcnt = (rcnt&0xf)+(rcnt>>4)
                    op = "%s %s!, %s" % ("ldmia" if ld else "stmia", toreg(rb), "{%s}" % ", ".join(toreg(i) for i in range(8) if regs&1<<i))
                    if ld:
                        base = regstate[rb].v
                        regstate[rb] = regstate[rb] + (rcnt*4)
                        for r in range(8):
                            if regs&1<<r == 0: continue
                            if base is not None and in_rom(base):
                                v = Val(get_u32(data, base), describe(base,True) or None)
                            else:
                                v = Val(None, "mem_%x"%base if base is not None else None)
                            regstate[r] = v
                            if base is not None: base += 4
                    else:
                        regstate[rb] = regstate[rb] + (rcnt*4)
                elif insn & 0xff00 == 0xdf00:
                    op = "(swi 0x%04x" % (insn & 0xff)
                    regstate = unkregstate()
                elif insn & 0xf000 == 0xd000:
                    cond = insn>>8 & 0xF
                    assert cond <= 0xd
                    condst = "EQ NE CS CC MI PL VS VC HI LS GE LT GT LE".split(" ")[cond]
                    condhi = "== != u>= u< - 0+ overflow no-overflow u> u<= s>= s< s> s<=".split(" ")[cond]
                    o = ((insn&~(~0<<8)) ^ (1<<7)) - (1<<7)
                    o <<= 1
                    tgt = i + 4 + o
                    notdataaddrs.add(tgt)
                    op = "b%s %08x" % (condst.lower(), tgt)
                    comm = condhi
                if op[0] == "(" and not 'cond branch' in op:
                    regstate = unkregstate()
                    #continue
                print("%08x: %04x       %s%s" % (i, insn, op, "; "+comm if comm is not None else ""))

    outf.close()


if __name__ == "__main__":
    main()
