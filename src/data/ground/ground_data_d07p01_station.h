












static const struct ScriptCommand s_gs191_g0_s0_station_sref_script[] = { /* 0x823d7dc */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000bf,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs191_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs191_g0_s0_station_sref_script }; /* 0x823d848 */

static const struct ScriptCommand s_gs191_g1_s0_station_sref_script[] = { /* 0x823d854 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000bf,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000014,  0x00000000, NULL },
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000009,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs191_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs191_g1_s0_station_sref_script }; /* 0x823d8d4 */

static const struct ScriptCommand s_gs191_g1_s0_lives0_dlg0[] = { /* 0x823d8e0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000061,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" This is the #CDGreat Canyon#R...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" The peak is called the\n#C5Hill of the Ancients#R.") },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0x2d, 0x0a,  0x0000,  0x00000009,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n2 said that\nthe #C5Hill of the Ancients#R is on $d0F.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" That~27s where we~27ll find\n$n3.#W\n$n0~2c let~27s give it our best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" According to $n2~2c\nthe #C5Hill of the Ancients#R is on $d0F.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n3 should be\nthere.#W\n$n0~2c let~27s do our best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0080,  0x00000002,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs191_g1_s0_lives1_dlg0[] = { /* 0x823dc10 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x69, 0x00,  0x0100,  0x000000e8,  0x00000068, NULL },
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000007,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0080,  0x00000003,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs191_g2_s0_station_sref_script[] = { /* 0x823dd20 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000bf,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000014,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000009,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs191_g2_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs191_g2_s0_station_sref_script }; /* 0x823dda0 */

static const struct ScriptCommand s_gs191_g2_s0_lives0_dlg0[] = { /* 0x823ddac */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000061,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" $n0!\nThis time we~27ll make it to the peak~2c\nall right?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We~27ll meet $n3\nand ask about you~2c $n0.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Let~27s give it our best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" $n0!\nLet~27s make it to the peak this time!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" We have to meet\n$n3 and get some information\non you~2c $n0.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Let~27s do our best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0080,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs191_g2_s0_lives1_dlg0[] = { /* 0x823e038 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000006,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x00cc,  0x00000004,  0x00000000, NULL },
    { 0x6b, 0x00,  0x00cc,  0x00000003,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs191_g1_s0_lives[] = { /* 0x823e0f8 */
    /*  0 */ {   0,   4,   0,   0, {  26,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs191_g2_s0_lives[] = { /* 0x823e128 */
    /*  0 */ {   0,   4,   0,   0, {  26,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs191_g1_s0_effs[] = { /* 0x823e158 */
    /*  0 */ {   0,   0,   1,   1, {  30,  15, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs191_g2_s0_effs[] = { /* 0x823e164 */
    /*  0 */ {   0,   0,   1,   1, {  30,  15, 0, CPOS_HALFTILE }, NULL },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x823e170 */
    &s_gs191_g0_s0_station_sref,
    &s_gs191_g1_s0_station_sref,
    &s_gs191_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs191_g0_sectors[] = { /* 0x823e17c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs191_g1_sectors[] = { /* 0x823e1a4 */
    { LPARRAY(s_gs191_g1_s0_lives), 0,NULL, LPARRAY(s_gs191_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs191_g2_sectors[] = { /* 0x823e1cc */
    { LPARRAY(s_gs191_g2_s0_lives), 0,NULL, LPARRAY(s_gs191_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs191_groups[] = { /* 0x823e1f4 */
    { LPARRAY(s_gs191_g0_sectors) },
    { LPARRAY(s_gs191_g1_sectors) },
    { LPARRAY(s_gs191_g2_sectors) },
};

static const struct GroundLink s_gs191_links[] = { /* 0x823e20c */
    /* link   0 */ { { /*x*/  31, /*y*/  16, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  26, /*y*/  16, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   2 */ { { /*x*/  29, /*y*/   6, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   3 */ { { /*x*/  30, /*y*/   7, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   4 */ { { /*x*/  30, /*y*/  11, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs191 = { LPARRAY(s_gs191_groups), s_gs191_links }; /* 0x823e234 */