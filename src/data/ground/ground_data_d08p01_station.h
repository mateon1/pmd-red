










static const struct ScriptCommand s_gs193_g0_s0_station_sref_script[] = { /* 0x8242bb8 */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x1d, 0x00,  0x0000,  0x0000000c,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x08, 0x00,  0x0000,  0x000000c1,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x0000000b,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(1), /* = 0x01 */
    { 0xea, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x03,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x0000000a,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x0000000c,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x0000000b,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(5), /* = 0x05 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000001,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 7),
  LABEL(3), /* = 0x03 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(4), /* = 0x04 */
    { 0x0d, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(7), /* = 0x07 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(6), /* = 0x06 */
    { 0x0d, 0x02,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(8), /* = 0x08 */
    { 0x44, 0x00,  0x0000,  0x00000066,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs193_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs193_g0_s0_station_sref_script }; /* 0x8242e54 */

static const struct ScriptCommand s_gs193_g0_s0_obj0_dlg2[] = { /* 0x8242e60 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_AND_WAREHOUSE_POINT */ 67),
};

static const struct ScriptCommand s_gs193_g0_s1_lives0_dlg0[] = { /* 0x8242e80 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s1_lives1_dlg0[] = { /* 0x8242ec0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s2_lives0_dlg0[] = { /* 0x8242f00 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s2_lives1_dlg0[] = { /* 0x8242f40 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s3_lives0_dlg0[] = { /* 0x8242f80 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s3_lives1_dlg0[] = { /* 0x8242fc0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s4_lives0_dlg0[] = { /* 0x8243000 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s4_lives1_dlg0[] = { /* 0x8243030 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s5_obj0_dlg2[] = { /* 0x8243060 */
    DEBUGINFO,
    JUMP_SCRIPT(/* WAREHOUSE_POINT */ 66),
};

static const struct ScriptCommand s_gs193_g0_s5_obj1_dlg2[] = { /* 0x8243080 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_POINT */ 65),
};

static const struct ScriptCommand s_gs193_g1_s0_station_sref_script[] = { /* 0x82430a0 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c1,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000018,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x0000000a,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs193_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs193_g1_s0_station_sref_script }; /* 0x8243130 */

static const struct ScriptCommand s_gs193_g1_s0_lives0_dlg0[] = { /* 0x824313c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x08,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Whew!\nWe sure came a long way out.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Whew.\nWe~27ve sure traveled a long way.") },
    { 0x44, 0x00,  0x0000,  0x00000066,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But I was thinking...\nWhile we were on the way...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But while we were moving~2c\nI couldn~27t help thinking...") },
    { 0x2e, 0x15,  0x0001,  0x00000005,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" So many places are hit\nby the natural disasters...") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I bet there are many\nPokémon that need help.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I~27d really like to get back to\ndoing our rescue work...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" All sorts of places have\nbeen affected by the natural disasters.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" I~27m sure many Pokémon are\nsuffering because of the calamities.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" I wish we could get back to\ndoing our rescue work...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Sorry~2c I shouldn~27t complain.\nWe have to get away now~2c period.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d1,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Huh? I hear voices...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" I think they went this way.") },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" They can~27t get away.\nNot from all of us.") },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" We have to get rid of $n0\nquickly...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001c7,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x0000000c,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Whoa!\nThey~27re catching up to us already?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c we have to\nroll.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Aww~2c no!\nAre they catching up to us?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0~2c we~27d better\ngo.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};




static const struct ScriptCommand s_gs193_g1_s0_lives1_dlg0[] = { /* 0x824389c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x02,  0x0001,  0x00000005,  0x00000000, NULL },
    { 0x91, 0x02,  0x0002,  0x00000007,  0x00000000, NULL },
    { 0x91, 0x02,  0x0001,  0x00000005,  0x00000000, NULL },
    { 0x91, 0x02,  0x0002,  0x00000006,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* NOTICE_FUNC */ 40),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* JUMP_SURPRISE_FUNC */ 38),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs193_g2_s0_station_sref_script[] = { /* 0x8243a1c */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c1,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000066,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs193_g2_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs193_g2_s0_station_sref_script }; /* 0x8243aac */

static const struct ScriptCommand s_gs193_g2_s0_lives0_dlg0[] = { /* 0x8243ab8 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_RIGHT_FUNC */ 35),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Urrggh...#W\nWe couldn~27t get through...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Ouch...#W\nWe couldn~27t break through...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I think we got cocky and\ncareless~2c $n0.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Wonder what happened to\nthe Pokémon chasing us?\nAre they in the dungeon?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Well~2c running into them\nwould be bad trouble.\nLet~27s get through this...and fast.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" I guess we got a little\ncareless~2c $n0.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" I wonder what became of\nthe Pokémon chasing us?\nAre they in the dungeon?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" We sure don~27t want to run\ninto them.\nLet~27s get through this quickly.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs193_g2_s0_lives1_dlg0[] = { /* 0x8243e64 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s0_station_sref_script[] = { /* 0x8243f34 */
    DEBUGINFO,
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptRef s_gs193_g3_s0_station_sref = { 403, 8, NULL /* STATION_CONTROL */, s_gs193_g3_s0_station_sref_script }; /* 0x8243f64 */

static const struct ScriptCommand s_gs193_g3_s0_lives0_dlg1[] = { /* 0x8243f70 */
    DEBUGINFO,
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    JUMP_SCRIPT(/* LIVES_MOVE_NORMAL */ 19),
};

static const struct ScriptCommand s_gs193_g3_s0_lives0_dlg2[] = { /* 0x8243fb0 */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0003, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s0_evt0_sref_script[] = { /* 0x8243fe0 */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0003, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs193_g3_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs193_g3_s0_evt0_sref_script }; /* 0x8244010 */

static const struct ScriptCommand s_gs193_g3_s1_station_sref_script[] = { /* 0x824401c */
    DEBUGINFO,
    { 0x0c, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x11, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs193_g3_s1_station_sref = { 401, 7, NULL /* EVENT_WAKEUP */, s_gs193_g3_s1_station_sref_script }; /* 0x824406c */

static const struct ScriptCommand s_gs193_g3_s1_lives0_dlg0[] = { /* 0x8244078 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x8e, 0x01,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xd8, 0x00, -0x0001,  0x00000001,  0x00000026, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hey~2c $n0.\nAre you all ready?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hi~2c $n0.\nAre you ready?") },
    { 0xd9, 0x00,  0x0000,  0x00000000,  0x00000000, _("All set!") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("Not yet.") },
  LABEL(1), /* = 0x01 */
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" All right.\nWe~27ll go when you~27re ready.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK.\nLet~27s go when you~27re ready.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(0), /* = 0x00 */
    { 0xd5, 0x01,  0x0000,  0x00000001,  0x00000000, _(" Which way should we go?") },
    { 0xd9, 0x00,  0x0002,  0x00000000,  0x00000000, _("Lapis Cave.") },
    { 0xd9, 0x00,  0x0003,  0x00000000,  0x00000000, _("Rock Path.") },
    JUMP_LOCAL(/* label */ 1),
  LABEL(2), /* = 0x02 */
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" All right!\nLet~27s roll out!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK!\nLet~27s go!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0004,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0004,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0004,  0x00000002,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0004,  0x00000005,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 5),
  LABEL(4), /* = 0x04 */
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
  LABEL(5), /* = 0x05 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000a,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001, -0x00000001,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" All right!\nLet~27s roll out!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK!\nLet~27s go!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0006,  0x00000002,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0006,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0006,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0006,  0x00000005,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 7),
  LABEL(6), /* = 0x06 */
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
  LABEL(7), /* = 0x07 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004e,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s1_lives1_dlg0[] = { /* 0x8244648 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x8e, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000007,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000006,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000003,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0x91, 0x04,  0x000b,  0x00000003,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs193_g4_s0_station_sref_script[] = { /* 0x8244768 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c1,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000066,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs193_g4_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs193_g4_s0_station_sref_script }; /* 0x82447f8 */

static const struct ScriptCommand s_gs193_g4_s0_lives0_dlg0[] = { /* 0x8244804 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x20,  0x0100,  0x00000007,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d1,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* NOTICE_FUNC */ 40),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x0000000c,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" What the...?#W\nIsn~27t this where we started from?!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d4,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_RIGHT_FUNC */ 35),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ............#W\nI guess that path just loops back to the\nstart.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" If we want to move on~2c\nI think our only choice is the #CDLapis Cave#R.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c let~27s give it\nour best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" ............#W\nI guess that path we took just loops back\nto where it started.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It looks like we have to go\nthrough the #CDLapis Cave#R to move on.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0~2c let~27s do our\nbest!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs193_g4_s0_lives1_dlg0[] = { /* 0x8244bb4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x30,  0x0100,  0x00000007,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* NOTICE_FUNC */ 40),
    { 0xe5, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs193_g5_s0_station_sref_script[] = { /* 0x8244c94 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c1,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000066,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs193_g5_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs193_g5_s0_station_sref_script }; /* 0x8244d24 */

static const struct ScriptCommand s_gs193_g5_s0_lives0_dlg0[] = { /* 0x8244d30 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_RIGHT_FUNC */ 35),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Urrggh...#W\nWe couldn~27t get through...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Ouch...#W\nWe couldn~27t break through...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We have to get through this\nfast~2c or they~27ll catch up to us.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c let~27s give it\nour best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" If we don~27t get through here\nfast~2c they~27ll catch up to us.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0~2c let~27s do our\nbest!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs193_g5_s0_lives1_dlg0[] = { /* 0x8244f58 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs193_g0_s0_lives[] = { /* 0x8245028 */
    /*  0 */ { 144,   0,   0,   0, {  10,  21, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs193_g0_s1_lives[] = { /* 0x8245040 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s2_lives[] = { /* 0x8245070 */
    /*  0 */ {   0,   0,   0,   0, {  34,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  34,  19, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s3_lives[] = { /* 0x82450a0 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s4_lives[] = { /* 0x82450d0 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s5_lives[] = { /* 0x8245100 */
    /*  0 */ { 144,   0,   0,   0, {  10,  21, 0, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {   8,  31, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs193_g1_s0_lives[] = { /* 0x8245130 */
    /*  0 */ {   0,   2,   0,   0, {   3,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {   8,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g2_s0_lives[] = { /* 0x8245160 */
    /*  0 */ {   0,   2,   0,   0, {  22,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g3_s0_lives[] = { /* 0x8245190 */
    /*  0 */ {  34,   0,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [1] = s_gs193_g3_s0_lives0_dlg1,
        [2] = s_gs193_g3_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs193_g3_s1_lives[] = { /* 0x82451a8 */
    /*  0 */ {   0,   2,   0,   0, {  23,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g3_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g3_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g4_s0_lives[] = { /* 0x82451d8 */
    /*  0 */ {   0,   2,   0,   0, {  26,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  33,  20, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g5_s0_lives[] = { /* 0x8245208 */
    /*  0 */ {   0,   2,   0,   0, {  22,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs193_g0_s0_objs[] = { /* 0x8245238 */
    /*  0 */ {   4,   0,   4,   2, {  10,  22, 0, 0 }, {
        [2] = s_gs193_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs193_g0_s5_objs[] = { /* 0x8245250 */
    /*  0 */ {   4,   0,   4,   2, {  10,  22, 0, 0 }, {
        [2] = s_gs193_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {   8,  31, 0, CPOS_HALFTILE }, {
        [2] = s_gs193_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs193_g1_s0_effs[] = { /* 0x8245280 */
    /*  0 */ {   0,   0,   1,   1, {  27,  25, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g2_s0_effs[] = { /* 0x824528c */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g4_s0_effs[] = { /* 0x8245298 */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g5_s0_effs[] = { /* 0x82452a4 */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs193_g3_s0_evts[] = { /* 0x82452b0 */
    /*  0 */ {  12,   3,   0,   0, {  28,  16, 0, 0 }, &s_gs193_g3_s0_evt0_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x82452bc */
    &s_gs193_g0_s0_station_sref,
    &s_gs193_g1_s0_station_sref,
    &s_gs193_g2_s0_station_sref,
    &s_gs193_g3_s0_station_sref,
    &s_gs193_g3_s1_station_sref,
    &s_gs193_g4_s0_station_sref,
    &s_gs193_g5_s0_station_sref,
};

static const struct GroundScriptSector s_gs193_g0_sectors[] = { /* 0x82452d8 */
    { LPARRAY(s_gs193_g0_s0_lives), LPARRAY(s_gs193_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs193_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s5_lives), LPARRAY(s_gs193_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs193_g1_sectors[] = { /* 0x82453c8 */
    { LPARRAY(s_gs193_g1_s0_lives), 0,NULL, LPARRAY(s_gs193_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs193_g2_sectors[] = { /* 0x82453f0 */
    { LPARRAY(s_gs193_g2_s0_lives), 0,NULL, LPARRAY(s_gs193_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs193_g3_sectors[] = { /* 0x8245418 */
    { LPARRAY(s_gs193_g3_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs193_g3_s0_evts), 1,&sStationScripts[3], },
    { LPARRAY(s_gs193_g3_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs193_g4_sectors[] = { /* 0x8245468 */
    { LPARRAY(s_gs193_g4_s0_lives), 0,NULL, LPARRAY(s_gs193_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs193_g5_sectors[] = { /* 0x8245490 */
    { LPARRAY(s_gs193_g5_s0_lives), 0,NULL, LPARRAY(s_gs193_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptGroup s_gs193_groups[] = { /* 0x82454b8 */
    { LPARRAY(s_gs193_g0_sectors) },
    { LPARRAY(s_gs193_g1_sectors) },
    { LPARRAY(s_gs193_g2_sectors) },
    { LPARRAY(s_gs193_g3_sectors) },
    { LPARRAY(s_gs193_g4_sectors) },
    { LPARRAY(s_gs193_g5_sectors) },
};

static const struct GroundLink s_gs193_links[] = { /* 0x82454e8 */
    /* link   0 */ { { /*x*/  25, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  29, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  34, /*y*/  17, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs193 = { LPARRAY(s_gs193_groups), s_gs193_links }; /* 0x8245500 */