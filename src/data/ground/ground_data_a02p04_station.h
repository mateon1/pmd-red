












static const struct ScriptCommand s_gs167_g0_s0_station_sref_script[] = { /* 0x8219784 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000a7,  0x00000000, NULL },
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(COMMON_ENTER),
};

static const struct ScriptRef s_gs167_g0_s0_station_sref = { 404, 1, NULL /* ENTER_CONTROL */, s_gs167_g0_s0_station_sref_script }; /* 0x82197f0 */

static const struct ScriptCommand s_gs167_g1_s0_station_sref_script[] = { /* 0x82197fc */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000a7,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptRef s_gs167_g1_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs167_g1_s0_station_sref_script }; /* 0x821986c */

static const struct ScriptCommand s_gs167_g2_s0_station_sref_script[] = { /* 0x8219878 */
    DEBUGINFO,
    { 0x08, 0x00,  0x0000,  0x000000a7,  0x00000000, NULL },
    { 0x0c, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000018,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0000,  0x00000021,  0x00000000, NULL },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+And so~2c $n0~27s\n#+harrowing journey continued.") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+Seeking refuge in\n#+even harsher places...") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+They fled north.") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+They crossed row upon\n#+row of mountains...") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+Forded fetid swamps...") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+Scaled frozen cliffs...") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+Till finally~2c $n0~27s tiny team\n#+arrived in a world of snow...") },
    { 0x39, 0x00,  0x001e,  0x00000000,  0x00000000, _("#+A frigid wasteland of\n#+driving blizzards.") },
    { 0x48, 0x00,  0x0078,  0x00000000,  0x00000000, NULL },
    { 0xe0, 0x00,  0x0018,  0x00000000,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const struct ScriptRef s_gs167_g2_s0_station_sref = { 400, 7, NULL /* EVENT_CONTROL */, s_gs167_g2_s0_station_sref_script }; /* 0x8219b4c */


static const struct ScriptCommand s_gs167_g2_s0_eff0_script[] = { /* 0x8219b58 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000003,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    WAIT(45),
    { 0x23, 0x00,  0x005a,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs167_g2_s0_lives0_dlg0[] = { /* 0x8219c28 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0xe4, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0x93, 0x04,  0x000b,  0x00000022,  0x00000000, NULL },
    WAIT(80),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x00000002,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Gasp~2c gasp...\nWe~27ve done a lot of walking.")),
    VARIANT(/* == */  1, _(" I~27m beat.\nLet~27s get some rest.")),
    VARIANT(/* == */  3, _(" Pant~2c pant...\nWe walked a lot~2c didn~27t we?")),
    VARIANT(/* == */  3, _(" I~27m tired.\nLet~27s get a little rest.")),
    VARIANT_DEFAULT(_(" Pant~2c pant...\nWe sure walked a lot.")),
    VARIANT_DEFAULT(_(" I~27m bushed.\nLet~27s rest up.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x91, 0x04,  0x000b,  0x00000004,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Haaah!\nThe view~27s great here.")),
    VARIANT_DEFAULT(_(" Mmm...\nThe view~27s fantastic.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x4c, 0x00,  0x0000,  0x000001d1,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Oh~2c hey!\n$n0~2c you have to see this!")),
    VARIANT_DEFAULT(_(" Oh~2c look!\n$n0~2c look over there!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Look at that.\nSee how small Mt. Blaze looks?")),
    VARIANT(/* == */  1, _(" We sure came a long way...")),
    VARIANT_DEFAULT(_(" See how small Mt. Blaze\nlooks from here?")),
    VARIANT_DEFAULT(_(" We~27ve come a really long\nway~2c haven~27t we?")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ............#WHey~2c $n0.")),
    VARIANT(/* == */  3, _(" ............#WUm~2c $n0?")),
    VARIANT_DEFAULT(_(" ............#W$n0.")),
    { 0x91, 0x04,  0x000b,  0x00000003,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" You remember how tough it\nwas getting over Mt. Blaze~2c right?")),
    VARIANT(/* == */  1, _(" I don~27t think many Pokémon\ncan get through there.")),
    VARIANT(/* == */  1, _(" And~2c after that~2c we\nreally went at it hard to get here.")),
    VARIANT(/* == */  1, _(" You know what I really\nthink?")),
    VARIANT(/* == */  3, _(" Wasn~27t it hard getting over\nMt. Blaze?")),
    VARIANT(/* == */  3, _(" I doubt that many Pokémon\nwill be able to get through it.")),
    VARIANT(/* == */  3, _(" And it wasn~27t easy coming\nthis far after that mountain.")),
    VARIANT(/* == */  3, _(" Do you want to know what\nI think?")),
    VARIANT_DEFAULT(_(" Do you remember how hard\nit was to get across Mt. Blaze?")),
    VARIANT_DEFAULT(_(" I don~27t think too many\nPokémon can get through there.")),
    VARIANT_DEFAULT(_(" And then we gave it our\nall to get out here.")),
    VARIANT_DEFAULT(_(" Do you know what I~27m\nthinking?")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001, -0x00000002,  0x00000000, NULL },
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, _(" Maybe there aren~27t any more\nPokémon that can chase us all the way\nhere.")),
    VARIANT(/* == */  3, _(" Do you think~2c maybe~2c that no\nPokémon will be able to get to us here?")),
    VARIANT_DEFAULT(_(" We~27ve come so far~2c maybe\nthere aren~27t any more Pokémon that can\nget to us.")),
    CHOICE(/* label */  2, _("No. There are others.")),
    CHOICE(/* label */  3, _("You~27re right. No one can get us~2c hahaha...")),
  LABEL(2), /* = 0x02 */
    { 0xa6, 0x00,  0x0039,  0x00000000,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x4c, 0x00,  0x0000,  0x000001c7,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x0000000c,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" What?#W There are others?")),
    VARIANT(/* == */  1, _(" Who might they be?")),
    VARIANT_DEFAULT(_(" Oh?#W There~27s someone else?")),
    VARIANT_DEFAULT(_(" Well~2c who do you mean?")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x2e, 0x15,  0x0001,  0x00000005,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ...#WOh~2c right.#W\nAlakazam~27s still out there.")),
    VARIANT(/* == */  1, _(" Their team should be able\nto get here...")),
    VARIANT_DEFAULT(_(" ...#WOh~2c I get it.#W\nThere~27s Alakazam.")),
    VARIANT_DEFAULT(_(" You~27re right.\nAlakazam~27s team should be able to get\nhere.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(4),
  LABEL(3), /* = 0x03 */
    { 0xa6, 0x00,  0x0039,  0x00000001,  0x00000000, NULL },
    { 0x2e, 0x03,  0x0001,  0x0000000b,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" I knew it!\nI knew you~27d say that too~2c $n0!")),
    VARIANT_DEFAULT(_(" I thought so!\nYou think so too~2c $n0~2c right?!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000001,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Yeah~2c you~27re right.\nThere can~27t be anyone else.\nHahahahaha.") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" All right!\nWe can say good-bye to living like\nfugitives.") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We don~27t have to keep\nrunning away anymore!\nHahahahaha.") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hahahaha...#W Haha...") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    { 0x2e, 0x15,  0x0001,  0x00000002,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ..................#W\nThis is no good~2c $n0.")),
    VARIANT(/* == */  1, _(" We forgot about some\ntough customers.")),
    VARIANT(/* == */  1, _(" Alakazam.#W\nHis team won~27t drop the chase ever.")),
    VARIANT_DEFAULT(_(" ........................#W\nIt~27s no good~2c $n0.")),
    VARIANT_DEFAULT(_(" We~27ve forgotten some\ntough customers.")),
    VARIANT_DEFAULT(_(" It~27s Alakazam~27s team.#W\nThey~27ll keep chasing us wherever we go.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LABEL(4),
    { 0xa6, 0x00,  0x0039,  0x00000000,  0x00000000, NULL },
  LABEL(4), /* = 0x04 */
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" We~27re not out of this yet.\nLet~27s get going.")),
    VARIANT(/* == */  1, _(" We~27d better go somewhere\nnobody can get to.\nThat~27d be best.")),
    VARIANT_DEFAULT(_(" Yup! We don~27t have a choice.\nWe have to keep going.")),
    VARIANT_DEFAULT(_(" I think we need to go\nsomewhere no one else can get to.")),
    { 0x2e, 0x15,  0x0001,  0x00000009,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Let~27s knuckle down and keep\ngoing.")),
    VARIANT_DEFAULT(_(" Let~27s be positive and keep\nmoving.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000000,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Huh?#W What~27s the matter?\nAren~27t you coming~2c $n0?")),
    VARIANT(/* == */  3, _(" Oh?#W What~27s wrong?\nAren~27t we going~2c $n0?")),
    VARIANT_DEFAULT(_(" Huh?#W What~27s the matter?\nAren~27t you coming~2c $n0?")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x0a,  0x000b,  0x00000007,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ...#WWhat?#W\nAren~27t I tired~2c you~27re asking?")),
    VARIANT(/* == */  1, _(" We~27re being chased!\nWe can~27t rest.")),
    VARIANT(/* == */  1, _(" And...#W\nI told you~2c didn~27t I?")),
    VARIANT(/* == */  1, _(" I said I~27d go with you~2c\n$n0.")),
    VARIANT(/* == */  3, _(" ...#WPardon?#W\nAm I tired?")),
    VARIANT(/* == */  3, _(" They~27re trying to catch us.\nWe don~27t have time to rest.")),
    VARIANT(/* == */  3, _(" And...#W\nRemember what I said?")),
    VARIANT(/* == */  3, _(" I said I would go with\nyou~2c $n0.")),
    VARIANT_DEFAULT(_(" ...#WHuh?#W\nAm I tired?")),
    VARIANT_DEFAULT(_(" They~27re chasing us down.\nWe can~27t afford to rest.\n")),
    VARIANT_DEFAULT(_(" And...#W\nI told you already.")),
    VARIANT_DEFAULT(_(" I said I would go with\nyou~2c $n0.")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x15,  0x0001,  0x00000001,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ...Don~27t look that way\nat me!\nI~27m good. I~27m good!")),
    VARIANT(/* == */  1, _(" Let~27s roll~2c $n0!\nI~27ll go with you wherever you go!")),
    VARIANT(/* == */  3, _(" ...Oh~2c please don~27t look\nlike that.\nHonest~2c I~27m fine.")),
    VARIANT(/* == */  3, _(" Let~27s go~2c $n0!\nI~27ll always stick with you!")),
    VARIANT_DEFAULT(_(" ...Oh~2c come on.\nNo need for that long face.\nI~27m fine.")),
    VARIANT_DEFAULT(_(" Let~27s go~2c $n0!\nI~27ll go wherever you go!")),
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x6b, 0x00,  0x0099,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};



static const struct ScriptCommand s_gs167_g2_s0_lives1_dlg0[] = { /* 0x821b5d4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WAIT(10),
    { 0x6b, 0x00,  0x0099,  0x00000002,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x10,  0x0099,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(15),
    { 0x91, 0x04,  0x000b,  0x00000007,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000004,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x000b,  0x00000007,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xb4, 0x02,  0x0000,  0x00000039,  0x00000001, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xb4, 0x02,  0x0001,  0x00000039,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x54, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(160),
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000003,  0x00000000, NULL },
    WAIT(30),
    { 0x91, 0x04,  0x000b,  0x00000003,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x6b, 0x00,  0x0099,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs167_g2_s0_lives[] = { /* 0x821b904 */
    /*  0 */ {   0,   6,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs167_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  31,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs167_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs167_g1_s0_effs[] = { /* 0x821b934 */
    /*  0 */ {   0,   0,   1,   1, {  16,   8, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs167_g2_s0_effs[] = { /* 0x821b940 */
    /*  0 */ {   0,   0,   1,   1, {  16,   8, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs167_g2_s0_eff0_script },
};

static const struct ScriptRef * const (sStationScripts[]) = { /* 0x821b94c */
    &s_gs167_g0_s0_station_sref,
    &s_gs167_g1_s0_station_sref,
    &s_gs167_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs167_g0_sectors[] = { /* 0x821b958 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs167_g1_sectors[] = { /* 0x821b980 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs167_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs167_g2_sectors[] = { /* 0x821b9a8 */
    { LPARRAY(s_gs167_g2_s0_lives), 0,NULL, LPARRAY(s_gs167_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs167_groups[] = { /* 0x821b9d0 */
    { LPARRAY(s_gs167_g0_sectors) },
    { LPARRAY(s_gs167_g1_sectors) },
    { LPARRAY(s_gs167_g2_sectors) },
};

static const struct GroundLink s_gs167_links[] = { /* 0x821b9e8 */
    /* link   0 */ { { /*x*/  16, /*y*/  37, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  14, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  18, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/  12, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   4 */ { { /*x*/   1, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

/*extern*/ const struct GroundScriptHeader gGroundScript_gs167 = { LPARRAY(s_gs167_groups), s_gs167_links }; /* 0x821ba10 */
