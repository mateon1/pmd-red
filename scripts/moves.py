from __future__ import print_function
from util import read_pksdir, get_str, get_u32, get_var_array

gMainDirectory = 0x8300500

def main():
    with open("baserom.gba", "rb") as f:
        data = bytearray(f.read())
    directory = read_pksdir(data, gMainDirectory)
    monsbase = get_u32(data, directory["monspara"] + 4) # array, 0x48 sized (424 mons)
    wazabase = get_u32(data, directory["wazapara"] + 4)
    wazamove = get_u32(data, wazabase + 0) # array, 0x24 sized (413 moves)
    wazapools = get_u32(data, wazabase + 4) # array of pointer pairs (per mon)

    for mon in range(424):
        print("%03d: %s" % (mon, get_str(data, get_u32(data, monsbase + mon * 0x48 + 0))))
        learns_p = get_u32(data, wazapools + 8 * mon)
        canlearn_p = get_u32(data, wazapools + 8 * mon + 4)
        if not learns_p: print("* DOES NOT HAVE A LEARNS POOL")
        else:
            learns = get_var_array(data, learns_p)
            for move, lvl in zip(learns[::2], learns[1::2]):
                movename = get_str(data, get_u32(data, wazamove + 0x24 * move + 0))
                print("- At level %2d learns %s (%d)" % (lvl, movename, move))
        if not canlearn_p: print("* DOES NOT HAVE AN ABLE POOL")
        else:
            canlearn = get_var_array(data, canlearn_p)
            for move in canlearn:
                movename = get_str(data, get_u32(data, wazamove + 0x24 * move + 0))
                print("- Can learn %s (%d)" % (movename, move))

if __name__ == "__main__": main()
