import struct
import itertools
from array import array

from util import *
from decompress import decode as decompress, command_stream

def popcnt(n):
    n = (n & 0x55555555) + ((n >> 1) & 0x55555555)
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333)
    n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f)
    n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff)
    n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff)
    return n

def compression_patterns():
    patterns = {}
    for base in range(16):
        for i, (a,b,c,d) in enumerate([(0, 0, 0, 0), (0, 1, 1, 1), (0, -1, 0, 0), (0, 0, -1, 0), (0, 0, 0, -1), (0, -1, -1, -1), (0, 1, 0, 0), (0, 0, 1, 0), (0, 0, 0, 1)]):
            a+=base
            b+=base
            c+=base
            d+=base
            a&=15
            b&=15
            c&=15
            d&=15
            patterns[(c<<12) | (d << 8) | (a<<4) | b] = (i, base)
    return patterns

def precomp_prev_match(data):
    _bytes = type(b"")
    data = _bytes(data) # Need hashability of bytes/str type
    last = [{} for i in range(16)]
    refs = [[] for i in range(16)]
    for i in range(len(data)):
        for r in range(16):
            l = r + 3
            base = i - l + 1
            if base < 0:
                refs[r].append(-1)
                continue
            s = data[base:base+l]
            if s not in last[r]:
                last[r][s] = base
                refs[r].append(-1)
                continue
            lb = last[r][s]
            refs[r].append(lb)
            last[r][s] = base
    return refs

def find_matches(data, endi, prevs, maxavail=18, overlap=True):
    l = maxavail + 1
    while l > 3:
        l -= 1
        if l >= endi: continue
        base = endi-l+1
        start = max(0, base - 0x1000)
        p = base
        prevlist = []
        while p >= 0:
            p = prevs[l-3][p+l-1]
            if p < start: break
            #assert get_raw(data, p, l) == get_raw(data, base, l)
            if (p if overlap else p + l - 1) >= base:
                continue
            assert 0 <= p <= base

            #print("Match %x..%x to %x..%x, %r" % (endi-l+1, endi, p, p+l-1, get_raw(data, p, l)))

            assert p < base
            prevlist.append(p)
        for p in reversed(prevlist):
            yield p, l


def calculate_cost_table(data, flags, overlap=True):
    assert len(flags) == 9
    for i in range(9): assert flags[i] == 0xff or flags.index(flags[i]) == i
    avail = 0xffff
    for f in flags: avail&=~(1<<f)

    patterns = compression_patterns()

    minmatchlen = min(i for i in range(16) if i not in flags) + 3
    maxmatchlen = max(i for i in range(16) if i not in flags) + 3
    prevs = precomp_prev_match(data)
    cost = [(0, None, None)]
    alls = [([(0, None, None)], None)]
    for i in range(len(data)):
        def opt_gen(i):
            lit = None
            flag = None

            first = True

            # PRECALCULATE FIRST - generator must output the best cost first to make things work
            # literal, control bit 1
            lit = (cost[i][0] + 9, 1, bytearray([get_u8(data, i)]), 1)
            best = lit

            # special 2byte, control bit 0 + flag
            if i and get_u16(data, i-1) in patterns:
                r, o = patterns[get_u16(data, i-1)]
                if flags[r] < 16:
                    flag = (cost[i-1][0] + 9, 0, bytearray([(flags[r] << 4) | o]), 2)
                    best = min(lit, flag)

            # copy range, 3..18 bytes, ref window 0x1000 bytes. Control bit 0 - flag
            valido = [o for o in range(3, min(19, i+1)) if avail & (1<<(o-3))]
            valido = sorted(valido, key=lambda o: (cost[i-o+1][0], -o))
            for p, l in find_matches(data, i, prevs, maxmatchlen, overlap):
                base = i-l+1
                #assert get_raw(data, p, l) == get_raw(data, base, l)

                for o in valido:
                    if o > l: continue
                    obase = base+l-o
                    op = p+l-o
                    #assert get_raw(data, op, o) == get_raw(data, obase, o)

                    if first and cost[i-o+1][0] + 17 > best[0]:
                        yield best
                        if best[1] == 1:
                            lit = None
                        else:
                            flag = None

                    cmd = o-3
                    arg = op - obase + 0x1000
                    yield (cost[i-o+1][0] + 17, 0, bytearray([(cmd<<4) | (arg >> 8), arg & 0xff]), o)

                    if first:
                        if flag is not None: yield flag
                        if lit is not None: yield lit
                        flag = None
                        lit = None
                    first = False

            if first:
                yield best
                if best[1] == 1:
                    lit = None
                else:
                    flag = None
            first = False
            if flag is not None: yield flag
            if lit is not None: yield lit

        gen = opt_gen(i)
        first = next(gen)

        cost += [first]
        alls += [([first], gen)]

    return cost, alls

