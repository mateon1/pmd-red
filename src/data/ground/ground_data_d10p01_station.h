








static const struct ScriptCommand s_gs198_g0_s0_station_sref_script[] = { /* 0x824bbfc */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x1d, 0x00,  0x0000,  0x0000000c,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x08, 0x00,  0x0000,  0x000000c6,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x0000000d,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(1), /* = 0x01 */
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs198_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs198_g0_s0_station_sref_script }; /* 0x824beb8 */

static const struct ScriptCommand s_gs198_g0_s0_obj0_dlg2[] = { /* 0x824bec4 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_AND_WAREHOUSE_POINT */ 67),
};

static const struct ScriptCommand s_gs198_g0_s1_lives0_dlg0[] = { /* 0x824bee4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s1_lives1_dlg0[] = { /* 0x824bf24 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s2_lives0_dlg0[] = { /* 0x824bf64 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s2_lives1_dlg0[] = { /* 0x824bfa4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s3_lives0_dlg0[] = { /* 0x824bfe4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s3_lives1_dlg0[] = { /* 0x824c024 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs198_g0_s4_lives0_dlg0[] = { /* 0x824c094 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s4_lives1_dlg0[] = { /* 0x824c0c4 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s5_obj0_dlg2[] = { /* 0x824c0f4 */
    DEBUGINFO,
    JUMP_SCRIPT(/* WAREHOUSE_POINT */ 66),
};

static const struct ScriptCommand s_gs198_g0_s5_obj1_dlg2[] = { /* 0x824c114 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_POINT */ 65),
};

