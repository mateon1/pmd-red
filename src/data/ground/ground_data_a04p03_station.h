








static const struct ScriptCommand s_gs173_g0_s0_station_sref_script[] = { /* 0x8229b2c */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000ad,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs173_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs173_g0_s0_station_sref_script }; /* 0x8229b98 */

static const struct ScriptCommand s_gs173_g1_s0_station_sref_script[] = { /* 0x8229ba4 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000ad,  0x00000000, NULL },
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000001, NULL },
    { 0x44, 0x00,  0x0000,  0x00000013,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001fc,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    { 0x4e, 0x00,  0x003c,  0x000001fc,  0x00000000, NULL },
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs173_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs173_g1_s0_station_sref_script }; /* 0x8229c74 */

static const struct ScriptCommand s_gs173_g1_s0_eff0_script[] = { /* 0x8229c80 */
    DEBUGINFO,
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x00b3,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs173_g2_s0_station_sref_script[] = { /* 0x8229cd0 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000ad,  0x00000000, NULL },
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000001a,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001fc,  0x00000000, NULL },
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000001, NULL },
    { 0x22, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x00d2,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4e, 0x00,  0x001e,  0x000001fc,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs173_g2_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs173_g2_s0_station_sref_script }; /* 0x8229d90 */

static const struct ScriptCommand s_gs173_g2_s0_eff0_script[] = { /* 0x8229d9c */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x30,  0x0300,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs173_g3_s0_station_sref_script[] = { /* 0x8229e1c */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000ad,  0x00000000, NULL },
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000001a,  0x00000000, NULL },
    { 0x97, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x00,  0x0005,  0x00000010,  0x00ffffff, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x28, 0x01,  0x0005,  0x00000008,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x00,  0x0005,  0x00000008,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x28, 0x01,  0x0005,  0x00000008,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x00,  0x0005,  0x00000008,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x28, 0x01,  0x0005,  0x0000002d,  0x00ffffff, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs173_g3_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs173_g3_s0_station_sref_script }; /* 0x8229f4c */

static const struct ScriptCommand s_gs173_g3_s0_eff0_script[] = { /* 0x8229f58 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x18,  0x0400,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs173_g3_s0_eff1_script[] = { /* 0x8229fd8 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000135,  0x00000000, NULL },
    HALT,
};

static const struct GroundEffectData s_gs173_g1_s0_effs[] = { /* 0x822a008 */
    /*  0 */ {   0,   0,   1,   1, {  17,  41, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs173_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs173_g2_s0_effs[] = { /* 0x822a014 */
    /*  0 */ {   0,   0,   1,   1, {  17,  41, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs173_g2_s0_eff0_script },
};

static const struct GroundEffectData s_gs173_g3_s0_effs[] = { /* 0x822a020 */
    /*  0 */ {   0,   0,   1,   1, {  17,  36, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs173_g3_s0_eff0_script },
    /*  1 */ {   3,   0,   1,   1, {  18,  33, 0, CPOS_HALFTILE }, s_gs173_g3_s0_eff1_script },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x822a038 */
    &s_gs173_g0_s0_station_sref,
    &s_gs173_g1_s0_station_sref,
    &s_gs173_g2_s0_station_sref,
    &s_gs173_g3_s0_station_sref,
};

static const struct GroundScriptSector s_gs173_g0_sectors[] = { /* 0x822a048 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs173_g1_sectors[] = { /* 0x822a070 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs173_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs173_g2_sectors[] = { /* 0x822a098 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs173_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs173_g3_sectors[] = { /* 0x822a0c0 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs173_g3_s0_effs), 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptGroup s_gs173_groups[] = { /* 0x822a0e8 */
    { LPARRAY(s_gs173_g0_sectors) },
    { LPARRAY(s_gs173_g1_sectors) },
    { LPARRAY(s_gs173_g2_sectors) },
    { LPARRAY(s_gs173_g3_sectors) },
};

static const struct GroundLink s_gs173_links[] = { /* 0x822a108 */
    /* link   0 */ { { /*x*/  18, /*y*/   6, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs173 = { LPARRAY(s_gs173_groups), s_gs173_links }; /* 0x822a110 */