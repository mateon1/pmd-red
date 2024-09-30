







static const struct ScriptCommand s_gs0_g0_s0_station_sref_script[] = { /* 0x81326fc */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x0c, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(4), /* = 0x04 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0005,  0x00000009,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0005,  0x0000000a,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0005,  0x0000000b,  0x00000000, NULL },
    JUMP_LABEL(6),
  LABEL(2), /* = 0x02 */
    { 0x0d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(3), /* = 0x03 */
    { 0x0d, 0x08,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(5), /* = 0x05 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
    { 0x0d, 0x02,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(7), /* = 0x07 */
    { 0x44, 0x00,  0x0000,  0x00000007,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs0_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs0_g0_s0_station_sref_script }; /* 0x8132918 */




static const struct ScriptCommand s_gs0_g0_s0_evt0_sref_script[] = { /* 0x8132924 */
    DEBUGINFO,
    RET,
};

static const struct ScriptRef s_gs0_g0_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs0_g0_s0_evt0_sref_script }; /* 0x8132944 */

static const struct ScriptCommand s_gs0_g0_s0_evt1_sref_script[] = { /* 0x8132950 */
    DEBUGINFO,
    RET,
};

static const struct ScriptRef s_gs0_g0_s0_evt1_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs0_g0_s0_evt1_sref_script }; /* 0x8132970 */

static const struct ScriptCommand s_gs0_g0_s0_evt2_sref_script[] = { /* 0x813297c */
    DEBUGINFO,
    RET,
};

static const struct ScriptRef s_gs0_g0_s0_evt2_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs0_g0_s0_evt2_sref_script }; /* 0x813299c */