static const struct ScriptCommand s_gs198_g1_s0_station_sref_script[] = { /* 0x824c134 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c6,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs198_g1_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs198_g1_s0_station_sref_script }; /* 0x824c204 */

static const struct ScriptCommand s_gs198_g1_s0_eff0_script[] = { /* 0x824c210 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0xc8,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs198_g1_s0_lives0_dlg0[] = { /* 0x824c290 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000004,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...So~2c we do have to get\nthrough this~2c huh?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK.\nWe don~27t have a choice--we have to\nget through this place.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" It~27s going to be awfully cold.\nIt~27s not anywhere I really want to go...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It will be horribly cold.\nI~27d rather not go if I didn~27t have to...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But there~27s no point in us\nsticking around here forever...") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We can only go forward!#W\nWe~27ll just have to go for it and get\nthrough this~2c $n0!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But hiding out in this area\nisn~27t the answer either...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" We can only go forward.#W\nWe~27ll just have to keep our spirits up\nand keep going~2c $n0!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs198_g1_s0_lives1_dlg0[] = { /* 0x824c670 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs198_g2_s0_station_sref_script[] = { /* 0x824c6d0 */
    DEBUGINFO,
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptRef s_gs198_g2_s0_station_sref = { 403, 8, NULL /* STATION_CONTROL */, s_gs198_g2_s0_station_sref_script }; /* 0x824c700 */

static const struct ScriptCommand s_gs198_g2_s0_lives0_dlg2[] = { /* 0x824c70c */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0002, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs198_g2_s0_evt0_sref_script[] = { /* 0x824c73c */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0002, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs198_g2_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs198_g2_s0_evt0_sref_script }; /* 0x824c76c */

static const struct ScriptCommand s_gs198_g2_s1_station_sref_script[] = { /* 0x824c778 */
    DEBUGINFO,
    { 0x0c, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x11, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs198_g2_s1_station_sref = { 401, 7, NULL /* EVENT_WAKEUP */, s_gs198_g2_s1_station_sref_script }; /* 0x824c7c8 */

static const struct ScriptCommand s_gs198_g2_s1_lives0_dlg0[] = { /* 0x824c7d4 */
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
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hah? Not yet?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" All right.\nI~27ll wait till you~27re ready.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Huh? Not yet?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK.\nI~27ll wait while you get ready.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(2), /* = 0x02 */
    { 0xd5, 0x01,  0x0000,  0x00000001,  0x00000000, _(" Which way should we go?") },
    { 0xd9, 0x00,  0x0005,  0x00000000,  0x00000000, _("Frosty Forest.") },
    { 0xd9, 0x00,  0x0006,  0x00000000,  0x00000000, _("Snow Path.") },
    JUMP_LOCAL(/* label */ 3),
  LABEL(5), /* = 0x05 */
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" All right!\nLet~27s roll on out!") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" It~27s freezing cold~2c but let~27s\ngive it our best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" OK!\nLet~27s go!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It~27s going to be freezing\ncold~2c but let~27s try our best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000005,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0032,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x0080,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(7), /* = 0x07 */
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0040,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x00b3,  0x00000000,  0x00000000, NULL },
  LABEL(8), /* = 0x08 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000d,  0x00000000, NULL },
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
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0032,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x0080,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 10),
  LABEL(9), /* = 0x09 */
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0040,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x00c0,  0x00000000,  0x00000000, NULL },
  LABEL(10), /* = 0x0a */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004f,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    HALT,
};




static const struct ScriptCommand s_gs198_g2_s1_lives1_dlg0[] = { /* 0x824cea4 */
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
    { 0x86, 0x00,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x86, 0x00,  0x00c0,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs198_g3_s0_station_sref_script[] = { /* 0x824cfe4 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c6,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs198_g3_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs198_g3_s0_station_sref_script }; /* 0x824d0b4 */

static const struct ScriptCommand s_gs198_g3_s0_lives0_dlg0[] = { /* 0x824d0c0 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_LEFT_FUNC */ 36),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Urrggh...#W\nWe couldn~27t get through...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Ouch...#W\nWe couldn~27t break through...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" This is a tough place...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" This is as tough as we\nexpected...") },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But let~27s give it our best\nand get through this~2c $n0!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But let~27s keep trying our\nbest and get through this~2c $n0!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs198_g3_s0_lives1_dlg0[] = { /* 0x824d364 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs198_g4_s0_station_sref_script[] = { /* 0x824d424 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c6,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs198_g4_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs198_g4_s0_station_sref_script }; /* 0x824d4f4 */

static const struct ScriptCommand s_gs198_g4_s0_lives0_dlg0[] = { /* 0x824d500 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000066,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hmmm...#W\nWell~2c that didn~27t go well.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hmm...#W\nWe didn~27t do well at all...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" That $n2...\nHe~27s one tough customer.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But why aren~27t we allowed\nto go into this forest?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...It doesn~27t matter anyway.\nLet~27s give it our best~2c $n0!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" That Pokémon~2c\n$n2~2c is pretty tough.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But why are we forbidden\nfrom entering this forest?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It makes no difference.\n$n0~2c let~27s try our best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs198_g4_s0_lives1_dlg0[] = { /* 0x824d834 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs198_g5_s0_station_sref_script[] = { /* 0x824d8a4 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c6,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs198_g5_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs198_g5_s0_station_sref_script }; /* 0x824d974 */

static const struct ScriptCommand s_gs198_g5_s0_lives0_dlg0[] = { /* 0x824d980 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x10,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d1,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* NOTICE_FUNC */ 40),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x0000000c,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" What the...?#W\nIsn~27t this where we started from?!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d4,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_LEFT_FUNC */ 36),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ............#W\nI guess that path just loops back to the\nstart.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" If we want to move on~2c\nI think our only choice is the #CDFrosty\nForest#R.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c let~27s give it\nour best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" ............#W\nI guess that path we took just loops back\nto where it started.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It looks like we have to get\nthrough the #CDFrosty Forest#R to move on.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0~2c let~27s do our\nbest!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs198_g5_s0_lives1_dlg0[] = { /* 0x824dd18 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x20,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* NOTICE_FUNC */ 40),
    { 0xe5, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs198_g6_s0_station_sref_script[] = { /* 0x824ddf8 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c6,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs198_g6_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs198_g6_s0_station_sref_script }; /* 0x824dec8 */

static const struct ScriptCommand s_gs198_g6_s0_lives0_dlg0[] = { /* 0x824ded4 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_RIGHT_FUNC */ 35),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000022,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Urrggh...#W\nWe couldn~27t get through...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Ouch...#W\nWe couldn~27t break through...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" This is one harsh place~2c\nbut let~27s bear down and get through~2c\n$n0!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" This is a harsh place~2c\nso let~27s do our best to get through~2c\n$n0!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs198_g6_s0_lives1_dlg0[] = { /* 0x824e0f8 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs198_g0_s0_lives[] = { /* 0x824e1c8 */
    /*  0 */ { 144,   0,   0,   0, {   7,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs198_g0_s1_lives[] = { /* 0x824e1e0 */
    /*  0 */ {   0,   4,   0,   0, {  17,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  17,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s2_lives[] = { /* 0x824e210 */
    /*  0 */ {   0,   0,   0,   0, {  17,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  17,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s3_lives[] = { /* 0x824e240 */
    /*  0 */ {   0,   4,   0,   0, {  17,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  17,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s4_lives[] = { /* 0x824e270 */
    /*  0 */ {   0,   4,   0,   0, {  17,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  17,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s5_lives[] = { /* 0x824e2a0 */
    /*  0 */ { 144,   0,   0,   0, {   7,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {  23,  35, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs198_g1_s0_lives[] = { /* 0x824e2d0 */
    /*  0 */ {   0,   4,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g2_s0_lives[] = { /* 0x824e300 */
    /*  0 */ {  34,   6,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [2] = s_gs198_g2_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs198_g2_s1_lives[] = { /* 0x824e318 */
    /*  0 */ {   0,   6,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g2_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g2_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g3_s0_lives[] = { /* 0x824e348 */
    /*  0 */ {   0,   0,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g3_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g4_s0_lives[] = { /* 0x824e378 */
    /*  0 */ {   0,   6,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g5_s0_lives[] = { /* 0x824e3a8 */
    /*  0 */ {   0,   6,   0,   0, {  19,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  15,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g6_s0_lives[] = { /* 0x824e3d8 */
    /*  0 */ {   0,   6,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g6_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g6_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs198_g0_s0_objs[] = { /* 0x824e408 */
    /*  0 */ {   4,   0,   4,   2, {   8,  32, 0, 0 }, {
        [2] = s_gs198_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs198_g0_s5_objs[] = { /* 0x824e420 */
    /*  0 */ {   4,   0,   4,   2, {   8,  32, 0, 0 }, {
        [2] = s_gs198_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {  23,  35, 0, CPOS_HALFTILE }, {
        [2] = s_gs198_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs198_g1_s0_effs[] = { /* 0x824e450 */
    /*  0 */ {   0,   0,   1,   1, {  17,   9, 0, CPOS_HALFTILE }, s_gs198_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs198_g3_s0_effs[] = { /* 0x824e45c */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs198_g4_s0_effs[] = { /* 0x824e468 */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs198_g5_s0_effs[] = { /* 0x824e474 */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs198_g6_s0_effs[] = { /* 0x824e480 */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs198_g2_s0_evts[] = { /* 0x824e48c */
    /*  0 */ {   4,   3,   0,   0, {  15,  27, 0, 0 }, &s_gs198_g2_s0_evt0_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x824e498 */
    &s_gs198_g0_s0_station_sref,
    &s_gs198_g1_s0_station_sref,
    &s_gs198_g2_s0_station_sref,
    &s_gs198_g2_s1_station_sref,
    &s_gs198_g3_s0_station_sref,
    &s_gs198_g4_s0_station_sref,
    &s_gs198_g5_s0_station_sref,
    &s_gs198_g6_s0_station_sref,
};

static const struct GroundScriptSector s_gs198_g0_sectors[] = { /* 0x824e4b8 */
    { LPARRAY(s_gs198_g0_s0_lives), LPARRAY(s_gs198_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs198_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s5_lives), LPARRAY(s_gs198_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs198_g1_sectors[] = { /* 0x824e5a8 */
    { LPARRAY(s_gs198_g1_s0_lives), 0,NULL, LPARRAY(s_gs198_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs198_g2_sectors[] = { /* 0x824e5d0 */
    { LPARRAY(s_gs198_g2_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs198_g2_s0_evts), 1,&sStationScripts[2], },
    { LPARRAY(s_gs198_g2_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs198_g3_sectors[] = { /* 0x824e620 */
    { LPARRAY(s_gs198_g3_s0_lives), 0,NULL, LPARRAY(s_gs198_g3_s0_effs), 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs198_g4_sectors[] = { /* 0x824e648 */
    { LPARRAY(s_gs198_g4_s0_lives), 0,NULL, LPARRAY(s_gs198_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs198_g5_sectors[] = { /* 0x824e670 */
    { LPARRAY(s_gs198_g5_s0_lives), 0,NULL, LPARRAY(s_gs198_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptSector s_gs198_g6_sectors[] = { /* 0x824e698 */
    { LPARRAY(s_gs198_g6_s0_lives), 0,NULL, LPARRAY(s_gs198_g6_s0_effs), 0,NULL, 1,&sStationScripts[7], },
};

static const struct GroundScriptGroup s_gs198_groups[] = { /* 0x824e6c0 */
    { LPARRAY(s_gs198_g0_sectors) },
    { LPARRAY(s_gs198_g1_sectors) },
    { LPARRAY(s_gs198_g2_sectors) },
    { LPARRAY(s_gs198_g3_sectors) },
    { LPARRAY(s_gs198_g4_sectors) },
    { LPARRAY(s_gs198_g5_sectors) },
    { LPARRAY(s_gs198_g6_sectors) },
};

static const struct GroundLink s_gs198_links[] = { /* 0x824e6f8 */
    /* link   0 */ { { /*x*/  17, /*y*/  27, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs198 = { LPARRAY(s_gs198_groups), s_gs198_links }; /* 0x824e700 */