








static const struct ScriptCommand s_gs115_g0_s0_station_sref_script[] = { /* 0x81f3968 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000073,  0x00000000, NULL },
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
    { 0x44, 0x00,  0x0000,  0x0000001c,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs115_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs115_g0_s0_station_sref_script }; /* 0x81f3be4 */

static const struct ScriptCommand s_gs115_g0_s1_lives0_dlg0[] = { /* 0x81f3bf0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs115_g0_s1_lives1_dlg0[] = { /* 0x81f3c30 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs115_g0_s3_lives0_dlg0[] = { /* 0x81f3c70 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs115_g0_s3_lives1_dlg0[] = { /* 0x81f3cb0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs115_g0_s4_lives0_dlg0[] = { /* 0x81f3cf0 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs115_g0_s4_lives1_dlg0[] = { /* 0x81f3d20 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs115_g1_s0_lives0_dlg1[] = { /* 0x81f3d50 */
    DEBUGINFO,
    { 0x51, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE1 */ 14),
};

static const struct ScriptCommand s_gs115_g1_s0_lives0_dlg2[] = { /* 0x81f3d80 */
    DEBUGINFO,
    JUMP_SCRIPT(/* HABITAT_TALK */ 12),
};

static const struct GroundLivesData s_gs115_g0_s1_lives[] = { /* 0x81f3da0 */
    /*  0 */ {   0,   4,   0,   0, {  28,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs115_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs115_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs115_g0_s3_lives[] = { /* 0x81f3dd0 */
    /*  0 */ {   0,   4,   0,   0, {  28,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs115_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs115_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs115_g0_s4_lives[] = { /* 0x81f3e00 */
    /*  0 */ {   0,   0,   0,   0, {  28,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs115_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  28,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs115_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs115_g1_s0_lives[] = { /* 0x81f3e30 */
    /*  0 */ {  14,   0,   0,   0, {  28,  14, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs115_g1_s0_lives0_dlg1,
        [2] = s_gs115_g1_s0_lives0_dlg2,
    } },
};

static const struct GroundEventData s_gs115_g0_s0_evts[] = { /* 0x81f3e48 */
    /*  0 */ {  57,   3,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  1 */ {  57,   1,   0,   0, {   0,  38, 0, 0 }, &gFunctionScriptTable[358] },
    /*  2 */ {   3,  39,   0,   0, {   0,   0, 0, 0 }, &gFunctionScriptTable[358] },
    /*  3 */ {   3,  39,   0,   0, {  54,   0, 0, 0 }, &gFunctionScriptTable[358] },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x81f3e78 */
    &s_gs115_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs115_g0_sectors[] = { /* 0x81f3e7c */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs115_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs115_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs115_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs115_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs115_g1_sectors[] = { /* 0x81f3f44 */
    { LPARRAY(s_gs115_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs115_groups[] = { /* 0x81f3f6c */
    { LPARRAY(s_gs115_g0_sectors) },
    { LPARRAY(s_gs115_g1_sectors) },
    {},
};

static const struct GroundLink s_gs115_links[] = { /* 0x81f3f84 */
    /* link   0 */ { { /*x*/  24, /*y*/  12, /*flags*/ 0, 0 }, /*w*/  9, /*h*/  5, /*ret*/ 3, /*?*/ 2 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs115 = { LPARRAY(s_gs115_groups), s_gs115_links }; /* 0x81f3f8c */