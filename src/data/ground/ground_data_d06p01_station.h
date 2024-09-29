










static const struct ScriptCommand s_gs188_g0_s0_station_sref_script[] = { /* 0x8239178 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000bc,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs188_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs188_g0_s0_station_sref_script }; /* 0x82391e4 */

static const struct ScriptCommand s_gs188_g1_s0_station_sref_script[] = { /* 0x82391f0 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000bc,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000006f,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000007,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs188_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs188_g1_s0_station_sref_script }; /* 0x8239280 */

static const struct ScriptCommand s_gs188_g1_s0_eff0_script[] = { /* 0x823928c */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs188_g1_s0_lives0_dlg0[] = { /* 0x82392cc */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000060,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x00000055,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" This must be the foot of\n#CDMt. Thunder#R...") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I wonder if $n3~27s\nteam is already on the way...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" This is the foot of\n#CDMt. Thunder#R.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" I wonder...\nIs $n3~27s team already on\ntheir way?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n2~2c huh...#W\nIt sounds really tough.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n2...#W\nIt sounds very tough...") },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000005,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Brr... I~27m shaking...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But I can~27t be spooked\nby this.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Our mission is to rescue\n$n4.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0~2c let~27s give it\nour best!") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" I shouldn~27t get all scared\nnow!") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" Our objective is to rescue\n$n4.") },
    { 0xd0, 0x00,  0x0003,  0x00000000,  0x00000000, _(" $n0~2c let~27s do our\nbest!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" I can~27t be scared now.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Our objective is simple.\nWe~27re rescuing $n4.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0~2c let~27s try\nour best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs188_g1_s0_lives1_dlg0[] = { /* 0x8239824 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000004,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000006,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs188_g2_s0_station_sref_script[] = { /* 0x8239954 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000bc,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000006f,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000007,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs188_g2_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs188_g2_s0_station_sref_script }; /* 0x82399e4 */

static const struct ScriptCommand s_gs188_g2_s0_eff0_script[] = { /* 0x82399f0 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs188_g2_s0_lives0_dlg0[] = { /* 0x8239a30 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000055,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0!\nThis time~2c we~27re gonna rescue\n$n2!") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Let~27s give it our best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0!\nWe~27ll rescue $n2 this time for\nsure!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Let~27s work hard at it!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs188_g2_s0_lives1_dlg0[] = { /* 0x8239c48 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs188_g1_s0_lives[] = { /* 0x8239d08 */
    /*  0 */ {   0,   2,   0,   0, {  23,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs188_g2_s0_lives[] = { /* 0x8239d38 */
    /*  0 */ {   0,   2,   0,   0, {  23,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  27,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs188_g1_s0_effs[] = { /* 0x8239d68 */
    /*  0 */ {   0,   0,   1,   1, {  25,  16, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs188_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs188_g2_s0_effs[] = { /* 0x8239d74 */
    /*  0 */ {   0,   0,   1,   1, {  25,  16, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs188_g2_s0_eff0_script },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x8239d80 */
    &s_gs188_g0_s0_station_sref,
    &s_gs188_g1_s0_station_sref,
    &s_gs188_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs188_g0_sectors[] = { /* 0x8239d8c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs188_g1_sectors[] = { /* 0x8239db4 */
    { LPARRAY(s_gs188_g1_s0_lives), 0,NULL, LPARRAY(s_gs188_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs188_g2_sectors[] = { /* 0x8239ddc */
    { LPARRAY(s_gs188_g2_s0_lives), 0,NULL, LPARRAY(s_gs188_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs188_groups[] = { /* 0x8239e04 */
    { LPARRAY(s_gs188_g0_sectors) },
    { LPARRAY(s_gs188_g1_sectors) },
    { LPARRAY(s_gs188_g2_sectors) },
    {},
};

static const struct GroundLink s_gs188_links[] = { /* 0x8239e24 */
    /* link   0 */ { { /*x*/  23, /*y*/  18, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  27, /*y*/  18, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  25, /*y*/  11, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs188 = { LPARRAY(s_gs188_groups), s_gs188_links }; /* 0x8239e3c */
