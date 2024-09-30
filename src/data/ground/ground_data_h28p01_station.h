













static const struct ScriptCommand s_gs156_g0_s0_station_sref_script[] = { /* 0x820b8cc */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x0000009c,  0x00000000, NULL },
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
    { 0xb3, 0x04,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x00000074,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs156_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs156_g0_s0_station_sref_script }; /* 0x820bb48 */

static const struct ScriptCommand s_gs156_g0_s1_lives0_dlg0[] = { /* 0x820bb54 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs156_g0_s1_lives1_dlg0[] = { /* 0x820bb94 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs156_g0_s3_lives0_dlg0[] = { /* 0x820bbd4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs156_g0_s3_lives1_dlg0[] = { /* 0x820bc14 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs156_g0_s4_lives0_dlg0[] = { /* 0x820bc54 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs156_g0_s4_lives1_dlg0[] = { /* 0x820bc84 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs156_g1_s0_lives0_dlg1[] = { /* 0x820bcb4 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs156_g1_s0_lives0_dlg2[] = { /* 0x820bce4 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs156_g1_s0_lives1_dlg1[] = { /* 0x820bd04 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs156_g1_s0_lives1_dlg2[] = { /* 0x820bd34 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs156_g1_s0_lives2_dlg1[] = { /* 0x820bd54 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs156_g1_s0_lives2_dlg2[] = { /* 0x820bd84 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs156_g1_s0_lives3_dlg1[] = { /* 0x820bda4 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs156_g1_s0_lives3_dlg2[] = { /* 0x820bdd4 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs156_g1_s0_lives4_dlg1[] = { /* 0x820bdf4 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs156_g1_s0_lives4_dlg2[] = { /* 0x820be24 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct ScriptCommand s_gs156_g1_s0_lives5_dlg1[] = { /* 0x820be44 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(HABITAT_MOVE1),
};

static const struct ScriptCommand s_gs156_g1_s0_lives5_dlg2[] = { /* 0x820be74 */
    DEBUGINFO,
    JUMP_SCRIPT(HABITAT_TALK),
};

static const struct GroundLivesData s_gs156_g0_s1_lives[] = { /* 0x820be94 */
    /*  0 */ {   0,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs156_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs156_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs156_g0_s3_lives[] = { /* 0x820bec4 */
    /*  0 */ {   0,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs156_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs156_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs156_g0_s4_lives[] = { /* 0x820bef4 */
    /*  0 */ {   0,   0,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs156_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs156_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs156_g1_s0_lives[] = { /* 0x820bf24 */
    /*  0 */ {  14,   0,   0,   0, {  31,  22, 0, CPOS_HALFTILE }, {
        [1] = s_gs156_g1_s0_lives0_dlg1,
        [2] = s_gs156_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  15,   0,   0,   0, {  15,  18, 0, CPOS_HALFTILE }, {
        [1] = s_gs156_g1_s0_lives1_dlg1,
        [2] = s_gs156_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  16,   0,   0,   0, {  50,   8, 0, CPOS_HALFTILE }, {
        [1] = s_gs156_g1_s0_lives2_dlg1,
        [2] = s_gs156_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  17,   0,   0,   0, {  32,   8, 0, CPOS_HALFTILE }, {
        [1] = s_gs156_g1_s0_lives3_dlg1,
        [2] = s_gs156_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  18,   0,   0,   0, {  25,  13, 0, CPOS_HALFTILE }, {
        [1] = s_gs156_g1_s0_lives4_dlg1,
        [2] = s_gs156_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  19,   0,   0,   0, {  33,  14, 0, CPOS_HALFTILE }, {
        [1] = s_gs156_g1_s0_lives5_dlg1,
        [2] = s_gs156_g1_s0_lives5_dlg2,
    } },
};

static const struct GroundEventData s_gs156_g0_s0_evts[] = { /* 0x820bfb4 */
    /*  0 */ {  60,   1,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  60,   1,   0,   0, {   0,  38, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   3,  39,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   3,  39,   0,   0, {  57,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x820bfe4 */
    &s_gs156_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs156_g0_sectors[] = { /* 0x820bfe8 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs156_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs156_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs156_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs156_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs156_g1_sectors[] = { /* 0x820c0b0 */
    { LPARRAY(s_gs156_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs156_groups[] = { /* 0x820c0d8 */
    { LPARRAY(s_gs156_g0_sectors) },
    { LPARRAY(s_gs156_g1_sectors) },
    {},
};

static const struct GroundLink s_gs156_links[] = { /* 0x820c0f0 */
    /* link   0 */ { { /*x*/  47, /*y*/   5, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   1 */ { { /*x*/  12, /*y*/  15, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   2 */ { { /*x*/  29, /*y*/   6, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   3 */ { { /*x*/  30, /*y*/  13, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   4 */ { { /*x*/  22, /*y*/  11, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   5 */ { { /*x*/  29, /*y*/  20, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs156 = { LPARRAY(s_gs156_groups), s_gs156_links }; /* 0x820c120 */
