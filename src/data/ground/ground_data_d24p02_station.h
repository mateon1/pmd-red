







static const struct ScriptCommand s_gs221_g0_s0_station_sref_script[] = { /* 0x826d734 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000dd,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs221_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs221_g0_s0_station_sref_script }; /* 0x826d7a0 */

static const struct ScriptCommand s_gs221_g1_s0_station_sref_script[] = { /* 0x826d7ac */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000dd,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000015,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs221_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs221_g1_s0_station_sref_script }; /* 0x826d81c */

static const struct ScriptCommand s_gs221_g1_s0_eff0_script[] = { /* 0x826d828 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs221_g1_s0_lives0_dlg0[] = { /* 0x826d898 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x50,  0x0099,  0x00000004,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" You~27re going to the\n#CDMurky Cave#R?") },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" Don~27t forget to take me~2c\nkekeh!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x50,  0x0080,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs221_g1_s0_lives1_dlg0[] = { /* 0x826d9d8 */
    DEBUGINFO,
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x58,  0x0100,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x40,  0x0080,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs221_g1_s0_lives[] = { /* 0x826da58 */
    /*  0 */ {   0,   2,   0,   0, {  25,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs221_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  91,   4,   0,   0, {  25,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs221_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs221_g1_s0_effs[] = { /* 0x826da88 */
    /*  0 */ {   0,   0,   1,   1, {  25,  17, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs221_g1_s0_eff0_script },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x826da94 */
    &s_gs221_g0_s0_station_sref,
    &s_gs221_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs221_g0_sectors[] = { /* 0x826da9c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs221_g1_sectors[] = { /* 0x826dac4 */
    { LPARRAY(s_gs221_g1_s0_lives), 0,NULL, LPARRAY(s_gs221_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs221_groups[] = { /* 0x826daec */
    { LPARRAY(s_gs221_g0_sectors) },
    { LPARRAY(s_gs221_g1_sectors) },
};

static const struct GroundLink s_gs221_links[] = { /* 0x826dafc */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs221 = { LPARRAY(s_gs221_groups), s_gs221_links }; /* 0x826db04 */
