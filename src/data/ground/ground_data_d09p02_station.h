







static const struct ScriptCommand s_gs196_g0_s0_station_sref_script[] = { /* 0x8248a54 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c4,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x0000000c,  0x00000000, NULL },
    { 0xcd, 0x03,  0x0001,  0x00000011,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(0), /* = 0x00 */
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x03,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0006,  0x00000001,  0x00000000, NULL },
    JUMP_LABEL(6),
  LABEL(3), /* = 0x03 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(4), /* = 0x04 */
    { 0x0d, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(7), /* = 0x07 */
    { 0x44, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs196_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs196_g0_s0_station_sref_script }; /* 0x8248cc0 */

static const struct ScriptCommand s_gs196_g0_s0_evt0_sref_script[] = { /* 0x8248ccc */
    DEBUGINFO,
    ASK1(FALSE, /*default*/ 0, /* speaker */ -1, _("Keep going?")),
    CHOICE(/* label */  0, _("Yes.")),
    CHOICE(/* label */  1, _("*No.")),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x001e,  0x0000000c,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs196_g0_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs196_g0_s0_evt0_sref_script }; /* 0x8248da8 */

static const struct ScriptCommand s_gs196_g0_s0_evt1_sref_script[] = { /* 0x8248db4 */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ 0, /* speaker */ -1, _("Return to the rescue team base?")),
    CHOICE(/* label */  1, _("Yes.")),
    CHOICE(/* label */  2, _("*No.")),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(DISMISSAL_SALLY_MEMBER4_FUNC),
    { 0xab, 0x00,  0x000a, -0x00000001,  0x00000000, NULL },
    { 0x1d, 0x00,  0x0004,  0x0000000c,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    ASK1(FALSE, /*default*/ 0, /* speaker */ -1, _("Return to the entrance?")),
    CHOICE(/* label */  3, _("Yes.")),
    CHOICE(/* label */  4, _("*No.")),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(END_TALK),
  LABEL(3), /* = 0x03 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x01, 0x00,  0x001e,  0x000000c3,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs196_g0_s0_evt1_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs196_g0_s0_evt1_sref_script }; /* 0x8248f7c */

static const struct ScriptCommand s_gs196_g0_s0_obj0_dlg2[] = { /* 0x8248f88 */
    DEBUGINFO,
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs196_g0_s1_lives0_dlg0[] = { /* 0x8248fa8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs196_g0_s1_lives1_dlg0[] = { /* 0x8248fe8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs196_g0_s3_lives0_dlg0[] = { /* 0x8249028 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs196_g0_s3_lives1_dlg0[] = { /* 0x8249068 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs196_g0_s4_lives0_dlg0[] = { /* 0x82490a8 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs196_g0_s4_lives1_dlg0[] = { /* 0x82490d8 */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs196_g1_s0_station_sref_script[] = { /* 0x8249108 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c4,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c4,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c4,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs196_g1_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs196_g1_s0_station_sref_script }; /* 0x82491d8 */

static const struct ScriptCommand s_gs196_g1_s0_lives0_dlg0[] = { /* 0x82491e4 */
    DEBUGINFO,
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" Hmm...#W\nWell~2c that didn~27t go well.")),
    VARIANT_DEFAULT(_(" Hmm...#W\nThat didn~27t work out...")),
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" But we almost made it.#W\nLet~27s give it our best again!")),
    VARIANT_DEFAULT(_(" But we came close.#W\nLet~27s keep doing our best!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs196_g1_s0_lives1_dlg0[] = { /* 0x8249404 */
    DEBUGINFO,
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    { 0x91, 0x04,  0x000a,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct GroundLivesData s_gs196_g0_s0_lives[] = { /* 0x82494c4 */
    /*  0 */ { 145,   0,   0,   0, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs196_g0_s1_lives[] = { /* 0x82494dc */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs196_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs196_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs196_g0_s3_lives[] = { /* 0x824950c */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs196_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs196_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs196_g0_s4_lives[] = { /* 0x824953c */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs196_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs196_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs196_g1_s0_lives[] = { /* 0x824956c */
    /*  0 */ {   0,   2,   0,   0, {  31,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs196_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   6,   0,   0, {  26,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs196_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs196_g0_s0_objs[] = { /* 0x824959c */
    /*  0 */ {   4,   0,   4,   3, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs196_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundEffectData s_gs196_g1_s0_effs[] = { /* 0x82495b4 */
    /*  0 */ {   0,   0,   1,   1, {  28,  37, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs196_g0_s0_evts[] = { /* 0x82495c0 */
    /*  0 */ {  15,   3,   0,   0, {  21,  12, 0, 0 }, &s_gs196_g0_s0_evt0_sref },
    /*  1 */ {  15,   3,   0,   0, {  21,  42, 0, 0 }, &s_gs196_g0_s0_evt1_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x82495d8 */
    &s_gs196_g0_s0_station_sref,
    &s_gs196_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs196_g0_sectors[] = { /* 0x82495e0 */
    { LPARRAY(s_gs196_g0_s0_lives), LPARRAY(s_gs196_g0_s0_objs), 0,NULL, LPARRAY(s_gs196_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs196_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs196_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs196_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs196_g1_sectors[] = { /* 0x82496a8 */
    { LPARRAY(s_gs196_g1_s0_lives), 0,NULL, LPARRAY(s_gs196_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs196_groups[] = { /* 0x82496d0 */
    { LPARRAY(s_gs196_g0_sectors) },
    { LPARRAY(s_gs196_g1_sectors) },
};

static const struct GroundLink s_gs196_links[] = { /* 0x82496e0 */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs196 = { LPARRAY(s_gs196_groups), s_gs196_links }; /* 0x82496e8 */
