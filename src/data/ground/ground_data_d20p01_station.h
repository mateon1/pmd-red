










static const struct ScriptCommand s_gs216_g0_s0_station_sref_script[] = { /* 0x8267ac8 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000d8,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs216_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs216_g0_s0_station_sref_script }; /* 0x8267b34 */

static const struct ScriptCommand s_gs216_g1_s0_station_sref_script[] = { /* 0x8267b40 */
    DEBUGINFO,
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000d8,  0x00000000, NULL },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+One day...") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+In a small cave\n#+in the distant west...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000000a,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x28, 0x01,  0x0002,  0x0000003c,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x28, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs216_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs216_g1_s0_station_sref_script }; /* 0x8267cbc */


static const struct ScriptCommand s_gs216_g1_s0_lives0_dlg0[] = { /* 0x8267cc8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x0001,  0x00000068,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    { 0x2e, 0x0c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hey!#W\nGet a move on!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000068,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Gasp~2c gasp...#W\nThis is rough going...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Heh! What~27s with you?\nYou~27re gonna whine about it now?") },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Let me think--wasn~27t it you\nwho wanted to explore this place?") },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Saying you~27d found a new\ncave and all!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Yeah...#W\nI just happened to be swimming by in\nthe sea when I spotted this cave...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I didn~27t expect it to be\na dungeon this rough...\nGasp~2c gasp...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Heh!#W\nI thought a different combo would be\na good change of pace...") },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But you~27re pathetic!#W\nSo much for Mr. Big Shot $n1!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d8,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Wh-what!#W\nCall me pathetic~2c will you?!") },
    { 0x2e, 0x15,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" What you~27ve seen of me\nso far is nothing!") },
    { 0x2e, 0x15,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Never...#W\nunderestimate $n1!") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Wroooooooaaaaar!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hahaha!#W\nThere! You~27re still feeling frisky!") },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" That~27s the spirit!#W\nI think we~27re getting close.\nLet~27s keep it going!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...!#W\nSo you did that to motivate me...#W\n...Thanks.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hey~2c no problem.\nLet~27s move!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6a, 0x00,  0x0100,  0x00000000, -0x00000020, NULL },
    { 0x48, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d1,  0x00000000, NULL },
    CALL_SCRIPT(/* NOTICE_FUNC */ 40),
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000068,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hm?#W What~27s wrong?#W\nAre you still wiped out?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...No. That~27s not it.") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...Just now.#W\nDid you hear something?") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I thought I heard a voice...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000068,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" ...No?#W\nI don~27t hear anything.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000023,  0x00000000, NULL },
    { 0x2b, 0x00,  0x0000,  0x0000003c,  0x0000003c, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" ............#WIs it#W \nyou...?") },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" ......Who...disturbs...my sleep...#W\nIs it#W you?!\n") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000004,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2b, 0x00,  0x0000, -0x00000001, -0x00000001, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Wh-who~27s there?!") },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Who are you?!#W\nShow yourself!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001c5,  0x00000000, NULL },
    { 0x97, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x2b, 0x00,  0x0000,  0x0000005a,  0x0000005a, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Me...?") },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" I was...#W\nEngineered...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000002c1,  0x00000000, NULL },
    { 0x4e, 0x00,  0x003c,  0x000001c5,  0x00000000, NULL },
    { 0x28, 0x01,  0x0001,  0x00000005,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x01,  0x0001,  0x00000005,  0x00ffffff, NULL },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+Created only to fight...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000002c1,  0x00000000, NULL },
    { 0x28, 0x01,  0x0001,  0x00000005,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x01,  0x0001,  0x00000005,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000036d,  0x00000000, NULL },
    { 0x28, 0x01,  0x0001,  0x00000005,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000000b,  0x00000000, NULL },
    { 0x27, 0x01,  0x0001,  0x00000005,  0x00ffffff, NULL },
    { 0x23, 0x01,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x2b, 0x00,  0x0000,  0x00000078,  0x00000078, NULL },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+The most powerful of all Pokémon!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x28, 0x01,  0x0005,  0x00000078,  0x00ffffff, NULL },
    { 0x2b, 0x00,  0x0000,  0x0000003c,  0x0000003c, NULL },
    { 0x2e, 0x02,  0x0000,  0x00000003,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000036d,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Gwaaaaaaaaaaaah!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000036d,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Gyaaaaaaaah!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2b, 0x00,  0x0000, -0x00000001, -0x00000001, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};
















