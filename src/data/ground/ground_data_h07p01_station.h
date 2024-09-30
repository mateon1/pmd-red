





















static const struct ScriptCommand s_gs122_g0_s0_station_sref_script[] = { /* 0x81f7f30 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x0000007a,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    COND(JUDGE_EQ, 3, /* to label */ 0),
    JUMP_LABEL(1),
    JUMP_LABEL(2),
  LABEL(0), /* = 0x00 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    COND(JUDGE_LE, 2, /* to label */ 3),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    { 0x0c, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x04,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LABEL(4),
  LABEL(6), /* = 0x06 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x00000079,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs122_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs122_g0_s0_station_sref_script }; /* 0x81f81ac */

static const struct ScriptCommand s_gs122_g0_s1_lives0_dlg0[] = { /* 0x81f81b8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs122_g0_s1_lives1_dlg0[] = { /* 0x81f81f8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs122_g0_s3_lives0_dlg0[] = { /* 0x81f8238 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs122_g0_s3_lives1_dlg0[] = { /* 0x81f8278 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs122_g0_s4_lives0_dlg0[] = { /* 0x81f82b8 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs122_g0_s4_lives1_dlg0[] = { /* 0x81f82e8 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs122_g1_s0_lives0_dlg1[] = { /* 0x81f8318 */
    DEBUGINFO,
    { 0x51, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives0_dlg2[] = { /* 0x81f8348 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives1_dlg1[] = { /* 0x81f8368 */
    DEBUGINFO,
    { 0x51, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives1_dlg2[] = { /* 0x81f8398 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives2_dlg1[] = { /* 0x81f83b8 */
    DEBUGINFO,
    { 0x51, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives2_dlg2[] = { /* 0x81f83e8 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives3_dlg1[] = { /* 0x81f8408 */
    DEBUGINFO,
    { 0x51, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives3_dlg2[] = { /* 0x81f8438 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives4_dlg1[] = { /* 0x81f8458 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives4_dlg2[] = { /* 0x81f8488 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives5_dlg1[] = { /* 0x81f84a8 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives5_dlg2[] = { /* 0x81f84d8 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives6_dlg1[] = { /* 0x81f84f8 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives6_dlg2[] = { /* 0x81f8528 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives7_dlg1[] = { /* 0x81f8548 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives7_dlg2[] = { /* 0x81f8578 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives8_dlg1[] = { /* 0x81f8598 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives8_dlg2[] = { /* 0x81f85c8 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives9_dlg1[] = { /* 0x81f85e8 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives9_dlg2[] = { /* 0x81f8618 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives10_dlg1[] = { /* 0x81f8638 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives10_dlg2[] = { /* 0x81f8668 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives11_dlg1[] = { /* 0x81f8688 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives11_dlg2[] = { /* 0x81f86b8 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives12_dlg1[] = { /* 0x81f86d8 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives12_dlg2[] = { /* 0x81f8708 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs122_g1_s0_lives13_dlg1[] = { /* 0x81f8728 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs122_g1_s0_lives13_dlg2[] = { /* 0x81f8758 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct GroundLivesData s_gs122_g0_s1_lives[] = { /* 0x81f8778 */
    /*  0 */ {   0,   4,   0,   0, {  29,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs122_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  29,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs122_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs122_g0_s3_lives[] = { /* 0x81f87a8 */
    /*  0 */ {   0,   4,   0,   0, {  29,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs122_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  29,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs122_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs122_g0_s4_lives[] = { /* 0x81f87d8 */
    /*  0 */ {   0,   0,   0,   0, {  29,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs122_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  29,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs122_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs122_g1_s0_lives[] = { /* 0x81f8808 */
    /*  0 */ {  14,   0,   0,   0, {  22,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives0_dlg1,
        [2] = s_gs122_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  15,   0,   0,   0, {  35,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives1_dlg1,
        [2] = s_gs122_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  16,   0,   0,   0, {  17,  28, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives2_dlg1,
        [2] = s_gs122_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  17,   0,   0,   0, {  40,  27, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives3_dlg1,
        [2] = s_gs122_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  18,   0,   0,   0, {  11,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives4_dlg1,
        [2] = s_gs122_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  19,   0,   0,   0, {  48,  31, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives5_dlg1,
        [2] = s_gs122_g1_s0_lives5_dlg2,
    } },
    /*  6 */ {  20,   0,   0,   0, {   7,  25, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives6_dlg1,
        [2] = s_gs122_g1_s0_lives6_dlg2,
    } },
    /*  7 */ {  21,   0,   0,   0, {  49,  25, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives7_dlg1,
        [2] = s_gs122_g1_s0_lives7_dlg2,
    } },
    /*  8 */ {  22,   0,   0,   0, {  13,  22, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives8_dlg1,
        [2] = s_gs122_g1_s0_lives8_dlg2,
    } },
    /*  9 */ {  23,   0,   0,   0, {  44,  17, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives9_dlg1,
        [2] = s_gs122_g1_s0_lives9_dlg2,
    } },
    /* 10 */ {  24,   0,   0,   0, {  14,  17, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives10_dlg1,
        [2] = s_gs122_g1_s0_lives10_dlg2,
    } },
    /* 11 */ {  25,   0,   0,   0, {  43,  22, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives11_dlg1,
        [2] = s_gs122_g1_s0_lives11_dlg2,
    } },
    /* 12 */ {  26,   0,   0,   0, {  19,  14, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives12_dlg1,
        [2] = s_gs122_g1_s0_lives12_dlg2,
    } },
    /* 13 */ {  27,   0,   0,   0, {  39,  14, 0, CPOS_HALFTILE }, {
        [1] = s_gs122_g1_s0_lives13_dlg1,
        [2] = s_gs122_g1_s0_lives13_dlg2,
    } },
};

static const struct GroundEventData s_gs122_g0_s0_evts[] = { /* 0x81f8958 */
    /*  0 */ {  57,   1,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  57,   1,   0,   0, {   0,  38, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   1,  39,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   1,  39,   0,   0, {  54,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x81f8988 */
    &s_gs122_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs122_g0_sectors[] = { /* 0x81f898c */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs122_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs122_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs122_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs122_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs122_g1_sectors[] = { /* 0x81f8a54 */
    { LPARRAY(s_gs122_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs122_groups[] = { /* 0x81f8a7c */
    { LPARRAY(s_gs122_g0_sectors) },
    { LPARRAY(s_gs122_g1_sectors) },
    {},
};

static const struct GroundLink s_gs122_links[] = { /* 0x81f8a94 */
    /* link   0 */ { { /*x*/  35, /*y*/  12, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   1 */ { { /*x*/  16, /*y*/  12, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   2 */ { { /*x*/  41, /*y*/  14, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   3 */ { { /*x*/  10, /*y*/  14, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   4 */ { { /*x*/  41, /*y*/  20, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   5 */ { { /*x*/  10, /*y*/  20, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   6 */ { { /*x*/  47, /*y*/  22, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   7 */ { { /*x*/   4, /*y*/  22, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   8 */ { { /*x*/  44, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   9 */ { { /*x*/   8, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link  10 */ { { /*x*/  38, /*y*/  26, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link  11 */ { { /*x*/  14, /*y*/  26, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link  12 */ { { /*x*/  32, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link  13 */ { { /*x*/  20, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs122 = { LPARRAY(s_gs122_groups), s_gs122_links }; /* 0x81f8b04 */
