








static const struct ScriptCommand s_gs154_g0_s0_station_sref_script[] = { /* 0x820ac5c */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x0000009a,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs154_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs154_g0_s0_station_sref_script }; /* 0x820aed8 */

static const struct ScriptCommand s_gs154_g0_s1_lives0_dlg0[] = { /* 0x820aee4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs154_g0_s1_lives1_dlg0[] = { /* 0x820af24 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs154_g0_s3_lives0_dlg0[] = { /* 0x820af64 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs154_g0_s3_lives1_dlg0[] = { /* 0x820afa4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs154_g0_s4_lives0_dlg0[] = { /* 0x820afe4 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs154_g0_s4_lives1_dlg0[] = { /* 0x820b014 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs154_g1_s0_lives0_dlg1[] = { /* 0x820b044 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs154_g1_s0_lives0_dlg2[] = { /* 0x820b074 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct GroundLivesData s_gs154_g0_s1_lives[] = { /* 0x820b094 */
    /*  0 */ {   0,   4,   0,   0, {  30,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs154_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs154_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs154_g0_s3_lives[] = { /* 0x820b0c4 */
    /*  0 */ {   0,   4,   0,   0, {  30,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs154_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs154_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs154_g0_s4_lives[] = { /* 0x820b0f4 */
    /*  0 */ {   0,   0,   0,   0, {  30,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs154_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs154_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs154_g1_s0_lives[] = { /* 0x820b124 */
    /*  0 */ {  14,   0,   0,   0, {  30,  20, 0, CPOS_HALFTILE }, {
        [1] = s_gs154_g1_s0_lives0_dlg1,
        [2] = s_gs154_g1_s0_lives0_dlg2,
    } },
};

static const struct GroundEventData s_gs154_g0_s0_evts[] = { /* 0x820b13c */
    /*  0 */ {  60,   3,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  60,   1,   0,   0, {   0,  38, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   3,  39,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   3,  39,   0,   0, {  57,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x820b16c */
    &s_gs154_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs154_g0_sectors[] = { /* 0x820b170 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs154_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs154_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs154_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs154_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs154_g1_sectors[] = { /* 0x820b238 */
    { LPARRAY(s_gs154_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs154_groups[] = { /* 0x820b260 */
    { LPARRAY(s_gs154_g0_sectors) },
    { LPARRAY(s_gs154_g1_sectors) },
    {},
};

static const struct GroundLink s_gs154_links[] = { /* 0x820b278 */
    /* link   0 */ { { /*x*/  27, /*y*/  17, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs154 = { LPARRAY(s_gs154_groups), s_gs154_links }; /* 0x820b280 */