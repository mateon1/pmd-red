









static const struct ScriptCommand s_gs184_g0_s0_station_sref_script[] = { /* 0x82342f4 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000b8,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs184_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs184_g0_s0_station_sref_script }; /* 0x8234360 */

static const struct ScriptCommand s_gs184_g1_s0_station_sref_script[] = { /* 0x823436c */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000b8,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000000f,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x001e,  0x00000004,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs184_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs184_g1_s0_station_sref_script }; /* 0x82343ec */

static const struct ScriptCommand s_gs184_g1_s0_lives0_dlg0[] = { /* 0x82343f8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000005e,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000005b,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000022,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" This is it.\n$n2 is lost in these woods.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n3~27s crew\nshould have a head start on us.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We~27d better hurry.") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" This is it.\n$n2 is lost somewhere in these\nwoods.") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" $n3~27s gang should\nalready be here.") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" We ought to hurry.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" This must be it.\n$n2 is lost somewhere in these\nwoods.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n3~27s gang should\nbe in there already.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" We need to hurry.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0180,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs184_g1_s0_lives1_dlg0[] = { /* 0x8234714 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0180,  0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs184_g2_s0_station_sref_script[] = { /* 0x82347a4 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000b8,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000000f,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x001e,  0x00000004,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs184_g2_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs184_g2_s0_station_sref_script }; /* 0x8234824 */

static const struct ScriptCommand s_gs184_g2_s0_lives0_dlg0[] = { /* 0x8234830 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000005b,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Let~27s move it~2c $n0!") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Even while we~27re dawdling\nhere~2c $n2~27s team...") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hurry! Chop~2c chop!") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" Let~27s hurry~2c $n0!") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" While we~27re stuck\nback here~2c $n2~27s gang will be...") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" We have to hurry!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Let~27s hustle~2c $n0!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" We~27re still stuck back here\nwhile $n2~27s gang is...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Come on~2c hurry!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0180,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs184_g2_s0_lives1_dlg0[] = { /* 0x8234ae8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0180,  0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs184_g1_s0_lives[] = { /* 0x8234b58 */
    /*  0 */ {   0,   4,   0,   0, {  26,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  30,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs184_g2_s0_lives[] = { /* 0x8234b88 */
    /*  0 */ {   0,   2,   0,   0, {  26,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  30,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs184_g1_s0_effs[] = { /* 0x8234bb8 */
    /*  0 */ {   0,   0,   1,   1, {  28,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs184_g2_s0_effs[] = { /* 0x8234bc4 */
    /*  0 */ {   0,   0,   1,   1, {  28,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x8234bd0 */
    &s_gs184_g0_s0_station_sref,
    &s_gs184_g1_s0_station_sref,
    &s_gs184_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs184_g0_sectors[] = { /* 0x8234bdc */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs184_g1_sectors[] = { /* 0x8234c04 */
    { LPARRAY(s_gs184_g1_s0_lives), 0,NULL, LPARRAY(s_gs184_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs184_g2_sectors[] = { /* 0x8234c2c */
    { LPARRAY(s_gs184_g2_s0_lives), 0,NULL, LPARRAY(s_gs184_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs184_groups[] = { /* 0x8234c54 */
    { LPARRAY(s_gs184_g0_sectors) },
    { LPARRAY(s_gs184_g1_sectors) },
    { LPARRAY(s_gs184_g2_sectors) },
};

static const struct GroundLink s_gs184_links[] = { /* 0x8234c6c */
    /* link   0 */ { { /*x*/  26, /*y*/   9, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  30, /*y*/   9, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs184 = { LPARRAY(s_gs184_groups), s_gs184_links }; /* 0x8234c7c */
