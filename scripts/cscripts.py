# -*- coding: utf8 -*-
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

CALC = [
    "CALC_SET",
    "CALC_SUB",
    "CALC_ADD",
    "CALC_MUL",
    "CALC_DIV",
    "CALC_MOD",
    "CALC_AND",
    "CALC_OR",
    "CALC_XOR",
    "CALC_SETBIT",
    "CALC_CLEARBIT",
    "CALC_RANDOM",
]

JUDGE = [
    "JUDGE_TRUE",
    "JUDGE_FALSE",
    "JUDGE_EQ",
    "JUDGE_GT",
    "JUDGE_LT",
    "JUDGE_GE",
    "JUDGE_LE",
    "JUDGE_NE",
    "JUDGE_AND_NONZERO",
    "JUDGE_XOR_NONZERO",
    "JUDGE_BIT_SET",
]

ITEM = [
    "ITEM_NOTHING",
    "ITEM_STICK",
    "ITEM_IRON_THORN",
    "ITEM_SILVER_SPIKE",
    "ITEM_GOLD_FANG",
    "ITEM_CACNEA_SPIKE",
    "ITEM_CORSOLA_TWIG",
    "ITEM_GRAVELEROCK",
    "ITEM_GEO_PEBBLE",
    "ITEM_MOBILE_SCARF",
    "ITEM_HEAL_RIBBON",
    "ITEM_TWIST_BAND",
    "ITEM_SCOPE_LENS",
    "ITEM_PATSY_BAND",
    "ITEM_NOSTICK_CAP",
    "ITEM_PIERCE_BAND",
    "ITEM_JOY_RIBBON",
    "ITEM_X_RAY_SPECS",
    "ITEM_PERSIM_BAND",
    "ITEM_POWER_BAND",
    "ITEM_PECHA_SCARF",
    "ITEM_INSOMNISCOPE",
    "ITEM_WARP_SCARF",
    "ITEM_TIGHT_BELT",
    "ITEM_SNEAK_SCARF",
    "ITEM_GOLD_RIBBON",
    "ITEM_GOGGLE_SPECS",
    "ITEM_DIET_RIBBON",
    "ITEM_TRAP_SCARF",
    "ITEM_RACKET_BAND",
    "ITEM_DEF_SCARF",
    "ITEM_STAMINA_BAND",
    "ITEM_PLAIN_RIBBON",
    "ITEM_SPECIAL_BAND",
    "ITEM_ZINC_BAND",
    "ITEM_DETECT_BAND",
    "ITEM_ALERT_SPECS",
    "ITEM_DODGE_SCARF",
    "ITEM_BOUNCE_BAND",
    "ITEM_CURVE_BAND",
    "ITEM_WHIFF_SPECS",
    "ITEM_NO_AIM_SCOPE",
    "ITEM_LOCKON_SPECS",
    "ITEM_MUNCH_BELT",
    "ITEM_PASS_SCARF",
    "ITEM_WEATHER_BAND",
    "ITEM_FRIEND_BOW",
    "ITEM_BEAUTY_SCARF",
    "ITEM_SUN_RIBBON",
    "ITEM_LUNAR_RIBBON",
    "ITEM_RING_D",
    "ITEM_RING_E",
    "ITEM_RING_F",
    "ITEM_HEAL_SEED",
    "ITEM_WISH_STONE",
    "ITEM_ORAN_BERRY",
    "ITEM_SITRUS_BERRY",
    "ITEM_EYEDROP_SEED",
    "ITEM_REVIVER_SEED",
    "ITEM_BLINKER_SEED",
    "ITEM_DOOM_SEED",
    "ITEM_ALLURE_SEED",
    "ITEM_LIFE_SEED",
    "ITEM_RAWST_BERRY",
    "ITEM_HUNGER_SEED",
    "ITEM_QUICK_SEED",
    "ITEM_PECHA_BERRY",
    "ITEM_CHERI_BERRY",
    "ITEM_TOTTER_SEED",
    "ITEM_SLEEP_SEED",
    "ITEM_PLAIN_SEED",
    "ITEM_WARP_SEED",
    "ITEM_BLAST_SEED",
    "ITEM_GINSENG",
    "ITEM_JOY_SEED",
    "ITEM_CHESTO_BERRY",
    "ITEM_STUN_SEED",
    "ITEM_MAX_ELIXIR",
    "ITEM_PROTEIN",
    "ITEM_CALCIUM",
    "ITEM_IRON",
    "ITEM_ZINC",
    "ITEM_APPLE",
    "ITEM_BIG_APPLE",
    "ITEM_GRIMY_FOOD",
    "ITEM_HUGE_APPLE",
    "ITEM_WHITE_GUMMI",
    "ITEM_RED_GUMMI",
    "ITEM_BLUE_GUMMI",
    "ITEM_GRASS_GUMMI",
    "ITEM_YELLOW_GUMMI",
    "ITEM_CLEAR_GUMMI",
    "ITEM_ORANGE_GUMMI",
    "ITEM_PINK_GUMMI",
    "ITEM_BROWN_GUMMI",
    "ITEM_SKY_GUMMI",
    "ITEM_GOLD_GUMMI",
    "ITEM_GREEN_GUMMI",
    "ITEM_GRAY_GUMMI",
    "ITEM_PURPLE_GUMMI",
    "ITEM_ROYAL_GUMMI",
    "ITEM_BLACK_GUMMI",
    "ITEM_SILVER_GUMMI",
    "ITEM_BANANA",
    "ITEM_CHESTNUT",
    "ITEM_POKE",
    "ITEM_UPGRADE",
    "ITEM_KINGS_ROCK",
    "ITEM_THUNDERSTONE",
    "ITEM_DEEPSEASCALE",
    "ITEM_DEEPSEATOOTH",
    "ITEM_SUN_STONE",
    "ITEM_MOON_STONE",
    "ITEM_FIRE_STONE",
    "ITEM_WATER_STONE",
    "ITEM_METAL_COAT",
    "ITEM_LEAF_STONE",
    "ITEM_DRAGON_SCALE",
    "ITEM_LINK_CABLE",
    "ITEM_ICE_PART",
    "ITEM_STEEL_PART",
    "ITEM_ROCK_PART",
    "ITEM_MUSIC_BOX",
    "ITEM_KEY",
    "ITEM_TM_USED_TM",
    "ITEM_TM_FOCUS_PUNCH",
    "ITEM_TM_DRAGON_CLAW",
    "ITEM_TM_WATER_PULSE",
    "ITEM_TM_CALM_MIND",
    "ITEM_TM_ROAR",
    "ITEM_TM_TOXIC",
    "ITEM_TM_HAIL",
    "ITEM_TM_BULK_UP",
    "ITEM_TM_BULLET_SEED",
    "ITEM_TM_HIDDEN_POWER",
    "ITEM_TM_SUNNY_DAY",
    "ITEM_TM_TAUNT",
    "ITEM_TM_ICE_BEAM",
    "ITEM_TM_BLIZZARD",
    "ITEM_TM_HYPER_BEAM",
    "ITEM_TM_LIGHT_SCREEN",
    "ITEM_TM_PROTECT",
    "ITEM_TM_RAIN_DANCE",
    "ITEM_TM_GIGA_DRAIN",
    "ITEM_TM_SAFEGUARD",
    "ITEM_TM_FRUSTRATION",
    "ITEM_TM_SOLARBEAM",
    "ITEM_TM_IRON_TAIL",
    "ITEM_TM_THUNDERBOLT",
    "ITEM_TM_THUNDER",
    "ITEM_TM_EARTHQUAKE",
    "ITEM_TM_RETURN",
    "ITEM_TM_DIG",
    "ITEM_TM_PSYCHIC",
    "ITEM_TM_SHADOW_BALL",
    "ITEM_TM_BRICK_BREAK",
    "ITEM_TM_DOUBLE_TEAM",
    "ITEM_TM_REFLECT",
    "ITEM_TM_SHOCK_WAVE",
    "ITEM_TM_FLAMETHROWER",
    "ITEM_TM_SLUDGE_BOMB",
    "ITEM_TM_SANDSTORM",
    "ITEM_TM_FIRE_BLAST",
    "ITEM_TM_ROCK_TOMB",
    "ITEM_TM_AERIAL_ACE",
    "ITEM_TM_TORMENT",
    "ITEM_TM_FACADE",
    "ITEM_TM_SECRET_POWER",
    "ITEM_TM_REST",
    "ITEM_TM_ATTRACT",
    "ITEM_TM_THIEF",
    "ITEM_TM_STEEL_WING",
    "ITEM_TM_SKILL_SWAP",
    "ITEM_TM_SNATCH",
    "ITEM_TM_OVERHEAT",
    "ITEM_TM_WIDE_SLASH",
    "ITEM_TM_EXCAVATE",
    "ITEM_TM_SPIN_SLASH",
    "ITEM_SEE_TRAP_ORB",
    "ITEM_MUG_ORB",
    "ITEM_REBOUND_ORB",
    "ITEM_LOB_ORB",
    "ITEM_SWITCHER_ORB",
    "ITEM_BLOWBACK_ORB",
    "ITEM_WARP_ORB",
    "ITEM_TRANSFER_ORB",
    "ITEM_SLOW_ORB",
    "ITEM_QUICK_ORB",
    "ITEM_LUMINOUS_ORB",
    "ITEM_PETRIFY_ORB",
    "ITEM_STAYAWAY_ORB",
    "ITEM_POUNCE_ORB",
    "ITEM_TRAWL_ORB",
    "ITEM_CLEANSE_ORB",
    "ITEM_OBSERVER_ORB",
    "ITEM_DECOY_ORB",
    "ITEM_SLUMBER_ORB",
    "ITEM_TOTTER_ORB",
    "ITEM_TWO_EDGE_ORB",
    "ITEM_SILENCE_ORB",
    "ITEM_ESCAPE_ORB",
    "ITEM_SCANNER_ORB",
    "ITEM_RADAR_ORB",
    "ITEM_DROUGHT_ORB",
    "ITEM_TRAPBUST_ORB",
    "ITEM_ROLLCALL_ORB",
    "ITEM_INVISIFY_ORB",
    "ITEM_ONE_SHOT_ORB",
    "ITEM_IDENTIFY_ORB",
    "ITEM_VACUUM_CUT",
    "ITEM_REVIVER_ORB",
    "ITEM_SHOCKER_ORB",
    "ITEM_SIZEBUST_ORB",
    "ITEM_ONE_ROOM_ORB",
    "ITEM_FILL_IN_ORB",
    "ITEM_TRAPPER_ORB",
    "ITEM_POSSESS_ORB",
    "ITEM_ITEMIZER_ORB",
    "ITEM_HURL_ORB",
    "ITEM_MOBILE_ORB",
    "ITEM_TOSS_ORB",
    "ITEM_STAIRS_ORB",
    "ITEM_LONGTOSS_ORB",
    "ITEM_PIERCE_ORB",
    "ITEM_HM_CUT",
    "ITEM_HM_FLY",
    "ITEM_HM_SURF",
    "ITEM_HM_STRENGTH",
    "ITEM_HM_FLASH",
    "ITEM_HM_ROCK_SMASH",
    "ITEM_HM_WATERFALL",
    "ITEM_HM_DIVE",
    "ITEM_LINK_BOX",
    "ITEM_SWITCH_BOX",
    "ITEM_WEAVILE_FIG",
    "ITEM_MIME_JR_FIG",
    "ITEM_BEATUP_ORB",
    "ITEM_G_MACHINE_6",
    "ITEM_G_MACHINE_7",
    "ITEM_G_MACHINE_8",
]

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
    cstr = lambda s: u'_("%s")' % s.replace(u'"', u"\\\"").replace(u"\n",u"\\n").replace(u"~27",u"'").replace(u"~2c", u",").replace(u"~93",u"“").replace(u"~94",u"”").replace(u"~22", u"\\\"")

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
                # 9b..a3: camera-related, needs reversing
                elif op == 0xa4:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    RESET_ARRAY(%s),\n' % get_var_name(data, h))
                elif op == 0xa5:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CLEAR_ARRAY(%s),\n' % get_var_name(data, h))
                elif op == 0xa6:
                    assert a2 == ap == 0
                    outfile.write(u'    UPDATE_VARINT(%s, %s, %d),\n' % (CALC[b], get_var_name(data, h), a1))
                elif op == 0xa7:
                    assert a2 == ap == 0
                    outfile.write(u'    UPDATE_VARVAR(%s, %s, %s),\n' % (CALC[b], get_var_name(data, h), get_var_name(data, a1)))
                elif op == 0xa8:
                    assert b == ap == 0
                    outfile.write(u'    SET_ARRAYVAL(%s, %2d, %2d),\n' % (get_var_name(data, h), a1, a2))
                elif op == 0xa9:
                    assert b == ap == 0
                    outfile.write(u'    SCENARIO_CALC(%s, %2d, %2d),\n' % (get_var_name(data, h), a1, a2))
                elif op == 0xaa:
                    assert b == a2 == ap == 0
                    outfile.write(u'    SCENARIO_ADVANCE(%s, /*unused*/ %d),\n' % (get_var_name(data, h), a1))
                elif op == 0xab:
                    assert b == a2 == ap == 0
                    outfile.write(u'    SET_DUNGEON_RES(/* result */ %d, /* enter */ %d),\n' % (h, a1))
                elif op == 0xac:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    SET_PLAYER_KIND(%d),\n' % h)
                # ad..b2 - functions need reversing
                elif op == 0xb3:
                    assert a2 == ap == 0
                    outfile.write(u'    JUMPIF_EQUAL(%s, %d, /* to label */ %d),\n' % (get_var_name(data, h), a1, b))
                elif op == 0xb4:
                    assert ap == 0
                    outfile.write(u'    JUMPIF(%s, %s, %d, /* to label */ %d),\n' % (JUDGE[b], get_var_name(data, a1), a2, h))
                elif op == 0xb5:
                    assert ap == 0
                    outfile.write(u'    JUMPIF_2(%s, %s, %s, /* to label */ %d),\n' % (JUDGE[b], get_var_name(data, a1), get_var_name(data, a2), h))
                elif op == 0xb6:
                    assert b == ap == 0
                    outfile.write(u'    JUMPIF_ARRAY(%s, %d, /* to label */ %d),\n' % (get_var_name(data, a1), a2, h))
                elif op == 0xb7:
                    assert ap == 0
                    outfile.write(u'    JUMPIF_SUM(%s, %s, %d, /* to label */ %d),\n' % (JUDGE[b], get_var_name(data, a1), a2, h))
                elif op == 0xb8:
                    assert ap == 0
                    outfile.write(u'    JUMPIF_SCENE_LT(%s, %d, %d, /* to label */ %d),\n' % (get_var_name(data, h), a1, a2, b))
                elif op == 0xb9:
                    assert ap == 0
                    outfile.write(u'    JUMPIF_SCENE_EQ(%s, %d, %d, /* to label */ %d),\n' % (get_var_name(data, h), a1, a2, b))
                elif op == 0xba:
                    assert ap == 0
                    outfile.write(u'    JUMPIF_SCENE_GT(%s, %d, %d, /* to label */ %d),\n' % (get_var_name(data, h), a1, a2, b))
                elif op == 0xbb:
                    assert a1 == a2 == ap == 0
                    outfile.write(u'    JUMPIF_SCENARIOCHECK(%d, /* to label */ %d),\n' % (h, b,))
                elif op == 0xbc:
                    assert a1 == a2 == ap == 0
                    outfile.write(u'    JUMPIF_UNK_BC(%d, /* to label */ %d),\n' % (h, b,))
                elif op == 0xbd:
                    assert h == a2 == ap == 0
                    outfile.write(u'    JUMPIF_UNK_BD(%d, /* to label */ %d), /* likely "is friend area unlocked" (by GroundEnter id) */\n' % (a1, b,))
                elif op == 0xbe:
                    assert h == a1 == a2 == ap == 0
                    outfile.write(u'    JUMPIF_UNK_BE(/* to label */ %d), /* something sleep related?*/\n' % (b,))
                elif op == 0xbf:
                    assert a1 == a2 == ap == 0
                    outfile.write(u'    JUMPIF_HASITEM(%s, /* to label */ %d),\n' % (ITEM[h], b))
                elif op == 0xc0:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CJUMP_VAR(%s),\n' % get_var_name(data, h))
                elif op == 0xc1:
                    assert a2 == ap == 0
                    outfile.write(u'    CJUMP_CALC_VI(%s, %s, %d),\n' % (CALC[b], get_var_name(data, h), a1))
                elif op == 0xc2:
                    assert a2 == ap == 0
                    outfile.write(u'    CJUMP_CALC_VV(%s, %s, %s),\n' % (CALC[b], get_var_name(data, h), get_var_name(data, a1)))
                elif op == 0xc3:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CJUMP_RANDOM(%d),\n' % h)
                elif op == 0xc4:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CJUMP_SCENARIO_0(%s),\n' % get_var_name(data, h))
                elif op == 0xc5:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CJUMP_SCENARIO_1(%s),\n' % get_var_name(data, h))
                elif op == 0xc6:
                    assert b == h == a2 == ap == 0
                    outfile.write(u'    CJUMP_UNK_C6(%d),\n' % a1)
                elif op == 0xc7:
                    assert b == h == a1 == a2 == ap == 0
                    outfile.write(u'    CJUMP_DIRECTION,\n')
                elif op == 0xc8:
                    assert b == h == a2 == ap == 0
                    outfile.write(u'    CJUMP_UNK_C8(%d),\n' % a1)
                elif op == 0xc9:
                    assert b == h == a2 == ap == 0
                    outfile.write(u'    CJUMP_UNK_C9(%d),\n' % a1)
                elif op == 0xca:
                    assert b == h == a2 == ap == 0
                    outfile.write(u'    CJUMP_DIR_TO_LINK(%d),\n' % a1)
                elif op == 0xcb:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    CJUMP_UNK_CB(%d),\n' % h)
                elif op == 0xcc:
                    assert b == a2 == ap == 0
                    outfile.write(u'    COND_EQUAL(%d, /* to label */ %d),\n' % (a1, h))
                elif op == 0xcd:
                    assert a2 == ap == 0
                    outfile.write(u'    COND(%s, %d, /* to label */ %d),\n' % (JUDGE[b], a1, h))
                elif op == 0xce:
                    assert a2 == ap == 0
                    outfile.write(u'    COND_VAR(%s, %s, /* to label */ %d),\n' % (JUDGE[b], get_var_name(data, a1), h))
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
                elif op == 0xea:
                    assert a2 == ap == 0
                    assert a1 == -1
                    outfile.write(u'    CALL_STATION(%3d,%3d),\n' % (h,b))
                elif op == 0xeb:
                    assert a2 == ap == 0
                    assert a1 == -1
                    outfile.write(u'    JUMP_STATION(%3d,%3d),\n' % (h,b))
                elif op == 0xec:
                    assert b == a1 == a2 == ap == 0
                    outfile.write(u'    EXECUTE_MAP_VAR(%s),\n' % (get_var_name(data, h),))
                elif op == 0xed:
                    assert b == h == a1 == a2 == ap == 0
                    outfile.write(u'    RESET_CALLER,\n')
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
