

















static const struct ScriptCommand s_gs132_g0_s0_station_sref_script[] = { /* 0x81fe0fc */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000084,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x00000010,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs132_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs132_g0_s0_station_sref_script }; /* 0x81fe378 */

static const struct ScriptCommand s_gs132_g0_s1_lives0_dlg0[] = { /* 0x81fe384 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs132_g0_s1_lives1_dlg0[] = { /* 0x81fe3c4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs132_g0_s3_lives0_dlg0[] = { /* 0x81fe404 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs132_g0_s3_lives1_dlg0[] = { /* 0x81fe444 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs132_g0_s4_lives0_dlg0[] = { /* 0x81fe484 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs132_g0_s4_lives1_dlg0[] = { /* 0x81fe4b4 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs132_g1_s0_lives0_dlg1[] = { /* 0x81fe4e4 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives0_dlg2[] = { /* 0x81fe514 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives1_dlg1[] = { /* 0x81fe534 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives1_dlg2[] = { /* 0x81fe564 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives2_dlg1[] = { /* 0x81fe584 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives2_dlg2[] = { /* 0x81fe5b4 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives3_dlg1[] = { /* 0x81fe5d4 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives3_dlg2[] = { /* 0x81fe604 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives4_dlg1[] = { /* 0x81fe624 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives4_dlg2[] = { /* 0x81fe654 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives5_dlg1[] = { /* 0x81fe674 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives5_dlg2[] = { /* 0x81fe6a4 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives6_dlg1[] = { /* 0x81fe6c4 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives6_dlg2[] = { /* 0x81fe6f4 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives7_dlg1[] = { /* 0x81fe714 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives7_dlg2[] = { /* 0x81fe744 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives8_dlg1[] = { /* 0x81fe764 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives8_dlg2[] = { /* 0x81fe794 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs132_g1_s0_lives9_dlg1[] = { /* 0x81fe7b4 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs132_g1_s0_lives9_dlg2[] = { /* 0x81fe7e4 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct GroundLivesData s_gs132_g0_s1_lives[] = { /* 0x81fe804 */
    /*  0 */ {   0,   4,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs132_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  30,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs132_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs132_g0_s3_lives[] = { /* 0x81fe834 */
    /*  0 */ {   0,   4,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs132_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  30,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs132_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs132_g0_s4_lives[] = { /* 0x81fe864 */
    /*  0 */ {   0,   0,   0,   0, {  30,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs132_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  30,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs132_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs132_g1_s0_lives[] = { /* 0x81fe894 */
    /*  0 */ {  14,   0,   0,   0, {  30,  10, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives0_dlg1,
        [2] = s_gs132_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  15,   0,   0,   0, {  34,   7, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives1_dlg1,
        [2] = s_gs132_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  16,   0,   0,   0, {  39,  15, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives2_dlg1,
        [2] = s_gs132_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  17,   0,   0,   0, {  35,  19, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives3_dlg1,
        [2] = s_gs132_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  18,   0,   0,   0, {  21,  26, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives4_dlg1,
        [2] = s_gs132_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  19,   0,   0,   0, {   6,  35, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives5_dlg1,
        [2] = s_gs132_g1_s0_lives5_dlg2,
    } },
    /*  6 */ {  20,   0,   0,   0, {  52,  35, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives6_dlg1,
        [2] = s_gs132_g1_s0_lives6_dlg2,
    } },
    /*  7 */ {  21,   0,   0,   0, {   6,  17, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives7_dlg1,
        [2] = s_gs132_g1_s0_lives7_dlg2,
    } },
    /*  8 */ {  22,   0,   0,   0, {  55,  23, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives8_dlg1,
        [2] = s_gs132_g1_s0_lives8_dlg2,
    } },
    /*  9 */ {  23,   0,   0,   0, {   9,  11, 0, CPOS_HALFTILE }, {
        [1] = s_gs132_g1_s0_lives9_dlg1,
        [2] = s_gs132_g1_s0_lives9_dlg2,
    } },
};

static const struct GroundEventData s_gs132_g0_s0_evts[] = { /* 0x81fe984 */
    /*  0 */ {  60,   1,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  60,   1,   0,   0, {   0,  41, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   1,  42,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   1,  42,   0,   0, {  59,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x81fe9b4 */
    &s_gs132_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs132_g0_sectors[] = { /* 0x81fe9b8 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs132_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs132_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs132_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs132_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs132_g1_sectors[] = { /* 0x81fea80 */
    { LPARRAY(s_gs132_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs132_groups[] = { /* 0x81feaa8 */
    { LPARRAY(s_gs132_g0_sectors) },
    { LPARRAY(s_gs132_g1_sectors) },
    {},
};

static const struct GroundLink s_gs132_links[] = { /* 0x81feac0 */
    /* link   0 */ { { /*x*/   6, /*y*/   8, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   1 */ { { /*x*/  51, /*y*/  21, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   2 */ { { /*x*/   4, /*y*/  14, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   3 */ { { /*x*/  49, /*y*/  32, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   4 */ { { /*x*/   4, /*y*/  32, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   5 */ { { /*x*/  18, /*y*/  23, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   6 */ { { /*x*/  32, /*y*/  18, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   7 */ { { /*x*/  35, /*y*/  12, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   8 */ { { /*x*/  33, /*y*/   5, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   9 */ { { /*x*/  27, /*y*/   9, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs132 = { LPARRAY(s_gs132_groups), s_gs132_links }; /* 0x81feb10 */