







static const struct ScriptCommand s_gs199_g0_s0_station_sref_script[] = { /* 0x824e714 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c7,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x0000000d,  0x00000000, NULL },
    { 0xcd, 0x03,  0x0001,  0x00000011,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(1), /* = 0x01 */
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x03,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(5), /* = 0x05 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0006,  0x00000001,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 6),
  LABEL(3), /* = 0x03 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 7),
  LABEL(4), /* = 0x04 */
    { 0x0d, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 7),
  LABEL(6), /* = 0x06 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 7),
  LABEL(7), /* = 0x07 */
    { 0x44, 0x00,  0x0000,  0x00000068,  0x00000000, NULL },
    JUMP_SCRIPT(/* COMMON_ENTER */ 355),
};

static const struct ScriptRef s_gs199_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs199_g0_s0_station_sref_script }; /* 0x824e980 */

static const struct ScriptCommand s_gs199_g0_s0_evt0_sref_script[] = { /* 0x824e98c */
    DEBUGINFO,
    { 0xd3, 0x00,  0x0000, -0x00000001,  0x00000000, _("Keep going?") },
    { 0xd9, 0x00,  0x0000,  0x00000000,  0x00000000, _("Yes.") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("*No.") },
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(0), /* = 0x00 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x02, 0x00,  0x001e,  0x0000000e,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs199_g0_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs199_g0_s0_evt0_sref_script }; /* 0x824ea68 */

static const struct ScriptCommand s_gs199_g0_s0_evt1_sref_script[] = { /* 0x824ea74 */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xd3, 0x00,  0x0000, -0x00000001,  0x00000000, _("Return to the rescue team base?") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("Yes.") },
    { 0xd9, 0x00,  0x0002,  0x00000000,  0x00000000, _("*No.") },
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(1), /* = 0x01 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER4_FUNC */ 62),
    { 0xab, 0x00,  0x000a, -0x00000001,  0x00000000, NULL },
    { 0x1d, 0x00,  0x0004,  0x0000000c,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0xd3, 0x00,  0x0000, -0x00000001,  0x00000000, _("Return to the entrance?") },
    { 0xd9, 0x00,  0x0003,  0x00000000,  0x00000000, _("Yes.") },
    { 0xd9, 0x00,  0x0004,  0x00000000,  0x00000000, _("*No.") },
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(3), /* = 0x03 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x01, 0x00,  0x001e,  0x000000c6,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs199_g0_s0_evt1_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs199_g0_s0_evt1_sref_script }; /* 0x824ec3c */

static const struct ScriptCommand s_gs199_g0_s0_obj0_dlg2[] = { /* 0x824ec48 */
    DEBUGINFO,
    JUMP_SCRIPT(/* SAVE_POINT */ 65),
};

static const struct ScriptCommand s_gs199_g0_s1_lives0_dlg0[] = { /* 0x824ec68 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s1_lives1_dlg0[] = { /* 0x824eca8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s3_lives0_dlg0[] = { /* 0x824ece8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s3_lives1_dlg0[] = { /* 0x824ed28 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s4_lives0_dlg0[] = { /* 0x824ed68 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s4_lives1_dlg0[] = { /* 0x824ed98 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_gs199_g1_s0_station_sref_script[] = { /* 0x824edc8 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c7,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c7,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c7,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000068,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs199_g1_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs199_g1_s0_station_sref_script }; /* 0x824ee98 */

static const struct ScriptCommand s_gs199_g1_s0_lives0_dlg0[] = { /* 0x824eea4 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_LEFT_FUNC */ 36),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000066,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hmm...#W\nWell~2c that didn~27t go well.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hmm...#W\nThat didn~27t work out...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000006,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" This is a tough place...") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" This is as tough as we\nexpected...") },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But let~27s give it our best\nand get through this~2c $n0!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But let~27s keep trying our\nbest and get through this~2c $n0!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs199_g1_s0_lives1_dlg0[] = { /* 0x824f190 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs199_g2_s0_station_sref_script[] = { /* 0x824f260 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c7,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c7,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c7,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000068,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs199_g2_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs199_g2_s0_station_sref_script }; /* 0x824f330 */

static const struct ScriptCommand s_gs199_g2_s0_lives0_dlg0[] = { /* 0x824f33c */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_LEFT_FUNC */ 36),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000066,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hmmm...#W\nWell~2c that didn~27t go well.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Hmm...#W\nWe didn~27t do well at all...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000006,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" That $n2...\nHe~27s one tough customer.") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" But why aren~27t we allowed\nto go into this forest?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" It doesn~27t matter anyway.\nLet~27s give it our best~2c $n0!") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" That Pokémon~2c\n$n2~2c is pretty tough.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" But why are we forbidden\nfrom entering this forest?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" It makes no difference.\n$n0~2c let~27s try our best!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs199_g2_s0_lives1_dlg0[] = { /* 0x824f6ac */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_SLEEP_FUNC */ 53),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* WAKEUP_FUNC */ 32),
    CALL_SCRIPT(/* LOOK_AROUND_FUNC */ 33),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct GroundLivesData s_gs199_g0_s0_lives[] = { /* 0x824f77c */
    /*  0 */ { 145,   0,   0,   0, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs199_g0_s1_lives[] = { /* 0x824f794 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g0_s3_lives[] = { /* 0x824f7c4 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g0_s4_lives[] = { /* 0x824f7f4 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g1_s0_lives[] = { /* 0x824f824 */
    /*  0 */ {   0,   0,   0,   0, {  31,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  26,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g2_s0_lives[] = { /* 0x824f854 */
    /*  0 */ {   0,   0,   0,   0, {  31,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  26,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs199_g0_s0_objs[] = { /* 0x824f884 */
    /*  0 */ {   4,   0,   4,   3, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs199_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundEffectData s_gs199_g1_s0_effs[] = { /* 0x824f89c */
    /*  0 */ {   0,   0,   1,   1, {  28,  37, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs199_g2_s0_effs[] = { /* 0x824f8a8 */
    /*  0 */ {   0,   0,   1,   1, {  28,  37, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs199_g0_s0_evts[] = { /* 0x824f8b4 */
    /*  0 */ {  15,   3,   0,   0, {  21,  12, 0, 0 }, &s_gs199_g0_s0_evt0_sref },
    /*  1 */ {  15,   3,   0,   0, {  21,  42, 0, 0 }, &s_gs199_g0_s0_evt1_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x824f8cc */
    &s_gs199_g0_s0_station_sref,
    &s_gs199_g1_s0_station_sref,
    &s_gs199_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs199_g0_sectors[] = { /* 0x824f8d8 */
    { LPARRAY(s_gs199_g0_s0_lives), LPARRAY(s_gs199_g0_s0_objs), 0,NULL, LPARRAY(s_gs199_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs199_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs199_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs199_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs199_g1_sectors[] = { /* 0x824f9a0 */
    { LPARRAY(s_gs199_g1_s0_lives), 0,NULL, LPARRAY(s_gs199_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs199_g2_sectors[] = { /* 0x824f9c8 */
    { LPARRAY(s_gs199_g2_s0_lives), 0,NULL, LPARRAY(s_gs199_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs199_groups[] = { /* 0x824f9f0 */
    { LPARRAY(s_gs199_g0_sectors) },
    { LPARRAY(s_gs199_g1_sectors) },
    { LPARRAY(s_gs199_g2_sectors) },
};

static const struct GroundLink s_gs199_links[] = { /* 0x824fa08 */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs199 = { LPARRAY(s_gs199_groups), s_gs199_links }; /* 0x824fa10 */