static const struct ScriptCommand s_gs0_g0_s1_lives0_dlg0[] = { /* 0x81329a8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s1_lives1_dlg0[] = { /* 0x81329e8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s2_lives0_dlg0[] = { /* 0x8132a28 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s2_lives1_dlg0[] = { /* 0x8132a68 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s3_lives0_dlg0[] = { /* 0x8132aa8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s3_lives1_dlg0[] = { /* 0x8132ae8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s7_lives0_dlg0[] = { /* 0x8132b28 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s7_lives1_dlg0[] = { /* 0x8132b68 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s8_lives0_dlg0[] = { /* 0x8132ba8 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g0_s8_lives1_dlg0[] = { /* 0x8132bd8 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs0_g1_s0_lives0_dlg2[] = { /* 0x8132c08 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x13,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives1_dlg2[] = { /* 0x8132c68 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x10,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives2_dlg2[] = { /* 0x8132cc8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x17,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives3_dlg2[] = { /* 0x8132d28 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x18,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives4_dlg2[] = { /* 0x8132d88 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x19,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives5_dlg2[] = { /* 0x8132de8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x1a,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives6_dlg2[] = { /* 0x8132e48 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    { 0x05, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs0_g1_s0_lives7_dlg2[] = { /* 0x8132ee8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x1e,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives8_dlg2[] = { /* 0x8132f48 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x1d,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_obj0_dlg2[] = { /* 0x8132fa8 */
    DEBUGINFO,
    { 0x3c, 0x20,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_obj1_dlg2[] = { /* 0x8132fd8 */
    DEBUGINFO,
    { 0x3c, 0x21,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives9_dlg2[] = { /* 0x8133008 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x3c, 0x1b,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_lives10_dlg2[] = { /* 0x8133068 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x23, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    ASK3(FALSE, /*default*/ 0, /* speaker */ -1, _(" I'm the event test Pokémon!\nMotions will differ from the real thing!")),
    CHOICE(/* label */  1, _("Main 0A〜4B Demo")),
    CHOICE(/* label */  2, _("Main 5A〜7B")),
    CHOICE(/* label */  3, _("Main 8A〜10A Ending")),
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Farewell") },
    { 0x22, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */  4, _("Main 0A〜1A Demo")),
    CHOICE(/* label */  5, _("Main 2A")),
    CHOICE(/* label */  6, _("Main 2B")),
    CHOICE(/* label */  7, _("Main 3A-0〜")),
    CHOICE(/* label */  8, _("Main 3A-8〜")),
    CHOICE(/* label */  9, _("Main 4A")),
    CHOICE(/* label */ 10, _("Main 4B")),
    JUMP_LABEL(0),
  LABEL(2), /* = 0x02 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 11, _("Main 5A")),
    CHOICE(/* label */ 12, _("Main 5B")),
    CHOICE(/* label */ 13, _("Main 6A")),
    CHOICE(/* label */ 14, _("Main 7A")),
    CHOICE(/* label */ 15, _("Main 7B")),
    JUMP_LABEL(0),
  LABEL(3), /* = 0x03 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 16, _("Main 8A")),
    CHOICE(/* label */ 17, _("Main 8B")),
    CHOICE(/* label */ 18, _("Main 9A-1〜")),
    CHOICE(/* label */ 19, _("Main 9A-9〜")),
    CHOICE(/* label */ 20, _("Main 10A")),
    CHOICE(/* label */ 21, _("Ending")),
    JUMP_LABEL(0),
  LABEL(4), /* = 0x04 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 22, _("Demo 01")),
    CHOICE(/* label */ 23, _("Demo 02")),
    CHOICE(/* label */ 24, _("Demo 03")),
    CHOICE(/* label */ 25, _("Main 0A-1")),
    CHOICE(/* label */ 26, _("Main 1A-1")),
    CHOICE(/* label */ 27, _("Main 1A-2")),
    CHOICE(/* label */ 28, _("Main 1A-3")),
    JUMP_LABEL(1),
  LABEL(22), /* = 0x16 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0073,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(23), /* = 0x17 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0074,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(24), /* = 0x18 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0075,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(25), /* = 0x19 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0077,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(26), /* = 0x1a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(27), /* = 0x1b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0079,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(28), /* = 0x1c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x007a,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(5), /* = 0x05 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 29, _("Main 2A-1")),
    CHOICE(/* label */ 30, _("Main 2A-2")),
    CHOICE(/* label */ 31, _("Main 2A-3")),
    CHOICE(/* label */ 32, _("Main 2A-4")),
    CHOICE(/* label */ 33, _("Main 2A-5")),
    CHOICE(/* label */ 34, _("Main 2A-6")),
    JUMP_LABEL(1),
  LABEL(29), /* = 0x1d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x007b,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(30), /* = 0x1e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x007e,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(31), /* = 0x1f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x007f,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(32), /* = 0x20 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0080,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(33), /* = 0x21 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0081,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(34), /* = 0x22 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0082,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(6), /* = 0x06 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 35, _("Main 2B-1")),
    CHOICE(/* label */ 36, _("Main 2B-2")),
    CHOICE(/* label */ 37, _("Main 2B-3")),
    CHOICE(/* label */ 38, _("Main 2B-4")),
    CHOICE(/* label */ 39, _("Main 2B-5")),
    CHOICE(/* label */ 40, _("Main 2B-6")),
    CHOICE(/* label */ 41, _("Main 2B-7")),
    CHOICE(/* label */ 42, _("Main 2B-8")),
    JUMP_LABEL(1),
  LABEL(35), /* = 0x23 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0083,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(36), /* = 0x24 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0084,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(37), /* = 0x25 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0085,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(38), /* = 0x26 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0086,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(39), /* = 0x27 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0088,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(40), /* = 0x28 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0089,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(41), /* = 0x29 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x008a,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(42), /* = 0x2a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x008b,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(7), /* = 0x07 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 43, _("Main 3A-0")),
    CHOICE(/* label */ 44, _("Main 3A-1")),
    CHOICE(/* label */ 45, _("Main 3A-2")),
    CHOICE(/* label */ 46, _("Main 3A-3")),
    CHOICE(/* label */ 47, _("Main 3A-4")),
    CHOICE(/* label */ 48, _("Main 3A-5")),
    CHOICE(/* label */ 49, _("Main 3A-6")),
    CHOICE(/* label */ 50, _("Main 3A-7")),
    JUMP_LABEL(1),
  LABEL(43), /* = 0x2b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x008c,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(44), /* = 0x2c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x008d,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(45), /* = 0x2d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x008e,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(46), /* = 0x2e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x008f,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(47), /* = 0x2f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0090,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(48), /* = 0x30 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0091,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(49), /* = 0x31 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0092,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(50), /* = 0x32 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0093,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(8), /* = 0x08 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 51, _("Main 3A-8")),
    CHOICE(/* label */ 52, _("Main 3A-9")),
    CHOICE(/* label */ 53, _("Main 3A-10")),
    CHOICE(/* label */ 54, _("Main 3A-11")),
    JUMP_LABEL(1),
  LABEL(51), /* = 0x33 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0094,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(52), /* = 0x34 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0095,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(53), /* = 0x35 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0096,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(54), /* = 0x36 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0097,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(9), /* = 0x09 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 55, _("Main 4A-0")),
    CHOICE(/* label */ 56, _("Main 4A-1")),
    CHOICE(/* label */ 57, _("Main 4A-2")),
    CHOICE(/* label */ 58, _("Main 4A-3")),
    CHOICE(/* label */ 59, _("Main 4A-4")),
    CHOICE(/* label */ 60, _("Main 4A-5")),
    CHOICE(/* label */ 61, _("Main 4A-6")),
    JUMP_LABEL(1),
  LABEL(55), /* = 0x37 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0098,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(56), /* = 0x38 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0099,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(57), /* = 0x39 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x009a,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(58), /* = 0x3a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x009b,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(59), /* = 0x3b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x009c,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(60), /* = 0x3c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x009d,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(61), /* = 0x3d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x009e,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(10), /* = 0x0a */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 62, _("Main 4B-0")),
    CHOICE(/* label */ 63, _("Main 4B-1")),
    CHOICE(/* label */ 64, _("Main 4B-2")),
    CHOICE(/* label */ 65, _("Main 4B-3")),
    CHOICE(/* label */ 66, _("Main 4B-4")),
    CHOICE(/* label */ 67, _("Main 4B-5")),
    CHOICE(/* label */ 68, _("Main 4B-6")),
    CHOICE(/* label */ 69, _("Main 4B-7")),
    JUMP_LABEL(1),
  LABEL(62), /* = 0x3e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x009f,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(63), /* = 0x3f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a0,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(64), /* = 0x40 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a1,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(65), /* = 0x41 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a2,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(66), /* = 0x42 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a3,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(67), /* = 0x43 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a4,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(68), /* = 0x44 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a5,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(69), /* = 0x45 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a6,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(11), /* = 0x0b */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 70, _("Main 5A-0")),
    CHOICE(/* label */ 71, _("Main 5A-1")),
    CHOICE(/* label */ 72, _("Main 5A-2")),
    CHOICE(/* label */ 73, _("Main 5A-3")),
    CHOICE(/* label */ 74, _("Main 5A-4")),
    CHOICE(/* label */ 75, _("Main 5A-5")),
    CHOICE(/* label */ 76, _("Main 5A-6")),
    JUMP_LABEL(2),
  LABEL(70), /* = 0x46 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a7,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(71), /* = 0x47 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a8,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(72), /* = 0x48 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00a9,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(73), /* = 0x49 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00aa,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(74), /* = 0x4a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ab,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(75), /* = 0x4b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ac,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(76), /* = 0x4c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ad,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(12), /* = 0x0c */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 77, _("Main 5B-0")),
    CHOICE(/* label */ 78, _("Main 5B-1")),
    CHOICE(/* label */ 79, _("Main 5B-2")),
    CHOICE(/* label */ 80, _("Main 5B-3")),
    CHOICE(/* label */ 81, _("Main 5B-4")),
    CHOICE(/* label */ 82, _("Main 5B-5")),
    JUMP_LABEL(2),
  LABEL(77), /* = 0x4d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ae,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(78), /* = 0x4e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00af,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(79), /* = 0x4f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b0,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(80), /* = 0x50 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b1,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(81), /* = 0x51 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b2,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(82), /* = 0x52 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b3,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(13), /* = 0x0d */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 83, _("Main 6A-1")),
    CHOICE(/* label */ 84, _("Main 6A-2")),
    CHOICE(/* label */ 85, _("Main 6A-2")),
    JUMP_LABEL(2),
  LABEL(83), /* = 0x53 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b4,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(84), /* = 0x54 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b5,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(85), /* = 0x55 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b6,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(14), /* = 0x0e */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 86, _("Main 7A-1")),
    CHOICE(/* label */ 87, _("Main 7A-2")),
    CHOICE(/* label */ 88, _("Main 7A-3")),
    CHOICE(/* label */ 89, _("Main 7A-4")),
    CHOICE(/* label */ 90, _("Main 7A-5")),
    JUMP_LABEL(2),
  LABEL(86), /* = 0x56 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b7,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(87), /* = 0x57 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b8,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(88), /* = 0x58 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00b9,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(89), /* = 0x59 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ba,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(90), /* = 0x5a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00bb,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(15), /* = 0x0f */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 91, _("Main 7B-1")),
    CHOICE(/* label */ 92, _("Main 7B-2")),
    CHOICE(/* label */ 93, _("Main 7B-3")),
    CHOICE(/* label */ 94, _("Main 7B-4")),
    CHOICE(/* label */ 95, _("Main 7B-5")),
    JUMP_LABEL(2),
  LABEL(91), /* = 0x5b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00be,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(92), /* = 0x5c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00bf,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(93), /* = 0x5d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c0,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(94), /* = 0x5e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c1,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(95), /* = 0x5f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c2,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(16), /* = 0x10 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 96, _("Main 8A-1")),
    CHOICE(/* label */ 97, _("Main 8A-2")),
    CHOICE(/* label */ 98, _("Main 8A-3")),
    CHOICE(/* label */ 99, _("Main 8A-4")),
    CHOICE(/* label */100, _("Main 8A-5")),
    JUMP_LABEL(3),
  LABEL(96), /* = 0x60 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c5,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(97), /* = 0x61 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c6,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(98), /* = 0x62 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c7,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(99), /* = 0x63 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c8,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(100), /* = 0x64 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00c9,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(17), /* = 0x11 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */101, _("Main 8B-1")),
    CHOICE(/* label */102, _("Main 8B-2")),
    CHOICE(/* label */103, _("Main 8B-3")),
    CHOICE(/* label */104, _("Main 8B-4")),
    CHOICE(/* label */105, _("Main 8B-5")),
    CHOICE(/* label */106, _("Main 8B-6")),
    JUMP_LABEL(3),
  LABEL(101), /* = 0x65 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00cc,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(102), /* = 0x66 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00cd,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(103), /* = 0x67 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ce,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(104), /* = 0x68 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00cf,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(105), /* = 0x69 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d0,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(106), /* = 0x6a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d1,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(18), /* = 0x12 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */107, _("Main 9A-1")),
    CHOICE(/* label */108, _("Main 9A-2")),
    CHOICE(/* label */109, _("Main 9A-3")),
    CHOICE(/* label */110, _("Main 9A-4")),
    CHOICE(/* label */111, _("Main 9A-5")),
    CHOICE(/* label */112, _("Main 9A-6")),
    CHOICE(/* label */113, _("Main 9A-7")),
    CHOICE(/* label */114, _("Main 9A-8")),
    JUMP_LABEL(3),
  LABEL(107), /* = 0x6b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d4,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(108), /* = 0x6c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d5,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(109), /* = 0x6d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d6,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(110), /* = 0x6e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d7,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(111), /* = 0x6f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d8,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(112), /* = 0x70 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00d9,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(113), /* = 0x71 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00da,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(114), /* = 0x72 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00db,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(19), /* = 0x13 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */115, _("Main 9A-9")),
    CHOICE(/* label */116, _("Main 9A-10")),
    CHOICE(/* label */117, _("Main 9A-11")),
    CHOICE(/* label */118, _("Main 9A-12")),
    CHOICE(/* label */119, _("Main 9A-13")),
    CHOICE(/* label */120, _("Main 9A-14")),
    CHOICE(/* label */121, _("Main 9A-15")),
    JUMP_LABEL(3),
  LABEL(115), /* = 0x73 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00dc,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(116), /* = 0x74 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00dd,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(117), /* = 0x75 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00de,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(118), /* = 0x76 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00df,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(119), /* = 0x77 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e0,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(120), /* = 0x78 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e1,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(121), /* = 0x79 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e2,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(20), /* = 0x14 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */122, _("Main 10A-1")),
    CHOICE(/* label */123, _("Main 10A-2")),
    CHOICE(/* label */124, _("Main 10A-3")),
    CHOICE(/* label */125, _("Main 10A-4")),
    CHOICE(/* label */126, _("Main 10A-5")),
    CHOICE(/* label */127, _("Main 10A-6")),
    CHOICE(/* label */128, _("Main 10A-7")),
    CHOICE(/* label */129, _("Main 10A-8")),
    JUMP_LABEL(3),
  LABEL(122), /* = 0x7a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e3,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(123), /* = 0x7b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e4,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(124), /* = 0x7c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e5,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(125), /* = 0x7d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e6,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(126), /* = 0x7e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e7,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(127), /* = 0x7f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e8,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(128), /* = 0x80 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00e9,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(129), /* = 0x81 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ea,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(21), /* = 0x15 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */130, _("Main ExD")),
    CHOICE(/* label */131, _("Main2 1A-1")),
    CHOICE(/* label */132, _("Main2 1A-2")),
    CHOICE(/* label */133, _("Main2 1A-3")),
    CHOICE(/* label */134, _("Main2 2A-1")),
    CHOICE(/* label */135, _("Main2 ExD")),
    JUMP_LABEL(3),
  LABEL(130), /* = 0x82 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00eb,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(131), /* = 0x83 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ed,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(132), /* = 0x84 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ee,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(133), /* = 0x85 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00ef,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(134), /* = 0x86 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(135), /* = 0x87 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00f8,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs0_g1_s0_lives11_dlg2[] = { /* 0x8136060 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x23, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    ASK3(FALSE, /*default*/ 0, /* speaker */ -1, _(" I'm the event test Pokémon!\nMotions will differ from the real thing!")),
    CHOICE(/* label */  1, _("Sub 0〜4")),
    CHOICE(/* label */  2, _("Sub 5〜9")),
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Farewell.") },
    { 0x22, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */  3, _("Sub 0")),
    CHOICE(/* label */  4, _("Sub 1")),
    CHOICE(/* label */  5, _("Sub 2")),
    CHOICE(/* label */  6, _("Sub 3")),
    CHOICE(/* label */  7, _("Sub 4")),
    JUMP_LABEL(0),
  LABEL(2), /* = 0x02 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */  8, _("Sub 5")),
    CHOICE(/* label */  9, _("Sub 6")),
    CHOICE(/* label */ 10, _("Sub 7")),
    CHOICE(/* label */ 11, _("Sub 8")),
    CHOICE(/* label */ 12, _("Sub 9")),
    JUMP_LABEL(0),
  LABEL(3), /* = 0x03 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 13, _("Sub0 1A-1")),
    CHOICE(/* label */ 14, _("Sub0 1A-2")),
    CHOICE(/* label */ 15, _("Sub0 1A-3")),
    JUMP_LABEL(1),
  LABEL(13), /* = 0x0d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00f9,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(14), /* = 0x0e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00fa,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(15), /* = 0x0f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x00fb,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(4), /* = 0x04 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 16, _("Sub1 1A-1")),
    CHOICE(/* label */ 17, _("Sub1 1A-2")),
    CHOICE(/* label */ 18, _("Sub1 1A-3")),
    CHOICE(/* label */ 19, _("Sub1 1B-1")),
    CHOICE(/* label */ 20, _("Sub1 1C-1")),
    CHOICE(/* label */ 21, _("Sub1 2A-1")),
    CHOICE(/* label */ 22, _("Sub1 2A-2")),
    JUMP_LABEL(1),
  LABEL(16), /* = 0x10 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(17), /* = 0x11 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0101,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(18), /* = 0x12 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0102,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(19), /* = 0x13 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0103,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(20), /* = 0x14 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0105,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(21), /* = 0x15 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0108,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(22), /* = 0x16 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0109,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(5), /* = 0x05 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 23, _("Sub2 1A-1")),
    CHOICE(/* label */ 24, _("Sub2 1A-2")),
    CHOICE(/* label */ 25, _("Sub2 1A-3")),
    CHOICE(/* label */ 26, _("Sub2 1A-4")),
    CHOICE(/* label */ 27, _("Sub2 2A-1")),
    CHOICE(/* label */ 28, _("Sub2 2A-2")),
    CHOICE(/* label */ 29, _("Sub2 2A-3")),
    JUMP_LABEL(1),
  LABEL(23), /* = 0x17 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x010f,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(24), /* = 0x18 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0110,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(25), /* = 0x19 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0111,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(26), /* = 0x1a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0112,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(27), /* = 0x1b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0116,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(28), /* = 0x1c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0117,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(29), /* = 0x1d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0118,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(6), /* = 0x06 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 30, _("Sub3 1A-1")),
    CHOICE(/* label */ 31, _("Sub3 1A-2")),
    JUMP_LABEL(1),
  LABEL(30), /* = 0x1e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x011d,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(31), /* = 0x1f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x011e,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(7), /* = 0x07 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 32, _("Sub4 1A-1")),
    CHOICE(/* label */ 33, _("Sub4 1A-2")),
    CHOICE(/* label */ 34, _("Sub4 1B-1")),
    CHOICE(/* label */ 35, _("Sub4 1C-1")),
    CHOICE(/* label */ 36, _("Sub4 1D-1")),
    CHOICE(/* label */ 37, _("Sub4 1E-1")),
    CHOICE(/* label */ 38, _("Sub4 1F-1")),
    JUMP_LABEL(1),
  LABEL(32), /* = 0x20 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0123,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(33), /* = 0x21 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0124,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(34), /* = 0x22 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0126,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(35), /* = 0x23 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0128,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(36), /* = 0x24 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x012a,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(37), /* = 0x25 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x012c,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(38), /* = 0x26 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x012e,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(8), /* = 0x08 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 39, _("Sub5 1A-1")),
    CHOICE(/* label */ 40, _("Sub5 1A-2")),
    JUMP_LABEL(2),
  LABEL(39), /* = 0x27 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0132,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(40), /* = 0x28 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0133,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(9), /* = 0x09 */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 41, _("Sub6 1A-1")),
    CHOICE(/* label */ 42, _("Sub6 1A-2")),
    CHOICE(/* label */ 43, _("Sub6 1B-1")),
    CHOICE(/* label */ 44, _("Sub6 1B-2")),
    JUMP_LABEL(2),
  LABEL(41), /* = 0x29 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0138,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(42), /* = 0x2a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0139,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(43), /* = 0x2b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x013b,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(44), /* = 0x2c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x013c,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(10), /* = 0x0a */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 45, _("Sub7 1A-1")),
    CHOICE(/* label */ 46, _("Sub7 1A-2")),
    CHOICE(/* label */ 47, _("Sub7 1A-3")),
    JUMP_LABEL(2),
  LABEL(45), /* = 0x2d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0140,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(46), /* = 0x2e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0141,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(47), /* = 0x2f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0142,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(11), /* = 0x0b */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 48, _("Sub8 1A-1")),
    CHOICE(/* label */ 49, _("Sub8 1A-2")),
    CHOICE(/* label */ 50, _("Sub8 1A-3")),
    CHOICE(/* label */ 51, _("Sub8 1A-4")),
    CHOICE(/* label */ 52, _("Sub8 1A-5")),
    CHOICE(/* label */ 53, _("Sub8 1A-6")),
    CHOICE(/* label */ 54, _("Sub8 1A-7")),
    CHOICE(/* label */ 55, _("Sub8 1A-8")),
    JUMP_LABEL(2),
  LABEL(48), /* = 0x30 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0146,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(49), /* = 0x31 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0147,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(50), /* = 0x32 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0148,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(51), /* = 0x33 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0149,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(52), /* = 0x34 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x014a,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(53), /* = 0x35 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x014c,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(54), /* = 0x36 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x014e,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(55), /* = 0x37 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x014f,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(12), /* = 0x0c */
    ASK_DEBUG(FALSE, /*default*/ 0, /* speaker */ -1, NULL),
    CHOICE(/* label */ 56, _("Sub9 1A-1")),
    CHOICE(/* label */ 57, _("Sub9 1A-2")),
    CHOICE(/* label */ 58, _("Sub9 1A-3")),
    CHOICE(/* label */ 59, _("Sub9 1A-4")),
    CHOICE(/* label */ 60, _("Sub9 1A-5")),
    CHOICE(/* label */ 61, _("Sub9 1B-1")),
    CHOICE(/* label */ 62, _("Sub9 1B-2")),
    CHOICE(/* label */ 63, _("Sub9 1C-1")),
    JUMP_LABEL(2),
  LABEL(56), /* = 0x38 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0156,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(57), /* = 0x39 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0157,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(58), /* = 0x3a */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0158,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(59), /* = 0x3b */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0159,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(60), /* = 0x3c */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x015b,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(61), /* = 0x3d */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x015d,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(62), /* = 0x3e */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x015f,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(63), /* = 0x3f */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0161,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs0_g1_s0_lives13_dlg0[] = { /* 0x81376c8 */
    DEBUGINFO,
    { 0x55, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(MOVE_STAY),
};

static const struct ScriptCommand s_gs0_g1_s0_lives13_dlg2[] = { /* 0x81376f8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3(FALSE, /*default*/ 0, /* speaker */ 1, _(" Which effect should I use?")),
    CHOICE(/* label */  0, _("Effect 1")),
    CHOICE(/* label */  1, _("Effect 2")),
    CHOICE(/* label */  2, _("Effect 3")),
    CHOICE(/* label */  3, _("Effect 4")),
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Farewell.") },
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1a, 0x00,  0x0001,  0x00000062,  0x00000007, NULL },
    JUMP_LABEL(4),
  LABEL(1), /* = 0x01 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1a, 0x00,  0x0001,  0x00000063,  0x00000007, NULL },
    JUMP_LABEL(4),
  LABEL(2), /* = 0x02 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000009,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000000a,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000000b,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(4),
  LABEL(3), /* = 0x03 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000002, NULL },
    WAIT(30),
    { 0x97, 0x00,  0x0002,  0x00000002,  0x00000003, NULL },
    WAIT(30),
    { 0x97, 0x00,  0x0002,  0x00000004,  0x00000004, NULL },
    WAIT(60),
    { 0x97, 0x00,  0x0002,  0x00000008,  0x00000004, NULL },
    WAIT(60),
    { 0x97, 0x00,  0x0002,  0x00000004,  0x00000004, NULL },
    WAIT(60),
    { 0x97, 0x00,  0x0002,  0x00000002,  0x00000003, NULL },
    WAIT(30),
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000002, NULL },
    WAIT(30),
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs0_g1_s0_eff0_script[] = { /* 0x8137a74 */
    DEBUGINFO,
  LABEL(0), /* = 0x00 */
    { 0x56, 0x00,  0x0000,  0x00000065,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000066,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    WAIT(120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMP_LABEL(0),
};

static const struct ScriptCommand s_gs0_g1_s1_eff0_script[] = { /* 0x8137b24 */
    DEBUGINFO,
    { 0x59, 0x00, -0x0008,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x56, 0x00,  0x0000,  0x000000a9,  0x00000000, NULL },
    WAIT(120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x56, 0x00,  0x0000,  0x000000a8,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x56, 0x00,  0x0000,  0x00000070,  0x00000000, NULL },
    WAIT(180),
    { 0x52, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    WAIT(60),
    { 0x53, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    WAIT(60),
    { 0x52, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    WAIT(60),
    { 0x53, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    WAIT(180),
    { 0x52, 0x00,  0x0000,  0x00040000,  0x00000000, NULL },
    WAIT(60),
    { 0x53, 0x00,  0x0000,  0x00040000,  0x00000000, NULL },
    WAIT(60),
    { 0x52, 0x00,  0x0000,  0x00040000,  0x00000000, NULL },
    WAIT(60),
    { 0x53, 0x00,  0x0000,  0x00040000,  0x00000000, NULL },
    WAIT(180),
    { 0x52, 0x00,  0x0000,  0x00010000,  0x00000000, NULL },
    WAIT(60),
    { 0x53, 0x00,  0x0000,  0x00010000,  0x00000000, NULL },
    WAIT(60),
    { 0x52, 0x00,  0x0000,  0x00010000,  0x00000000, NULL },
    WAIT(60),
    { 0x53, 0x00,  0x0000,  0x00010000,  0x00000000, NULL },
    WAIT(180),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMP_LABEL(0),
};

static const struct GroundLivesData s_gs0_g0_s1_lives[] = { /* 0x8137da4 */
    /*  0 */ {   0,   2,   0,   0, {  11,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   8,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs0_g0_s2_lives[] = { /* 0x8137dd4 */
    /*  0 */ {   0,   4,   0,   0, {  28,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  35, 0, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs0_g0_s3_lives[] = { /* 0x8137e04 */
    /*  0 */ {   0,   6,   0,   0, {  37,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   6,   0,   0, {  41,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs0_g0_s7_lives[] = { /* 0x8137e34 */
    /*  0 */ {   0,   4,   0,   0, {  28,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s7_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s7_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs0_g0_s8_lives[] = { /* 0x8137e64 */
    /*  0 */ {   0,   0,   0,   0, {  11,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s8_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {   8,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g0_s8_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs0_g1_s0_lives[] = { /* 0x8137e94 */
    /*  0 */ {  72,   0,   0,   0, {  12,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  75,   0,   0,   0, {  16,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  70,   0,   0,   0, {  20,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  71,   0,   0,   0, {  24,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  76,   0,   0,   0, {  36,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  45,   0,   0,   0, {  40,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives5_dlg2,
    } },
    /*  6 */ {  47,   0,   0,   0, {  17,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives6_dlg2,
    } },
    /*  7 */ {  48,   0,   0,   0, {  20,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives7_dlg2,
    } },
    /*  8 */ {  49,   0,   0,   0, {  23,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives8_dlg2,
    } },
    /*  9 */ {  73,   0,   0,   0, {  32,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives9_dlg2,
    } },
    /* 10 */ {  51,   0,   0,   0, {  26,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives10_dlg2,
    } },
    /* 11 */ {  37,   0,   0,   0, {  30,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_lives11_dlg2,
    } },
    /* 12 */ {  38,   0,   0,   0, {  34,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /* 13 */ { 104,   0,   0,   0, {  55,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs0_g1_s0_lives13_dlg0,
        [2] = s_gs0_g1_s0_lives13_dlg2,
    } },
    /* 14 */ { 105,   0,   0,   0, {  84,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /* 15 */ { 106,   0,   0,   0, {  60,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundObjectData s_gs0_g1_s0_objs[] = { /* 0x8138014 */
    /*  0 */ {  14,   0,   3,   1, {  13,  23, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_obj0_dlg2,
    } },
    /*  1 */ {  13,   0,   3,   1, {  10,  23, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs0_g1_s0_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs0_g1_s0_effs[] = { /* 0x8138044 */
    /*  0 */ {   5,   0,   1,   1, {  85,  24, 0, CPOS_HALFTILE }, s_gs0_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs0_g1_s1_effs[] = { /* 0x8138050 */
    /*  0 */ {   5,   0,   2,   1, {  85,  24, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs0_g1_s1_eff0_script },
};

static const struct GroundEventData s_gs0_g0_s0_evts[] = { /* 0x813805c */
    /*  0 */ {   6,  12,   0,   0, {   0,  24, 0, 0 }, &s_gs0_g0_s0_evt0_sref },
    /*  1 */ {  12,   6,   0,   0, {  54, 105, 0, 0 }, &s_gs0_g0_s0_evt1_sref },
    /*  2 */ {   6,  12,   0,   0, { 138,  30, 0, 0 }, &s_gs0_g0_s0_evt2_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x8138080 */
    &s_gs0_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs0_g0_sectors[] = { /* 0x8138084 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs0_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs0_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs0_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs0_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs0_g0_s7_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs0_g0_s8_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs0_g1_sectors[] = { /* 0x81381ec */
    { LPARRAY(s_gs0_g1_s0_lives), LPARRAY(s_gs0_g1_s0_objs), LPARRAY(s_gs0_g1_s0_effs), 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, LPARRAY(s_gs0_g1_s1_effs), 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs0_groups[] = { /* 0x813823c */
    { LPARRAY(s_gs0_g0_sectors) },
    { LPARRAY(s_gs0_g1_sectors) },
};

static const struct GroundLink s_gs0_links[] = { /* 0x813824c */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs0 = { LPARRAY(s_gs0_groups), s_gs0_links }; /* 0x8138254 */
