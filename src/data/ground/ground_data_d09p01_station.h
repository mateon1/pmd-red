


















static const struct ScriptCommand s_gs195_g0_s0_station_sref_script[] = { /* 0x8245cc8 */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x1d, 0x00,  0x0000,  0x0000000c,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x08, 0x00,  0x0000,  0x000000c3,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x0000000c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(1), /* = 0x01 */
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x0c, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs195_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs195_g0_s0_station_sref_script }; /* 0x8245f84 */

static const struct ScriptCommand s_gs195_g0_s0_obj0_dlg2[] = { /* 0x8245f90 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_AND_WAREHOUSE_POINT */ 67),
};

static const struct ScriptCommand s_gs195_g0_s1_lives0_dlg0[] = { /* 0x8245fb0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s1_lives1_dlg0[] = { /* 0x8245ff0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s2_lives0_dlg0[] = { /* 0x8246030 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s2_lives1_dlg0[] = { /* 0x8246070 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s3_lives0_dlg0[] = { /* 0x82460b0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s3_lives1_dlg0[] = { /* 0x82460f0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s4_lives0_dlg0[] = { /* 0x8246130 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s4_lives1_dlg0[] = { /* 0x8246160 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s5_obj0_dlg2[] = { /* 0x8246190 */
    DEBUGINFO,
    JUMP_SCRIPT(/* WAREHOUSE_POINT */ 66),
};

static const struct ScriptCommand s_gs195_g0_s5_obj1_dlg2[] = { /* 0x82461b0 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_POINT */ 65),
};

