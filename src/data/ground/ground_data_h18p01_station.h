














static const struct ScriptCommand s_gs145_g0_s0_station_sref_script[] = { /* 0x8205514 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000091,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x00000003,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x06,  0x0003,  0x00000002,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    JUMP_LOCAL(/* label */ 2),
  LABEL(1), /* = 0x01 */
    { 0x0c, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x04,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 4),
  LABEL(6), /* = 0x06 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000001,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 7),
  LABEL(4), /* = 0x04 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(5), /* = 0x05 */
    { 0x0d, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(7), /* = 0x07 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(8), /* = 0x08 */
    { 0x44, 0x00,  0x0000,  0x00000070,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs145_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs145_g0_s0_station_sref_script }; /* 0x8205790 */

static const struct ScriptCommand s_gs145_g0_s1_lives0_dlg0[] = { /* 0x820579c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs145_g0_s1_lives1_dlg0[] = { /* 0x82057dc */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs145_g0_s3_lives0_dlg0[] = { /* 0x820581c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs145_g0_s3_lives1_dlg0[] = { /* 0x820585c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs145_g0_s4_lives0_dlg0[] = { /* 0x820589c */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs145_g0_s4_lives1_dlg0[] = { /* 0x82058cc */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs145_g1_s0_lives0_dlg1[] = { /* 0x82058fc */
    DEBUGINFO,
    { 0x51, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs145_g1_s0_lives0_dlg2[] = { /* 0x820592c */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs145_g1_s0_lives1_dlg1[] = { /* 0x820594c */
    DEBUGINFO,
    { 0x51, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs145_g1_s0_lives1_dlg2[] = { /* 0x820597c */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs145_g1_s0_lives2_dlg1[] = { /* 0x820599c */
    DEBUGINFO,
    { 0x51, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs145_g1_s0_lives2_dlg2[] = { /* 0x82059cc */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs145_g1_s0_lives3_dlg1[] = { /* 0x82059ec */
    DEBUGINFO,
    { 0x51, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs145_g1_s0_lives3_dlg2[] = { /* 0x8205a1c */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs145_g1_s0_lives4_dlg1[] = { /* 0x8205a3c */
    DEBUGINFO,
    { 0x51, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs145_g1_s0_lives4_dlg2[] = { /* 0x8205a6c */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs145_g1_s0_lives5_dlg1[] = { /* 0x8205a8c */
    DEBUGINFO,
    { 0x51, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs145_g1_s0_lives5_dlg2[] = { /* 0x8205abc */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs145_g1_s0_lives6_dlg1[] = { /* 0x8205adc */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs145_g1_s0_lives6_dlg2[] = { /* 0x8205b0c */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct GroundLivesData s_gs145_g0_s1_lives[] = { /* 0x8205b2c */
    /*  0 */ {   0,   4,   0,   0, {  29,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs145_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs145_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs145_g0_s3_lives[] = { /* 0x8205b5c */
    /*  0 */ {   0,   4,   0,   0, {  29,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs145_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs145_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs145_g0_s4_lives[] = { /* 0x8205b8c */
    /*  0 */ {   0,   0,   0,   0, {  29,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs145_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs145_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs145_g1_s0_lives[] = { /* 0x8205bbc */
    /*  0 */ {  14,   0,   0,   0, {  29,  31, 0, CPOS_HALFTILE }, {
        [1] = s_gs145_g1_s0_lives0_dlg1,
        [2] = s_gs145_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  15,   0,   0,   0, {  23,  27, 0, CPOS_HALFTILE }, {
        [1] = s_gs145_g1_s0_lives1_dlg1,
        [2] = s_gs145_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  16,   0,   0,   0, {  34,  27, 0, CPOS_HALFTILE }, {
        [1] = s_gs145_g1_s0_lives2_dlg1,
        [2] = s_gs145_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  17,   0,   0,   0, {  29,  24, 0, CPOS_HALFTILE }, {
        [1] = s_gs145_g1_s0_lives3_dlg1,
        [2] = s_gs145_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  18,   0,   0,   0, {  19,  19, 0, CPOS_HALFTILE }, {
        [1] = s_gs145_g1_s0_lives4_dlg1,
        [2] = s_gs145_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  19,   0,   0,   0, {  20,  34, 0, CPOS_HALFTILE }, {
        [1] = s_gs145_g1_s0_lives5_dlg1,
        [2] = s_gs145_g1_s0_lives5_dlg2,
    } },
    /*  6 */ {  20,   0,   0,   0, {  39,  34, 0, CPOS_HALFTILE }, {
        [1] = s_gs145_g1_s0_lives6_dlg1,
        [2] = s_gs145_g1_s0_lives6_dlg2,
    } },
};

static const struct GroundEventData s_gs145_g0_s0_evts[] = { /* 0x8205c64 */
    /*  0 */ {  60,   3,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  60,   1,   0,   0, {   0,  41, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   3,  42,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   3,  42,   0,   0, {  57,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x8205c94 */
    &s_gs145_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs145_g0_sectors[] = { /* 0x8205c98 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs145_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs145_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs145_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs145_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs145_g1_sectors[] = { /* 0x8205d60 */
    { LPARRAY(s_gs145_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs145_groups[] = { /* 0x8205d88 */
    { LPARRAY(s_gs145_g0_sectors) },
    { LPARRAY(s_gs145_g1_sectors) },
    {},
};

static const struct GroundLink s_gs145_links[] = { /* 0x8205da0 */
    /* link   0 */ { { /*x*/  16, /*y*/  16, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   1 */ { { /*x*/  26, /*y*/  22, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   2 */ { { /*x*/  35, /*y*/  31, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   3 */ { { /*x*/  17, /*y*/  31, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   4 */ { { /*x*/  20, /*y*/  24, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   5 */ { { /*x*/  32, /*y*/  24, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   6 */ { { /*x*/  26, /*y*/  28, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs145 = { LPARRAY(s_gs145_groups), s_gs145_links }; /* 0x8205dd8 */
