







static const struct ScriptCommand s_gs7_g0_s0_station_sref_script[] = { /* 0x819a3d8 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000007,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x04,  0x0000,  0x00000004,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x00000004,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0002,  0x00000005,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
    JUMP_LOCAL(/* label */ 0),
  LABEL(1), /* = 0x01 */
    { 0x0c, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
  LABEL(2), /* = 0x02 */
    { 0x0c, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
  LABEL(0), /* = 0x00 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003,  0x00000006,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 4),
  LABEL(4), /* = 0x04 */
    { 0x44, 0x00,  0x0000,  0x0000006e,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs7_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs7_g0_s0_station_sref_script }; /* 0x819a574 */

static const struct ScriptCommand s_gs7_g0_s0_evt0_sref_script[] = { /* 0x819a580 */
    DEBUGINFO,
    { 0x01, 0x00, -0x0001,  0x00000006,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs7_g0_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs7_g0_s0_evt0_sref_script }; /* 0x819a5b0 */

static const struct ScriptCommand s_gs7_g0_s1_lives0_dlg0[] = { /* 0x819a5bc */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs7_g0_s1_lives1_dlg0[] = { /* 0x819a5fc */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct GroundLivesData s_gs7_g0_s1_lives[] = { /* 0x819a63c */
    /*  0 */ {   0,   4,   0,   0, {  31,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs7_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  31,  36, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs7_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs7_g1_s0_lives[] = { /* 0x819a66c */
    /*  0 */ {  43,   0,   0,   0, {  27,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  1 */ {  76,   0,   0,   0, {  39,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundEventData s_gs7_g0_s0_evts[] = { /* 0x819a69c */
    /*  0 */ {   9,   3,   0,   0, {  27,  38, 0, 0 }, &s_gs7_g0_s0_evt0_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x819a6a8 */
    &s_gs7_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs7_g0_sectors[] = { /* 0x819a6ac */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs7_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs7_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs7_g1_sectors[] = { /* 0x819a6fc */
    { LPARRAY(s_gs7_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs7_groups[] = { /* 0x819a724 */
    { LPARRAY(s_gs7_g0_sectors) },
    { LPARRAY(s_gs7_g1_sectors) },
};

static const struct GroundLink s_gs7_links[] = { /* 0x819a734 */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs7 = { LPARRAY(s_gs7_groups), s_gs7_links }; /* 0x819a73c */
