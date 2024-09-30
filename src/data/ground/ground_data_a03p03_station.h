







static const struct ScriptCommand s_gs170_g0_s0_station_sref_script[] = { /* 0x821d1e4 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000aa,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs170_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs170_g0_s0_station_sref_script }; /* 0x821d250 */

static const struct ScriptCommand s_gs170_g1_s0_station_sref_script[] = { /* 0x821d25c */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000aa,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x45, 0x00,  0x001e,  0x00000024,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001fa,  0x00000000, NULL },
    { 0x28, 0x01,  0x0005,  0x00000010,  0x00ffffff, NULL },
    RET,
};

static const struct ScriptRef s_gs170_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs170_g1_s0_station_sref_script }; /* 0x821d2ec */

static const struct ScriptCommand s_gs170_g1_s0_lives0_dlg0[] = { /* 0x821d2f8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x36,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WAIT(120),
    { 0x2e, 0x02,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(This icy mountain path seems to go\non forever...)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(We~27ve walked a long way here...)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("($n1 looks exhausted~2c too...)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(We~27ve been running all this time out\nof desperation...)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(What~27s in store for us ahead?)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(Are we really doing the right thing?)") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x2e, 0x14,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0x2f, 0x00,  0x0001,  0x00000000,  0x00000002, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" Brr... It~27s too cold!#W\nThere~27s only snow around us now.")),
    VARIANT(/* == */  1, _(" The scenery hasn~27t changed\nat all for a while now...")),
    VARIANT(/* == */  1, _(" Are we even getting\nsomewhere?")),
    VARIANT_DEFAULT(_(" Brr... This is too cold!#W\nThere~27s nothing but snow now.")),
    VARIANT_DEFAULT(_(" The scenery~27s been\nthe same for a while...")),
    VARIANT_DEFAULT(_(" I wonder if we~27re really\nmaking progress...")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" ...Hey~2c $n0?\nYou know what I~27m thinking...?")),
    VARIANT(/* == */  1, _(" I think we~27ve finally reached\na place where there~27s no one else but us.")),
    VARIANT(/* == */  1, _(" I also have this feeling\nthere~27s nothing ahead of us here...")),
    VARIANT(/* == */  1, _(" And~2c I~27m feeling pretty\nbeat...")),
    VARIANT(/* == */  3, _(" ...Um~2c $n0?\nI was thinking...")),
    VARIANT(/* == */  3, _(" It looks like we~27ve finally\nreached somewhere that~27s deserted...")),
    VARIANT(/* == */  3, _(" I also have a feeling that\nthere isn~27t anything ahead...")),
    VARIANT(/* == */  3, _(" And~2c I am pretty tired...")),
    VARIANT_DEFAULT(_(" ...Hey~2c $n0?\nI was thinking...")),
    VARIANT_DEFAULT(_(" I think we~27ve come to\na place that~27s empty except for us...")),
    VARIANT_DEFAULT(_(" I have this feeling there~27s\nnothing ahead of here~2c even if we keep\nmoving...")),
    VARIANT_DEFAULT(_(" And I~27m getting exhausted...")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000005,  0x00000000, NULL },
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, _(" We two...\nWhat~27s going to happen to us?")),
    VARIANT(/* == */  3, _(" The two of us...\nWhat~27s going to happen to us?")),
    VARIANT_DEFAULT(_(" We two...\nWhat~27s going to happen to us?")),
    CHOICE(/* label */  3, _("Don~27t worry. We~27ll be fine!")),
    CHOICE(/* label */  4, _("I don~27t know...")),
  LABEL(3), /* = 0x03 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x3b, 0x36,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000001,  0x00000000, NULL },
    { 0x2e, 0x0f,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x2f, 0x00,  0x0001,  0x00000000,  0x00000002, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" ............#W\nYeah~2c you~27re right.")),
    VARIANT(/* == */  1, _(" We came out here.\nThere~27s no point wondering about it.")),
    VARIANT(/* == */  1, _(" Sorry~2c $n0.#W\nI got to feeling sorry for myself.")),
    VARIANT(/* == */  1, _(" $n0~2c I came out\nhere because I believed in you.")),
    VARIANT(/* == */  1, _(" And that~27s not changing.\nI~27ll keep believing in you~2c $n0...")),
    VARIANT(/* == */  3, _(" ............#W\nYou~27re right.")),
    VARIANT(/* == */  3, _(" There isn~27t any point in\nwondering about what we did.\nNot after all this.")),
    VARIANT(/* == */  3, _(" Sorry~2c $n0.#W\nI was just getting down on myself.")),
    VARIANT(/* == */  3, _(" $n0~2c I believed in\nyou~2c and that~27s what got me this far.")),
    VARIANT(/* == */  3, _(" And that~27s not changing.\nI have faith in you~2c $n0...")),
    VARIANT_DEFAULT(_(" ............#W\nSure~2c that~27s right.")),
    VARIANT_DEFAULT(_(" There isn~27t any point in\nwondering about what might happen.\nNot after coming this far.")),
    VARIANT_DEFAULT(_(" Sorry~2c $n0.#W\nI was just feeling sorry for myself.")),
    VARIANT_DEFAULT(_(" I have faith in you~2c \n$n0.\nThat~27s what brought me here.")),
    VARIANT_DEFAULT(_(" And that~27s not changing.\nI still have faith in you~2c $n0...")),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000001,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" I~27ll go wherever you go.")),
    VARIANT(/* == */  3, _(" I~27ll go with you~2c always.")),
    VARIANT_DEFAULT(_(" I~27ll keep going wherever\nyou go.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(5),
  LABEL(4), /* = 0x04 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x3b, 0x36,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000001,  0x00000000, NULL },
    { 0x2e, 0x0f,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x2f, 0x00,  0x0001,  0x00000000,  0x00000002, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" .........#WSorry.#W\nI shouldn~27t have said that.\nIt doesn~27t help scaring you like that.")),
    VARIANT(/* == */  1, _(" We came out here.\nThere~27s no point wondering about it.")),
    VARIANT(/* == */  1, _(" Even if we don~27t know\nwhat~27s ahead...#W\nWe just have to keep going.")),
    VARIANT(/* == */  1, _(" Don~27t worry!\nThere~27s got to be something ahead.")),
    VARIANT(/* == */  1, _(" $n0~2c I came out\nhere because I believed in you.")),
    VARIANT(/* == */  1, _(" And that~27s not changing.\nI~27ll keep believing in you~2c $n0...")),
    VARIANT(/* == */  3, _(" .........#WI~27m sorry.#W\nI shouldn~27t have said anything to bring\nyou down...")),
    VARIANT(/* == */  3, _(" There isn~27t any point in\nwondering about what we did.\nNot after all this.")),
    VARIANT(/* == */  3, _(" Even though we don~27t know\nwhat~27s ahead...#W\nWe~27ll find out if we keep moving!")),
    VARIANT(/* == */  3, _(" Don~27t worry!\nThere~27s got to be something ahead.")),
    VARIANT(/* == */  3, _(" $n0~2c I believed in\nyou~2c and that~27s what got me this far.")),
    VARIANT(/* == */  3, _(" And that~27s not changing.\nI have faith in you~2c $n0...")),
    VARIANT_DEFAULT(_(" .........#WI~27m sorry.#W\nI said something stupid to frighten you...")),
    VARIANT_DEFAULT(_(" There isn~27t any point in\nwondering about what might happen.\nNot after coming this far.")),
    VARIANT_DEFAULT(_(" Even though we don~27t know\nwhat~27s ahead...#W\nWe~27ll only know by pressing on!")),
    VARIANT_DEFAULT(_(" Don~27t worry!\nThere~27s got to be something ahead.")),
    VARIANT_DEFAULT(_(" I have faith in you~2c \n$n0.\nThat~27s what brought me here.")),
    VARIANT_DEFAULT(_(" And that~27s not changing.\nI still have faith in you~2c $n0...")),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000001,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" I~27ll go wherever you go.")),
    VARIANT(/* == */  3, _(" I~27ll go with you~2c always.")),
    VARIANT_DEFAULT(_(" I~27ll keep going wherever\nyou go.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(5), /* = 0x05 */
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    WAIT(45),
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(Yes...)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("($n1 trusts me without any\ndoubt.)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(I can~27t afford to be indecisive.)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(I have to believe in myself more.)") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x48, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001dc,  0x00000000, NULL },
    { 0x28, 0x01,  0x0007,  0x00000004,  0x00806040, NULL },
    { 0x54, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x01,  0x0007,  0x00000008,  0x00806040, NULL },
    { 0x28, 0x01,  0x0007,  0x00000008,  0x00806040, NULL },
    { 0x27, 0x01,  0x0007,  0x0000000c,  0x00806040, NULL },
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    { 0x2e, 0x15,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(...#WWh-what?#W What was that?)") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001dc,  0x00000000, NULL },
    { 0x28, 0x01,  0x0007,  0x00000004,  0x00806040, NULL },
    { 0x54, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x01,  0x0007,  0x00000008,  0x00806040, NULL },
    { 0x28, 0x01,  0x0007,  0x00000008,  0x00806040, NULL },
    { 0x27, 0x01,  0x0007,  0x0000000c,  0x00806040, NULL },
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(...D-dizzy?#W Or what?)") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d5,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x2f, 0x00,  0x0001,  0x00000000,  0x00000002, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" Huh?#W What~27s the matter?\n$n0?")),
    VARIANT_DEFAULT(_(" Huh?#W Is something wrong?\n$n0?")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001dc,  0x00000000, NULL },
    { 0x28, 0x01,  0x0007,  0x00000004,  0x00806040, NULL },
    { 0x54, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x01,  0x0007,  0x00000008,  0x00806040, NULL },
    { 0x28, 0x01,  0x0007,  0x00000008,  0x00806040, NULL },
    { 0x27, 0x01,  0x0007,  0x0000000c,  0x00806040, NULL },
    { 0x28, 0x01,  0x0005,  0x00000008,  0x00000000, NULL },
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" ...Finally.") },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" ...Finally~2c you have arrived...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(Someone...#W\nSomeone is talking to me...)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("($n1...?#W No.\nThis voice isn~27t $n1...)") },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("(This voice...#W\nI~27ve heard it somewhere...)") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x4c, 0x00,  0x0000,  0x000001dd,  0x00000000, NULL },
    { 0x0c, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x01,  0x0005,  0x00000030,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    WAIT(30),
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" Finally...") },
    { 0x34, 0x00, -0x0001,  0x00000000,  0x00000000, _(" You have arrived...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};








static const struct ScriptCommand s_gs170_g1_s0_lives1_dlg0[] = { /* 0x821ec08 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000005,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(QUESTION_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs170_g1_s0_lives2_dlg0[] = { /* 0x821ed08 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000003,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs170_g1_s1_lives0_dlg0[] = { /* 0x821ed78 */
    DEBUGINFO,
    { 0x54, 0x00,  0x001f,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs170_g2_s0_station_sref_script[] = { /* 0x821edd8 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000aa,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x27, 0x00,  0x0005,  0x00000020,  0x00ffffff, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x0078,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs170_g2_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs170_g2_s0_station_sref_script }; /* 0x821ee58 */

static const struct ScriptCommand s_gs170_g2_s0_lives0_dlg0[] = { /* 0x821ee64 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" I am so glad.#W\nFinally~2c we get to meet.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x2e, 0x02,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("...You~27re...#W What...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x0f,  0x0001,  0x00000004,  0x00000000, NULL },
    { 0x2f, 0x00,  0x0001,  0x00000000,  0x00000002, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" Hey~2c $n0.\nWhat~27s up with you?")),
    VARIANT(/* == */  1, _(" Talking to yourself like\nthat...")),
    VARIANT_DEFAULT(_(" $n0~2c is something\nthe matter?")),
    VARIANT_DEFAULT(_(" Why are you talking to\nyourself?")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x4c, 0x00,  0x0000,  0x000001d1,  0x00000000, NULL },
    CALL_SCRIPT(NOTICE_FUNC),
    { 0x91, 0x04,  0x0001,  0x00000001,  0x00000000, NULL },
    WAIT(64),
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    WAIT(16),
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" I cannot be seen by others.") },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" I am visible only to you.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(64),
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" A little farther ahead...") },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" There is a jagged mountain\nrange topped by #CDMt. Freeze#R.") },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" Inside its peak...#W\nNinetales lives.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x2e, 0x15,  0x0000,  0x0000000c,  0x00000000, NULL },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("...Ninetales?!") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" Ninetales awaits your\narrival.") },
    { 0xa6, 0x00,  0x0039,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0002,  0x00000000,  0x00000000, _(" Beware...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("Oh! W-wait...!") },
    { 0xa6, 0x00,  0x0039,  0x00000001,  0x00000000, NULL },
    WAIT(60),
    { 0x2e, 0x15,  0x0000,  0x00000005,  0x00000000, NULL },
    { 0x33, 0x00,  0x0000,  0x00000000,  0x00000000, _("..................") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    VARIANT(/* == */  1, _(" Hey~2c $n0!\nCome on~2c $n0!")),
    VARIANT(/* == */  1, _(" What were you doing?#W\nWhat just happened to you...?")),
    VARIANT_DEFAULT(_(" Hey~2c $n0!\n$n0!")),
    VARIANT_DEFAULT(_(" What~27s the matter?#W\nWhat happened...?")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};








static const struct ScriptCommand s_gs170_g2_s0_lives1_dlg0[] = { /* 0x821f534 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs170_g2_s0_lives2_dlg0[] = { /* 0x821f5e4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    { 0x91, 0x04,  0x000a,  0x00000003,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    { 0x91, 0x04,  0x000a,  0x00000003,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs170_g2_s0_lives3_dlg0[] = { /* 0x821f684 */
    DEBUGINFO,
    { 0x54, 0x00,  0x001f,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x001f,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0017,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0xb4, 0x02,  0x0000,  0x00000039,  0x00000000, NULL },
    { 0x54, 0x00,  0x0017,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x54, 0x00,  0x0017,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x54, 0x00,  0x0017,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x54, 0x00,  0x0018,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct GroundLivesData s_gs170_g1_s0_lives[] = { /* 0x821f804 */
    /*  0 */ {   0,   2,   0,   0, { 100,  15, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, { 103,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  83,   2,   0,   0, {  96,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g1_s0_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs170_g1_s1_lives[] = { /* 0x821f84c */
    /*  0 */ {  82,   6,   0,   0, { 106,  15, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g1_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs170_g2_s0_lives[] = { /* 0x821f864 */
    /*  0 */ {   0,   2,   0,   0, { 100,  15, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   5,   0,   0, { 103,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g2_s0_lives1_dlg0,
    } },
    /*  2 */ {  83,   3,   0,   0, {  96,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g2_s0_lives2_dlg0,
    } },
    /*  3 */ {  82,   6,   0,   0, { 106,  15, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs170_g2_s0_lives3_dlg0,
    } },
};

static const struct GroundEffectData s_gs170_g1_s0_effs[] = { /* 0x821f8c4 */
    /*  0 */ {   0,   0,   1,   1, { 103,  15, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs170_g2_s0_effs[] = { /* 0x821f8d0 */
    /*  0 */ {   0,   0,   1,   1, { 103,  15, 0, CPOS_HALFTILE }, NULL },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x821f8dc */
    &s_gs170_g0_s0_station_sref,
    &s_gs170_g1_s0_station_sref,
    &s_gs170_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs170_g0_sectors[] = { /* 0x821f8e8 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs170_g1_sectors[] = { /* 0x821f910 */
    { LPARRAY(s_gs170_g1_s0_lives), 0,NULL, LPARRAY(s_gs170_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs170_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs170_g2_sectors[] = { /* 0x821f960 */
    { LPARRAY(s_gs170_g2_s0_lives), 0,NULL, LPARRAY(s_gs170_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs170_groups[] = { /* 0x821f988 */
    { LPARRAY(s_gs170_g0_sectors) },
    { LPARRAY(s_gs170_g1_sectors) },
    { LPARRAY(s_gs170_g2_sectors) },
};

static const struct GroundLink s_gs170_links[] = { /* 0x821f9a0 */
    {},
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs170 = { LPARRAY(s_gs170_groups), s_gs170_links }; /* 0x821f9a8 */