static const struct ScriptCommand s_gs195_g1_s0_station_sref_script[] = { /* 0x82461d0 */
    DEBUGINFO,
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c3,  0x00000000, NULL },
    { 0x0b, 0x00,  0x0000,  0x0000000d,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Darn it!\nWhere~27d they go?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" They had to go this way!\nKeep your eyes open!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Rooooooaaaar!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001f7,  0x00000000, NULL },
    { 0x36, 0x00, -0x0001,  0x00000000,  0x00000000, _("Tromp~2c tromp~2c tromp~2c tromp~2c tromp!") },
    { 0xdb, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x36, 0x00, -0x0001,  0x00000000,  0x00000000, _("........................") },
    { 0xdb, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ............") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ........................") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...I think...#W\nThey~27re gone.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    { 0x3b, 0x3a,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs195_g1_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs195_g1_s0_station_sref_script }; /* 0x82464f8 */



static const struct ScriptCommand s_gs195_g1_s0_eff0_script[] = { /* 0x8246504 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs195_g1_s0_lives0_dlg0[] = { /* 0x8246544 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0x91, 0x04,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Whew.\nI think we gave them the slip.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Whew.\nI think we managed to evade them.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But...#W\nThere~27s no point hiding out here.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But...#W\nThere isn~27t any point hiding here.") },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000004,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We have to get over this\nmountain to get away.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c we need to\nroll as soon as we~27re ready.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Let~27s go as soon as we~27re\nready~2c $n0.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs195_g1_s0_lives1_dlg0[] = { /* 0x824696c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x014c,  0x00000003,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000004,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000005,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000006,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000006,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs195_g2_s0_station_sref_script[] = { /* 0x8246acc */
    DEBUGINFO,
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptRef s_gs195_g2_s0_station_sref = { 403, 8, NULL /* STATION_CONTROL */, s_gs195_g2_s0_station_sref_script }; /* 0x8246afc */

static const struct ScriptCommand s_gs195_g2_s0_lives0_dlg2[] = { /* 0x8246b08 */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0002, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs195_g2_s0_evt0_sref_script[] = { /* 0x8246b38 */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0002, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs195_g2_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs195_g2_s0_evt0_sref_script }; /* 0x8246b68 */

static const struct ScriptCommand s_gs195_g2_s1_station_sref_script[] = { /* 0x8246b74 */
    DEBUGINFO,
    { 0x0c, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x11, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs195_g2_s1_station_sref = { 401, 7, NULL /* EVENT_WAKEUP */, s_gs195_g2_s1_station_sref_script }; /* 0x8246bc4 */

static const struct ScriptCommand s_gs195_g2_s1_lives0_dlg0[] = { /* 0x8246bd0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x8e, 0x01,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xd8, 0x01, -0x0001,  0x00000001,  0x00000026, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c are you ready\nto roll?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0~2c are you\nready?") },
    { 0xd9, 0x00,  0x0002,  0x00000000,  0x00000000, _("Yes.") },
    { 0xd9, 0x00,  0x0003,  0x00000000,  0x00000000, _("*Not yet.") },
  LABEL(3), /* = 0x03 */
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I~27ll wait while you get ready.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Other Pokémon are\nwandering about~2c so make it quick.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" I~27ll be waiting while you get\nready.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Try to be quick.\nOther Pokémon are out looking for us.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(2), /* = 0x02 */
    { 0xd5, 0x01,  0x0000,  0x00000001,  0x00000000, _(" Which way should we go?") },
    { 0xd9, 0x00,  0x0005,  0x00000000,  0x00000000, _("Mt. Blaze.") },
    { 0xd9, 0x00,  0x0006,  0x00000000,  0x00000000, _("Rock Path.") },
    JUMP_LOCAL(/* label */ 3),
  LABEL(5), /* = 0x05 */
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" All right!\nLet~27s roll on out!") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" It looks like one wicked\nplace~2c but let~27s give it our best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK!\nLet~27s go!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It sounds very rough~2c\nbut let~27s try our best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000006,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(7), /* = 0x07 */
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000006,  0x00000000, NULL },
  LABEL(8), /* = 0x08 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000b,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    HALT,
  LABEL(6), /* = 0x06 */
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Sure thing!\nLet~27s roll on out!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK!\nLet~27s go!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000006,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 10),
  LABEL(9), /* = 0x09 */
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000006,  0x00000000, NULL },
  LABEL(10), /* = 0x0a */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004e,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    HALT,
};




static const struct ScriptCommand s_gs195_g2_s1_lives1_dlg0[] = { /* 0x8247300 */
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
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000006,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0x91, 0x04,  0x000b,  0x00000005,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000006,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs195_g3_s0_station_sref_script[] = { /* 0x8247450 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c3,  0x00000000, NULL },
    { 0x0b, 0x00,  0x0000,  0x0000000d,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs195_g3_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs195_g3_s0_station_sref_script }; /* 0x82474e0 */

static const struct ScriptCommand s_gs195_g3_s0_lives0_dlg0[] = { /* 0x82474ec */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_LEFT_FUNC */ 36),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Urrggh...#W\nWe couldn~27t get through...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Ouch...#W\nWe couldn~27t break through...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001cf,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000002,  0x00000000, NULL },
    { 0x2e, 0x08,  0x0001,  0x0000000c,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Ssh!#W\nSomeone~27s coming.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x0200,  0x00000007,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0200,  0x00000008,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Where are they?\n$n0 and that sidekick.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Do you think they tried getting over\nMt. Blaze?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" No~2c that~27s impossible.#W\nNobody could ever get past it.") },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" They should be around here still.\nKeep looking!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Rooooooaaaar!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001f7,  0x00000000, NULL },
    { 0x36, 0x00, -0x0001,  0x00000000,  0x00000000, _("Tromp~2c tromp~2c tromp~2c tromp~2c tromp!") },
    { 0xdb, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x36, 0x00, -0x0001,  0x00000000,  0x00000000, _("........................") },
    { 0xdb, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ............") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ........................") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0200,  0x00000007,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0x91, 0x04,  0x000b,  0x00000007,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...Whew.") },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000002,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We~27ll have to get over this\nmountain to get away from them.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" If we~27re going to get away~2c\nwe~27ll have to go over the mountain.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};



static const struct ScriptCommand s_gs195_g3_s0_lives1_dlg0[] = { /* 0x8247b14 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* NOTICE_FUNC */ 40),
    { 0x91, 0x04,  0x000b,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x0200,  0x00000009,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0200,  0x00000009,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000005,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0x91, 0x04,  0x000b,  0x00000002,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000006,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs195_g4_s0_station_sref_script[] = { /* 0x8247c94 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c3,  0x00000000, NULL },
    { 0x0b, 0x00,  0x0000,  0x0000000d,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs195_g4_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs195_g4_s0_station_sref_script }; /* 0x8247d24 */

static const struct ScriptCommand s_gs195_g4_s0_lives0_dlg0[] = { /* 0x8247d30 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x20,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
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
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" If we want to move on~2c\nI think our only choice is #CDMt. Blaze#R.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c let~27s give it\nour best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" ............#W\nI guess that path we took just loops back\nto where it started.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It looks like we have to go\nover #CDMt. Blaze#R to move on.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0~2c let~27s do our\nbest!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs195_g4_s0_lives1_dlg0[] = { /* 0x82480b4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x40,  0x0080,  0x00000000,  0x00000000, NULL },
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

static const struct ScriptCommand s_gs195_g5_s0_station_sref_script[] = { /* 0x8248194 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c3,  0x00000000, NULL },
    { 0x0b, 0x00,  0x0000,  0x0000000d,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs195_g5_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs195_g5_s0_station_sref_script }; /* 0x8248224 */

static const struct ScriptCommand s_gs195_g5_s0_lives0_dlg0[] = { /* 0x8248230 */
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

static const struct ScriptCommand s_gs195_g5_s0_lives1_dlg0[] = { /* 0x8248458 */
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

static const struct GroundLivesData s_gs195_g0_s0_lives[] = { /* 0x8248528 */
    /*  0 */ { 144,   0,   0,   0, {  28,  30, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs195_g0_s1_lives[] = { /* 0x8248540 */
    /*  0 */ {   0,   4,   0,   0, {  22,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  22,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s2_lives[] = { /* 0x8248570 */
    /*  0 */ {   0,   0,   0,   0, {  22,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  22,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s3_lives[] = { /* 0x82485a0 */
    /*  0 */ {   0,   4,   0,   0, {  22,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  22,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s4_lives[] = { /* 0x82485d0 */
    /*  0 */ {   0,   4,   0,   0, {  22,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  22,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s5_lives[] = { /* 0x8248600 */
    /*  0 */ { 144,   0,   0,   0, {  28,  30, 0, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {  28,  35, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs195_g1_s0_lives[] = { /* 0x8248630 */
    /*  0 */ {   0,   3,   0,   0, {   3,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   3,   0,   0, {   4,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g2_s0_lives[] = { /* 0x8248660 */
    /*  0 */ {  34,   0,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g2_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs195_g2_s1_lives[] = { /* 0x8248678 */
    /*  0 */ {   0,   2,   0,   0, {  21,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g2_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g2_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g3_s0_lives[] = { /* 0x82486a8 */
    /*  0 */ {   0,   2,   0,   0, {  21,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g3_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g4_s0_lives[] = { /* 0x82486d8 */
    /*  0 */ {   0,   2,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g5_s0_lives[] = { /* 0x8248708 */
    /*  0 */ {   0,   2,   0,   0, {  21,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs195_g0_s0_objs[] = { /* 0x8248738 */
    /*  0 */ {   4,   0,   4,   3, {  28,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs195_g0_s5_objs[] = { /* 0x8248750 */
    /*  0 */ {   4,   0,   4,   3, {  28,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {  28,  35, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs195_g1_s0_effs[] = { /* 0x8248780 */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs195_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs195_g3_s0_effs[] = { /* 0x824878c */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs195_g4_s0_effs[] = { /* 0x8248798 */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs195_g5_s0_effs[] = { /* 0x82487a4 */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs195_g2_s0_evts[] = { /* 0x82487b0 */
    /*  0 */ {  12,   3,   0,   0, {  17,  19, 0, 0 }, &s_gs195_g2_s0_evt0_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x82487bc */
    &s_gs195_g0_s0_station_sref,
    &s_gs195_g1_s0_station_sref,
    &s_gs195_g2_s0_station_sref,
    &s_gs195_g2_s1_station_sref,
    &s_gs195_g3_s0_station_sref,
    &s_gs195_g4_s0_station_sref,
    &s_gs195_g5_s0_station_sref,
};

static const struct GroundScriptSector s_gs195_g0_sectors[] = { /* 0x82487d8 */
    { LPARRAY(s_gs195_g0_s0_lives), LPARRAY(s_gs195_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs195_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s5_lives), LPARRAY(s_gs195_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs195_g1_sectors[] = { /* 0x82488c8 */
    { LPARRAY(s_gs195_g1_s0_lives), 0,NULL, LPARRAY(s_gs195_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs195_g2_sectors[] = { /* 0x82488f0 */
    { LPARRAY(s_gs195_g2_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs195_g2_s0_evts), 1,&sStationScripts[2], },
    { LPARRAY(s_gs195_g2_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs195_g3_sectors[] = { /* 0x8248940 */
    { LPARRAY(s_gs195_g3_s0_lives), 0,NULL, LPARRAY(s_gs195_g3_s0_effs), 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs195_g4_sectors[] = { /* 0x8248968 */
    { LPARRAY(s_gs195_g4_s0_lives), 0,NULL, LPARRAY(s_gs195_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs195_g5_sectors[] = { /* 0x8248990 */
    { LPARRAY(s_gs195_g5_s0_lives), 0,NULL, LPARRAY(s_gs195_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptGroup s_gs195_groups[] = { /* 0x82489b8 */
    { LPARRAY(s_gs195_g0_sectors) },
    { LPARRAY(s_gs195_g1_sectors) },
    { LPARRAY(s_gs195_g2_sectors) },
    { LPARRAY(s_gs195_g3_sectors) },
    { LPARRAY(s_gs195_g4_sectors) },
    { LPARRAY(s_gs195_g5_sectors) },
};

static const struct GroundLink s_gs195_links[] = { /* 0x82489e8 */
    /* link   0 */ { { /*x*/  11, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  17, /*y*/  30, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  21, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/  15, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   4 */ { { /*x*/  21, /*y*/  29, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   5 */ { { /*x*/  24, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   6 */ { { /*x*/  22, /*y*/  20, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   7 */ { { /*x*/  11, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   8 */ { { /*x*/   3, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   9 */ { { /*x*/  15, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  10 */ { { /*x*/   4, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs195 = { LPARRAY(s_gs195_groups), s_gs195_links }; /* 0x8248a40 */