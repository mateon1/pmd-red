







static const struct ScriptCommand s_gs172_g0_s0_station_sref_script[] = { /* 0x82298b4 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000ac,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs172_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs172_g0_s0_station_sref_script }; /* 0x8229920 */

static const struct ScriptCommand s_gs172_g1_s0_station_sref_script[] = { /* 0x822992c */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000ac,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000016,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It~27s a huge tower of\nclouds...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs172_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs172_g1_s0_station_sref_script }; /* 0x8229a20 */


static const struct ScriptCommand s_gs172_g1_s0_eff0_script[] = { /* 0x8229a2c */
    DEBUGINFO,
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x89, 0xe0,  0x004c,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct GroundEffectData s_gs172_g1_s0_effs[] = { /* 0x8229a9c */
    /*  0 */ {   0,   0,   1,   1, {  18,  19, 0, CPOS_HALFTILE }, s_gs172_g1_s0_eff0_script },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x8229aa8 */
    &s_gs172_g0_s0_station_sref,
    &s_gs172_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs172_g0_sectors[] = { /* 0x8229ab0 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs172_g1_sectors[] = { /* 0x8229ad8 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs172_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs172_groups[] = { /* 0x8229b00 */
    { LPARRAY(s_gs172_g0_sectors) },
    { LPARRAY(s_gs172_g1_sectors) },
};

static const struct GroundLink s_gs172_links[] = { /* 0x8229b10 */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs172 = { LPARRAY(s_gs172_groups), s_gs172_links }; /* 0x8229b18 */