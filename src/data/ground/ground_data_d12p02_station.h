







static const struct ScriptCommand s_gs205_g0_s0_station_sref_script[] = { /* 0x825dccc */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000cd,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x03,  0x0000,  0x00000011,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x02,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(4), /* = 0x04 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0005,  0x00000001,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 5),
  LABEL(2), /* = 0x02 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 6),
  LABEL(3), /* = 0x03 */
    { 0x0d, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 6),
  LABEL(5), /* = 0x05 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 6),
  LABEL(6), /* = 0x06 */
    { 0x44, 0x00,  0x0000,  0x0000006c,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs205_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs205_g0_s0_station_sref_script }; /* 0x825dee8 */

static const struct ScriptCommand s_gs205_g0_s0_evt0_sref_script[] = { /* 0x825def4 */
    DEBUGINFO,
    { 0xd3, 0x00,  0x0000, -0x00000001,  0x00000000, _("Keep going?") },
    { 0xd9, 0x00,  0x0000,  0x00000000,  0x00000000, _("Yes.") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("*No.") },
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(0), /* = 0x00 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x001e,  0x00000012,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs205_g0_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs205_g0_s0_evt0_sref_script }; /* 0x825dfd0 */

static const struct ScriptCommand s_gs205_g0_s0_evt1_sref_script[] = { /* 0x825dfdc */
    DEBUGINFO,
    { 0xd3, 0x00,  0x0000, -0x00000001,  0x00000000, _("Return to the rescue team base?") },
    { 0xd9, 0x00,  0x0000,  0x00000000,  0x00000000, _("Yes.") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("*No.") },
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(0), /* = 0x00 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER4_FUNC */ 62),
    { 0xab, 0x00,  0x000a, -0x00000001,  0x00000000, NULL },
    { 0x1d, 0x00,  0x0004,  0x0000000c,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs205_g0_s0_evt1_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs205_g0_s0_evt1_sref_script }; /* 0x825e0dc */

static const struct ScriptCommand s_gs205_g0_s0_obj0_dlg2[] = { /* 0x825e0e8 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_POINT */ 65),
};

static const struct ScriptCommand s_gs205_g0_s1_lives0_dlg0[] = { /* 0x825e108 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs205_g0_s1_lives1_dlg0[] = { /* 0x825e148 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs205_g0_s3_lives0_dlg0[] = { /* 0x825e188 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs205_g0_s3_lives1_dlg0[] = { /* 0x825e1c8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs205_g0_s4_lives0_dlg0[] = { /* 0x825e208 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs205_g0_s4_lives1_dlg0[] = { /* 0x825e238 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs205_g1_s0_station_sref_script[] = { /* 0x825e268 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000cd,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000cd,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000cd,  0x00000000, NULL },
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x0000006c,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs205_g1_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs205_g1_s0_station_sref_script }; /* 0x825e338 */

static const struct ScriptCommand s_gs205_g1_s0_lives0_dlg0[] = { /* 0x825e344 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_LEFT_FUNC */ 36),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hmm...#W\nWell~2c that didn~27t go well.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hmm...#W\nThat didn~27t work out...") },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But we didn~27t have far to\ngo!#W\nLet~27s give it our best!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But we were very close!#W\nLet~27s keep trying our best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs205_g1_s0_lives1_dlg0[] = { /* 0x825e570 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_RIGHT_FUNC */ 35),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct GroundLivesData s_gs205_g0_s0_lives[] = { /* 0x825e620 */
    /*  0 */ { 145,   0,   0,   0, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs205_g0_s1_lives[] = { /* 0x825e638 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs205_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs205_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs205_g0_s3_lives[] = { /* 0x825e668 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs205_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs205_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs205_g0_s4_lives[] = { /* 0x825e698 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs205_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs205_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs205_g1_s0_lives[] = { /* 0x825e6c8 */
    /*  0 */ {   0,   2,   0,   0, {  31,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs205_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   6,   0,   0, {  26,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs205_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs205_g0_s0_objs[] = { /* 0x825e6f8 */
    /*  0 */ {   4,   0,   4,   3, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs205_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundEffectData s_gs205_g1_s0_effs[] = { /* 0x825e710 */
    /*  0 */ {   0,   0,   1,   1, {  28,  37, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs205_g0_s0_evts[] = { /* 0x825e71c */
    /*  0 */ {  15,   3,   0,   0, {  21,  12, 0, 0 }, &s_gs205_g0_s0_evt0_sref },
    /*  1 */ {  15,   3,   0,   0, {  21,  42, 0, 0 }, &s_gs205_g0_s0_evt1_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x825e734 */
    &s_gs205_g0_s0_station_sref,
    &s_gs205_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs205_g0_sectors[] = { /* 0x825e73c */
    { LPARRAY(s_gs205_g0_s0_lives), LPARRAY(s_gs205_g0_s0_objs), 0,NULL, LPARRAY(s_gs205_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs205_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs205_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs205_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs205_g1_sectors[] = { /* 0x825e804 */
    { LPARRAY(s_gs205_g1_s0_lives), 0,NULL, LPARRAY(s_gs205_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs205_groups[] = { /* 0x825e82c */
    { LPARRAY(s_gs205_g0_sectors) },
    { LPARRAY(s_gs205_g1_sectors) },
};

static const struct GroundLink s_gs205_links[] = { /* 0x825e83c */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs205 = { LPARRAY(s_gs205_groups), s_gs205_links }; /* 0x825e844 */