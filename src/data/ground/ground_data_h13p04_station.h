











static const struct ScriptCommand s_gs140_g0_s0_station_sref_script[] = { /* 0x8202448 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x0000008c,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x00000003,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs140_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs140_g0_s0_station_sref_script }; /* 0x82026c4 */

static const struct ScriptCommand s_gs140_g0_s1_lives0_dlg0[] = { /* 0x82026d0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs140_g0_s1_lives1_dlg0[] = { /* 0x8202710 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs140_g0_s3_lives0_dlg0[] = { /* 0x8202750 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs140_g0_s3_lives1_dlg0[] = { /* 0x8202790 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs140_g0_s4_lives0_dlg0[] = { /* 0x82027d0 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs140_g0_s4_lives1_dlg0[] = { /* 0x8202800 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs140_g1_s0_lives0_dlg1[] = { /* 0x8202830 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs140_g1_s0_lives0_dlg2[] = { /* 0x8202860 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs140_g1_s0_lives1_dlg1[] = { /* 0x8202880 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs140_g1_s0_lives1_dlg2[] = { /* 0x82028b0 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs140_g1_s0_lives2_dlg1[] = { /* 0x82028d0 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs140_g1_s0_lives2_dlg2[] = { /* 0x8202900 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs140_g1_s0_lives3_dlg1[] = { /* 0x8202920 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs140_g1_s0_lives3_dlg2[] = { /* 0x8202950 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct GroundLivesData s_gs140_g0_s1_lives[] = { /* 0x8202970 */
    /*  0 */ {   0,   4,   0,   0, {  31,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs140_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  31,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs140_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs140_g0_s3_lives[] = { /* 0x82029a0 */
    /*  0 */ {   0,   4,   0,   0, {  31,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs140_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  31,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs140_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs140_g0_s4_lives[] = { /* 0x82029d0 */
    /*  0 */ {   0,   0,   0,   0, {  31,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs140_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  31,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs140_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs140_g1_s0_lives[] = { /* 0x8202a00 */
    /*  0 */ {  14,   0,   0,   0, {  27,  11, 0, CPOS_HALFTILE }, {
        [1] = s_gs140_g1_s0_lives0_dlg1,
        [2] = s_gs140_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  15,   0,   0,   0, {  10,  22, 0, CPOS_HALFTILE }, {
        [1] = s_gs140_g1_s0_lives1_dlg1,
        [2] = s_gs140_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  16,   0,   0,   0, {  53,  22, 0, CPOS_HALFTILE }, {
        [1] = s_gs140_g1_s0_lives2_dlg1,
        [2] = s_gs140_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  17,   0,   0,   0, {  35,  11, 0, CPOS_HALFTILE }, {
        [1] = s_gs140_g1_s0_lives3_dlg1,
        [2] = s_gs140_g1_s0_lives3_dlg2,
    } },
};

static const struct GroundEventData s_gs140_g0_s0_evts[] = { /* 0x8202a60 */
    /*  0 */ {  63,   3,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  63,   1,   0,   0, {   0,  44, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x8202a78 */
    &s_gs140_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs140_g0_sectors[] = { /* 0x8202a7c */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs140_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs140_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs140_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs140_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs140_g1_sectors[] = { /* 0x8202b44 */
    { LPARRAY(s_gs140_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs140_groups[] = { /* 0x8202b6c */
    { LPARRAY(s_gs140_g0_sectors) },
    { LPARRAY(s_gs140_g1_sectors) },
    {},
};

static const struct GroundLink s_gs140_links[] = { /* 0x8202b84 */
    /* link   0 */ { { /*x*/  32, /*y*/   8, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   1 */ { { /*x*/  50, /*y*/  20, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   2 */ { { /*x*/   7, /*y*/  20, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   3 */ { { /*x*/  25, /*y*/   8, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs140 = { LPARRAY(s_gs140_groups), s_gs140_links }; /* 0x8202ba4 */