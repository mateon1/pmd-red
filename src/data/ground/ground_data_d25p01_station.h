











static const struct ScriptCommand s_gs222_g0_s0_station_sref_script[] = { /* 0x826db18 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000de,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs222_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs222_g0_s0_station_sref_script }; /* 0x826db84 */

static const struct ScriptCommand s_gs222_g1_s0_station_sref_script[] = { /* 0x826db90 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000de,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000072,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x28, 0x01,  0x0001,  0x0000003c,  0x00ffffff, NULL },
    RET,
};

static const struct ScriptRef s_gs222_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs222_g1_s0_station_sref_script }; /* 0x826dc20 */

static const struct ScriptCommand s_gs222_g1_s0_lives0_dlg0[] = { /* 0x826dc2c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Look. Over there.\nLet~27s get this rescue done.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Look~2c there~27s our Pokémon.\nWe can get this rescue done.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x00cc,  0x00000001,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000003,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs222_g1_s0_lives1_dlg0[] = { /* 0x826ddc0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x00cc,  0x00000003,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000005,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs222_g1_s0_lives2_dlg0[] = { /* 0x826de50 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs222_g1_s0_lives[] = { /* 0x826de90 */
    /*  0 */ {   0,   4,   0,   0, {  20,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs222_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  24,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs222_g1_s0_lives1_dlg0,
    } },
    /*  2 */ { 124,   0,   0,   0, {  22,  17, 0, CPOS_HALFTILE }, {
        [0] = s_gs222_g1_s0_lives2_dlg0,
    } },
};

static const struct GroundEffectData s_gs222_g1_s0_effs[] = { /* 0x826ded8 */
    /*  0 */ {   0,   0,   1,   1, {  22,  20, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x826dee4 */
    &s_gs222_g0_s0_station_sref,
    &s_gs222_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs222_g0_sectors[] = { /* 0x826deec */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs222_g1_sectors[] = { /* 0x826df14 */
    { LPARRAY(s_gs222_g1_s0_lives), 0,NULL, LPARRAY(s_gs222_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs222_groups[] = { /* 0x826df3c */
    { LPARRAY(s_gs222_g0_sectors) },
    { LPARRAY(s_gs222_g1_sectors) },
};

static const struct GroundLink s_gs222_links[] = { /* 0x826df4c */
    /* link   0 */ { { /*x*/  20, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  20, /*y*/  19, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  24, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/  24, /*y*/  19, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs222 = { LPARRAY(s_gs222_groups), s_gs222_links }; /* 0x826df6c */