def compress_with_flags(data, flags, overlap=True, matchint=0, loud=False):
    if loud: print("compressing %d bytes with flags %r" % (len(data), flags))
    assert len(flags) == 9
    for i in range(9): assert flags[i] == 0xff or flags.index(flags[i]) == i

    cost, allcosts = calculate_cost_table(data, flags, overlap)

    arr = []
    i = len(cost)-1
    while i > 0:
        arr.append(i)
        if matchint == 0: # fast path
            i -= cost[i][3]
            continue
        notk = 0
        k = 1
        while True:
            try:
                while len(allcosts[i][0]) <= k:
                    allcosts[i][0].append(next(allcosts[i][1]))
                matchint, nextrange = matchint >> 1, matchint & 1
                #print((nextrange, 2))
                if nextrange:
                    notk = k
                    k <<= 1
                    continue
                break
            except StopIteration:
                k += 1
                break
        if len(allcosts[i][0][:k]) > 1:
            matchint, sel = divmod(matchint, len(allcosts[i][0][:k])-notk)
            #print(sel, len(allcosts[i][0])-notk)
            cst = allcosts[i][0][sel+notk]
            del allcosts[i][0][:]
            allcosts[i][0].append(cst) # memory usage reduction
            if loud:
                import binascii
                print("Making alternate choice (delta %2d bits), (%6d, %d, \"%4s\", %2d) instead of (%6d, %d, \"%4s\", %2d)" % (cst[0] - cost[i][0],
                        cst[0], cst[1], binascii.hexlify(cst[2]), cst[3],
                        cost[i][0], cost[i][1], binascii.hexlify(cost[i][2]), cost[i][3]))
            cost[i] = cst
        i -= cost[i][3]

    out = bytearray(b"AT4PX\0\0")
    out += struct.pack("B"*9, *flags)
    out += struct.pack("<H", len(data))

    cmd = 0
    bit = 0
    buf = bytearray(0)

    for i in arr[::-1]:
        cmd <<= 1
        cmd |= cost[i][1]
        bit += 1
        buf.extend(cost[i][2])
        if bit == 8:
            #import binascii
            #print(bin(cmd)[2:].zfill(8) + " :: " + binascii.hexlify(buf))
            out.append(cmd)
            bit = cmd = 0
            out += buf
            buf = bytearray(0)
    if bit != 0:
        cmd <<= 8 - bit
        out.append(cmd)
        out += buf
    struct.pack_into("<H", out, 5, len(out))
    return out

# shoving only up to 7-bit flags and mapping only saves about half (exactly half for 15-bit, just over half for 16-bit)
#    flagcnt = 0
#    flagmap = []
#    for i in range(1<<16):
#        if popcnt(i) <= 7:
#            flagmap.append(flagcnt)
#            flagcnt += 1
#        else:
#            flagmap.append(None)
#    print(flagcnt) # 16384 15-bit,  26333 16-bit

