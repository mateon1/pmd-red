














static const struct ScriptCommand s_gs130_g0_s0_station_sref_script[] = { /* 0x81fcdc0 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000082,  0x00000000, NULL },
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

static const struct ScriptRef s_gs130_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs130_g0_s0_station_sref_script }; /* 0x81fd03c */

static const struct ScriptCommand s_gs130_g0_s1_lives0_dlg0[] = { /* 0x81fd048 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs130_g0_s1_lives1_dlg0[] = { /* 0x81fd098 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs130_g0_s3_lives0_dlg0[] = { /* 0x81fd0e8 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs130_g0_s3_lives1_dlg0[] = { /* 0x81fd138 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs130_g0_s4_lives0_dlg0[] = { /* 0x81fd188 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs130_g0_s4_lives1_dlg0[] = { /* 0x81fd1c8 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs130_g1_s0_lives0_dlg1[] = { /* 0x81fd208 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x51, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs130_g1_s0_lives0_dlg2[] = { /* 0x81fd248 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs130_g1_s0_lives1_dlg1[] = { /* 0x81fd268 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x51, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs130_g1_s0_lives1_dlg2[] = { /* 0x81fd2a8 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs130_g1_s0_lives2_dlg1[] = { /* 0x81fd2c8 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x51, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs130_g1_s0_lives2_dlg2[] = { /* 0x81fd308 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs130_g1_s0_lives3_dlg1[] = { /* 0x81fd328 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x51, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs130_g1_s0_lives3_dlg2[] = { /* 0x81fd368 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs130_g1_s0_lives4_dlg1[] = { /* 0x81fd388 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x51, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs130_g1_s0_lives4_dlg2[] = { /* 0x81fd3c8 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs130_g1_s0_lives5_dlg1[] = { /* 0x81fd3e8 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x51, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs130_g1_s0_lives5_dlg2[] = { /* 0x81fd428 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct ScriptCommand s_gs130_g1_s0_lives6_dlg1[] = { /* 0x81fd448 */
    DEBUGINFO,
    { 0x52, 0x00,  0x0000,  0x00004000,  0x00000000, NULL },
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs130_g1_s0_lives6_dlg2[] = { /* 0x81fd488 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct GroundLivesData s_gs130_g0_s1_lives[] = { /* 0x81fd4a8 */
    /*  0 */ {   0,   4,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs130_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs130_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs130_g0_s3_lives[] = { /* 0x81fd4d8 */
    /*  0 */ {   0,   4,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs130_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs130_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs130_g0_s4_lives[] = { /* 0x81fd508 */
    /*  0 */ {   0,   0,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs130_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs130_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs130_g1_s0_lives[] = { /* 0x81fd538 */
    /*  0 */ {  14,   0,   0,   0, {  26,  25, 0, CPOS_HALFTILE }, {
        [1] = s_gs130_g1_s0_lives0_dlg1,
        [2] = s_gs130_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  15,   0,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [1] = s_gs130_g1_s0_lives1_dlg1,
        [2] = s_gs130_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  16,   0,   0,   0, {  45,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs130_g1_s0_lives2_dlg1,
        [2] = s_gs130_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  17,   0,   0,   0, {  30,  11, 0, CPOS_HALFTILE }, {
        [1] = s_gs130_g1_s0_lives3_dlg1,
        [2] = s_gs130_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  18,   0,   0,   0, {  52,  25, 0, CPOS_HALFTILE }, {
        [1] = s_gs130_g1_s0_lives4_dlg1,
        [2] = s_gs130_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  19,   0,   0,   0, {   9,  14, 0, CPOS_HALFTILE }, {
        [1] = s_gs130_g1_s0_lives5_dlg1,
        [2] = s_gs130_g1_s0_lives5_dlg2,
    } },
    /*  6 */ {  20,   0,   0,   0, {  53,  18, 0, CPOS_HALFTILE }, {
        [1] = s_gs130_g1_s0_lives6_dlg1,
        [2] = s_gs130_g1_s0_lives6_dlg2,
    } },
};

static const struct GroundEventData s_gs130_g0_s0_evts[] = { /* 0x81fd5e0 */
    /*  0 */ {  60,   1,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  60,   1,   0,   0, {   0,  41, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   3,  42,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   1,  42,   0,   0, {  59,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x81fd610 */
    &s_gs130_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs130_g0_sectors[] = { /* 0x81fd614 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs130_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs130_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs130_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs130_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs130_g1_sectors[] = { /* 0x81fd6dc */
    { LPARRAY(s_gs130_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs130_groups[] = { /* 0x81fd704 */
    { LPARRAY(s_gs130_g0_sectors) },
    { LPARRAY(s_gs130_g1_sectors) },
    {},
};

static const struct GroundLink s_gs130_links[] = { /* 0x81fd71c */
    /* link   0 */ { { /*x*/  50, /*y*/  16, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   1 */ { { /*x*/   6, /*y*/  12, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   2 */ { { /*x*/  49, /*y*/  22, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   3 */ { { /*x*/  27, /*y*/   9, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   4 */ { { /*x*/  43, /*y*/  27, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   5 */ { { /*x*/  12, /*y*/  30, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
    /* link   6 */ { { /*x*/  23, /*y*/  23, /*flags*/ 0, 0 }, /*w*/  6, /*h*/  6, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs130 = { LPARRAY(s_gs130_groups), s_gs130_links }; /* 0x81fd754 */