static const struct ScriptCommand s_gs216_g1_s0_lives1_dlg0[] = { /* 0x8268c90 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x004c,  0x00000001,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000059,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x08,  0x000a,  0x00000003,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x08,  0x000a,  0x00000001,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x08,  0x000a,  0x00000059,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000005e,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000004,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0012,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000054,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000262,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000035e,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000001,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0012,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000054,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000262,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000035e,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000007,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0012,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000054,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000262,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000035e,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x08,  0x000a,  0x00000059,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000004,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000004,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000312,  0x00000000, NULL },
    { 0xe2, 0x00,  0x0312,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000033f,  0x00000000, NULL },
    { 0xe2, 0x00,  0x033f,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000313,  0x00000000, NULL },
    { 0xe2, 0x00,  0x0313,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000033f,  0x00000000, NULL },
    { 0xe2, 0x00,  0x033f,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000312,  0x00000000, NULL },
    { 0xe2, 0x00,  0x0312,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000033f,  0x00000000, NULL },
    { 0xe2, 0x00,  0x033f,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs216_g1_s0_eff1_script[] = { /* 0x82691d0 */
    DEBUGINFO,
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0004, -0x00000018,  0x00000000, NULL },
    { 0x8b, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000150,  0x00000000, NULL },
    { 0x6a, 0x00,  0x0200,  0x00000000, -0x00000078, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x5b, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000150,  0x00000000, NULL },
    { 0x8b, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x6a, 0x00,  0x0200,  0x00000078,  0x00000078, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x5b, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00, -0x000c,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000150,  0x00000000, NULL },
    { 0x8b, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x6a, 0x00,  0x0200, -0x00000078,  0x00000078, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x5b, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs216_g1_s0_eff2_script[] = { /* 0x8269390 */
    DEBUGINFO,
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000312,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000004a,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0040, -0x00000020,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000004a,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00, -0x0020,  0x00000030,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000004a,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00, -0x0020, -0x00000018,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000004a,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000004a,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs216_g1_s0_eff3_script[] = { /* 0x8269510 */
    DEBUGINFO,
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x0000033f,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000042,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00, -0x0038, -0x00000038,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000042,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0028,  0x00000010,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000042,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00, -0x0020,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000042,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct GroundLivesData s_gs216_g1_s0_lives[] = { /* 0x8269660 */
    /*  0 */ {  89,   4,   0,   0, {  20,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs216_g1_s0_lives0_dlg0,
    } },
    /*  1 */ { 104,   4,   0,   0, {  24,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs216_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs216_g1_s0_effs[] = { /* 0x8269690 */
    /*  0 */ {   0,   0,   1,   1, {  22,  18, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
    /*  1 */ {   4,   0,   1,   1, {  24,  19, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs216_g1_s0_eff1_script },
    /*  2 */ {   4,   0,   1,   1, {  18,  18, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs216_g1_s0_eff2_script },
    /*  3 */ {   4,   0,   1,   1, {  25,  20, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs216_g1_s0_eff3_script },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x82696c0 */
    &s_gs216_g0_s0_station_sref,
    &s_gs216_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs216_g0_sectors[] = { /* 0x82696c8 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs216_g1_sectors[] = { /* 0x82696f0 */
    { LPARRAY(s_gs216_g1_s0_lives), 0,NULL, LPARRAY(s_gs216_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs216_groups[] = { /* 0x8269718 */
    { LPARRAY(s_gs216_g0_sectors) },
    { LPARRAY(s_gs216_g1_sectors) },
};

static const struct GroundLink s_gs216_links[] = { /* 0x8269728 */
    /* link   0 */ { { /*x*/  20, /*y*/  16, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  25, /*y*/  19, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   2 */ { { /*x*/  25, /*y*/  19, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs216 = { LPARRAY(s_gs216_groups), s_gs216_links }; /* 0x8269740 */