# TODO: unused flags allow more lengths?
def calculate_flags_optimal(data, overlap=True, loud=False):
    patterns = compression_patterns()

    #valid = lambda a, b, c, d: ((b-a)&15, (c-a)&15, (d-a)&15) in [(0, 0, 0), (1, 1, 1), (15, 0, 0), (0, 15, 0), (0, 0, 15), (15, 15, 15), (1, 0, 0), (0, 1, 0), (0, 0, 1)]
    #pattern = lambda x: valid(x>>12, x>>8&15, x>>4&15, x&15)

    prevs = precomp_prev_match(data)
    inf = 0x7fffffff
    cost = [array("I", [inf] * (1<<16))] * 18
    for i in range(1<<16): cost[-1][i] = 0
    for i in range(len(data)):
        # literal, control bit 1
        best = array("I", [inf] * (1<<16))
        for j in range(1<<16): best[j] = cost[-1][j] + 9

        # special 2byte, control bit 0 + flag
        if i and get_u16(data, i-1) in patterns:
            for j in range(1<<16):
                v = cost[-2][j] + 9
                if v < best[j]: best[j] = v

        # copy range, 3..18 bytes, ref window 0x1000 bytes. Control bit 0 - flag
        for l in reversed(range(3, 19)):
            if l >= i: break
            base = i-l+1
            p = base
            #p = data.find(get_raw(data, base, l), max(0, base - 0x1000))
            while (p if overlap else p+l-1) >= base and p >= 0:
                p = prevs[l-3][p+l-1]
            if p < 0: continue
            assert 0 <= p <= base
            if (p if overlap else p + l - 1) >= base: continue

            #print("Match %x..%x to %x..%x, %r" % (i-l+1, i, p, p+l-1, get_raw(data, p, l)))
            assert p < base
            assert get_raw(data, p, l) == get_raw(data, base, l)
            bit = 1 << (l - 3)
            j = bit
            srccost = cost[-l]
            while j < 1<<16:
                #if not j & bit: continue
                v = srccost[j] + 17
                if v < best[j]:
                    best[j] = v
                j = (j+1) | bit

        cost = cost[1:] + [best]

    fix = lambda x: x+(-x&7)

    bestset = set()
    bestcost = cost[~0][0]
    for j in range(1<<16):
        if popcnt(j) <= 7:
            if cost[~0][j] < bestcost:
                bestset = set()
                bestcost = min(bestcost, cost[~0][j])
            if bestcost == cost[~0][j]: bestset.add(j)
    assert cost[~0][0xffff] <= bestcost
    if loud: print("optimal cost delta in bits: %d (%d in practice), %d best vals: %r" % (bestcost - cost[~0][0xffff], fix(bestcost) - fix(cost[~0][0xffff]), len(bestset), bestset))

    eflagsi = calculate_flags_fast(data, overlap=overlap)
    if loud: print("best effort would choose {%d} with %d bits delta (%d in practice)" % (eflagsi, cost[~0][eflagsi] - cost[~0][0xffff], fix(cost[~0][eflagsi]) - fix(cost[~0][0xffff])))
    bestcost += -bestcost & 7

    flag = next(iter(bestset))
    if loud: print("best effort versus well-formed: %d bits delta (%d in practice)" % (cost[~0][eflagsi] - cost[~0][flag], fix(cost[~0][eflagsi]) - fix(cost[~0][flag])))
    return flag

def calculate_flags_fast(data, overlap=True):
    counts = [0]*16

    for i in range(len(data)):
        for l in list(range(3, 19))[::-1]:
            if l >= i: continue
            base = i-l+1
            p = data.find(get_raw(data, base, l), max(0, base - 0x1000))
            assert 0 <= p <= base
            if (p if overlap else p + l - 1) >= base: continue

            assert p < base
            assert get_raw(data, p, l) == get_raw(data, base, l)
            counts[l-3] += 1
            break

    #assert counts[::-1] == sorted(counts)
    pdf = [a-b for a,b in zip(counts, counts[1:] + [0])]
    #print(list(enumerate(counts)))
    #print(list(enumerate(pdf)))
    #print([(i[0],i[1]*((i[0]+3)*8-17)) for i in sorted(list(enumerate(pdf)), key=lambda i: -i[1]*((i[0]+3)*8-9))])
    eflags = sorted([i[0] for i in sorted(list(enumerate(pdf)), key=lambda i: -i[1]*((i[0]+3)*8-9))][:7])
    #print(eflags)
    eflagsi = sum([1<<i for i in range(16) if i in eflags])
    return eflagsi

def compress_fast(data, overlap=True, verify=False, loud=False):
    flag = calculate_flags_fast(data, overlap=overlap)
    flagchoice = [i for i in range(16) if not flag&(1<<i)][:9]
    comp = compress_with_flags(data, flagchoice, overlap=overlap, loud=loud)

    if verify:
        if loud: print("Verifying decompression...")
        dec, spa, lna = decompress(comp, spc=True)
        if loud: print("  flags, %x %x %x %x %x %x %x %x %x, flag %r, copy len %r" % (struct.unpack_from("B"*9, comp, 7) + (spa,lna)))
        assert dec == data
        if loud:
            print("VERIFIED")
            print(repr(comp))

    return comp

