



















static const struct ScriptCommand s_gs117_g0_s0_station_sref_script[] = { /* 0x81f4b18 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000075,  0x00000000, NULL },
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 3, /* to label */ 0),
    JUMP_LABEL(1),
    JUMP_LABEL(2),
  LABEL(0), /* = 0x00 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 3),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    { 0x0c, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    JUMPIF_EQUAL(START_MODE, 1, /* to label */ 4),
    JUMPIF_EQUAL(START_MODE, 3, /* to label */ 5),
    JUMPIF_EQUAL(START_MODE, 2, /* to label */ 6),
    JUMPIF_EQUAL(START_MODE, 9, /* to label */ 6),
    JUMP_LABEL(4),
  LABEL(6), /* = 0x06 */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(1, /* to label */ 7),
    JUMP_LABEL(7),
  LABEL(4), /* = 0x04 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(5), /* = 0x05 */
    { 0x0d, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(8), /* = 0x08 */
    { 0x44, 0x00,  0x0000,  0x0000006b,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs117_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs117_g0_s0_station_sref_script }; /* 0x81f4d94 */

static const struct ScriptCommand s_gs117_g0_s1_lives0_dlg0[] = { /* 0x81f4da0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs117_g0_s1_lives1_dlg0[] = { /* 0x81f4de0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs117_g0_s3_lives0_dlg0[] = { /* 0x81f4e20 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs117_g0_s3_lives1_dlg0[] = { /* 0x81f4e60 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs117_g0_s4_lives0_dlg0[] = { /* 0x81f4ea0 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs117_g0_s4_lives1_dlg0[] = { /* 0x81f4ed0 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs117_g1_s0_lives0_dlg1[] = { /* 0x81f4f00 */
    DEBUGINFO,
    { 0x51, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives0_dlg2[] = { /* 0x81f4f30 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives1_dlg1[] = { /* 0x81f4f50 */
    DEBUGINFO,
    { 0x51, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives1_dlg2[] = { /* 0x81f4f80 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives2_dlg1[] = { /* 0x81f4fa0 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives2_dlg2[] = { /* 0x81f4fd0 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives3_dlg1[] = { /* 0x81f4ff0 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives3_dlg2[] = { /* 0x81f5020 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives4_dlg1[] = { /* 0x81f5040 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives4_dlg2[] = { /* 0x81f5070 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives5_dlg1[] = { /* 0x81f5090 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives5_dlg2[] = { /* 0x81f50c0 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives6_dlg1[] = { /* 0x81f50e0 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives6_dlg2[] = { /* 0x81f5110 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives7_dlg1[] = { /* 0x81f5130 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives7_dlg2[] = { /* 0x81f5160 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives8_dlg1[] = { /* 0x81f5180 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives8_dlg2[] = { /* 0x81f51b0 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives9_dlg1[] = { /* 0x81f51d0 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives9_dlg2[] = { /* 0x81f5200 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives10_dlg1[] = { /* 0x81f5220 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives10_dlg2[] = { /* 0x81f5250 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs117_g1_s0_lives11_dlg1[] = { /* 0x81f5270 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs117_g1_s0_lives11_dlg2[] = { /* 0x81f52a0 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct GroundLivesData s_gs117_g0_s1_lives[] = { /* 0x81f52c0 */
    /*  0 */ {   0,   4,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs117_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  30,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs117_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs117_g0_s3_lives[] = { /* 0x81f52f0 */
    /*  0 */ {   0,   4,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs117_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  30,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs117_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs117_g0_s4_lives[] = { /* 0x81f5320 */
    /*  0 */ {   0,   0,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs117_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  30,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs117_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs117_g1_s0_lives[] = { /* 0x81f5350 */
    /*  0 */ {  14,   0,   0,   0, {  30,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives0_dlg1,
        [2] = s_gs117_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  15,   0,   0,   0, {  20,  29, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives1_dlg1,
        [2] = s_gs117_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  16,   0,   0,   0, {  40,  29, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives2_dlg1,
        [2] = s_gs117_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  17,   0,   0,   0, {  13,  34, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives3_dlg1,
        [2] = s_gs117_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  18,   0,   0,   0, {  47,  34, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives4_dlg1,
        [2] = s_gs117_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  19,   0,   0,   0, {  11,  27, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives5_dlg1,
        [2] = s_gs117_g1_s0_lives5_dlg2,
    } },
    /*  6 */ {  20,   0,   0,   0, {  50,  27, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives6_dlg1,
        [2] = s_gs117_g1_s0_lives6_dlg2,
    } },
    /*  7 */ {  21,   0,   0,   0, {  20,  24, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives7_dlg1,
        [2] = s_gs117_g1_s0_lives7_dlg2,
    } },
    /*  8 */ {  22,   0,   0,   0, {  40,  24, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives8_dlg1,
        [2] = s_gs117_g1_s0_lives8_dlg2,
    } },
    /*  9 */ {  23,   0,   0,   0, {  30,  24, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives9_dlg1,
        [2] = s_gs117_g1_s0_lives9_dlg2,
    } },
    /* 10 */ {  24,   0,   0,   0, {  26,  18, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives10_dlg1,
        [2] = s_gs117_g1_s0_lives10_dlg2,
    } },
    /* 11 */ {  25,   0,   0,   0, {  34,  19, 0, CPOS_HALFTILE }, {
        [1] = s_gs117_g1_s0_lives11_dlg1,
        [2] = s_gs117_g1_s0_lives11_dlg2,
    } },
};

static const struct GroundEventData s_gs117_g0_s0_evts[] = { /* 0x81f5470 */
    /*  0 */ {  60,   1,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  60,   1,   0,   0, {   0,  41, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   1,  42,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   1,  42,   0,   0, {  59,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x81f54a0 */
    &s_gs117_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs117_g0_sectors[] = { /* 0x81f54a4 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs117_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs117_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs117_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs117_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs117_g1_sectors[] = { /* 0x81f556c */
    { LPARRAY(s_gs117_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs117_groups[] = { /* 0x81f5594 */
    { LPARRAY(s_gs117_g0_sectors) },
    { LPARRAY(s_gs117_g1_sectors) },
    {},
};

static const struct GroundLink s_gs117_links[] = { /* 0x81f55ac */
    /* link   0 */ { { /*x*/  31, /*y*/  16, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   1 */ { { /*x*/  23, /*y*/  16, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   2 */ { { /*x*/  27, /*y*/  22, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   3 */ { { /*x*/  37, /*y*/  22, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   4 */ { { /*x*/  17, /*y*/  22, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   5 */ { { /*x*/  47, /*y*/  24, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   6 */ { { /*x*/   8, /*y*/  24, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   7 */ { { /*x*/  44, /*y*/  32, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   8 */ { { /*x*/  10, /*y*/  32, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   9 */ { { /*x*/  37, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link  10 */ { { /*x*/  17, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link  11 */ { { /*x*/  27, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs117 = { LPARRAY(s_gs117_groups), s_gs117_links }; /* 0x81f560c */
