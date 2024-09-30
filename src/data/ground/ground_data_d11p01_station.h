









static const struct ScriptCommand s_gs201_g0_s0_station_sref_script[] = { /* 0x8251f44 */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x1d, 0x00,  0x0000,  0x0000000c,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x08, 0x00,  0x0000,  0x000000c9,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x0000000e,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x03,  0x0018,  0x00000001,  0x00000000, NULL },
    { 0xb3, 0x04,  0x0018,  0x00000003,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x0000000a,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x0000000c,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x0000000b,  0x00000000, NULL },
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    { 0xc0, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000001,  0x00000000, NULL },
    JUMP_LABEL(7),
  LABEL(3), /* = 0x03 */
    { 0x0d, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(4), /* = 0x04 */
    { 0x0d, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    { 0x0d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(6), /* = 0x06 */
    { 0x0d, 0x02,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(8), /* = 0x08 */
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs201_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs201_g0_s0_station_sref_script }; /* 0x8252210 */

static const struct ScriptCommand s_gs201_g0_s0_obj0_dlg2[] = { /* 0x825221c */
    DEBUGINFO,
    JUMP_SCRIPT(SAVE_AND_WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs201_g0_s1_lives0_dlg0[] = { /* 0x825223c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s1_lives1_dlg0[] = { /* 0x825227c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s2_lives0_dlg0[] = { /* 0x82522bc */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s2_lives1_dlg0[] = { /* 0x82522fc */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s3_lives0_dlg0[] = { /* 0x825233c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s3_lives1_dlg0[] = { /* 0x825237c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s4_lives0_dlg0[] = { /* 0x82523bc */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s4_lives1_dlg0[] = { /* 0x82523ec */
    DEBUGINFO,
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s5_obj0_dlg2[] = { /* 0x825241c */
    DEBUGINFO,
    JUMP_SCRIPT(WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs201_g0_s5_obj1_dlg2[] = { /* 0x825243c */
    DEBUGINFO,
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs201_g1_s0_station_sref_script[] = { /* 0x825245c */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c9,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs201_g1_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs201_g1_s0_station_sref_script }; /* 0x825253c */

static const struct ScriptCommand s_gs201_g1_s0_lives0_dlg0[] = { /* 0x8252548 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000052,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000063,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x2e, 0x02,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ...OK.\nSo that~27s what happened...")),
    VARIANT(/* == */  1, _(" $n2 appeared to\nyou...")),
    VARIANT(/* == */  1, _(" So that~27s why you were\nlooking so stunned.")),
    VARIANT_DEFAULT(_(" ...Oh.\nSo something like that happened.")),
    VARIANT_DEFAULT(_(" $n2 appeared to\nyou...")),
    VARIANT_DEFAULT(_(" That~27s why you were\nlooking so stunned earlier.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" But~2c wow...\n$n3 isn~27t just a legend.\nIt really exists...")),
    VARIANT_DEFAULT(_(" I~27m amazed~2c though...\n$n3 isn~27t just a legend.\nIt really exists...")),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" And that $n3 is\nat the peak way up there.")),
    VARIANT_DEFAULT(_(" And that $n3 is up\nat the peak...")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000008,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Sniffle...#W\n$n0!")),
    VARIANT(/* == */  1, _(" All the effort we put into\ngetting here...\nIt~27s finally going to pay off!")),
    VARIANT(/* == */  1, _(" We~27ll meet $n3\nand get the truth!")),
    VARIANT_DEFAULT(_(" Sniffle...#W\n$n0!")),
    VARIANT_DEFAULT(_(" All the effort we put into\ngetting here...\nIt~27s finally going to bear fruit!")),
    VARIANT_DEFAULT(_(" We~27ll meet $n3\nand get the truth!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000001,  0x00000000, NULL },
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, _(" We~27ll finally clear your\nreputation~2c $n0!#W\nThat~27ll be great!")),
    VARIANT_DEFAULT(_(" We~27ll finally get rid of the\nsuspicions others have about you~2c\n$n0!#W Awesome!")),
    CHOICE(/* label */  2, _("........................")),
    CHOICE(/* label */  2, _("........................")),
  LABEL(2), /* = 0x02 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Hey~2c $n0...")),
    VARIANT(/* == */  1, _(" You don~27t need to look so\nworried.#W\nIt~27ll be OK.")),
    VARIANT(/* == */  1, _(" $n0~2c I can\nunderstand how it~27d be scary for you to\nmeet $n3.")),
    VARIANT(/* == */  1, _(" The heartless human who\nabandoned $n2...#W\nHow that might be you...")),
    VARIANT(/* == */  1, _(" I bet you~27re scared~2c\nthinking that.")),
    VARIANT_DEFAULT(_(" Listen~2c $n0...")),
    VARIANT_DEFAULT(_(" ...Don~27t be so worried.#W\nIt will be all right.")),
    VARIANT_DEFAULT(_(" It~27s only natural that you\nwould be scared of meeting $n3~2c\n$n0.")),
    VARIANT_DEFAULT(_(" The heartless human who\nabandoned $n2...#W\nIt may be you...")),
    VARIANT_DEFAULT(_(" I can understand how\nyou could think that.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, _(" But that~27s impossible.\nYou~27re not that human--I~27m sure.")),
    CHOICE(/* label */  4, _("How can you say that?")),
    CHOICE(/* label */  4, _("You believe so much in me?")),
  LABEL(4), /* = 0x04 */
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hmm...?#W Well~2c there was\na time when I had some doubts...#W\nBut now...") },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000004,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" ...I wonder why?#W\nI really don~27t know why.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" But it doesn~27t matter now.#W\n$n0~2c you~27re a really good sort.")),
    VARIANT(/* == */  1, _(" You know~2c before...")),
    VARIANT(/* == */  1, _(" When I first got the idea\nto start this rescue team...")),
    VARIANT(/* == */  1, _(" I met you in the Tiny\nWoods~2c $n0.")),
    VARIANT(/* == */  1, _(" Now that I think about it~2c\nthere was something different about you.\nJust a feeling.")),
    VARIANT(/* == */  3, _(" But it doesn~27t matter.\nI know you~27re a good sort~2c $n0...")),
    VARIANT(/* == */  3, _(" Do you remember...?")),
    VARIANT(/* == */  3, _(" When I first got the idea to\nstart a rescue team...")),
    VARIANT(/* == */  3, _(" I met you in the Tiny\nWoods~2c $n0...")),
    VARIANT(/* == */  3, _(" Even back then~2c I sensed\nthere was something different about you.")),
    VARIANT_DEFAULT(_(" But it~27s all right.#W\n$n0~2c you~27re a really good sort.")),
    VARIANT_DEFAULT(_(" You know~2c before...")),
    VARIANT_DEFAULT(_(" When I first got the idea\nto start a rescue team...")),
    VARIANT_DEFAULT(_(" I met you in the Tiny\nWoods~2c $n0.")),
    VARIANT_DEFAULT(_(" Now that I think about it~2c\nthere was something different about you.")),
    { 0x2e, 0x15,  0x0001,  0x00000001,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" This is kind of weird~2c\nisn~27t it?#W\nBut I believe in you~2c $n0.")),
    VARIANT(/* == */  3, _(" It is weird~2c isn~27t it?#W\nBut I believe in you~2c $n0.")),
    VARIANT_DEFAULT(_(" It is strange~2c isn~27t it?#W\nBut~2c $n0~2c I believe in you.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Anyway~2c we~27ll know the\ntruth when we get to the peak.") },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" $n0~2c let~27s give it\nour best!")),
    VARIANT_DEFAULT(_(" $n0~2c let~27s do our\nbest!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};





static const struct ScriptCommand s_gs201_g1_s0_lives1_dlg0[] = { /* 0x825366c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(100),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000003,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000002,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d5,  0x00000000, NULL },
    CALL_SCRIPT(QUESTION_FUNC),
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000003,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g2_s0_station_sref_script[] = { /* 0x825380c */
    DEBUGINFO,
    { 0x0c, 0xff, -0x0001,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptRef s_gs201_g2_s0_station_sref = { 403, 8, NULL /* STATION_CONTROL */, s_gs201_g2_s0_station_sref_script }; /* 0x825383c */

static const struct ScriptCommand s_gs201_g2_s0_lives0_dlg2[] = { /* 0x8253848 */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0002, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g2_s0_evt0_sref_script[] = { /* 0x8253878 */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0002, -0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptRef s_gs201_g2_s0_evt0_sref = { 357, 2, NULL /* GETOUT_NORMAL */, s_gs201_g2_s0_evt0_sref_script }; /* 0x82538a8 */

static const struct ScriptCommand s_gs201_g2_s1_station_sref_script[] = { /* 0x82538b4 */
    DEBUGINFO,
    { 0x0c, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x11, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs201_g2_s1_station_sref = { 401, 7, NULL /* EVENT_WAKEUP */, s_gs201_g2_s1_station_sref_script }; /* 0x8253904 */

static const struct ScriptCommand s_gs201_g2_s1_lives0_dlg0[] = { /* 0x8253910 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x8e, 0x01,  0x0000,  0x00000022,  0x00000000, NULL },
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, _(" Hey~2c $n0.\nAre you all ready?")),
    VARIANT_DEFAULT(_(" Hi~2c $n0.\nAre you ready?")),
    CHOICE(/* label */  2, _("All set!")),
    CHOICE(/* label */  3, _("Not yet.")),
  LABEL(3), /* = 0x03 */
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hmm? Is that so?") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" OK.\nLet~27s go when you~27re ready.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, _(" Which way should we go?")),
    CHOICE(/* label */  5, _("Mt. Freeze.")),
    CHOICE(/* label */  6, _("Snow Path.")),
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" All right!\nLet~27s roll out!")),
    VARIANT(/* == */  1, _(" We want the peak.\nLet~27s give it our best!")),
    VARIANT_DEFAULT(_(" OK!\nLet~27s go!")),
    VARIANT_DEFAULT(_(" Let~27s do our best to reach\nthe peak!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000005,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
  LABEL(8), /* = 0x08 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000f,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    HALT,
  LABEL(6), /* = 0x06 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" All right!\nLet~27s roll out!")),
    VARIANT_DEFAULT(_(" OK!\nLet~27s go!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000005,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(10),
  LABEL(9), /* = 0x09 */
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
  LABEL(10), /* = 0x0a */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004f,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003, -0x00000001,  0x00000000, NULL },
    HALT,
};




static const struct ScriptCommand s_gs201_g2_s1_lives1_dlg0[] = { /* 0x8253f50 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x8e, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xc8, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000007,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000006,  0x00000000, NULL },
    WAIT(15),
    { 0x54, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g3_s0_station_sref_script[] = { /* 0x82540c0 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c9,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs201_g3_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs201_g3_s0_station_sref_script }; /* 0x82541a0 */

static const struct ScriptCommand s_gs201_g3_s0_lives0_dlg0[] = { /* 0x82541ac */
    DEBUGINFO,
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Darn...#W\nThat didn~27t go well.")),
    VARIANT_DEFAULT(_(" Ouch...#W\nThat turned out badly.")),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" This is one seriously\nrough neighborhood...")),
    VARIANT(/* == */  1, _(" But let~27s storm our way\nto the peak~2c $n0!")),
    VARIANT_DEFAULT(_(" This is a seriously tough\nchallenge~2c but...")),
    VARIANT_DEFAULT(_(" Let~27s be sure to reach the\npeak~2c $n0!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs201_g3_s0_lives1_dlg0[] = { /* 0x8254430 */
    DEBUGINFO,
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g4_s0_station_sref_script[] = { /* 0x8254500 */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c9,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs201_g4_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs201_g4_s0_station_sref_script }; /* 0x82545e0 */

static const struct ScriptCommand s_gs201_g4_s0_lives0_dlg0[] = { /* 0x82545ec */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x30,  0x0080,  0x00000007,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(20),
    { 0x4c, 0x00,  0x0000,  0x000001d1,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x0000000c,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" What the...?#W\nIsn~27t this where we started from?!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d4,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ............#W\nI guess that path just loops back to the\nstart.")),
    VARIANT(/* == */  1, _(" If we want to move on~2c\nI think our only choice is #CDMt. Freeze#R.")),
    VARIANT(/* == */  1, _(" $n0~2c let~27s give it\nour best!")),
    VARIANT_DEFAULT(_(" ............#W\nI guess that path we took just loops back\nto where it started.")),
    VARIANT_DEFAULT(_(" It looks like we have to get\nover #CDMt. Freeze#R to move on.")),
    VARIANT_DEFAULT(_(" $n0~2c let~27s do our\nbest!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs201_g4_s0_lives1_dlg0[] = { /* 0x825492c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x20,  0x0080,  0x00000007,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g5_s0_station_sref_script[] = { /* 0x8254a0c */
    DEBUGINFO,
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x08, 0x00,  0x0000,  0x000000c9,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xea, 0x00,  0x0002, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs201_g5_s0_station_sref = { 402, 7, NULL /* EVENT_STATION */, s_gs201_g5_s0_station_sref_script }; /* 0x8254aec */

static const struct ScriptCommand s_gs201_g5_s0_lives0_dlg0[] = { /* 0x8254af8 */
    DEBUGINFO,
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0001,  0x00000002,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Urrggh...#W\nWe couldn~27t get through...")),
    VARIANT_DEFAULT(_(" Ouch...#W\nWe couldn~27t break through...")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" This is one harsh place~2c\nbut let~27s bear down and get through~2c\n$n0!")),
    VARIANT_DEFAULT(_(" This is a harsh place~2c\nso let~27s do our best to get through~2c\n$n0!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs201_g5_s0_lives1_dlg0[] = { /* 0x8254d64 */
    DEBUGINFO,
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x93, 0x04,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g6_s0_station_sref_script[] = { /* 0x8254e34 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000c9,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000073,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs201_g6_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs201_g6_s0_station_sref_script }; /* 0x8254ea4 */

static const struct ScriptCommand s_gs201_g6_s0_eff0_script[] = { /* 0x8254eb0 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs201_g6_s0_lives0_dlg0[] = { /* 0x8254f30 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x40,  0x0080,  0x00000003,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000007,  0x00000000, NULL },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" You~27re going to #CDMt. Freeze#R?") },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" Don~27t forget to take me~2c\nkekeh!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g6_s0_lives1_dlg0[] = { /* 0x825508c */
    DEBUGINFO,
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x86, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0x91, 0x04,  0x000a,  0x00000003,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x6b, 0x00,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs201_g0_s0_lives[] = { /* 0x825514c */
    /*  0 */ { 144,   0,   0,   0, {  10,  18, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs201_g0_s1_lives[] = { /* 0x8255164 */
    /*  0 */ {   0,   4,   0,   0, {  16,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s2_lives[] = { /* 0x8255194 */
    /*  0 */ {   0,   0,   0,   0, {  27,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  27,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s3_lives[] = { /* 0x82551c4 */
    /*  0 */ {   0,   4,   0,   0, {  16,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s4_lives[] = { /* 0x82551f4 */
    /*  0 */ {   0,   4,   0,   0, {  16,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s5_lives[] = { /* 0x8255224 */
    /*  0 */ { 144,   0,   0,   0, {  10,  18, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {  25,  30, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs201_g1_s0_lives[] = { /* 0x8255254 */
    /*  0 */ {   0,   6,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g2_s0_lives[] = { /* 0x8255284 */
    /*  0 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [2] = s_gs201_g2_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs201_g2_s1_lives[] = { /* 0x825529c */
    /*  0 */ {   0,   0,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g2_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g2_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g3_s0_lives[] = { /* 0x82552cc */
    /*  0 */ {   0,   0,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g3_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g4_s0_lives[] = { /* 0x82552fc */
    /*  0 */ {   0,   0,   0,   0, {  24,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  18,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g5_s0_lives[] = { /* 0x825532c */
    /*  0 */ {   0,   0,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g6_s0_lives[] = { /* 0x825535c */
    /*  0 */ {   0,   4,   0,   0, {  21,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g6_s0_lives0_dlg0,
    } },
    /*  1 */ {  91,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g6_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs201_g0_s0_objs[] = { /* 0x825538c */
    /*  0 */ {   4,   0,   5,   2, {  10,  19, CPOS_HALFTILE, 0 }, {
        [2] = s_gs201_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs201_g0_s5_objs[] = { /* 0x82553a4 */
    /*  0 */ {   4,   0,   5,   2, {  10,  19, CPOS_HALFTILE, 0 }, {
        [2] = s_gs201_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {  25,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs201_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs201_g1_s0_effs[] = { /* 0x82553d4 */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g3_s0_effs[] = { /* 0x82553e0 */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g4_s0_effs[] = { /* 0x82553ec */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g5_s0_effs[] = { /* 0x82553f8 */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g6_s0_effs[] = { /* 0x8255404 */
    /*  0 */ {   0,   0,   1,   1, {  22,  23, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs201_g6_s0_eff0_script },
};

static const struct GroundEventData s_gs201_g2_s0_evts[] = { /* 0x8255410 */
    /*  0 */ {   3,   3,   0,   0, {  26,  17, 0, 0 }, &s_gs201_g2_s0_evt0_sref },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x825541c */
    &s_gs201_g0_s0_station_sref,
    &s_gs201_g1_s0_station_sref,
    &s_gs201_g2_s0_station_sref,
    &s_gs201_g2_s1_station_sref,
    &s_gs201_g3_s0_station_sref,
    &s_gs201_g4_s0_station_sref,
    &s_gs201_g5_s0_station_sref,
    &s_gs201_g6_s0_station_sref,
};

static const struct GroundScriptSector s_gs201_g0_sectors[] = { /* 0x825543c */
    { LPARRAY(s_gs201_g0_s0_lives), LPARRAY(s_gs201_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs201_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s5_lives), LPARRAY(s_gs201_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs201_g1_sectors[] = { /* 0x825552c */
    { LPARRAY(s_gs201_g1_s0_lives), 0,NULL, LPARRAY(s_gs201_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs201_g2_sectors[] = { /* 0x8255554 */
    { LPARRAY(s_gs201_g2_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs201_g2_s0_evts), 1,&sStationScripts[2], },
    { LPARRAY(s_gs201_g2_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs201_g3_sectors[] = { /* 0x82555a4 */
    { LPARRAY(s_gs201_g3_s0_lives), 0,NULL, LPARRAY(s_gs201_g3_s0_effs), 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs201_g4_sectors[] = { /* 0x82555cc */
    { LPARRAY(s_gs201_g4_s0_lives), 0,NULL, LPARRAY(s_gs201_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs201_g5_sectors[] = { /* 0x82555f4 */
    { LPARRAY(s_gs201_g5_s0_lives), 0,NULL, LPARRAY(s_gs201_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptSector s_gs201_g6_sectors[] = { /* 0x825561c */
    { LPARRAY(s_gs201_g6_s0_lives), 0,NULL, LPARRAY(s_gs201_g6_s0_effs), 0,NULL, 1,&sStationScripts[7], },
};

static const struct GroundScriptGroup s_gs201_groups[] = { /* 0x8255644 */
    { LPARRAY(s_gs201_g0_sectors) },
    { LPARRAY(s_gs201_g1_sectors) },
    { LPARRAY(s_gs201_g2_sectors) },
    { LPARRAY(s_gs201_g3_sectors) },
    { LPARRAY(s_gs201_g4_sectors) },
    { LPARRAY(s_gs201_g5_sectors) },
    { LPARRAY(s_gs201_g6_sectors) },
};

static const struct GroundLink s_gs201_links[] = { /* 0x825567c */
    /* link   0 */ { { /*x*/  27, /*y*/  19, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  23, /*y*/  25, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs201 = { LPARRAY(s_gs201_groups), s_gs201_links }; /* 0x825568c */