def compress_optimal(data, overlap=True, verify=False, loud=False):
    flag = calculate_flags_optimal(data, overlap=overlap, loud=loud)
    flagchoice = [i for i in range(16) if not flag&(1<<i)][:9]
    comp = compress_with_flags(data, flagchoice, loud=loud)

    if verify:
        if loud: print("Verifying decompression...")
        dec, spa, lna = decompress(comp, spc=True)
        if loud: print("  flags, %x %x %x %x %x %x %x %x %x, flag %r, copy len %r" % (struct.unpack_from("B"*9, comp, 7) + (spa,lna)))
        assert dec == data
        if loud:
            print("VERIFIED")
            print(repr(comp))

    return comp

def compress_match(orig, verify=False, loud=False):
    data = decompress(orig)
    assert orig[:5] == b"AT4PX"
    flags = struct.unpack_from("B"*9, orig, 7)
    comms = list(command_stream(orig))

    cost, allcosts = calculate_cost_table(data, flags, overlap=False)

    matchops = []

    arr = []
    i = len(cost)-1
    while i > 0:
        notk = 0
        k = 1
        nexts = 0
        ended = False
        while True:
            try:
                while len(allcosts[i][0]) <= k:
                    allcosts[i][0].append(next(allcosts[i][1]))
                if all((v[1], v[2]) != comms[-1] for v in allcosts[i][0][notk:k]):
                    notk = k
                    k <<= 1
                    nexts += 1
                else:
                    break
            except StopIteration:
                ended = True
                k += 1
                break

        sel = next(ix for ix,v in enumerate(allcosts[i][0][notk:]) if (v[1], v[2]) == comms[-1])
        maxsel = len(allcosts[i][0][:k]) - notk

        matchops.append(((1 << nexts) - 1, 1 << (nexts + (not ended))))
        matchops.append((sel, maxsel))
        #matchops.append((0, 1))
        cst = allcosts[i][0][sel+notk]
        del allcosts[i][0][:]
        allcosts[i][0].append(cst) # memory usage
        #print(comms[-1], cst)
        cost[i] = cst
        assert (cost[i][1], cost[i][2]) == comms[-1]
        comms.pop()
        i -= cost[i][3]

    matchint = 0
    for v, vmx in matchops[::-1]:
        #print((v, vmx))
        matchint *= vmx
        matchint += v

    if loud:
        print("Match integer: %d" % matchint)
        print(" = 0x%x" % matchint)
    if verify:
        comp = compress_with_flags(data, flags, overlap=False, matchint=matchint, loud=loud)
        assert decompress(comp) == data
        assert orig == comp

def main():
    with open("baserom.gba", "rb") as f:
        data = f.read()

    filemap = {}

    ptr = -1
    while True:
        ptr = data.find(b"pksdir0\0", ptr+1)
        if ptr == -1: break

        len_ = get_u32(data, ptr + 8)
        files = get_u32(data, ptr + 12)
        if len_ > 0xffff or files - ptr != 0x8000018:
            continue

        print("Found directory: 0x%08x, with %d files" % (ptr, len_))
        for name, addr in read_pksdir(data, ptr).items():
            filemap.setdefault(addr, set())
            filemap[addr].add("0x%08x::%s" % (ptr | 0x8000000, name))

    totalorig = 0
    totalcomp = 0
    ptr = -1
    while True:
        ptr = data.find(b"AT4P", ptr+1)
        if ptr == -1: break

        len_ = get_u16(data, ptr + 5)
        assert len_ > 18

        p = ptr|0x8000000
        print("Found AT4P at 0x%08x, names: %s" % (p, ", ".join(filemap.get(p) or filemap.get(p - 0x10) or {"NOT FOUND"})))
        #print(repr(get_raw(data, ptr, len_)))
        dec, spa, lna = decompress(get_raw(data, ptr, len_), spc=True)
        print("  flags, %x %x %x %x %x %x %x %x %x, flag %r, copy len %r" % (struct.unpack_from("B"*9, data, ptr + 7) + (spa,lna)))
        compress_match(get_raw(data, ptr, len_), verify=True, loud=True)
        #co = compress_optimal(dec)
        c = compress_fast(dec, False, verify=False, loud=False)
        l = len(c)
        print("  decompressed, %d bytes from %d bytes, %d bytes if fast" % (len(dec),len_,l))
        if l > len_:
            print("WORSE FLAG HEURISTIC! %d > %d !!!" % (l, len_))
        totalorig += len_
        totalcomp += l
        print("=====")

    print("Total AT4P data in ROM: %d bytes, could be as low as %d bytes if recompressed" % (totalorig, totalcomp))

if __name__ == "__main__":
    main()
