







static const struct ScriptCommand s_gs8_g0_s0_station_sref_script[] = { /* 0x819a750 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    JUMP_STATION(  1,  0),
  LABEL(2), /* = 0x02 */
    { 0x44, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs8_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs8_g0_s0_station_sref_script }; /* 0x819a83c */


static const struct ScriptCommand s_gs8_g0_s0_evt0_sref_script[] = { /* 0x819a848 */
    DEBUGINFO,
    { 0x01, 0x00, -0x0001,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs8_g0_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs8_g0_s0_evt0_sref_script }; /* 0x819a878 */

static const struct ScriptCommand s_gs8_g0_s1_lives0_dlg0[] = { /* 0x819a884 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs8_g0_s1_lives1_dlg0[] = { /* 0x819a8c4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs8_g1_s0_station_sref_script[] = { /* 0x819a904 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    { 0x22, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs8_g1_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs8_g1_s0_station_sref_script }; /* 0x819a984 */

static const struct ScriptCommand s_gs8_g1_s0_eff0_script[] = { /* 0x819a990 */
    DEBUGINFO,
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3c, 0x1a,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs8_g1_s0_lives0_dlg0[] = { /* 0x819aa10 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs8_g1_s1_station_sref_script[] = { /* 0x819aa80 */
    DEBUGINFO,
    { 0x0f, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs8_g1_s1_station_sref = { 401, 7, NULL /* EVENT_WAKEUP */, s_gs8_g1_s1_station_sref_script }; /* 0x819aad0 */

static const struct ScriptCommand s_gs8_g1_s1_eff0_script[] = { /* 0x819aadc */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x000001b4,  0x00000000, NULL },
    WAIT(30),
    { 0x12, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x0d, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs8_g1_s1_lives0_dlg0[] = { /* 0x819ab4c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct GroundLivesData s_gs8_g0_s1_lives[] = { /* 0x819abbc */
    /*  0 */ {   0,   4,   0,   0, {  25,  26, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs8_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  25,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs8_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs8_g1_s0_lives[] = { /* 0x819abec */
    /*  0 */ {   0,   4,   0,   0, {  25,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs8_g1_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs8_g1_s1_lives[] = { /* 0x819ac04 */
    /*  0 */ {   0,   4,   0,   0, {  25,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs8_g1_s1_lives0_dlg0,
    } },
};

static const struct GroundEffectData s_gs8_g1_s0_effs[] = { /* 0x819ac1c */
    /*  0 */ {   0,   0,   1,   1, {  25,  21, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs8_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs8_g1_s1_effs[] = { /* 0x819ac28 */
    /*  0 */ {   3,   0,   1,   1, {  25,  21, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs8_g1_s1_eff0_script },
};

static const struct GroundEventData s_gs8_g0_s0_evts[] = { /* 0x819ac34 */
    /*  0 */ {   9,   3,   0,   0, {  21,  30, 0, 0 }, &s_gs8_g0_s0_evt0_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x819ac40 */
    &s_gs8_g0_s0_station_sref,
    &s_gs8_g1_s0_station_sref,
    &s_gs8_g1_s1_station_sref,
};

static const struct GroundScriptSector s_gs8_g0_sectors[] = { /* 0x819ac4c */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs8_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs8_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs8_g1_sectors[] = { /* 0x819ac9c */
    { LPARRAY(s_gs8_g1_s0_lives), 0,NULL, LPARRAY(s_gs8_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs8_g1_s1_lives), 0,NULL, LPARRAY(s_gs8_g1_s1_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs8_groups[] = { /* 0x819acec */
    { LPARRAY(s_gs8_g0_sectors) },
    { LPARRAY(s_gs8_g1_sectors) },
};

static const struct GroundLink s_gs8_links[] = { /* 0x819acfc */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs8 = { LPARRAY(s_gs8_groups), s_gs8_links }; /* 0x819ad04 */
