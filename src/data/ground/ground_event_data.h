











static const struct ScriptCommand s_script_END_TALK[] = { /* 0x811ee64 */
    DEBUGINFO,
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_WAIT_END_TALK_FUNC[] = { /* 0x811eec8 */
    DEBUGINFO,
    { 0xe3, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_WAIT_END_EVENT_FUNC[] = { /* 0x811eef8 */
    DEBUGINFO,
    { 0xe3, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_WAIT_START_FUNC[] = { /* 0x811ef28 */
    DEBUGINFO,
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_INCOMPLETE_TALK[] = { /* 0x811ef58 */
    DEBUGINFO,
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#CWUnregistered dialog script#R") },
    JUMP_SCRIPT(/* END_TALK */ 0),
};

static const struct ScriptCommand s_script_NORMAL_WAIT_END_TALK[] = { /* 0x811efa8 */
    DEBUGINFO,
    { 0xe3, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_LIVES_REPLY_NORMAL[] = { /* 0x811efd8 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x8d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_LIVES_REPLY[] = { /* 0x811f048 */
    DEBUGINFO,
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x8d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_OBJECT_REPLY_NORMAL[] = { /* 0x811f0a8 */
    DEBUGINFO,
    { 0xe3, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EXAMINE_MISS[] = { /* 0x811f0e8 */
    DEBUGINFO,
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("$n0 checked underfoot.") },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("But there was nothing to be found...") },
    JUMP_SCRIPT(/* END_TALK */ 0),
};

static const struct ScriptCommand s_script_ENTER_WAIT_FUNC[] = { /* 0x811f168 */
    DEBUGINFO,
    RET_DIRECT,
};

static const struct ScriptCommand s_script_UNIT_TALK[] = { /* 0x811f188 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _("Let~27s go.") },
    JUMP_SCRIPT(/* END_TALK */ 0),
};

static const struct ScriptCommand s_script_HABITAT_TALK[] = { /* 0x811f214 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    { 0x3b, 0x0a,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000002,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x10,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
  LABEL(0), /* = 0x00 */
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _("Pleased to meet you.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x10,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* HABITAT_TALK_S01E02A */ 13),
};

static const struct ScriptCommand s_script_HABITAT_TALK_S01E02A[] = { /* 0x811f36c */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xb3, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I will dedicate myself to\ncreating a fantastic new design.\nPlease check the rescue team flag later!") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" If my design fails to\nimpress you~2c please let me know.") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" If so~2c I will change the\ndesign to one perhaps more to your liking.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x10,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
  LABEL(0), /* = 0x00 */
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Hello!") },
    { 0xd5, 0x00,  0x0001,  0x00000001,  0x00000000, _(" Oh?#W Did you perhaps wish\nto change the team flag~27s design?") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("No need to change.") },
    { 0xd9, 0x00,  0x0002,  0x00000000,  0x00000000, _("Yes~2c please.") },
  LABEL(1), /* = 0x01 */
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I see.#W If you would like the\nflag~27s design changed~2c please tell me.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x10,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
  LABEL(2), /* = 0x02 */
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Ah~2c very well!#W\nI may be unknown~2c but nonetheless~2c I am\nan artist.") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" I will do my best to create\na splendid design for you!\nPlease check the rescue team flag later!") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" If my design fails to\nimpress you~2c please let me know.") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" If so~2c I will change the\ndesign to one perhaps more to your liking.") },
    { 0xa6, 0x00,  0x002a,  0x00000001,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x10,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_HABITAT_MOVE1[] = { /* 0x811f7c0 */
    DEBUGINFO,
    { 0x3b, 0x14,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE_STAY_TURN */ 18),
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x8a, 0x18,  0x0100,  0x00000009,  0x00000000, NULL },
    { 0xdc, 0x00,  0x0018,  0x00000030,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
};

static const struct ScriptCommand s_script_HABITAT_MOVE2[] = { /* 0x811f860 */
    DEBUGINFO,
    { 0x3b, 0x14,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    JUMP_SCRIPT(/* HABITAT_MOVE_STAY_TURN */ 18),
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x8a, 0x18,  0x0100,  0x00000009,  0x00000000, NULL },
    { 0xdc, 0x00,  0x0018,  0x00000030,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
};

static const struct ScriptCommand s_script_HABITAT_MOVE_PAUSE[] = { /* 0x811f920 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x8d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_HABITAT_MOVE_STAY_FIX[] = { /* 0x811f990 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x8d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_HABITAT_MOVE_STAY_TURN[] = { /* 0x811fa00 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x8d, 0x01,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0xdc, 0x00,  0x0018,  0x00000030,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_LIVES_MOVE_NORMAL[] = { /* 0x811fa70 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_LIVES_MOVE_CHANGE[] = { /* 0x811fad0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_OBJECT_MOVE_NORMAL[] = { /* 0x811fb30 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_OBJECT_MOVE_CHANGE[] = { /* 0x811fb80 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_EFFECT_MOVE_NORMAL[] = { /* 0x811fbd0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_EFFECT_MOVE_CHANGE[] = { /* 0x811fc20 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_MOVE_INIT[] = { /* 0x811fc70 */
    DEBUGINFO,
    { 0xdb, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_MOVE_PAUSE[] = { /* 0x811fca0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x8d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_MOVE_STAY[] = { /* 0x811fd10 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x8d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_MOVE_SLEEP[] = { /* 0x811fd80 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_MOVE_RANDOM[] = { /* 0x811fde0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x8a, 0x18,  0x0100,  0x00000008,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0030,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_MOVE_BOY[] = { /* 0x811fe40 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x8a, 0x18,  0x0100,  0x00000008,  0x00000000, NULL },
    { 0xdc, 0x00,  0x0018,  0x00000030,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_MOVE_GIRL[] = { /* 0x811fea0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x8a, 0x10,  0x0100,  0x00000008,  0x00000000, NULL },
    { 0xdc, 0x00,  0x0010,  0x00000018,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_WAKEUP_FUNC[] = { /* 0x811ff00 */
    DEBUGINFO,
    { 0xbe, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x8b, 0x3c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0026,  0x00000000,  0x00000000, NULL },
    { 0x8b, 0x3c,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0027,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LOOK_AROUND_FUNC[] = { /* 0x8120000 */
    DEBUGINFO,
    { 0x92, 0x04,  0x0002,  0x00000004,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0001,  0x00000005,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x92, 0x04,  0x0002,  0x00000004,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LOOK_AROUND_DOWN_FUNC[] = { /* 0x8120080 */
    DEBUGINFO,
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LOOK_AROUND_RIGHT_FUNC[] = { /* 0x81200f0 */
    DEBUGINFO,
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LOOK_AROUND_LEFT_FUNC[] = { /* 0x8120160 */
    DEBUGINFO,
    { 0x91, 0x04,  0x0001,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0002,  0x00000002,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0x91, 0x04,  0x0001,  0x00000006,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_JUMP_HAPPY_FUNC[] = { /* 0x81201d0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_JUMP_SURPRISE_FUNC[] = { /* 0x8120240 */
    DEBUGINFO,
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_JUMP_ANGRY_FUNC[] = { /* 0x81202c0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x00000006,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_NOTICE_FUNC[] = { /* 0x8120370 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_QUESTION_FUNC[] = { /* 0x81203b0 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000059,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SWEAT_FUNC[] = { /* 0x81203f0 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x0000005c,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SHOCK_FUNC[] = { /* 0x8120430 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SPREE_START_FUNC[] = { /* 0x8120470 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SPREE_END_FUNC[] = { /* 0x81204a0 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SMILE_START_FUNC[] = { /* 0x81204d0 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SMILE_END_FUNC[] = { /* 0x8120500 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_ANGRY_START_FUNC[] = { /* 0x8120530 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x0000005e,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_ANGRY_END_FUNC[] = { /* 0x8120560 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_MOVE_PLAZA_SLEEP[] = { /* 0x8120590 */
    DEBUGINFO,
    CALL_SCRIPT(/* INIT_PLAZA_SLEEP_STAY_FUNC */ 51),
    { 0x8d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xdb, 0x00,  0x00f0,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 0),
};

static const struct ScriptCommand s_script_INIT_PLAZA_SLEEP_STAY_FUNC[] = { /* 0x81205f0 */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_INIT_PLAZA_SLEEP_TALK_FUNC[] = { /* 0x8120670 */
    DEBUGINFO,
    { 0xbb, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_INIT_SLEEP_FUNC[] = { /* 0x81206e0 */
    DEBUGINFO,
    { 0xbe, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x8b, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0026,  0x00000000,  0x00000000, NULL },
    { 0x8b, 0x3c,  0x0002,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_INIT_BASE_FUNC[] = { /* 0x8120770 */
    DEBUGINFO,
    { 0xa6, 0x00,  0x000d,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_INIT_DEBUG_HABITAT[] = { /* 0x81207d0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000010,  0x00000000, NULL },
    CALL_SCRIPT(/* WAIT_START_FUNC */ 3),
    RET,
};

static const struct ScriptCommand s_script_NORMAL_CAMERA[] = { /* 0x8120840 */
    DEBUGINFO,
    { 0x99, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_script_DISMISSAL_SALLY_MEMBER_FUNC[] = { /* 0x8120880 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("DISMISSAL_SALLY_MEMBER_FUNC\n") },
    { 0x3b, 0x09,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+The rescue team member(s)\n#+dispersed to the Friend Area(s).") },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+If you want to add members to\n#+the rescue team~2c go visit\n#+them in their Friend Areas.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    RET_DIRECT,
};

static const struct ScriptCommand s_script_DISMISSAL_SALLY_MEMBER2_FUNC[] = { /* 0x81209cc */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("DISMISSAL_SALLY_MEMBER2_FUNC\n") },
    { 0x3b, 0x09,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+The rescue team member(s)\n#+dispersed to the Friend Area(s).") },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+If you want to add members to\n#+the rescue team~2c go visit\n#+them in their Friend Areas.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    RET_DIRECT,
};

static const struct ScriptCommand s_script_DISMISSAL_SALLY_MEMBER3_FUNC[] = { /* 0x8120a7c */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("DISMISSAL_SALLY_MEMBER3_FUNC\n") },
    { 0x3b, 0x09,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+The rescue team member(s)\n#+dispersed to the Friend Area(s).") },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+If you want to add members to\n#+the rescue team~2c go visit\n#+them in their Friend Areas.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    RET_DIRECT,
};

static const struct ScriptCommand s_script_DISMISSAL_SALLY_MEMBER4_FUNC[] = { /* 0x8120b2c */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("DISMISSAL_SALLY_MEMBER4_FUNC\n") },
    { 0x3b, 0x09,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+The rescue team member(s)\n#+dispersed to the Friend Area(s).") },
    { 0x32, 0x00, -0x0001,  0x00000000,  0x00000000, _("#+If you want to add members to\n#+the rescue team~2c go visit\n#+them in their Friend Areas.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    RET_DIRECT,
};

static const struct ScriptCommand s_script_NEXT_SAVE_FUNC[] = { /* 0x8120bdc */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("NEXT_SAVE_FUNC\n") },
    { 0xd3, 0x00, -0x0001, -0x00000001,  0x00000000, _("Would you like to save your adventure?") },
    { 0xd9, 0x00,  0x0000,  0x00000000,  0x00000000, _("Yes") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("*No") },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0x3c, 0x0e,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_NEXT_SAVE2_FUNC[] = { /* 0x8120cdc */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("NEXT_SAVE2_FUNC\n") },
    { 0xd3, 0x00, -0x0001, -0x00000001,  0x00000000, _("Would you like to save your adventure?") },
    { 0xd9, 0x00,  0x0000,  0x00000000,  0x00000000, _("Yes") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("*No") },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0x3c, 0x0f,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SAVE_POINT[] = { /* 0x8120db0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3a, 0x00,  0x0000,  0x00000000, -0x00000001, _("Would you like to save your adventure?") },
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(0), /* = 0x00 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* SAVE_START_FUNC */ 94),
    { 0x3c, 0x0e,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* SAVE_END_FUNC */ 96),
    JUMP_SCRIPT(/* END_TALK */ 0),
};

static const struct ScriptCommand s_script_WAREHOUSE_POINT[] = { /* 0x8120e60 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x3c, 0x11,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* END_TALK */ 0),
};

static const struct ScriptCommand s_script_SAVE_AND_WAREHOUSE_POINT[] = { /* 0x8120ec0 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xd3, 0x01,  0x0000, -0x00000001,  0x00000000, _("What would you like to do?") },
    { 0xd9, 0x00,  0x0000,  0x00000000,  0x00000000, _("Check storage.") },
    { 0xd9, 0x00,  0x0001,  0x00000000,  0x00000000, _("Save.") },
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(0), /* = 0x00 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3c, 0x11,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(1), /* = 0x01 */
    { 0x3a, 0x00,  0x0002,  0x00000000, -0x00000001, _("Would you like to save your adventure?") },
    JUMP_SCRIPT(/* END_TALK */ 0),
  LABEL(2), /* = 0x02 */
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* SAVE_START_FUNC */ 94),
    { 0x3c, 0x0e,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* SAVE_END_FUNC */ 96),
    JUMP_SCRIPT(/* END_TALK */ 0),
};

static const struct ScriptCommand s_script_WORLD_MAP_POINT[] = { /* 0x8121034 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000e4,  0x00000000, NULL },
    { 0x1e, 0x01,  0x0001,  0x0000000c,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_FORMATION_HERO[] = { /* 0x8121074 */
    DEBUGINFO,
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xba, 0x00,  0x0003,  0x00000013,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000013,  0x00000002, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xa7, 0x00,  0x000f,  0x0000000d,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0018,  0x00000002,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0066,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_EVOLUTION_HERO[] = { /* 0x8121124 */
    DEBUGINFO,
    { 0x1d, 0x01,  0x0001,  0x00000008,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_WARP_LIVES_START[] = { /* 0x8121154 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_START_FUNC */ 77),
    HALT,
};

static const struct ScriptCommand s_script_WARP_LIVES_START2[] = { /* 0x8121184 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_START2_FUNC */ 78),
    HALT,
};

static const struct ScriptCommand s_script_WARP_LIVES_START3[] = { /* 0x81211b4 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_START3_FUNC */ 79),
    HALT,
};

static const struct ScriptCommand s_script_WARP_LIVES_ARRIVE[] = { /* 0x81211e4 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE_FUNC */ 81),
    RET,
};

static const struct ScriptCommand s_script_WARP_LIVES_ARRIVE2[] = { /* 0x8121214 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE2_FUNC */ 82),
    RET,
};

static const struct ScriptCommand s_script_WARP_LIVES_ARRIVE3[] = { /* 0x8121244 */
    DEBUGINFO,
    CALL_SCRIPT(/* LIVES_WARP_ARRIVE3_FUNC */ 83),
    RET,
};

static const struct ScriptCommand s_script_LIVES_WARP_START_FUNC[] = { /* 0x8121274 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0x68, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000020,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x000000c0,  0x00000000, NULL },
    RET_DIRECT,
    { 0x68, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000004,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000020,  0x00000000, NULL },
    { 0x68, 0x00,  0x1800,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x000000c0,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_LIVES_WARP_START2_FUNC[] = { /* 0x81213c4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0x68, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000020,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x000000c0,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LIVES_WARP_START3_FUNC[] = { /* 0x81214b4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0x68, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000020,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x000000c0,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LIVES_WARP_START_SUB[] = { /* 0x81215a4 */
    DEBUGINFO,
    { 0x60, 0x00,  0x0000,  0x00000060,  0x00000000, NULL },
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_script_LIVES_WARP_ARRIVE_FUNC[] = { /* 0x81215f4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x000000c0,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000020,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000004,  0x00000000, NULL },
    { 0x68, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    RET_DIRECT,
    { 0x68, 0x00,  0x4000,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x00000020,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000004,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000002,  0x00000000, NULL },
    { 0x68, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_LIVES_WARP_ARRIVE2_FUNC[] = { /* 0x81217a4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x000000c0,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000020,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000004,  0x00000000, NULL },
    { 0x68, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LIVES_WARP_ARRIVE3_FUNC[] = { /* 0x81218d4 */
    DEBUGINFO,
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x28,  0x0000,  0x000000c0,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x2000,  0x00000040,  0x00000000, NULL },
    { 0x68, 0x00,  0x1000,  0x00000020,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x68, 0x00,  0x0800,  0x00000010,  0x00000000, NULL },
    { 0x68, 0x00,  0x0400,  0x00000008,  0x00000000, NULL },
    { 0x68, 0x00,  0x0200,  0x00000004,  0x00000000, NULL },
    { 0x68, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00080000,  0x00000000, NULL },
    { 0xdb, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LIVES_WARP_ARRIVE_SUB[] = { /* 0x8121a04 */
    DEBUGINFO,
    { 0x60, 0x00,  0x0000,  0x00000060,  0x00000000, NULL },
    { 0x54, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xdd, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_script_GET_ITEM_FUNC[] = { /* 0x8121a54 */
    DEBUGINFO,
    { 0x49, 0x00,  0x0000,  0x000000cb,  0x00000000, NULL },
    { 0xe1, 0x00,  0x00cb,  0x00000000,  0x00000000, NULL },
    { 0x31, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_GET_ITEM_WAIT_FUNC[] = { /* 0x8121aa4 */
    DEBUGINFO,
    { 0x49, 0x00,  0x0000,  0x000000cb,  0x00000000, NULL },
    { 0xe1, 0x00,  0x00cb,  0x00000000,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_GET_ITEM2_FUNC[] = { /* 0x8121af4 */
    DEBUGINFO,
    { 0x49, 0x00,  0x0000,  0x000000cb,  0x00000000, NULL },
    { 0xe1, 0x00,  0x00cb,  0x00000000,  0x00000000, NULL },
    { 0x31, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_GET_ITEM2_WAIT_FUNC[] = { /* 0x8121b44 */
    DEBUGINFO,
    { 0x49, 0x00,  0x0000,  0x000000cb,  0x00000000, NULL },
    { 0xe1, 0x00,  0x00cb,  0x00000000,  0x00000000, NULL },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_JOIN_FUNC[] = { /* 0x8121b94 */
    DEBUGINFO,
    { 0x49, 0x00,  0x0000,  0x000000cc,  0x00000000, NULL },
    { 0xe1, 0x00,  0x00cc,  0x00000000,  0x00000000, NULL },
    { 0x31, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LODGE_START_FUNC[] = { /* 0x8121be4 */
    DEBUGINFO,
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LODGE_WAIT_FUNC[] = { /* 0x8121c14 */
    DEBUGINFO,
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LODGE_END_FUNC[] = { /* 0x8121c44 */
    DEBUGINFO,
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_LODGE_SOUND_FUNC[] = { /* 0x8121c84 */
    DEBUGINFO,
    { 0xdb, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SAVE_START_FUNC[] = { /* 0x8121cb4 */
    DEBUGINFO,
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x43,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000032,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SAVE_WAIT_FUNC[] = { /* 0x8121d04 */
    DEBUGINFO,
    { 0xe0, 0x00,  0x0032,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x45,  0x001e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SAVE_END_FUNC[] = { /* 0x8121d44 */
    DEBUGINFO,
    { 0xe0, 0x00,  0x0032,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x45,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_SAVE_SOUND_FUNC[] = { /* 0x8121d94 */
    DEBUGINFO,
    { 0x3b, 0x43,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x44, 0x00,  0x0000,  0x00000032,  0x00000000, NULL },
    { 0xe0, 0x00,  0x0032,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x45,  0x001e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EFFECT_TEST1[] = { /* 0x8121df4 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000001c,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000001d,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_script_EFFECT_TEST2[] = { /* 0x8121e74 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000009,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000000a,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x0000000b,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_script_EFFECT_MOVE_DIVE[] = { /* 0x8121f14 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_script_EFFECT_MOVE_WAVE[] = { /* 0x8121f54 */
    DEBUGINFO,
    { 0x56, 0x00,  0x0000,  0x000001b6,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_script_EVENT_DIVIDE[] = { /* 0x8121f94 */
    DEBUGINFO,
    { 0xc4, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x00000039,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0002,  0x00000038,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0003,  0x0000001e,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0004,  0x0000001f,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0005,  0x00000021,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0006,  0x00000022,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0007,  0x00000024,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0008,  0x00000026,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0009,  0x00000027,  0x00000000, NULL },
    { 0xcd, 0x02,  0x000a,  0x00000028,  0x00000000, NULL },
    { 0xcd, 0x02,  0x000b,  0x00000029,  0x00000000, NULL },
    { 0xcd, 0x02,  0x000c,  0x0000002a,  0x00000000, NULL },
    { 0xcd, 0x02,  0x000d,  0x0000002c,  0x00000000, NULL },
    { 0xcd, 0x02,  0x000e,  0x0000002e,  0x00000000, NULL },
    { 0xcd, 0x02,  0x000f,  0x0000002f,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0010,  0x00000031,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0011,  0x00000033,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0012,  0x00000034,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0013,  0x00000035,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0014,  0x00000036,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0015,  0x0000003a,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0016,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0016,  0x00000001,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0015,  0x0000003a,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x06,  0x0018,  0x0000000a,  0x00000000, NULL },
    { 0xcd, 0x06,  0x0019,  0x00000011,  0x00000000, NULL },
    { 0xcd, 0x06,  0x001a,  0x0000001b,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(22), /* = 0x16 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000001,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M00E01A_L001 */ 119),
  LABEL(24), /* = 0x18 */
    JUMP_SCRIPT(/* EVENT_DIVIDE_FIRST */ 107),
  LABEL(25), /* = 0x19 */
    JUMP_SCRIPT(/* EVENT_DIVIDE_SECOND */ 108),
  LABEL(26), /* = 0x1a */
    JUMP_SCRIPT(/* EVENT_DIVIDE_AFTER */ 109),
  LABEL(1), /* = 0x01 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_R00E01A_L001 */ 354),
  LABEL(3), /* = 0x03 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S01E01B_L001L */ 260),
  LABEL(4), /* = 0x04 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S01E02A_L002L */ 266),
  LABEL(5), /* = 0x05 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S02E01A_L004L */ 275),
  LABEL(6), /* = 0x06 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S02E02A_L003L */ 281),
  LABEL(7), /* = 0x07 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S03E01A_L002L */ 287),
  LABEL(8), /* = 0x08 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S04E01A_L002L */ 293),
  LABEL(9), /* = 0x09 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S04E01B_L001L */ 295),
  LABEL(10), /* = 0x0a */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S04E01C_L001L */ 297),
  LABEL(11), /* = 0x0b */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S04E01D_L001L */ 299),
  LABEL(12), /* = 0x0c */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S04E01E_L001L */ 301),
  LABEL(13), /* = 0x0d */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S05E01A_L002L */ 308),
  LABEL(14), /* = 0x0e */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S06E01A_L002L */ 314),
  LABEL(15), /* = 0x0f */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S06E01B_L002L */ 317),
  LABEL(16), /* = 0x10 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S07E01A_L003L */ 323),
  LABEL(17), /* = 0x11 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S08E01A_L006L */ 333),
  LABEL(18), /* = 0x12 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S08E01A_L008L */ 336),
  LABEL(19), /* = 0x13 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S09E01A_L005L */ 348),
  LABEL(20), /* = 0x14 */
    { 0xa9, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S09E01B_L002L */ 352),
  LABEL(21), /* = 0x15 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001b,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 28),
  LABEL(27), /* = 0x1b */
    { 0xa9, 0x00,  0x0002,  0x0000003a,  0x00000001, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000003a,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa6, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
  LABEL(28), /* = 0x1c */
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
};


static const struct ScriptCommand s_script_EVENT_DIVIDE_NEXT[] = { /* 0x81226e4 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_DIVIDE_INIT_FUNC[] = { /* 0x8122724 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("EVENT_DIVIDE_INIT_FUNC\n") },
    { 0xa6, 0x00,  0x000d,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa5, 0x00,  0x0024,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xac, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xa5, 0x00,  0x0019,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_DIVIDE_NEXT_DAY_FUNC[] = { /* 0x812281c */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("EVENT_DIVIDE_NEXT_DAY_FUNC\n") },
    { 0xb9, 0x00,  0x0003,  0x0000000f,  0x00000007, NULL },
    { 0xb9, 0x01,  0x0003,  0x00000012,  0x00000004, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb8, 0x03,  0x0004,  0x0000001f,  0x00000000, NULL },
    { 0xb4, 0x05,  0x0004,  0x00000019,  0x00000002, NULL },
  LABEL(3), /* = 0x03 */
    RET_DIRECT,
  LABEL(4), /* = 0x04 */
    { 0x1b, 0x00,  0x0066,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xa9, 0x00,  0x0003,  0x00000013,  0x00000001, NULL },
  LABEL(2), /* = 0x02 */
    { 0xb9, 0x05,  0x000b,  0x00000033,  0x00000002, NULL },
    { 0xb9, 0x06,  0x000b,  0x00000033,  0x00000004, NULL },
    { 0xb9, 0x07,  0x000b,  0x00000033,  0x00000006, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(5), /* = 0x05 */
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000003, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(6), /* = 0x06 */
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000005, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(7), /* = 0x07 */
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000007, NULL },
    { 0xae, 0x01,  0x001c,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(8), /* = 0x08 */
    { 0xb9, 0x09,  0x000c,  0x00000035,  0x00000002, NULL },
    { 0xb9, 0x0a,  0x000c,  0x00000035,  0x00000004, NULL },
    JUMP_LOCAL(/* label */ 11),
  LABEL(9), /* = 0x09 */
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000003, NULL },
    JUMP_LOCAL(/* label */ 11),
  LABEL(10), /* = 0x0a */
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000005, NULL },
    JUMP_LOCAL(/* label */ 11),
  LABEL(11), /* = 0x0b */
    { 0xb9, 0x0c,  0x0006,  0x00000024,  0x00000001, NULL },
    JUMP_LOCAL(/* label */ 13),
  LABEL(12), /* = 0x0c */
    { 0x1b, 0x00,  0x011d,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(13), /* = 0x0d */
    { 0xb9, 0x0e,  0x0008,  0x0000002c,  0x00000001, NULL },
    JUMP_LOCAL(/* label */ 15),
  LABEL(14), /* = 0x0e */
    { 0x1b, 0x00,  0x0132,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(15), /* = 0x0f */
    { 0xb9, 0x10,  0x0009,  0x0000002e,  0x00000001, NULL },
    JUMP_LOCAL(/* label */ 17),
  LABEL(16), /* = 0x10 */
    { 0x1b, 0x00,  0x0138,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(17), /* = 0x11 */
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_DIVIDE_NEXT_DAY2_FUNC[] = { /* 0x8122bf8 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0002,  0x00000000,  0x00000000, _("EVENT_DIVIDE_NEXT_DAY2_FUNC\n") },
    { 0xb9, 0x00,  0x0003,  0x0000000f,  0x00000007, NULL },
    { 0xb9, 0x01,  0x0003,  0x00000012,  0x00000004, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb8, 0x03,  0x0004,  0x0000001f,  0x00000000, NULL },
    { 0xb4, 0x05,  0x0004,  0x00000019,  0x00000002, NULL },
  LABEL(3), /* = 0x03 */
    RET_DIRECT,
  LABEL(4), /* = 0x04 */
    { 0x1b, 0x00,  0x0066,  0x00000000,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xa9, 0x00,  0x0003,  0x00000013,  0x00000001, NULL },
  LABEL(2), /* = 0x02 */
    { 0xb9, 0x05,  0x000b,  0x00000033,  0x00000002, NULL },
    { 0xb9, 0x06,  0x000b,  0x00000033,  0x00000004, NULL },
    { 0xb9, 0x07,  0x000b,  0x00000033,  0x00000006, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(5), /* = 0x05 */
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000003, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(6), /* = 0x06 */
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000005, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(7), /* = 0x07 */
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000007, NULL },
    { 0xae, 0x01,  0x001c,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(8), /* = 0x08 */
    { 0xb9, 0x09,  0x000c,  0x00000035,  0x00000002, NULL },
    { 0xb9, 0x0a,  0x000c,  0x00000035,  0x00000004, NULL },
    JUMP_LOCAL(/* label */ 11),
  LABEL(9), /* = 0x09 */
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000003, NULL },
    JUMP_LOCAL(/* label */ 11),
  LABEL(10), /* = 0x0a */
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000005, NULL },
    JUMP_LOCAL(/* label */ 11),
  LABEL(11), /* = 0x0b */
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_DIVIDE_FIRST[] = { /* 0x8122eb8 */
    DEBUGINFO,
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0002,  0x00000004,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0003,  0x00000005,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0004,  0x00000006,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0005,  0x00000007,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0006,  0x00000008,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0007,  0x00000009,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0008,  0x0000000a,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xa5, 0x00,  0x0024,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(9), /* = 0x09 */
    { 0xa9, 0x00,  0x0003,  0x00000002,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa6, 0x00,  0x000d,  0x000000b2,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000b2,  0x00000000, NULL },
  LABEL(10), /* = 0x0a */
    JUMP_SCRIPT(/* EVENT_M01E01A_L001 */ 120),
  LABEL(1), /* = 0x01 */
    { 0xa5, 0x00,  0x0024,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000c,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000d,  0x00000003,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(11), /* = 0x0b */
    { 0xa9, 0x00,  0x0003,  0x00000003,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
  LABEL(12), /* = 0x0c */
    JUMP_SCRIPT(/* EVENT_M01E02A_L001 */ 123),
  LABEL(13), /* = 0x0d */
    JUMP_SCRIPT(/* EVENT_M01E02A_L001C */ 125),
  LABEL(2), /* = 0x02 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000e,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000f,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0010,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0011,  0x00000004,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(14), /* = 0x0e */
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
  LABEL(15), /* = 0x0f */
    JUMP_SCRIPT(/* EVENT_M01E02B_L001 */ 131),
  LABEL(16), /* = 0x10 */
    { 0xa6, 0x00,  0x0025,  0x00000003,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(17), /* = 0x11 */
    { 0xb4, 0x05,  0x0012,  0x00000019,  0x00000002, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(18), /* = 0x12 */
    JUMP_SCRIPT(/* EVENT_M01E02B_L004 */ 134),
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0015,  0x00000001,  0x00000000, NULL },
    { 0xcd, 0x06,  0x0016,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0017,  0x00000005,  0x00000000, NULL },
    { 0xcd, 0x06,  0x0018,  0x00000007,  0x00000000, NULL },
    { 0xcd, 0x06,  0x0019,  0x00000009,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(20), /* = 0x14 */
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
    { 0xb4, 0x05,  0x001a,  0x00000019,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E03A_L000 */ 140),
  LABEL(21), /* = 0x15 */
    { 0xb4, 0x05,  0x001a,  0x00000019,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(26), /* = 0x1a */
    JUMP_SCRIPT(/* EVENT_M01E03A_L001 */ 141),
  LABEL(22), /* = 0x16 */
    { 0xa6, 0x00,  0x0025,  0x00000004,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(23), /* = 0x17 */
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xb4, 0x05,  0x001b,  0x00000019,  0x00000003, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(27), /* = 0x1b */
    JUMP_SCRIPT(/* EVENT_M01E03A_L004 */ 144),
  LABEL(24), /* = 0x18 */
    { 0xb4, 0x05,  0x001c,  0x00000019,  0x00000002, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(28), /* = 0x1c */
    JUMP_SCRIPT(/* EVENT_M01E03A_L006 */ 146),
  LABEL(25), /* = 0x19 */
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(4), /* = 0x04 */
    { 0xa5, 0x00,  0x0024,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001e,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(29), /* = 0x1d */
    { 0xa9, 0x00,  0x0003,  0x00000006,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
    { 0xb4, 0x05,  0x001f,  0x00000019,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E04A_L000 */ 152),
  LABEL(30), /* = 0x1e */
    { 0xb4, 0x05,  0x001f,  0x00000019,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(31), /* = 0x1f */
    JUMP_SCRIPT(/* EVENT_M01E04A_L001 */ 153),
  LABEL(5), /* = 0x05 */
    { 0xa5, 0x00,  0x0024,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0020,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0021,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(32), /* = 0x20 */
    { 0xa9, 0x00,  0x0003,  0x00000007,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
    { 0xb4, 0x05,  0x0022,  0x00000019,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E04B_L000 */ 159),
  LABEL(33), /* = 0x21 */
    { 0xb4, 0x05,  0x0022,  0x00000019,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(34), /* = 0x22 */
    JUMP_SCRIPT(/* EVENT_M01E04B_L001 */ 160),
  LABEL(6), /* = 0x06 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0023,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0024,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(35), /* = 0x23 */
    { 0xa9, 0x00,  0x0003,  0x00000008,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
    { 0xb4, 0x05,  0x0025,  0x00000019,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E05A_L000 */ 167),
  LABEL(36), /* = 0x24 */
    { 0xb4, 0x05,  0x0025,  0x00000019,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(37), /* = 0x25 */
    JUMP_SCRIPT(/* EVENT_M01E05A_L001 */ 168),
  LABEL(7), /* = 0x07 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0026,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0027,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(38), /* = 0x26 */
    { 0xa9, 0x00,  0x0003,  0x00000009,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
    { 0xb4, 0x05,  0x0028,  0x00000019,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E05B_L000 */ 174),
  LABEL(39), /* = 0x27 */
    { 0xb4, 0x05,  0x0028,  0x00000019,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(40), /* = 0x28 */
    JUMP_SCRIPT(/* EVENT_M01E05B_L001 */ 175),
  LABEL(8), /* = 0x08 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0029,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x002a,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(41), /* = 0x29 */
    { 0xa9, 0x00,  0x0003,  0x0000000a,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
  LABEL(42), /* = 0x2a */
    JUMP_SCRIPT(/* EVENT_M01E06A_L001 */ 180),
};


static const struct ScriptCommand s_script_EVENT_DIVIDE_SECOND[] = { /* 0x8123a18 */
    DEBUGINFO,
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x0000000b,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x0000000c,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0002,  0x0000000d,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0003,  0x0000000e,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0004,  0x0000000f,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0005,  0x00000010,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0006,  0x00000011,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0008,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000002,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000004,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(7), /* = 0x07 */
    { 0xa9, 0x00,  0x0003,  0x0000000b,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa6, 0x00,  0x000d,  0x00000009,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x00000009,  0x00000000, NULL },
  LABEL(8), /* = 0x08 */
    JUMP_SCRIPT(/* EVENT_M01E07A_L001 */ 183),
  LABEL(9), /* = 0x09 */
    { 0xa6, 0x00,  0x0025,  0x00000005,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(10), /* = 0x0a */
    JUMP_SCRIPT(/* EVENT_M01E07A_L003 */ 185),
  LABEL(1), /* = 0x01 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000c,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(11), /* = 0x0b */
    { 0xa9, 0x00,  0x0003,  0x0000000c,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa6, 0x00,  0x000d,  0x000000c3,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c3,  0x00000000, NULL },
  LABEL(12), /* = 0x0c */
    JUMP_SCRIPT(/* EVENT_M01E07B_L001 */ 190),
  LABEL(2), /* = 0x02 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000e,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(13), /* = 0x0d */
    { 0xa9, 0x00,  0x0003,  0x0000000d,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa6, 0x00,  0x000d,  0x000000c6,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c6,  0x00000000, NULL },
  LABEL(14), /* = 0x0e */
    JUMP_SCRIPT(/* EVENT_M01E08A_L001 */ 197),
  LABEL(3), /* = 0x03 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0010,  0x00000001,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(15), /* = 0x0f */
    { 0xa9, 0x00,  0x0003,  0x0000000e,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa6, 0x00,  0x000d,  0x000000c9,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x000000c9,  0x00000000, NULL },
  LABEL(16), /* = 0x10 */
    JUMP_SCRIPT(/* EVENT_M01E08B_L001 */ 204),
  LABEL(4), /* = 0x04 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0011,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0012,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0013,  0x00000002,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0014,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0013,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0015,  0x00000005,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0013,  0x00000006,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0016,  0x00000007,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0013,  0x00000008,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0017,  0x00000009,  0x00000000, NULL },
  LABEL(19), /* = 0x13 */
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(17), /* = 0x11 */
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
  LABEL(18), /* = 0x12 */
    JUMP_SCRIPT(/* EVENT_M01E09A_L001 */ 212),
  LABEL(20), /* = 0x14 */
    { 0xb4, 0x05,  0x0018,  0x00000019,  0x00000003, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(24), /* = 0x18 */
    JUMP_SCRIPT(/* EVENT_M01E09A_L003 */ 214),
  LABEL(21), /* = 0x15 */
    { 0xb4, 0x05,  0x0019,  0x00000019,  0x00000004, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(25), /* = 0x19 */
    JUMP_SCRIPT(/* EVENT_M01E09A_L005 */ 216),
  LABEL(22), /* = 0x16 */
    { 0xb8, 0x13,  0x0004,  0x0000001f,  0x00000000, NULL },
    { 0xb4, 0x05,  0x001a,  0x00000019,  0x00000002, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(26), /* = 0x1a */
    JUMP_SCRIPT(/* EVENT_M01E09A_L007 */ 218),
  LABEL(23), /* = 0x17 */
    { 0xa6, 0x00,  0x0025,  0x00000006,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(5), /* = 0x05 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001b,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001c,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(27), /* = 0x1b */
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0xa6, 0x00,  0x000d,  0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x00000001,  0x00000000, NULL },
    { 0xa8, 0x00,  0x0024,  0x00000001,  0x00000001, NULL },
  LABEL(28), /* = 0x1c */
    JUMP_SCRIPT(/* EVENT_M01E10A_L001 */ 227),
  LABEL(29), /* = 0x1d */
    { 0xa6, 0x00,  0x0025,  0x00000007,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(6), /* = 0x06 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(30), /* = 0x1e */
    { 0xa9, 0x00,  0x0003,  0x00000011,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E01A_END */ 255),
    { 0xa6, 0x00,  0x000d,  0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x00000001,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01END_L001 */ 235),
};

static const struct ScriptCommand s_script_EVENT_DIVIDE_AFTER[] = { /* 0x8124268 */
    DEBUGINFO,
    { 0xc4, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x00000012,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0001,  0x00000013,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0002,  0x00000014,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0003,  0x00000015,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0004,  0x00000016,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0005,  0x00000017,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0006,  0x00000018,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0007,  0x00000019,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0008,  0x0000001a,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0009,  0x0000001b,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(10), /* = 0x0a */
    { 0xa9, 0x00,  0x0003,  0x00000012,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E01A_END */ 255),
    JUMP_SCRIPT(/* EVENT_M02E01A_L001 */ 237),
  LABEL(1), /* = 0x01 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(11), /* = 0x0b */
    { 0xa9, 0x00,  0x0003,  0x00000013,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E01A_END */ 255),
    JUMP_SCRIPT(/* EVENT_M02E02A_L001 */ 240),
  LABEL(2), /* = 0x02 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(12), /* = 0x0c */
    { 0xa9, 0x00,  0x0003,  0x00000014,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_START */ 262),
    CALL_SCRIPT(/* EVENT_S02E01A_END */ 270),
    JUMP_SCRIPT(/* EVENT_M02E02B_L001 */ 241),
  LABEL(3), /* = 0x03 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(13), /* = 0x0d */
    { 0xa9, 0x00,  0x0003,  0x00000015,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_START */ 262),
    CALL_SCRIPT(/* EVENT_S02E01A_END */ 270),
    CALL_SCRIPT(/* EVENT_S04E01A_START */ 288),
    JUMP_SCRIPT(/* EVENT_M02E02C_L001 */ 242),
  LABEL(4), /* = 0x04 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000e,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(14), /* = 0x0e */
    { 0xa9, 0x00,  0x0003,  0x00000016,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_START */ 262),
    CALL_SCRIPT(/* EVENT_S02E01A_END */ 270),
    CALL_SCRIPT(/* EVENT_S04E01A_LAST */ 289),
    CALL_SCRIPT(/* EVENT_S05E01A_START */ 303),
    JUMP_SCRIPT(/* EVENT_M02E02D_L001 */ 243),
  LABEL(5), /* = 0x05 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(15), /* = 0x0f */
    { 0xa9, 0x00,  0x0003,  0x00000017,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_START */ 262),
    CALL_SCRIPT(/* EVENT_S02E01A_END */ 270),
    CALL_SCRIPT(/* EVENT_S04E01A_LAST */ 289),
    CALL_SCRIPT(/* EVENT_S05E01A_CONTINUE */ 304),
    CALL_SCRIPT(/* EVENT_S06E01A_START */ 309),
    JUMP_SCRIPT(/* EVENT_M02E02E_L001 */ 244),
  LABEL(6), /* = 0x06 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0010,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(16), /* = 0x10 */
    { 0xa9, 0x00,  0x0003,  0x00000018,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_START */ 262),
    CALL_SCRIPT(/* EVENT_S02E02A_START */ 276),
    CALL_SCRIPT(/* EVENT_S04E01A_END */ 290),
    CALL_SCRIPT(/* EVENT_S05E01A_CONTINUE */ 304),
    CALL_SCRIPT(/* EVENT_S06E01A_END */ 311),
    CALL_SCRIPT(/* EVENT_S08E01A_START */ 324),
    JUMP_SCRIPT(/* EVENT_M02E02F_L001 */ 245),
  LABEL(7), /* = 0x07 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0011,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(17), /* = 0x11 */
    { 0xa9, 0x00,  0x0003,  0x00000019,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_START */ 262),
    CALL_SCRIPT(/* EVENT_S02E02A_END */ 277),
    CALL_SCRIPT(/* EVENT_S04E01A_END */ 290),
    CALL_SCRIPT(/* EVENT_S05E01A_CONTINUE */ 304),
    CALL_SCRIPT(/* EVENT_S06E01A_END */ 311),
    CALL_SCRIPT(/* EVENT_S08E01A_START */ 324),
    CALL_SCRIPT(/* EVENT_S03E01A_START */ 282),
    JUMP_SCRIPT(/* EVENT_M02E02G_L001 */ 246),
  LABEL(8), /* = 0x08 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0012,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(18), /* = 0x12 */
    { 0xa9, 0x00,  0x0003,  0x0000001a,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_START */ 262),
    CALL_SCRIPT(/* EVENT_S02E02A_END */ 277),
    CALL_SCRIPT(/* EVENT_S04E01A_END */ 290),
    CALL_SCRIPT(/* EVENT_S05E01A_CONTINUE */ 304),
    CALL_SCRIPT(/* EVENT_S06E01A_END */ 311),
    CALL_SCRIPT(/* EVENT_S08E01A_END */ 325),
    CALL_SCRIPT(/* EVENT_S03E01A_CONTINUE */ 283),
    CALL_SCRIPT(/* EVENT_S09E01A_START */ 340),
    JUMP_SCRIPT(/* EVENT_M02E02H_L001 */ 247),
  LABEL(9), /* = 0x09 */
    { 0xc5, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
  LABEL(19), /* = 0x13 */
    { 0xa9, 0x00,  0x0003,  0x0000001b,  0x00000001, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    CALL_SCRIPT(/* EVENT_S01E02A_END */ 263),
    CALL_SCRIPT(/* EVENT_S02E02A_END */ 277),
    CALL_SCRIPT(/* EVENT_S04E01A_END */ 290),
    CALL_SCRIPT(/* EVENT_S05E01A_END */ 305),
    CALL_SCRIPT(/* EVENT_S06E01A_END */ 311),
    CALL_SCRIPT(/* EVENT_S07E01A_END */ 319),
    CALL_SCRIPT(/* EVENT_S08E01A_END */ 325),
    CALL_SCRIPT(/* EVENT_S03E01A_END */ 284),
    CALL_SCRIPT(/* EVENT_S09E01A_END */ 341),
    { 0xb0, 0x01,  0x001f,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0020,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0021,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0022,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0023,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0024,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0027,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0028,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0029,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M02END_L001 */ 248),
};

static const struct ScriptCommand s_script_EVENT_DIVIDE_WARP_LOCK_FUNC[] = { /* 0x8124bb8 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000005,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003,  0x00000006,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003,  0x00000007,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0xcf, 0x02,  0x0026,  0x00000001,  0x00000000, NULL },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Huh?\nAre you going home already?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" We haven~27t gone to the\n#C5Pelipper Post Office#R yet?") },
    { 0xd0, 0x00,  0x0001,  0x00000000,  0x00000000, _(" You can go home after we\ngo to the #C5Pelipper Post Office#R.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Huh?\nYou want to go home already?") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" We~27re already here.\nLet me show you around a bit more.") },
    { 0xd1, 0x00,  0x0000,  0x00000000,  0x00000000, _(" Let~27s go to the #C5Pelipper\nPost Office#R at least.") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(1), /* = 0x01 */
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Huh?\nYou want to go home already?") },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Huh?\nAre you ready to leave?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(2), /* = 0x02 */
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Huh?\nAre you ready to leave?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(3), /* = 0x03 */
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Huh?\nAre you ready to leave?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0x34, 0x00,  0x0001,  0x00000000,  0x00000000, _(" Huh?\nAre you ready to leave?") },
    { 0x30, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};



static const struct ScriptCommand s_script_EVENT_RESCUE_ENTER_CHECK[] = { /* 0x8124f80 */
    DEBUGINFO,
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e, -0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_RESCUE[] = { /* 0x8124fc0 */
    DEBUGINFO,
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_DEBUG_SCRIPT[] = { /* 0x8125000 */
    DEBUGINFO,
    { 0x3c, 0x2a,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0x3b, 0x41,  0x003c,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_DEMO_CANCEL[] = { /* 0x8125070 */
    DEBUGINFO,
    HALT,
};

static const struct ScriptCommand s_script_DEMO_01[] = { /* 0x8125090 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000e3,  0x00000000, NULL },
    { 0x3b, 0x41,  0x003c,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_DEMO_02[] = { /* 0x81250d0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000e2,  0x00000000, NULL },
    { 0x3b, 0x41,  0x003c,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_DEMO_03[] = { /* 0x8125110 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x00000005,  0x00000000, NULL },
    { 0x1e, 0x00,  0x001d,  0x00000004,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000e1,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000e0,  0x00000000, NULL },
    { 0x3b, 0x41,  0x003c,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_DEMO_04[] = { /* 0x8125180 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0004,  0x000000e0,  0x00000000, NULL },
    { 0x3b, 0x41,  0x003c,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_EVENT_M00E01A_L001[] = { /* 0x81251c0 */
    DEBUGINFO,
    { 0x47, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000df,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000002,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E01A_L001[] = { /* 0x8125230 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000b2,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E01A_L002[] = { /* 0x8125270 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000b2,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E01A_L003[] = { /* 0x81252a0 */
    DEBUGINFO,
    { 0x3b, 0x39,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000b3,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000b2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0011,  0x00000009,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000e0,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000003,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L001[] = { /* 0x8125350 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000003,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L001B[] = { /* 0x8125390 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000003,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L001C[] = { /* 0x81253c0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0011,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000003,  0x00000004, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L002[] = { /* 0x8125400 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0012,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000003,  0x00000005, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L003[] = { /* 0x8125440 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000b4,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000003,  0x00000006, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L004[] = { /* 0x8125490 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0012,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L005[] = { /* 0x81254c0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000b4,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02A_L006[] = { /* 0x81254f0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000b5,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000b4,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0017,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L001[] = { /* 0x8125580 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0013,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L002[] = { /* 0x81255e0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0006,  0x00000001,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000003, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000003,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L003[] = { /* 0x8125630 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x000c,  0x00000004,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000004, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L004[] = { /* 0x8125680 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0014,  0x0000000c,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000005, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L004B[] = { /* 0x81256f0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001a,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000006, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L005[] = { /* 0x8125730 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000b6,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L006[] = { /* 0x8125770 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0015,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L007[] = { /* 0x81257a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000b6,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E02B_L008[] = { /* 0x81257e0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000b7,  0x00000000, NULL },
    { 0x1e, 0x00,  0x001c,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L000[] = { /* 0x8125860 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000001, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L001[] = { /* 0x81258a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0016,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L002[] = { /* 0x8125900 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001d,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000003, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000004,  0x00000000, NULL },
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x00000009,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x01, 0x00, -0x0001,  0x00000001,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L003[] = { /* 0x81259b0 */
    DEBUGINFO,
    { 0xb3, 0x00,  0x0017,  0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xb4, 0x05,  0x0000,  0x00000019,  0x00000003, NULL },
    { 0x1e, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000005, NULL },
    RET,
  LABEL(0), /* = 0x00 */
    JUMP_SCRIPT(/* EVENT_M01E03A_L004 */ 144),
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L004[] = { /* 0x8125a50 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0017,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000006, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L005[] = { /* 0x8125aa0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001e,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000007, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L006[] = { /* 0x8125af0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0018,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000008, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L007[] = { /* 0x8125b30 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001f,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x00000009, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L008[] = { /* 0x8125b80 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000b8,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L009[] = { /* 0x8125bb0 */
    DEBUGINFO,
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER3_FUNC */ 61),
    { 0x1e, 0x00,  0x0019,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L010[] = { /* 0x8125bf0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000b8,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E03A_L011[] = { /* 0x8125c20 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000b9,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0022,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000006,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E04A_L000[] = { /* 0x8125cb0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000006,  0x00000001, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04A_L001[] = { /* 0x8125cf0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001a,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000006,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04A_L002[] = { /* 0x8125d30 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0023,  0x00000009,  0x00000000, NULL },
    { 0x3b, 0x3b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x000c,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0024,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000006,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04A_L003[] = { /* 0x8125db0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000ba,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04A_L004[] = { /* 0x8125de0 */
    DEBUGINFO,
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER3_FUNC */ 61),
    { 0x1e, 0x00,  0x001b,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04A_L005[] = { /* 0x8125e20 */
    DEBUGINFO,
    { 0x02, 0x00,  0x001e,  0x00000006,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04A_L006[] = { /* 0x8125e50 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000bb,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0027,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000007,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L000[] = { /* 0x8125ee0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000007,  0x00000001, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L001[] = { /* 0x8125f20 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001c,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000007,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L002[] = { /* 0x8125f60 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0028,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000007,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L003[] = { /* 0x8125fb0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000bc,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L004[] = { /* 0x8125fe0 */
    DEBUGINFO,
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER3_FUNC */ 61),
    { 0x1e, 0x00,  0x001d,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L005[] = { /* 0x8126020 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000bc,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L006[] = { /* 0x8126050 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000bd,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E04B_L007[] = { /* 0x8126080 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000be,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000008,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E05A_L000[] = { /* 0x8126100 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000008,  0x00000001, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05A_L001[] = { /* 0x8126140 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001e,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000008,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05A_L002[] = { /* 0x8126180 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x002b,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000008,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05A_L003[] = { /* 0x81261d0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000bf,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05A_L004[] = { /* 0x8126200 */
    DEBUGINFO,
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER3_FUNC */ 61),
    { 0x1e, 0x00,  0x001f,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05A_L005[] = { /* 0x8126240 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000bf,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05A_L006[] = { /* 0x8126270 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000c0,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000009,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E05B_L000[] = { /* 0x81262f0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000009,  0x00000001, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05B_L001[] = { /* 0x8126330 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0020,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000009,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05B_L002[] = { /* 0x8126370 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x002d,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000009,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05B_L003[] = { /* 0x81263b0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000009,  0x00000004, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05B_L004[] = { /* 0x81263e0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0011,  0x00000002,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000009,  0x00000005, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E05B_L005[] = { /* 0x8126420 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x002e,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E06A_L001[] = { /* 0x8126460 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0004,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0021,  0x0000000c,  0x00000000, NULL },
    { 0x3b, 0x3b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0012,  0x00000002,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0022,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000a,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E06A_L002[] = { /* 0x81264f0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x002f,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000a,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E06A_L003[] = { /* 0x8126530 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0014,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0015,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0030,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000b,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E07A_L001[] = { /* 0x8126590 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0031,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000b,  0x00000002, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000005,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07A_L002[] = { /* 0x81265e0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x0000000b,  0x00000004, NULL },
    { 0x1e, 0x00,  0x0033,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0034,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0035,  0x00000009,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a4,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a5,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x09,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E07A_L003[] = { /* 0x81266a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c1,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0007,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07A_L004[] = { /* 0x81266e0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000c1,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07A_L005[] = { /* 0x8126710 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a6,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a7,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000a6,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0011,  0x00000018,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E07A_T001[] = { /* 0x81267d0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x000000c1,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07A_T002[] = { /* 0x8126800 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0004,  0x000000c1,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07B_L001[] = { /* 0x8126830 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c3,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000c,  0x00000002, NULL },
    JUMP_SCRIPT(/* EVENT_M01E07B_L002 */ 191),
};

static const struct ScriptCommand s_script_EVENT_M01E07B_L002[] = { /* 0x8126870 */
    DEBUGINFO,
    { 0xaf, 0x01,  0x0008,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07B_L003[] = { /* 0x81268a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x000000c3,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07B_L004[] = { /* 0x81268d0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c4,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07B_L005[] = { /* 0x8126900 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c5,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000a7,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000d,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0011,  0x0000001a,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E07B_T001[] = { /* 0x81269a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x000000c3,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E07B_T002[] = { /* 0x81269d0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0004,  0x000000c3,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08A_L001[] = { /* 0x8126a00 */
    DEBUGINFO,
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a8,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000a8,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a9,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000d,  0x00000002, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08A_L002 */ 198),
};

static const struct ScriptCommand s_script_EVENT_M01E08A_L002[] = { /* 0x8126a80 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c6,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0009,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08A_L003[] = { /* 0x8126ac0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x000000c6,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08A_L004[] = { /* 0x8126af0 */
    DEBUGINFO,
    { 0xbc, 0x00,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000c7,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0x1e, 0x00,  0x0002,  0x000000c7,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08A_L005[] = { /* 0x8126b70 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c8,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000e,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0011,  0x0000001c,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E08A_T001[] = { /* 0x8126be0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0006,  0x000000c6,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08A_T002[] = { /* 0x8126c10 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x000000c6,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08B_L001[] = { /* 0x8126c40 */
    DEBUGINFO,
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000aa,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0005,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000aa,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000e,  0x00000002, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08B_L002 */ 205),
};

static const struct ScriptCommand s_script_EVENT_M01E08B_L002[] = { /* 0x8126cc0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c9,  0x00000000, NULL },
    { 0xaf, 0x01,  0x000a,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08B_L003[] = { /* 0x8126d00 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x000000c9,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08B_L004[] = { /* 0x8126d30 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000cb,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08B_L005[] = { /* 0x8126d60 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000ca,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08B_L006[] = { /* 0x8126d90 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000cb,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000cb,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000a,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0011,  0x00000002,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E08B_T001[] = { /* 0x8126e10 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x000000c9,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E08B_T002[] = { /* 0x8126e40 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0004,  0x000000c9,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L001[] = { /* 0x8126e70 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0017,  0x00000001,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0x1e, 0x00,  0x0023,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L002[] = { /* 0x8126ed0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0037,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L003[] = { /* 0x8126f10 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0006,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0024,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0007,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0025,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000004, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L004[] = { /* 0x8126f90 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0039,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000005, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L005[] = { /* 0x8126fd0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0026,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000006, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L006[] = { /* 0x8127010 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x003a,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x001a,  0x00000001,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000007, NULL },
    { 0x1e, 0x00,  0x003b,  0x00000009,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L007[] = { /* 0x8127070 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0027,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000008, NULL },
    JUMP_SCRIPT(/* EVENT_M01E09A_L008 */ 219),
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L008[] = { /* 0x81270b0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x001c,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x003c,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000009, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000006,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L009[] = { /* 0x8127110 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0008,  0x000000a2,  0x00000000, NULL },
    { 0x3b, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0028,  0x0000000c,  0x00000000, NULL },
    { 0xaf, 0x01,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x0000000a, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L010[] = { /* 0x81271a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x003e,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x0000000b, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L011[] = { /* 0x81271f0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000cc,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L012[] = { /* 0x8127220 */
    DEBUGINFO,
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER3_FUNC */ 61),
    { 0x1e, 0x00,  0x0029,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L013[] = { /* 0x8127260 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x000000cc,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L014[] = { /* 0x8127290 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000cd,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E09A_L015[] = { /* 0x81272c0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000ce,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x00000002,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE_FUNC */ 63),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L001[] = { /* 0x8127340 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000001, NULL },
    { 0x1e, 0x00,  0x001f,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000ab,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000ad,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000ab,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0020,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0021,  0x00000001,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000002, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000007,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L002[] = { /* 0x81273f0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000003, NULL },
    { 0x1e, 0x00,  0x0002,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000a3,  0x00000000, NULL },
    { 0x1e, 0x00,  0x002a,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000a3,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0009,  0x000000a2,  0x00000000, NULL },
    { 0x3b, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x002b,  0x0000000c,  0x00000000, NULL },
    { 0xaf, 0x01,  0x000c,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L003[] = { /* 0x81274b0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0041,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x000c,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000004, NULL },
    { 0xa6, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L004[] = { /* 0x8127510 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x000000ab,  0x00000000, NULL },
    { 0x1e, 0x00,  0x000a,  0x000000a2,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0004,  0x000000ab,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000cf,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000ac,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000cf,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L005[] = { /* 0x8127590 */
    DEBUGINFO,
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER3_FUNC */ 61),
    { 0x1e, 0x00,  0x002c,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L006[] = { /* 0x81275d0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x000000cf,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L007[] = { /* 0x8127600 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000d0,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M01E10A_L008[] = { /* 0x8127630 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000d1,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000ad,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000d1,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000ad,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000d1,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000c,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000011,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_M01END_L001[] = { /* 0x81276c0 */
    DEBUGINFO,
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000ae,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0005,  0x000000ab,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0025,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x001c,  0x00000002,  0x00000000, NULL },
    { 0x1e, 0x00,  0x001b,  0x00000004,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0006,  0x000000ab,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0007,  0x000000ab,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000af,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000b0,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000012,  0x00000000, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0x1e, 0x00,  0x0002,  0x000000af,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0044,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000b1,  0x00000000, NULL },
    { 0x3b, 0x42,  0x0000,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_EVENT_M01END_L002[] = { /* 0x81277f0 */
    DEBUGINFO,
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000af,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000b0,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000012,  0x00000000, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_INIT_FUNC */ 104),
    { 0x1e, 0x00,  0x0002,  0x000000af,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0044,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000b1,  0x00000000, NULL },
    { 0x3b, 0x42,  0x0000,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_script_EVENT_M02E01A_L001[] = { /* 0x81278a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x002d,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000012,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E01A_L002[] = { /* 0x81278e0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0045,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000012,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E01A_L003[] = { /* 0x8127930 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0048,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000012,  0x00000004, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02A_L001[] = { /* 0x8127970 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000013,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02B_L001[] = { /* 0x81279c0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000014,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02C_L001[] = { /* 0x8127a10 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000015,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02D_L001[] = { /* 0x8127a60 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000016,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02E_L001[] = { /* 0x8127ab0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000017,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02F_L001[] = { /* 0x8127b00 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000018,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02G_L001[] = { /* 0x8127b50 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x00000019,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02E02H_L001[] = { /* 0x8127ba0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0003,  0x0000001a,  0x00000002, NULL },
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_M02END_L001[] = { /* 0x8127bf0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0006,  0x0000000c,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000001b,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S00E01A_L001[] = { /* 0x8127c30 */
    DEBUGINFO,
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER3_FUNC */ 61),
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0007,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S00E01A_L002[] = { /* 0x8127c80 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0006,  0x00000009,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa9, 0x00,  0x0002,  0x00000039,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S00E01A_L003[] = { /* 0x8127cf0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0004,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S00E01A_L004[] = { /* 0x8127d20 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S01E01A_START[] = { /* 0x8127d50 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0004,  0x0000001d,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0004,  0x0000001d,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S01E01A_CONTINUE[] = { /* 0x8127db0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0004,  0x0000001d,  0x00000002, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0004,  0x0000001d,  0x00000002, NULL },
    { 0xae, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S01E01A_END[] = { /* 0x8127e20 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0004,  0x0000001f,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0004,  0x0000001f,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0028,  0x00000002,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S01E01A_L001[] = { /* 0x8127ea0 */
    DEBUGINFO,
    { 0xae, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001d,  0x00000002, NULL },
    RET,
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000005, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001d,  0x00000001, NULL },
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x00000009,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xec, 0x00,  0x000d,  0x00000000,  0x00000000, NULL },
};


static const struct ScriptCommand s_script_EVENT_S01E01A_L002[] = { /* 0x8127f60 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0003,  0x00000004,  0x00000000, NULL },
    { 0xaf, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001d,  0x00000003, NULL },
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x00000004,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x00000004,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S01E01A_L003[] = { /* 0x8127ff0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x004b,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S01E01B_L001 */ 259),
};

static const struct ScriptCommand s_script_EVENT_S01E01B_L001[] = { /* 0x8128030 */
    DEBUGINFO,
    { 0xa6, 0x00,  0x0028,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x004c,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001e,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x0000001e,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S01E01B_L001L[] = { /* 0x81280c0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S01E01C_L001[] = { /* 0x81280f0 */
    DEBUGINFO,
    { 0xa6, 0x00,  0x0028,  0x00000002,  0x00000000, NULL },
    { 0x1e, 0x00,  0x004e,  0x00000009,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001f,  0x00000000, NULL },
    { 0x3b, 0x03,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1b, 0x00,  0x0067,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S01E02A_START[] = { /* 0x8128160 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0004,  0x0000001f,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0004,  0x0000001f,  0x00000001, NULL },
    { 0xae, 0x01,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    { 0xad, 0x01,  0x0076,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0028,  0x00000002,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S01E02A_END[] = { /* 0x8128200 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0004,  0x00000020,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0004,  0x00000020,  0x00000002, NULL },
    { 0xb0, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x0028,  0x00000002,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S01E02A_L001[] = { /* 0x8128290 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x00000004,  0x00000000, NULL },
    { 0xaf, 0x01,  0x000f,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001f,  0x00000002, NULL },
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x00000004,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x00000004,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S01E02A_L002[] = { /* 0x8128320 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0004,  0x00000020,  0x00000000, NULL },
    { 0x1e, 0x00,  0x004f,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x0000001f,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S01E02A_L002L[] = { /* 0x81283b0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY2_FUNC */ 106),
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S01E02B_L001[] = { /* 0x81283f0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0004,  0x00000020,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S01E02B_L002[] = { /* 0x8128420 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0004,  0x00000020,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S02E01A_START[] = { /* 0x8128450 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0005,  0x00000021,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0005,  0x00000021,  0x00000001, NULL },
    { 0xb0, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S02E01A_END[] = { /* 0x81284c0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0005,  0x00000022,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0005,  0x00000022,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S02E01A_L001[] = { /* 0x8128530 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0005,  0x00000021,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S02E01A_L002[] = { /* 0x8128560 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0005,  0x00000021,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S02E01A_L003[] = { /* 0x8128590 */
    DEBUGINFO,
    { 0xaf, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0005,  0x00000021,  0x00000004, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S02E01A_L004[] = { /* 0x81285d0 */
    DEBUGINFO,
    { 0xb0, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0005,  0x00000022,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000021,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S02E01A_L004L[] = { /* 0x8128650 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S02E02A_START[] = { /* 0x8128690 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0005,  0x00000022,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0005,  0x00000022,  0x00000001, NULL },
    { 0x3b, 0x20,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S02E02A_END[] = { /* 0x8128710 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0005,  0x00000023,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0005,  0x00000023,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0011,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S02E02A_L001[] = { /* 0x8128790 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0005,  0x00000022,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S02E02A_L002[] = { /* 0x81287c0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0002,  0x0000009e,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0011,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0005,  0x00000022,  0x00000003, NULL },
    { 0x1e, 0x00,  0x0004,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S02E02A_L003[] = { /* 0x8128820 */
    DEBUGINFO,
    { 0xb0, 0x01,  0x0011,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0005,  0x00000023,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000022,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S02E02A_L003L[] = { /* 0x81288a0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S03E01A_START[] = { /* 0x81288e0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0006,  0x00000024,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0006,  0x00000024,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S03E01A_CONTINUE[] = { /* 0x8128940 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0006,  0x00000024,  0x00000002, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0006,  0x00000024,  0x00000002, NULL },
    { 0xaf, 0x01,  0x0012,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S03E01A_END[] = { /* 0x81289b0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0006,  0x00000025,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0006,  0x00000025,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0012,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S03E01A_L001[] = { /* 0x8128a20 */
    DEBUGINFO,
    { 0xaf, 0x01,  0x0012,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0006,  0x00000024,  0x00000002, NULL },
    { 0x1e, 0x00,  0x0051,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0004,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S03E01A_L002[] = { /* 0x8128a80 */
    DEBUGINFO,
    { 0xb0, 0x01,  0x0012,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0006,  0x00000025,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000024,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S03E01A_L002L[] = { /* 0x8128b00 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S04E01A_START[] = { /* 0x8128b40 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0007,  0x00000026,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0007,  0x00000026,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S04E01A_LAST[] = { /* 0x8128ba0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0007,  0x0000002b,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0007,  0x0000002b,  0x00000000, NULL },
    { 0xaf, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0015,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0016,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0017,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S04E01A_END[] = { /* 0x8128c50 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0007,  0x0000002b,  0x00000002, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0007,  0x0000002b,  0x00000002, NULL },
    { 0xaf, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0015,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0016,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0017,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S04E01A_L001[] = { /* 0x8128d00 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0052,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0009,  0x0000000c,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0007,  0x00000026,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S04E01A_L002[] = { /* 0x8128d60 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000c0,  0x00000000, NULL },
    { 0xaf, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0007,  0x00000027,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000026,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01A_L002L[] = { /* 0x8128e00 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01B_L001[] = { /* 0x8128e30 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000d4,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0015,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0007,  0x00000028,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000027,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01B_L001L[] = { /* 0x8128ed0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01C_L001[] = { /* 0x8128f00 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000d5,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0015,  0x00000000,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0016,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0007,  0x00000029,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000028,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01C_L001L[] = { /* 0x8128fa0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01D_L001[] = { /* 0x8128fd0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000d6,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0016,  0x00000000,  0x00000000, NULL },
    { 0xaf, 0x01,  0x0017,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0007,  0x0000002a,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000029,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01D_L001L[] = { /* 0x8129070 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01E_L001[] = { /* 0x81290a0 */
    DEBUGINFO,
    { 0xb0, 0x01,  0x0017,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0007,  0x0000002b,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x0000002a,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01E_L001L[] = { /* 0x8129120 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S04E01F_L001[] = { /* 0x8129150 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x0007,  0x0000002b,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S05E01A_START[] = { /* 0x8129180 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0008,  0x0000002c,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0008,  0x0000002c,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S05E01A_CONTINUE[] = { /* 0x81291e0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0008,  0x0000002c,  0x00000002, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0008,  0x0000002c,  0x00000002, NULL },
    { 0xaf, 0x01,  0x0018,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S05E01A_END[] = { /* 0x8129250 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0008,  0x0000002d,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0008,  0x0000002d,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0018,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S05E01A_L001[] = { /* 0x81292c0 */
    DEBUGINFO,
    { 0xaf, 0x01,  0x0018,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0008,  0x0000002c,  0x00000002, NULL },
    { 0x1e, 0x00,  0x0001,  0x000000d8,  0x00000000, NULL },
    { 0x1e, 0x00,  0x002e,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0004,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S05E01A_L002[] = { /* 0x8129330 */
    DEBUGINFO,
    { 0xb0, 0x01,  0x0018,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0008,  0x0000002d,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x0000002c,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S05E01A_L002L[] = { /* 0x81293b0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S06E01A_START[] = { /* 0x81293e0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0009,  0x0000002e,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0009,  0x0000002e,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S06E01A_CONTINUE[] = { /* 0x8129440 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0009,  0x0000002e,  0x00000002, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0009,  0x0000002e,  0x00000002, NULL },
    { 0xaf, 0x01,  0x0019,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S06E01A_END[] = { /* 0x81294b0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x0009,  0x00000030,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0009,  0x00000030,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0019,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x001a,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x24,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x25,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x26,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x27,  0x0000,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S06E01A_L001[] = { /* 0x8129570 */
    DEBUGINFO,
    { 0xaf, 0x01,  0x0019,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0009,  0x0000002e,  0x00000002, NULL },
    { 0x1e, 0x00,  0x000a,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0053,  0x00000009,  0x00000000, NULL },
    { 0x1e, 0x00,  0x000b,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x002f,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0005,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S06E01A_L002[] = { /* 0x8129600 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000d9,  0x00000000, NULL },
    { 0xb0, 0x01,  0x0019,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0009,  0x0000002f,  0x00000002, NULL },
    { 0xa6, 0x00,  0x0011,  0x00000002,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x0000002e,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S06E01A_L002L[] = { /* 0x8129680 */
    DEBUGINFO,
    JUMP_SCRIPT(/* EVENT_S06E01B_L001 */ 315),
};

static const struct ScriptCommand s_script_EVENT_S06E01B_L001[] = { /* 0x81296a0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0030,  0x00000001,  0x00000000, NULL },
    { 0xaf, 0x01,  0x001a,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0009,  0x0000002f,  0x00000002, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0x1e, 0x00,  0x0005,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S06E01B_L002[] = { /* 0x8129710 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000da,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0031,  0x00000001,  0x00000000, NULL },
    { 0xb0, 0x01,  0x001a,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0009,  0x00000030,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x0000002f,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S06E01B_L002L[] = { /* 0x81297b0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S07E01A_START[] = { /* 0x81297f0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x000a,  0x00000031,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x000a,  0x00000031,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S07E01A_END[] = { /* 0x8129850 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x000a,  0x00000032,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x000a,  0x00000032,  0x00000000, NULL },
    { 0xb0, 0x01,  0x001b,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S07E01A_L001[] = { /* 0x81298c0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000a,  0x00000031,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S07E01A_L002[] = { /* 0x81298f0 */
    DEBUGINFO,
    { 0xaf, 0x01,  0x001b,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000a,  0x00000031,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S07E01A_L003[] = { /* 0x8129930 */
    DEBUGINFO,
    { 0xb0, 0x01,  0x001b,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000a,  0x00000032,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000031,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S07E01A_L003L[] = { /* 0x81299b0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_START[] = { /* 0x81299f0 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x000b,  0x00000033,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_END[] = { /* 0x8129a50 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x000b,  0x00000034,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x000b,  0x00000034,  0x00000000, NULL },
    { 0xb0, 0x01,  0x001c,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L001[] = { /* 0x8129ac0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000001, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L002[] = { /* 0x8129af0 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L003[] = { /* 0x8129b20 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000004, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L004[] = { /* 0x8129b50 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000006, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L005[] = { /* 0x8129b80 */
    DEBUGINFO,
    { 0xae, 0x01,  0x001c,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000007, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L005B[] = { /* 0x8129bc0 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0007,  0x00000004,  0x00000000, NULL },
    { 0xaf, 0x01,  0x001c,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000008, NULL },
    { 0xab, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x00000004,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x00000004,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L006[] = { /* 0x8129c50 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0054,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x001c,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000b,  0x00000034,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000033,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L006L[] = { /* 0x8129ce0 */
    DEBUGINFO,
    CALL_SCRIPT(/* EVENT_DIVIDE_NEXT_DAY_FUNC */ 105),
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L007[] = { /* 0x8129d20 */
    DEBUGINFO,
    JUMP_SCRIPT(/* EVENT_S08E01A_L008 */ 335),
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L008[] = { /* 0x8129d40 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0041,  0x00000000,  0x00000000, _("S08 SWITCH SELECT\n") },
    { 0xc0, 0x00,  0x0041,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000d,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000039,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(0), /* = 0x00 */
    { 0xc3, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000001,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x3b, 0x29,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
  LABEL(4), /* = 0x04 */
    { 0x1e, 0x00,  0x000c,  0x0000000c,  0x00000000, NULL },
    { 0x3b, 0x2a,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0055,  0x00000009,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 5),
  LABEL(2), /* = 0x02 */
    { 0x3b, 0x2d,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
  LABEL(6), /* = 0x06 */
    { 0x1e, 0x00,  0x000d,  0x0000000c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 5),
  LABEL(3), /* = 0x03 */
    { 0x3b, 0x29,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0004,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0004,  0x00000002,  0x00000000, NULL },
    { 0x3b, 0x2d,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0006,  0x00000001,  0x00000000, NULL },
    { 0x1e, 0x00,  0x000e,  0x0000000c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 5),
  LABEL(5), /* = 0x05 */
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000034,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L008L[] = { /* 0x812a034 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0005,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L008A[] = { /* 0x812a064 */
    DEBUGINFO,
    { 0x3b, 0x29,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x000c,  0x0000000c,  0x00000000, NULL },
    { 0x3b, 0x2a,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0055,  0x00000009,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x1e, 0x00,  0x0005,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L008B[] = { /* 0x812a104 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x000d,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0005,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S08E01A_L008C[] = { /* 0x812a144 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x000e,  0x0000000c,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0005,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_START[] = { /* 0x812a184 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x000c,  0x00000035,  0x00000001, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000001, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_END[] = { /* 0x812a1e4 */
    DEBUGINFO,
    { 0xb8, 0x00,  0x000c,  0x00000037,  0x00000000, NULL },
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x000c,  0x00000037,  0x00000002, NULL },
    { 0xaf, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xb0, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET_DIRECT,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_L001[] = { /* 0x812a264 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000001, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_L002[] = { /* 0x812a294 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_L003[] = { /* 0x812a2c4 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000004, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_L004[] = { /* 0x812a2f4 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0056,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000c,  0x00000035,  0x00000006, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_L004B[] = { /* 0x812a344 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0006,  0x000000c9,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000025,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01A_L005[] = { /* 0x812a384 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000cb,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0058,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000c,  0x00000036,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000035,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S09E01A_L005L[] = { /* 0x812a424 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01B_L001[] = { /* 0x812a454 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0059,  0x00000009,  0x00000000, NULL },
    { 0xaf, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000c,  0x00000036,  0x00000002, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01B_L001B[] = { /* 0x812a4a4 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000dd,  0x00000000, NULL },
    { 0x02, 0x00,  0x0000,  0x00000027,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01B_L002[] = { /* 0x812a4e4 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0001,  0x000000dc,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0003,  0x000000a3,  0x00000000, NULL },
    { 0x1e, 0x00,  0x0002,  0x000000dc,  0x00000000, NULL },
    { 0x1e, 0x00,  0x005b,  0x00000009,  0x00000000, NULL },
    { 0xb0, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xa9, 0x00,  0x000c,  0x00000037,  0x00000002, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000036,  0x00000000, NULL },
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_EVENT_S09E01B_L002L[] = { /* 0x812a5a4 */
    DEBUGINFO,
    { 0x1e, 0x00,  0x0008,  0x0000000c,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_S09E01C_L001[] = { /* 0x812a5d4 */
    DEBUGINFO,
    { 0xa9, 0x00,  0x000c,  0x00000037,  0x00000003, NULL },
    RET,
};

static const struct ScriptCommand s_script_EVENT_R00E01A_L001[] = { /* 0x812a604 */
    DEBUGINFO,
    { 0xa5, 0x00,  0x0039,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    { 0x1e, 0x00,  0x000b,  0x00000004,  0x00000000, NULL },
    { 0xc4, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xcd, 0x02,  0x0000,  0x00000038,  0x00000000, NULL },
    { 0xb3, 0x01,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0039,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x1e, 0x00,  0x0006,  0x00000009,  0x00000000, NULL },
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0003,  0x00000024,  0x00000000, NULL },
  LABEL(4), /* = 0x04 */
    { 0xa6, 0x00,  0x000d,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x000f,  0x0000000c,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(/* DISMISSAL_SALLY_MEMBER_FUNC */ 59),
    { 0xa6, 0x00,  0x0011,  0x0000000b,  0x00000000, NULL },
    { 0xa9, 0x00,  0x0002,  0x00000039,  0x00000000, NULL },
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0039,  0x00000000,  0x00000000, NULL },
  LABEL(5), /* = 0x05 */
    CALL_SCRIPT(/* NEXT_SAVE2_FUNC */ 64),
  LABEL(6), /* = 0x06 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(3), /* = 0x03 */
    { 0xb3, 0x07,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 4),
  LABEL(7), /* = 0x07 */
    JUMP_SCRIPT(/* EVENT_S08E01A_L008 */ 335),
};

static const struct ScriptCommand s_script_COMMON_ENTER[] = { /* 0x812a804 */
    DEBUGINFO,
    { 0x10, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_DEBUG_ENTER[] = { /* 0x812a844 */
    DEBUGINFO,
    { 0x22, 0x00, -0x0001,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_script_GETOUT_HABITAT[] = { /* 0x812a874 */
    DEBUGINFO,
    { 0x03, 0x00,  0x001e,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000, -0x00000001,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    RET,
};

static const struct ScriptCommand s_script_GETOUT_M01E01A[] = { /* 0x812a8d4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0003,  0x00000002,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0003,  0x00000002,  0x00000001, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000002,  0x00000002, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E01A_L002 */ 121),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_M01E01A_L003 */ 122),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E02A[] = { /* 0x812aa14 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0003,  0x00000003,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xb3, 0x04,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E02A_L004 */ 128),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(/* EVENT_M01E02A_L006 */ 130),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E02B[] = { /* 0x812ab34 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000002,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000003,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x00000004,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x00000004,  0x00000006, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000007, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E02B_L006 */ 137),
  LABEL(6), /* = 0x06 */
    { 0x02, 0x00, -0x0001,  0x00000003,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x00000004,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xba, 0x08,  0x0003,  0x00000004,  0x00000007, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000004,  0x00000008, NULL },
  LABEL(8), /* = 0x08 */
    { 0xb3, 0x09,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E02B_L006 */ 137),
  LABEL(9), /* = 0x09 */
    JUMP_SCRIPT(/* EVENT_M01E02B_L008 */ 139),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000002,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000003,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
  LABEL(11), /* = 0x0b */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(12), /* = 0x0c */
    { 0x02, 0x00, -0x0001,  0x00000003,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E03A[] = { /* 0x812ae04 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000005,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x00000005,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x00000005,  0x00000009, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x0000000a, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E03A_L009 */ 149),
  LABEL(6), /* = 0x06 */
    { 0x02, 0x00, -0x0001,  0x00000005,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x00000005,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xba, 0x08,  0x0003,  0x00000005,  0x0000000a, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000005,  0x0000000b, NULL },
  LABEL(8), /* = 0x08 */
    { 0xb3, 0x09,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E03A_L009 */ 149),
  LABEL(9), /* = 0x09 */
    JUMP_SCRIPT(/* EVENT_M01E03A_L011 */ 151),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000004,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000005,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
  LABEL(11), /* = 0x0b */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(12), /* = 0x0c */
    { 0x02, 0x00, -0x0001,  0x00000005,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E04A[] = { /* 0x812b0d4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000006,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0003,  0x00000006,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0003,  0x00000006,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000006,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E04A_L004 */ 156),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_M01E04A_L006 */ 158),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E04B[] = { /* 0x812b224 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000007,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000008,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x00000007,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x00000007,  0x00000003, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000007,  0x00000004, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E04B_L004 */ 163),
  LABEL(6), /* = 0x06 */
    { 0x01, 0x00, -0x0001,  0x000000bd,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x00000007,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xba, 0x08,  0x0003,  0x00000007,  0x00000004, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000007,  0x00000005, NULL },
  LABEL(8), /* = 0x08 */
    { 0xb3, 0x09,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E04B_L006 */ 165),
  LABEL(9), /* = 0x09 */
    JUMP_SCRIPT(/* EVENT_M01E04B_L007 */ 166),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000007,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000008,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(11), /* = 0x0b */
    { 0xb3, 0x0d,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(13), /* = 0x0d */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(12), /* = 0x0c */
    { 0x3b, 0x0b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000001,  0x00000000, NULL },
    { 0x01, 0x00, -0x0001,  0x000000bd,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E05A[] = { /* 0x812b554 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000009,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0003,  0x00000008,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0003,  0x00000008,  0x00000003, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000008,  0x00000004, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E05A_L004 */ 171),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_M01E05A_L006 */ 173),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E07A[] = { /* 0x812b6a4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000000a,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0003,  0x0000000b,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0003,  0x0000000b,  0x00000004, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000b,  0x00000005, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E07A_L004 */ 186),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_M01E07A_L005 */ 187),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E07B[] = { /* 0x812b7f4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000000b,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x0000000c,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x0000000c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x0000000c,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000c,  0x00000003, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E07B_L003 */ 192),
  LABEL(6), /* = 0x06 */
    { 0x01, 0x00, -0x0001,  0x000000c4,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x0000000c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xba, 0x08,  0x0003,  0x0000000c,  0x00000003, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000c,  0x00000004, NULL },
  LABEL(8), /* = 0x08 */
    { 0xb3, 0x09,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E07B_L004 */ 193),
  LABEL(9), /* = 0x09 */
    JUMP_SCRIPT(/* EVENT_M01E07B_L005 */ 194),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x0000000b,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x0000000c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(11), /* = 0x0b */
    { 0xb3, 0x0d,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(13), /* = 0x0d */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(12), /* = 0x0c */
    { 0x3b, 0x0b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000001,  0x00000000, NULL },
    { 0x01, 0x00, -0x0001,  0x000000c4,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E08A[] = { /* 0x812bb24 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000000d,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x0000000e,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x0000000d,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x0000000d,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000d,  0x00000003, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08A_L003 */ 199),
  LABEL(6), /* = 0x06 */
    { 0x01, 0x00, -0x0001,  0x000000c7,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x0000000d,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xba, 0x08,  0x0003,  0x0000000d,  0x00000003, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000d,  0x00000004, NULL },
  LABEL(8), /* = 0x08 */
    { 0xb3, 0x09,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08A_L004 */ 200),
  LABEL(9), /* = 0x09 */
    JUMP_SCRIPT(/* EVENT_M01E08A_L005 */ 201),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x0000000d,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x0000000e,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(11), /* = 0x0b */
    { 0xb3, 0x0d,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(13), /* = 0x0d */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(12), /* = 0x0c */
    { 0x3b, 0x0b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000001,  0x00000000, NULL },
    { 0x01, 0x00, -0x0001,  0x000000c7,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E08B[] = { /* 0x812be54 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000000f,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000010,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x0000000e,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x0000000e,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000e,  0x00000003, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08B_L003 */ 206),
  LABEL(6), /* = 0x06 */
    { 0x01, 0x00, -0x0001,  0x000000ca,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x0000000e,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xb3, 0x08,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08B_L005 */ 208),
  LABEL(8), /* = 0x08 */
    JUMP_SCRIPT(/* EVENT_M01E08B_L006 */ 209),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x0000000f,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000010,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(9), /* = 0x09 */
    { 0xb3, 0x0b,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(12), /* = 0x0c */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(11), /* = 0x0b */
    { 0x3b, 0x0b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000001,  0x00000000, NULL },
    { 0x01, 0x00, -0x0001,  0x000000ca,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E09A[] = { /* 0x812c154 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000011,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000012,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x0000000f,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x0000000f,  0x0000000b, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x0000000c, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E09A_L012 */ 223),
  LABEL(6), /* = 0x06 */
    { 0x01, 0x00, -0x0001,  0x000000cd,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x0000000f,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xba, 0x08,  0x0003,  0x0000000f,  0x00000008, NULL },
    { 0xa9, 0x00,  0x0003,  0x0000000f,  0x00000009, NULL },
  LABEL(8), /* = 0x08 */
    { 0xb3, 0x09,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E09A_L014 */ 225),
  LABEL(9), /* = 0x09 */
    JUMP_SCRIPT(/* EVENT_M01E09A_L015 */ 226),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000011,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000012,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(11), /* = 0x0b */
    { 0xb3, 0x0d,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(13), /* = 0x0d */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(12), /* = 0x0c */
    { 0x3b, 0x0b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000001,  0x00000000, NULL },
    { 0x01, 0x00, -0x0001,  0x000000cd,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_M01E10A[] = { /* 0x812c484 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000013,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000014,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x0003,  0x00000010,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xba, 0x05,  0x0003,  0x00000010,  0x00000004, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000005, NULL },
  LABEL(5), /* = 0x05 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E10A_L005 */ 231),
  LABEL(6), /* = 0x06 */
    { 0x01, 0x00, -0x0001,  0x000000d0,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x0003,  0x00000010,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xba, 0x08,  0x0003,  0x00000010,  0x00000005, NULL },
    { 0xa9, 0x00,  0x0003,  0x00000010,  0x00000006, NULL },
  LABEL(8), /* = 0x08 */
    { 0xb3, 0x09,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E10A_L007 */ 233),
  LABEL(9), /* = 0x09 */
    JUMP_SCRIPT(/* EVENT_M01E10A_L008 */ 234),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000013,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000014,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(10), /* = 0x0a */
    { 0xb3, 0x0c,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(11), /* = 0x0b */
    { 0xb3, 0x0d,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(13), /* = 0x0d */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(12), /* = 0x0c */
    { 0x3b, 0x0b,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000001,  0x00000000, NULL },
    { 0x01, 0x00, -0x0001,  0x000000d0,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S00E01A[] = { /* 0x812c7b4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000015,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x02,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x01,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(2), /* = 0x02 */
    { 0xa6, 0x00,  0x0019,  0x00000064,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L002 */ 250),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S01E01A[] = { /* 0x812c894 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000016,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0004,  0x0000001d,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0004,  0x0000001d,  0x00000003, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001d,  0x00000004, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S01E01A_L003 */ 258),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S01E02A[] = { /* 0x812c9e4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000017,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0004,  0x0000001f,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0004,  0x0000001f,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0004,  0x0000001f,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S01E02A_L002 */ 265),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S02E01A[] = { /* 0x812cb34 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000018,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0005,  0x00000021,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0005,  0x00000021,  0x00000004, NULL },
    { 0xa9, 0x00,  0x0005,  0x00000021,  0x00000005, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S02E01A_L004 */ 274),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S02E02A[] = { /* 0x812cc84 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000019,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0005,  0x00000022,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0005,  0x00000022,  0x00000004, NULL },
    { 0xa9, 0x00,  0x0005,  0x00000022,  0x00000005, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S02E02A_L003 */ 280),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S03E01A[] = { /* 0x812cdd4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000001a,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0006,  0x00000024,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0006,  0x00000024,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0006,  0x00000024,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S03E01A_L002 */ 286),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S04E01A[] = { /* 0x812cf24 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000001b,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0007,  0x00000026,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S04E01A_L002 */ 292),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};


static const struct ScriptCommand s_script_GETOUT_S04E01B[] = { /* 0x812d044 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000001c,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0007,  0x00000027,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0007,  0x00000027,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0007,  0x00000027,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S04E01B_L001 */ 294),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S04E01C[] = { /* 0x812d194 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000001d,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0007,  0x00000028,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0007,  0x00000028,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0007,  0x00000028,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S04E01C_L001 */ 296),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S04E01D[] = { /* 0x812d2e4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000001e,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0007,  0x00000029,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0007,  0x00000029,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0007,  0x00000029,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S04E01D_L001 */ 298),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S04E01E[] = { /* 0x812d434 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0007,  0x0000002a,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0007,  0x0000002a,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0007,  0x0000002a,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S04E01E_L001 */ 300),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S05E01A[] = { /* 0x812d584 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000020,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0008,  0x0000002c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0008,  0x0000002c,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0008,  0x0000002c,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S05E01A_L002 */ 307),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S06E01A[] = { /* 0x812d6d4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000021,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0009,  0x0000002e,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0009,  0x0000002e,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0009,  0x0000002e,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S06E01A_L002 */ 313),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S06E01B[] = { /* 0x812d824 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000022,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x0009,  0x0000002f,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x0009,  0x0000002f,  0x00000002, NULL },
    { 0xa9, 0x00,  0x0009,  0x0000002f,  0x00000003, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S06E01B_L002 */ 316),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S07E01A[] = { /* 0x812d974 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000023,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x000a,  0x00000031,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x000a,  0x00000031,  0x00000003, NULL },
    { 0xa9, 0x00,  0x000a,  0x00000031,  0x00000004, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S07E01A_L003 */ 322),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S08E01A[] = { /* 0x812dac4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000024,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x000b,  0x00000033,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x000b,  0x00000033,  0x00000008, NULL },
    { 0xa9, 0x00,  0x000b,  0x00000033,  0x00000009, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S08E01A_L006 */ 332),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_S09E01A[] = { /* 0x812dc14 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000025,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000026,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x04,  0x000c,  0x00000035,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x06,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(6), /* = 0x06 */
    { 0x01, 0x00, -0x0001,  0x000000ca,  0x00000000, NULL },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x07,  0x000c,  0x00000035,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(7), /* = 0x07 */
    { 0xb3, 0x08,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(8), /* = 0x08 */
    JUMP_SCRIPT(/* EVENT_S09E01A_L005 */ 347),
  LABEL(2), /* = 0x02 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000025,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000026,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(9), /* = 0x09 */
    { 0xb3, 0x0b,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(10), /* = 0x0a */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(11), /* = 0x0b */
    { 0x01, 0x00, -0x0001,  0x000000ca,  0x00000000, NULL },
    HALT,
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};


static const struct ScriptCommand s_script_GETOUT_S09E01B[] = { /* 0x812dea4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000027,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0001,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x03,  0x000c,  0x00000036,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 2),
  LABEL(3), /* = 0x03 */
    { 0xba, 0x04,  0x000c,  0x00000036,  0x00000003, NULL },
    { 0xa9, 0x00,  0x000c,  0x00000036,  0x00000004, NULL },
  LABEL(4), /* = 0x04 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_S09E01B_L002 */ 351),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_D62E01A[] = { /* 0x812dff4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000032,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x02,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(2), /* = 0x02 */
    { 0xb0, 0x01,  0x0029,  0x00000000,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_D43E01A[] = { /* 0x812e0e4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000033,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x02,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(2), /* = 0x02 */
    { 0xb0, 0x01,  0x002a,  0x00000000,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_D44E01A[] = { /* 0x812e1d4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000034,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x02,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(2), /* = 0x02 */
    { 0xb0, 0x01,  0x002b,  0x00000000,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_D45E01A[] = { /* 0x812e2c4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000035,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x02,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(2), /* = 0x02 */
    { 0xb0, 0x01,  0x002c,  0x00000000,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_D46E01A[] = { /* 0x812e3b4 */
    DEBUGINFO,
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000036,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x02,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(2), /* = 0x02 */
    { 0xb0, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* GETOUT_R00E01A */ 396),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_U00E01A[] = { /* 0x812e4a4 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0014,  0x00000000,  0x00000000, _("GETOUT U00E01A\n") },
    { 0xb9, 0x00,  0x0003,  0x00000012,  0x00000004, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0003,  0x00000013,  0x00000001, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000050,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x03,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_R00E01A[] = { /* 0x812e5c4 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0014,  0x00000000,  0x00000000, _("GETOUT R00E01A\n") },
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000051,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xb3, 0x02,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_S00E01A_L001 */ 249),
  LABEL(2), /* = 0x02 */
    { 0xa9, 0x00,  0x0002,  0x00000038,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};

static const struct ScriptCommand s_script_GETOUT_T00E01A[] = { /* 0x812e6b4 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0013,  0x00000000,  0x00000000, _("GETOUT T00E01A\n") },
    { 0xb9, 0x00,  0x0003,  0x00000012,  0x00000004, NULL },
    JUMP_LOCAL(/* label */ 1),
  LABEL(0), /* = 0x00 */
    { 0xa9, 0x00,  0x0003,  0x00000013,  0x00000001, NULL },
    { 0xa6, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    { 0xa6, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0xc0, 0x00,  0x0013,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0002,  0x00000052,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(2), /* = 0x02 */
    { 0xf2, 0x00,  0x0014,  0x00000000,  0x00000000, _("GETOUT T00E01A 7&8\n") },
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0004,  0x0000004e,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0005,  0x0000004f,  0x00000000, NULL },
    { 0xb3, 0x06,  0x0018,  0x0000000a,  0x00000000, NULL },
    { 0xb3, 0x07,  0x0018,  0x00000009,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 8),
  LABEL(7), /* = 0x07 */
    { 0xc0, 0x00,  0x0014,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0009,  0x00000037,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000a,  0x00000038,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000b,  0x00000039,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000c,  0x0000003a,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000d,  0x0000003b,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000e,  0x0000003c,  0x00000000, NULL },
    { 0xcc, 0x00,  0x000f,  0x0000003d,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0010,  0x0000003e,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0011,  0x0000003f,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0012,  0x00000040,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0013,  0x00000041,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0014,  0x00000042,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0015,  0x00000043,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0016,  0x00000044,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0017,  0x00000045,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0018,  0x00000046,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0019,  0x00000047,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001a,  0x00000048,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001b,  0x00000049,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001c,  0x0000004a,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001d,  0x0000004b,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001e,  0x0000004c,  0x00000000, NULL },
    { 0xcc, 0x00,  0x001f,  0x0000004d,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(9), /* = 0x09 */
    { 0xb1, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(10), /* = 0x0a */
    { 0xb1, 0x01,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(11), /* = 0x0b */
    { 0xb1, 0x01,  0x0002,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(12), /* = 0x0c */
    { 0xb1, 0x01,  0x0003,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(13), /* = 0x0d */
    { 0xb1, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(14), /* = 0x0e */
    { 0xb1, 0x01,  0x0005,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(15), /* = 0x0f */
    { 0xb1, 0x01,  0x0006,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(16), /* = 0x10 */
    { 0xb1, 0x01,  0x0007,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(17), /* = 0x11 */
    { 0xb1, 0x01,  0x0008,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(18), /* = 0x12 */
    { 0xb1, 0x01,  0x0009,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(19), /* = 0x13 */
    { 0xb1, 0x01,  0x000a,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(20), /* = 0x14 */
    { 0xb1, 0x01,  0x000b,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(21), /* = 0x15 */
    { 0xb1, 0x01,  0x000c,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(22), /* = 0x16 */
    { 0xb1, 0x01,  0x000d,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(23), /* = 0x17 */
    { 0xb1, 0x01,  0x000e,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(24), /* = 0x18 */
    { 0xb1, 0x01,  0x000f,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(25), /* = 0x19 */
    { 0xb1, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(26), /* = 0x1a */
    { 0xb1, 0x01,  0x0011,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(27), /* = 0x1b */
    { 0xb1, 0x01,  0x0012,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(28), /* = 0x1c */
    { 0xb1, 0x01,  0x0013,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(29), /* = 0x1d */
    { 0xb1, 0x01,  0x0014,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(30), /* = 0x1e */
    { 0xb1, 0x01,  0x0015,  0x00000000,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 32),
  LABEL(31), /* = 0x1f */
    JUMP_LOCAL(/* label */ 32),
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(8), /* = 0x08 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(6), /* = 0x06 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(32), /* = 0x20 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(/* GETOUT_M01E07T */ 398),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* GETOUT_M01E08T */ 399),
};

static const struct ScriptCommand s_script_GETOUT_M01E07T[] = { /* 0x812eeb8 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0013,  0x00000000,  0x00000000, _("GETOUT M01E07T\n") },
    { 0xb3, 0x01,  0x0003,  0x0000000b,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0003,  0x0000000c,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x04,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E07A_T001 */ 188),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(/* EVENT_M01E07A_T002 */ 189),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E07B_T001 */ 195),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_M01E07B_T002 */ 196),
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};


static const struct ScriptCommand s_script_GETOUT_M01E08T[] = { /* 0x812eff8 */
    DEBUGINFO,
    { 0xf2, 0x00,  0x0013,  0x00000000,  0x00000000, _("GETOUT M01E08T\n") },
    { 0xb3, 0x01,  0x0003,  0x0000000d,  0x00000000, NULL },
    { 0xb3, 0x02,  0x0003,  0x0000000e,  0x00000000, NULL },
    JUMP_LOCAL(/* label */ 3),
  LABEL(1), /* = 0x01 */
    { 0xb3, 0x04,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08A_T001 */ 202),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(/* EVENT_M01E08A_T002 */ 203),
  LABEL(2), /* = 0x02 */
    { 0xb3, 0x05,  0x0018,  0x00000009,  0x00000000, NULL },
    { 0xb3, 0x03,  0x0018,  0x0000000a,  0x00000000, NULL },
    JUMP_SCRIPT(/* EVENT_M01E08B_T001 */ 210),
  LABEL(5), /* = 0x05 */
    JUMP_SCRIPT(/* EVENT_M01E08B_T002 */ 211),
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(/* EVENT_DIVIDE */ 102),
};


static const struct ScriptCommand s_script_SETUP_DEBUG_CAMERA[] = { /* 0x812f138 */
    DEBUGINFO,
    { 0x3b, 0x3e,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xcc, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe3, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    RET,
};

static const struct ScriptCommand s_script_MOVE_DEBUG_CAMERA[] = { /* 0x812f198 */
    DEBUGINFO,
    { 0x98, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x3f,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xe4, 0x00,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x9a, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

/*extern*/ const struct ScriptRef gFunctionScriptTable[] = { /* 0x812f1f8 */
    { 0, 4, _("END_TALK"), s_script_END_TALK },
    { 1, 4, _("WAIT_END_TALK_FUNC"), s_script_WAIT_END_TALK_FUNC },
    { 2, 4, _("WAIT_END_EVENT_FUNC"), s_script_WAIT_END_EVENT_FUNC },
    { 3, 4, _("WAIT_START_FUNC"), s_script_WAIT_START_FUNC },
    { 4, 4, _("INCOMPLETE_TALK"), s_script_INCOMPLETE_TALK },
    { 5, 4, _("NORMAL_WAIT_END_TALK"), s_script_NORMAL_WAIT_END_TALK },
    { 6, 4, _("LIVES_REPLY_NORMAL"), s_script_LIVES_REPLY_NORMAL },
    { 7, 4, _("LIVES_REPLY"), s_script_LIVES_REPLY },
    { 8, 4, _("OBJECT_REPLY_NORMAL"), s_script_OBJECT_REPLY_NORMAL },
    { 9, 4, _("EXAMINE_MISS"), s_script_EXAMINE_MISS },
    { 10, 4, _("ENTER_WAIT_FUNC"), s_script_ENTER_WAIT_FUNC },
    { 11, 4, _("UNIT_TALK"), s_script_UNIT_TALK },
    { 12, 4, _("HABITAT_TALK"), s_script_HABITAT_TALK },
    { 13, 4, _("HABITAT_TALK_S01E02A"), s_script_HABITAT_TALK_S01E02A },
    { 14, 5, _("HABITAT_MOVE1"), s_script_HABITAT_MOVE1 },
    { 15, 5, _("HABITAT_MOVE2"), s_script_HABITAT_MOVE2 },
    { 16, 5, _("HABITAT_MOVE_PAUSE"), s_script_HABITAT_MOVE_PAUSE },
    { 17, 5, _("HABITAT_MOVE_STAY_FIX"), s_script_HABITAT_MOVE_STAY_FIX },
    { 18, 5, _("HABITAT_MOVE_STAY_TURN"), s_script_HABITAT_MOVE_STAY_TURN },
    { 19, 5, _("LIVES_MOVE_NORMAL"), s_script_LIVES_MOVE_NORMAL },
    { 20, 5, _("LIVES_MOVE_CHANGE"), s_script_LIVES_MOVE_CHANGE },
    { 21, 5, _("OBJECT_MOVE_NORMAL"), s_script_OBJECT_MOVE_NORMAL },
    { 22, 5, _("OBJECT_MOVE_CHANGE"), s_script_OBJECT_MOVE_CHANGE },
    { 23, 5, _("EFFECT_MOVE_NORMAL"), s_script_EFFECT_MOVE_NORMAL },
    { 24, 5, _("EFFECT_MOVE_CHANGE"), s_script_EFFECT_MOVE_CHANGE },
    { 25, 5, _("MOVE_INIT"), s_script_MOVE_INIT },
    { 26, 5, _("MOVE_PAUSE"), s_script_MOVE_PAUSE },
    { 27, 5, _("MOVE_STAY"), s_script_MOVE_STAY },
    { 28, 5, _("MOVE_SLEEP"), s_script_MOVE_SLEEP },
    { 29, 5, _("MOVE_RANDOM"), s_script_MOVE_RANDOM },
    { 30, 5, _("MOVE_BOY"), s_script_MOVE_BOY },
    { 31, 5, _("MOVE_GIRL"), s_script_MOVE_GIRL },
    { 32, 9, _("WAKEUP_FUNC"), s_script_WAKEUP_FUNC },
    { 33, 9, _("LOOK_AROUND_FUNC"), s_script_LOOK_AROUND_FUNC },
    { 34, 9, _("LOOK_AROUND_DOWN_FUNC"), s_script_LOOK_AROUND_DOWN_FUNC },
    { 35, 9, _("LOOK_AROUND_RIGHT_FUNC"), s_script_LOOK_AROUND_RIGHT_FUNC },
    { 36, 9, _("LOOK_AROUND_LEFT_FUNC"), s_script_LOOK_AROUND_LEFT_FUNC },
    { 37, 9, _("JUMP_HAPPY_FUNC"), s_script_JUMP_HAPPY_FUNC },
    { 38, 9, _("JUMP_SURPRISE_FUNC"), s_script_JUMP_SURPRISE_FUNC },
    { 39, 9, _("JUMP_ANGRY_FUNC"), s_script_JUMP_ANGRY_FUNC },
    { 40, 9, _("NOTICE_FUNC"), s_script_NOTICE_FUNC },
    { 41, 9, _("QUESTION_FUNC"), s_script_QUESTION_FUNC },
    { 42, 9, _("SWEAT_FUNC"), s_script_SWEAT_FUNC },
    { 43, 9, _("SHOCK_FUNC"), s_script_SHOCK_FUNC },
    { 44, 9, _("SPREE_START_FUNC"), s_script_SPREE_START_FUNC },
    { 45, 9, _("SPREE_END_FUNC"), s_script_SPREE_END_FUNC },
    { 46, 9, _("SMILE_START_FUNC"), s_script_SMILE_START_FUNC },
    { 47, 9, _("SMILE_END_FUNC"), s_script_SMILE_END_FUNC },
    { 48, 9, _("ANGRY_START_FUNC"), s_script_ANGRY_START_FUNC },
    { 49, 9, _("ANGRY_END_FUNC"), s_script_ANGRY_END_FUNC },
    { 50, 5, _("MOVE_PLAZA_SLEEP"), s_script_MOVE_PLAZA_SLEEP },
    { 51, 9, _("INIT_PLAZA_SLEEP_STAY_FUNC"), s_script_INIT_PLAZA_SLEEP_STAY_FUNC },
    { 52, 9, _("INIT_PLAZA_SLEEP_TALK_FUNC"), s_script_INIT_PLAZA_SLEEP_TALK_FUNC },
    { 53, 8, _("INIT_SLEEP_FUNC"), s_script_INIT_SLEEP_FUNC },
    { 54, 8, _("INIT_BASE_FUNC"), s_script_INIT_BASE_FUNC },
    { 55, 8, _("INIT_DEBUG_HABITAT"), s_script_INIT_DEBUG_HABITAT },
    { 56, 7, _("NORMAL_MESSAGE"), NULL },
    { 57, 7, _("NORMAL_EVENT"), NULL },
    { 58, 7, _("NORMAL_CAMERA"), s_script_NORMAL_CAMERA },
    { 59, 7, _("DISMISSAL_SALLY_MEMBER_FUNC"), s_script_DISMISSAL_SALLY_MEMBER_FUNC },
    { 60, 7, _("DISMISSAL_SALLY_MEMBER2_FUNC"), s_script_DISMISSAL_SALLY_MEMBER2_FUNC },
    { 61, 7, _("DISMISSAL_SALLY_MEMBER3_FUNC"), s_script_DISMISSAL_SALLY_MEMBER3_FUNC },
    { 62, 7, _("DISMISSAL_SALLY_MEMBER4_FUNC"), s_script_DISMISSAL_SALLY_MEMBER4_FUNC },
    { 63, 7, _("NEXT_SAVE_FUNC"), s_script_NEXT_SAVE_FUNC },
    { 64, 7, _("NEXT_SAVE2_FUNC"), s_script_NEXT_SAVE2_FUNC },
    { 65, 7, _("SAVE_POINT"), s_script_SAVE_POINT },
    { 66, 7, _("WAREHOUSE_POINT"), s_script_WAREHOUSE_POINT },
    { 67, 7, _("SAVE_AND_WAREHOUSE_POINT"), s_script_SAVE_AND_WAREHOUSE_POINT },
    { 68, 7, _("WORLD_MAP_POINT"), s_script_WORLD_MAP_POINT },
    { 69, 7, _("FORMATION_HERO"), s_script_FORMATION_HERO },
    { 70, 7, _("EVOLUTION_HERO"), s_script_EVOLUTION_HERO },
    { 71, 7, _("WARP_LIVES_START"), s_script_WARP_LIVES_START },
    { 72, 7, _("WARP_LIVES_START2"), s_script_WARP_LIVES_START2 },
    { 73, 7, _("WARP_LIVES_START3"), s_script_WARP_LIVES_START3 },
    { 74, 7, _("WARP_LIVES_ARRIVE"), s_script_WARP_LIVES_ARRIVE },
    { 75, 7, _("WARP_LIVES_ARRIVE2"), s_script_WARP_LIVES_ARRIVE2 },
    { 76, 7, _("WARP_LIVES_ARRIVE3"), s_script_WARP_LIVES_ARRIVE3 },
    { 77, 7, _("LIVES_WARP_START_FUNC"), s_script_LIVES_WARP_START_FUNC },
    { 78, 7, _("LIVES_WARP_START2_FUNC"), s_script_LIVES_WARP_START2_FUNC },
    { 79, 7, _("LIVES_WARP_START3_FUNC"), s_script_LIVES_WARP_START3_FUNC },
    { 80, 7, _("LIVES_WARP_START_SUB"), s_script_LIVES_WARP_START_SUB },
    { 81, 7, _("LIVES_WARP_ARRIVE_FUNC"), s_script_LIVES_WARP_ARRIVE_FUNC },
    { 82, 7, _("LIVES_WARP_ARRIVE2_FUNC"), s_script_LIVES_WARP_ARRIVE2_FUNC },
    { 83, 7, _("LIVES_WARP_ARRIVE3_FUNC"), s_script_LIVES_WARP_ARRIVE3_FUNC },
    { 84, 7, _("LIVES_WARP_ARRIVE_SUB"), s_script_LIVES_WARP_ARRIVE_SUB },
    { 85, 7, _("GET_ITEM_FUNC"), s_script_GET_ITEM_FUNC },
    { 86, 7, _("GET_ITEM_WAIT_FUNC"), s_script_GET_ITEM_WAIT_FUNC },
    { 87, 7, _("GET_ITEM2_FUNC"), s_script_GET_ITEM2_FUNC },
    { 88, 7, _("GET_ITEM2_WAIT_FUNC"), s_script_GET_ITEM2_WAIT_FUNC },
    { 89, 7, _("JOIN_FUNC"), s_script_JOIN_FUNC },
    { 90, 7, _("LODGE_START_FUNC"), s_script_LODGE_START_FUNC },
    { 91, 7, _("LODGE_WAIT_FUNC"), s_script_LODGE_WAIT_FUNC },
    { 92, 7, _("LODGE_END_FUNC"), s_script_LODGE_END_FUNC },
    { 93, 7, _("LODGE_SOUND_FUNC"), s_script_LODGE_SOUND_FUNC },
    { 94, 7, _("SAVE_START_FUNC"), s_script_SAVE_START_FUNC },
    { 95, 7, _("SAVE_WAIT_FUNC"), s_script_SAVE_WAIT_FUNC },
    { 96, 7, _("SAVE_END_FUNC"), s_script_SAVE_END_FUNC },
    { 97, 7, _("SAVE_SOUND_FUNC"), s_script_SAVE_SOUND_FUNC },
    { 98, 9, _("EFFECT_TEST1"), s_script_EFFECT_TEST1 },
    { 99, 9, _("EFFECT_TEST2"), s_script_EFFECT_TEST2 },
    { 100, 9, _("EFFECT_MOVE_DIVE"), s_script_EFFECT_MOVE_DIVE },
    { 101, 9, _("EFFECT_MOVE_WAVE"), s_script_EFFECT_MOVE_WAVE },
    { 102, 7, _("EVENT_DIVIDE"), s_script_EVENT_DIVIDE },
    { 103, 7, _("EVENT_DIVIDE_NEXT"), s_script_EVENT_DIVIDE_NEXT },
    { 104, 7, _("EVENT_DIVIDE_INIT_FUNC"), s_script_EVENT_DIVIDE_INIT_FUNC },
    { 105, 7, _("EVENT_DIVIDE_NEXT_DAY_FUNC"), s_script_EVENT_DIVIDE_NEXT_DAY_FUNC },
    { 106, 7, _("EVENT_DIVIDE_NEXT_DAY2_FUNC"), s_script_EVENT_DIVIDE_NEXT_DAY2_FUNC },
    { 107, 7, _("EVENT_DIVIDE_FIRST"), s_script_EVENT_DIVIDE_FIRST },
    { 108, 7, _("EVENT_DIVIDE_SECOND"), s_script_EVENT_DIVIDE_SECOND },
    { 109, 7, _("EVENT_DIVIDE_AFTER"), s_script_EVENT_DIVIDE_AFTER },
    { 110, 7, _("EVENT_DIVIDE_WARP_LOCK_FUNC"), s_script_EVENT_DIVIDE_WARP_LOCK_FUNC },
    { 111, 7, _("EVENT_RESCUE_ENTER_CHECK"), s_script_EVENT_RESCUE_ENTER_CHECK },
    { 112, 7, _("EVENT_RESCUE"), s_script_EVENT_RESCUE },
    { 113, 7, _("DEBUG_SCRIPT"), s_script_DEBUG_SCRIPT },
    { 114, 7, _("DEMO_CANCEL"), s_script_DEMO_CANCEL },
    { 115, 10, _("DEMO_01"), s_script_DEMO_01 },
    { 116, 10, _("DEMO_02"), s_script_DEMO_02 },
    { 117, 10, _("DEMO_03"), s_script_DEMO_03 },
    { 118, 10, _("DEMO_04"), s_script_DEMO_04 },
    { 119, 10, _("EVENT_M00E01A_L001"), s_script_EVENT_M00E01A_L001 },
    { 120, 10, _("EVENT_M01E01A_L001"), s_script_EVENT_M01E01A_L001 },
    { 121, 10, _("EVENT_M01E01A_L002"), s_script_EVENT_M01E01A_L002 },
    { 122, 10, _("EVENT_M01E01A_L003"), s_script_EVENT_M01E01A_L003 },
    { 123, 10, _("EVENT_M01E02A_L001"), s_script_EVENT_M01E02A_L001 },
    { 124, 12, _("EVENT_M01E02A_L001B"), s_script_EVENT_M01E02A_L001B },
    { 125, 10, _("EVENT_M01E02A_L001C"), s_script_EVENT_M01E02A_L001C },
    { 126, 10, _("EVENT_M01E02A_L002"), s_script_EVENT_M01E02A_L002 },
    { 127, 10, _("EVENT_M01E02A_L003"), s_script_EVENT_M01E02A_L003 },
    { 128, 10, _("EVENT_M01E02A_L004"), s_script_EVENT_M01E02A_L004 },
    { 129, 10, _("EVENT_M01E02A_L005"), s_script_EVENT_M01E02A_L005 },
    { 130, 10, _("EVENT_M01E02A_L006"), s_script_EVENT_M01E02A_L006 },
    { 131, 10, _("EVENT_M01E02B_L001"), s_script_EVENT_M01E02B_L001 },
    { 132, 10, _("EVENT_M01E02B_L002"), s_script_EVENT_M01E02B_L002 },
    { 133, 10, _("EVENT_M01E02B_L003"), s_script_EVENT_M01E02B_L003 },
    { 134, 10, _("EVENT_M01E02B_L004"), s_script_EVENT_M01E02B_L004 },
    { 135, 10, _("EVENT_M01E02B_L004B"), s_script_EVENT_M01E02B_L004B },
    { 136, 10, _("EVENT_M01E02B_L005"), s_script_EVENT_M01E02B_L005 },
    { 137, 10, _("EVENT_M01E02B_L006"), s_script_EVENT_M01E02B_L006 },
    { 138, 10, _("EVENT_M01E02B_L007"), s_script_EVENT_M01E02B_L007 },
    { 139, 10, _("EVENT_M01E02B_L008"), s_script_EVENT_M01E02B_L008 },
    { 140, 10, _("EVENT_M01E03A_L000"), s_script_EVENT_M01E03A_L000 },
    { 141, 10, _("EVENT_M01E03A_L001"), s_script_EVENT_M01E03A_L001 },
    { 142, 10, _("EVENT_M01E03A_L002"), s_script_EVENT_M01E03A_L002 },
    { 143, 10, _("EVENT_M01E03A_L003"), s_script_EVENT_M01E03A_L003 },
    { 144, 10, _("EVENT_M01E03A_L004"), s_script_EVENT_M01E03A_L004 },
    { 145, 10, _("EVENT_M01E03A_L005"), s_script_EVENT_M01E03A_L005 },
    { 146, 10, _("EVENT_M01E03A_L006"), s_script_EVENT_M01E03A_L006 },
    { 147, 10, _("EVENT_M01E03A_L007"), s_script_EVENT_M01E03A_L007 },
    { 148, 10, _("EVENT_M01E03A_L008"), s_script_EVENT_M01E03A_L008 },
    { 149, 10, _("EVENT_M01E03A_L009"), s_script_EVENT_M01E03A_L009 },
    { 150, 10, _("EVENT_M01E03A_L010"), s_script_EVENT_M01E03A_L010 },
    { 151, 10, _("EVENT_M01E03A_L011"), s_script_EVENT_M01E03A_L011 },
    { 152, 10, _("EVENT_M01E04A_L000"), s_script_EVENT_M01E04A_L000 },
    { 153, 10, _("EVENT_M01E04A_L001"), s_script_EVENT_M01E04A_L001 },
    { 154, 10, _("EVENT_M01E04A_L002"), s_script_EVENT_M01E04A_L002 },
    { 155, 10, _("EVENT_M01E04A_L003"), s_script_EVENT_M01E04A_L003 },
    { 156, 10, _("EVENT_M01E04A_L004"), s_script_EVENT_M01E04A_L004 },
    { 157, 12, _("EVENT_M01E04A_L005"), s_script_EVENT_M01E04A_L005 },
    { 158, 10, _("EVENT_M01E04A_L006"), s_script_EVENT_M01E04A_L006 },
    { 159, 10, _("EVENT_M01E04B_L000"), s_script_EVENT_M01E04B_L000 },
    { 160, 10, _("EVENT_M01E04B_L001"), s_script_EVENT_M01E04B_L001 },
    { 161, 10, _("EVENT_M01E04B_L002"), s_script_EVENT_M01E04B_L002 },
    { 162, 10, _("EVENT_M01E04B_L003"), s_script_EVENT_M01E04B_L003 },
    { 163, 10, _("EVENT_M01E04B_L004"), s_script_EVENT_M01E04B_L004 },
    { 164, 10, _("EVENT_M01E04B_L005"), s_script_EVENT_M01E04B_L005 },
    { 165, 10, _("EVENT_M01E04B_L006"), s_script_EVENT_M01E04B_L006 },
    { 166, 10, _("EVENT_M01E04B_L007"), s_script_EVENT_M01E04B_L007 },
    { 167, 10, _("EVENT_M01E05A_L000"), s_script_EVENT_M01E05A_L000 },
    { 168, 10, _("EVENT_M01E05A_L001"), s_script_EVENT_M01E05A_L001 },
    { 169, 10, _("EVENT_M01E05A_L002"), s_script_EVENT_M01E05A_L002 },
    { 170, 10, _("EVENT_M01E05A_L003"), s_script_EVENT_M01E05A_L003 },
    { 171, 10, _("EVENT_M01E05A_L004"), s_script_EVENT_M01E05A_L004 },
    { 172, 10, _("EVENT_M01E05A_L005"), s_script_EVENT_M01E05A_L005 },
    { 173, 10, _("EVENT_M01E05A_L006"), s_script_EVENT_M01E05A_L006 },
    { 174, 10, _("EVENT_M01E05B_L000"), s_script_EVENT_M01E05B_L000 },
    { 175, 10, _("EVENT_M01E05B_L001"), s_script_EVENT_M01E05B_L001 },
    { 176, 10, _("EVENT_M01E05B_L002"), s_script_EVENT_M01E05B_L002 },
    { 177, 12, _("EVENT_M01E05B_L003"), s_script_EVENT_M01E05B_L003 },
    { 178, 10, _("EVENT_M01E05B_L004"), s_script_EVENT_M01E05B_L004 },
    { 179, 10, _("EVENT_M01E05B_L005"), s_script_EVENT_M01E05B_L005 },
    { 180, 10, _("EVENT_M01E06A_L001"), s_script_EVENT_M01E06A_L001 },
    { 181, 10, _("EVENT_M01E06A_L002"), s_script_EVENT_M01E06A_L002 },
    { 182, 10, _("EVENT_M01E06A_L003"), s_script_EVENT_M01E06A_L003 },
    { 183, 10, _("EVENT_M01E07A_L001"), s_script_EVENT_M01E07A_L001 },
    { 184, 10, _("EVENT_M01E07A_L002"), s_script_EVENT_M01E07A_L002 },
    { 185, 10, _("EVENT_M01E07A_L003"), s_script_EVENT_M01E07A_L003 },
    { 186, 10, _("EVENT_M01E07A_L004"), s_script_EVENT_M01E07A_L004 },
    { 187, 10, _("EVENT_M01E07A_L005"), s_script_EVENT_M01E07A_L005 },
    { 188, 10, _("EVENT_M01E07A_T001"), s_script_EVENT_M01E07A_T001 },
    { 189, 10, _("EVENT_M01E07A_T002"), s_script_EVENT_M01E07A_T002 },
    { 190, 10, _("EVENT_M01E07B_L001"), s_script_EVENT_M01E07B_L001 },
    { 191, 10, _("EVENT_M01E07B_L002"), s_script_EVENT_M01E07B_L002 },
    { 192, 10, _("EVENT_M01E07B_L003"), s_script_EVENT_M01E07B_L003 },
    { 193, 10, _("EVENT_M01E07B_L004"), s_script_EVENT_M01E07B_L004 },
    { 194, 10, _("EVENT_M01E07B_L005"), s_script_EVENT_M01E07B_L005 },
    { 195, 10, _("EVENT_M01E07B_T001"), s_script_EVENT_M01E07B_T001 },
    { 196, 10, _("EVENT_M01E07B_T002"), s_script_EVENT_M01E07B_T002 },
    { 197, 10, _("EVENT_M01E08A_L001"), s_script_EVENT_M01E08A_L001 },
    { 198, 10, _("EVENT_M01E08A_L002"), s_script_EVENT_M01E08A_L002 },
    { 199, 10, _("EVENT_M01E08A_L003"), s_script_EVENT_M01E08A_L003 },
    { 200, 10, _("EVENT_M01E08A_L004"), s_script_EVENT_M01E08A_L004 },
    { 201, 10, _("EVENT_M01E08A_L005"), s_script_EVENT_M01E08A_L005 },
    { 202, 10, _("EVENT_M01E08A_T001"), s_script_EVENT_M01E08A_T001 },
    { 203, 10, _("EVENT_M01E08A_T002"), s_script_EVENT_M01E08A_T002 },
    { 204, 10, _("EVENT_M01E08B_L001"), s_script_EVENT_M01E08B_L001 },
    { 205, 10, _("EVENT_M01E08B_L002"), s_script_EVENT_M01E08B_L002 },
    { 206, 10, _("EVENT_M01E08B_L003"), s_script_EVENT_M01E08B_L003 },
    { 207, 10, _("EVENT_M01E08B_L004"), s_script_EVENT_M01E08B_L004 },
    { 208, 10, _("EVENT_M01E08B_L005"), s_script_EVENT_M01E08B_L005 },
    { 209, 10, _("EVENT_M01E08B_L006"), s_script_EVENT_M01E08B_L006 },
    { 210, 10, _("EVENT_M01E08B_T001"), s_script_EVENT_M01E08B_T001 },
    { 211, 10, _("EVENT_M01E08B_T002"), s_script_EVENT_M01E08B_T002 },
    { 212, 10, _("EVENT_M01E09A_L001"), s_script_EVENT_M01E09A_L001 },
    { 213, 10, _("EVENT_M01E09A_L002"), s_script_EVENT_M01E09A_L002 },
    { 214, 10, _("EVENT_M01E09A_L003"), s_script_EVENT_M01E09A_L003 },
    { 215, 10, _("EVENT_M01E09A_L004"), s_script_EVENT_M01E09A_L004 },
    { 216, 10, _("EVENT_M01E09A_L005"), s_script_EVENT_M01E09A_L005 },
    { 217, 10, _("EVENT_M01E09A_L006"), s_script_EVENT_M01E09A_L006 },
    { 218, 10, _("EVENT_M01E09A_L007"), s_script_EVENT_M01E09A_L007 },
    { 219, 10, _("EVENT_M01E09A_L008"), s_script_EVENT_M01E09A_L008 },
    { 220, 10, _("EVENT_M01E09A_L009"), s_script_EVENT_M01E09A_L009 },
    { 221, 10, _("EVENT_M01E09A_L010"), s_script_EVENT_M01E09A_L010 },
    { 222, 10, _("EVENT_M01E09A_L011"), s_script_EVENT_M01E09A_L011 },
    { 223, 10, _("EVENT_M01E09A_L012"), s_script_EVENT_M01E09A_L012 },
    { 224, 10, _("EVENT_M01E09A_L013"), s_script_EVENT_M01E09A_L013 },
    { 225, 10, _("EVENT_M01E09A_L014"), s_script_EVENT_M01E09A_L014 },
    { 226, 10, _("EVENT_M01E09A_L015"), s_script_EVENT_M01E09A_L015 },
    { 227, 10, _("EVENT_M01E10A_L001"), s_script_EVENT_M01E10A_L001 },
    { 228, 10, _("EVENT_M01E10A_L002"), s_script_EVENT_M01E10A_L002 },
    { 229, 10, _("EVENT_M01E10A_L003"), s_script_EVENT_M01E10A_L003 },
    { 230, 10, _("EVENT_M01E10A_L004"), s_script_EVENT_M01E10A_L004 },
    { 231, 10, _("EVENT_M01E10A_L005"), s_script_EVENT_M01E10A_L005 },
    { 232, 10, _("EVENT_M01E10A_L006"), s_script_EVENT_M01E10A_L006 },
    { 233, 10, _("EVENT_M01E10A_L007"), s_script_EVENT_M01E10A_L007 },
    { 234, 10, _("EVENT_M01E10A_L008"), s_script_EVENT_M01E10A_L008 },
    { 235, 10, _("EVENT_M01END_L001"), s_script_EVENT_M01END_L001 },
    { 236, 10, _("EVENT_M01END_L002"), s_script_EVENT_M01END_L002 },
    { 237, 10, _("EVENT_M02E01A_L001"), s_script_EVENT_M02E01A_L001 },
    { 238, 10, _("EVENT_M02E01A_L002"), s_script_EVENT_M02E01A_L002 },
    { 239, 10, _("EVENT_M02E01A_L003"), s_script_EVENT_M02E01A_L003 },
    { 240, 10, _("EVENT_M02E02A_L001"), s_script_EVENT_M02E02A_L001 },
    { 241, 10, _("EVENT_M02E02B_L001"), s_script_EVENT_M02E02B_L001 },
    { 242, 10, _("EVENT_M02E02C_L001"), s_script_EVENT_M02E02C_L001 },
    { 243, 10, _("EVENT_M02E02D_L001"), s_script_EVENT_M02E02D_L001 },
    { 244, 10, _("EVENT_M02E02E_L001"), s_script_EVENT_M02E02E_L001 },
    { 245, 10, _("EVENT_M02E02F_L001"), s_script_EVENT_M02E02F_L001 },
    { 246, 10, _("EVENT_M02E02G_L001"), s_script_EVENT_M02E02G_L001 },
    { 247, 10, _("EVENT_M02E02H_L001"), s_script_EVENT_M02E02H_L001 },
    { 248, 10, _("EVENT_M02END_L001"), s_script_EVENT_M02END_L001 },
    { 249, 10, _("EVENT_S00E01A_L001"), s_script_EVENT_S00E01A_L001 },
    { 250, 10, _("EVENT_S00E01A_L002"), s_script_EVENT_S00E01A_L002 },
    { 251, 10, _("EVENT_S00E01A_L003"), s_script_EVENT_S00E01A_L003 },
    { 252, 10, _("EVENT_S00E01A_L004"), s_script_EVENT_S00E01A_L004 },
    { 253, 11, _("EVENT_S01E01A_START"), s_script_EVENT_S01E01A_START },
    { 254, 11, _("EVENT_S01E01A_CONTINUE"), s_script_EVENT_S01E01A_CONTINUE },
    { 255, 11, _("EVENT_S01E01A_END"), s_script_EVENT_S01E01A_END },
    { 256, 12, _("EVENT_S01E01A_L001"), s_script_EVENT_S01E01A_L001 },
    { 257, 10, _("EVENT_S01E01A_L002"), s_script_EVENT_S01E01A_L002 },
    { 258, 10, _("EVENT_S01E01A_L003"), s_script_EVENT_S01E01A_L003 },
    { 259, 10, _("EVENT_S01E01B_L001"), s_script_EVENT_S01E01B_L001 },
    { 260, 12, _("EVENT_S01E01B_L001L"), s_script_EVENT_S01E01B_L001L },
    { 261, 10, _("EVENT_S01E01C_L001"), s_script_EVENT_S01E01C_L001 },
    { 262, 11, _("EVENT_S01E02A_START"), s_script_EVENT_S01E02A_START },
    { 263, 11, _("EVENT_S01E02A_END"), s_script_EVENT_S01E02A_END },
    { 264, 10, _("EVENT_S01E02A_L001"), s_script_EVENT_S01E02A_L001 },
    { 265, 10, _("EVENT_S01E02A_L002"), s_script_EVENT_S01E02A_L002 },
    { 266, 12, _("EVENT_S01E02A_L002L"), s_script_EVENT_S01E02A_L002L },
    { 267, 12, _("EVENT_S01E02B_L001"), s_script_EVENT_S01E02B_L001 },
    { 268, 12, _("EVENT_S01E02B_L002"), s_script_EVENT_S01E02B_L002 },
    { 269, 11, _("EVENT_S02E01A_START"), s_script_EVENT_S02E01A_START },
    { 270, 11, _("EVENT_S02E01A_END"), s_script_EVENT_S02E01A_END },
    { 271, 12, _("EVENT_S02E01A_L001"), s_script_EVENT_S02E01A_L001 },
    { 272, 12, _("EVENT_S02E01A_L002"), s_script_EVENT_S02E01A_L002 },
    { 273, 12, _("EVENT_S02E01A_L003"), s_script_EVENT_S02E01A_L003 },
    { 274, 12, _("EVENT_S02E01A_L004"), s_script_EVENT_S02E01A_L004 },
    { 275, 12, _("EVENT_S02E01A_L004L"), s_script_EVENT_S02E01A_L004L },
    { 276, 11, _("EVENT_S02E02A_START"), s_script_EVENT_S02E02A_START },
    { 277, 11, _("EVENT_S02E02A_END"), s_script_EVENT_S02E02A_END },
    { 278, 12, _("EVENT_S02E02A_L001"), s_script_EVENT_S02E02A_L001 },
    { 279, 10, _("EVENT_S02E02A_L002"), s_script_EVENT_S02E02A_L002 },
    { 280, 12, _("EVENT_S02E02A_L003"), s_script_EVENT_S02E02A_L003 },
    { 281, 12, _("EVENT_S02E02A_L003L"), s_script_EVENT_S02E02A_L003L },
    { 282, 11, _("EVENT_S03E01A_START"), s_script_EVENT_S03E01A_START },
    { 283, 11, _("EVENT_S03E01A_CONTINUE"), s_script_EVENT_S03E01A_CONTINUE },
    { 284, 11, _("EVENT_S03E01A_END"), s_script_EVENT_S03E01A_END },
    { 285, 10, _("EVENT_S03E01A_L001"), s_script_EVENT_S03E01A_L001 },
    { 286, 12, _("EVENT_S03E01A_L002"), s_script_EVENT_S03E01A_L002 },
    { 287, 12, _("EVENT_S03E01A_L002L"), s_script_EVENT_S03E01A_L002L },
    { 288, 11, _("EVENT_S04E01A_START"), s_script_EVENT_S04E01A_START },
    { 289, 11, _("EVENT_S04E01A_LAST"), s_script_EVENT_S04E01A_LAST },
    { 290, 11, _("EVENT_S04E01A_END"), s_script_EVENT_S04E01A_END },
    { 291, 10, _("EVENT_S04E01A_L001"), s_script_EVENT_S04E01A_L001 },
    { 292, 10, _("EVENT_S04E01A_L002"), s_script_EVENT_S04E01A_L002 },
    { 293, 12, _("EVENT_S04E01A_L002L"), s_script_EVENT_S04E01A_L002L },
    { 294, 10, _("EVENT_S04E01B_L001"), s_script_EVENT_S04E01B_L001 },
    { 295, 12, _("EVENT_S04E01B_L001L"), s_script_EVENT_S04E01B_L001L },
    { 296, 10, _("EVENT_S04E01C_L001"), s_script_EVENT_S04E01C_L001 },
    { 297, 12, _("EVENT_S04E01C_L001L"), s_script_EVENT_S04E01C_L001L },
    { 298, 10, _("EVENT_S04E01D_L001"), s_script_EVENT_S04E01D_L001 },
    { 299, 12, _("EVENT_S04E01D_L001L"), s_script_EVENT_S04E01D_L001L },
    { 300, 10, _("EVENT_S04E01E_L001"), s_script_EVENT_S04E01E_L001 },
    { 301, 12, _("EVENT_S04E01E_L001L"), s_script_EVENT_S04E01E_L001L },
    { 302, 12, _("EVENT_S04E01F_L001"), s_script_EVENT_S04E01F_L001 },
    { 303, 11, _("EVENT_S05E01A_START"), s_script_EVENT_S05E01A_START },
    { 304, 11, _("EVENT_S05E01A_CONTINUE"), s_script_EVENT_S05E01A_CONTINUE },
    { 305, 11, _("EVENT_S05E01A_END"), s_script_EVENT_S05E01A_END },
    { 306, 10, _("EVENT_S05E01A_L001"), s_script_EVENT_S05E01A_L001 },
    { 307, 12, _("EVENT_S05E01A_L002"), s_script_EVENT_S05E01A_L002 },
    { 308, 12, _("EVENT_S05E01A_L002L"), s_script_EVENT_S05E01A_L002L },
    { 309, 11, _("EVENT_S06E01A_START"), s_script_EVENT_S06E01A_START },
    { 310, 11, _("EVENT_S06E01A_CONTINUE"), s_script_EVENT_S06E01A_CONTINUE },
    { 311, 11, _("EVENT_S06E01A_END"), s_script_EVENT_S06E01A_END },
    { 312, 10, _("EVENT_S06E01A_L001"), s_script_EVENT_S06E01A_L001 },
    { 313, 10, _("EVENT_S06E01A_L002"), s_script_EVENT_S06E01A_L002 },
    { 314, 12, _("EVENT_S06E01A_L002L"), s_script_EVENT_S06E01A_L002L },
    { 315, 10, _("EVENT_S06E01B_L001"), s_script_EVENT_S06E01B_L001 },
    { 316, 10, _("EVENT_S06E01B_L002"), s_script_EVENT_S06E01B_L002 },
    { 317, 12, _("EVENT_S06E01B_L002L"), s_script_EVENT_S06E01B_L002L },
    { 318, 11, _("EVENT_S07E01A_START"), s_script_EVENT_S07E01A_START },
    { 319, 11, _("EVENT_S07E01A_END"), s_script_EVENT_S07E01A_END },
    { 320, 12, _("EVENT_S07E01A_L001"), s_script_EVENT_S07E01A_L001 },
    { 321, 12, _("EVENT_S07E01A_L002"), s_script_EVENT_S07E01A_L002 },
    { 322, 12, _("EVENT_S07E01A_L003"), s_script_EVENT_S07E01A_L003 },
    { 323, 12, _("EVENT_S07E01A_L003L"), s_script_EVENT_S07E01A_L003L },
    { 324, 11, _("EVENT_S08E01A_START"), s_script_EVENT_S08E01A_START },
    { 325, 11, _("EVENT_S08E01A_END"), s_script_EVENT_S08E01A_END },
    { 326, 12, _("EVENT_S08E01A_L001"), s_script_EVENT_S08E01A_L001 },
    { 327, 12, _("EVENT_S08E01A_L002"), s_script_EVENT_S08E01A_L002 },
    { 328, 12, _("EVENT_S08E01A_L003"), s_script_EVENT_S08E01A_L003 },
    { 329, 12, _("EVENT_S08E01A_L004"), s_script_EVENT_S08E01A_L004 },
    { 330, 12, _("EVENT_S08E01A_L005"), s_script_EVENT_S08E01A_L005 },
    { 331, 10, _("EVENT_S08E01A_L005B"), s_script_EVENT_S08E01A_L005B },
    { 332, 10, _("EVENT_S08E01A_L006"), s_script_EVENT_S08E01A_L006 },
    { 333, 12, _("EVENT_S08E01A_L006L"), s_script_EVENT_S08E01A_L006L },
    { 334, 12, _("EVENT_S08E01A_L007"), s_script_EVENT_S08E01A_L007 },
    { 335, 10, _("EVENT_S08E01A_L008"), s_script_EVENT_S08E01A_L008 },
    { 336, 12, _("EVENT_S08E01A_L008L"), s_script_EVENT_S08E01A_L008L },
    { 337, 10, _("EVENT_S08E01A_L008A"), s_script_EVENT_S08E01A_L008A },
    { 338, 10, _("EVENT_S08E01A_L008B"), s_script_EVENT_S08E01A_L008B },
    { 339, 10, _("EVENT_S08E01A_L008C"), s_script_EVENT_S08E01A_L008C },
    { 340, 11, _("EVENT_S09E01A_START"), s_script_EVENT_S09E01A_START },
    { 341, 11, _("EVENT_S09E01A_END"), s_script_EVENT_S09E01A_END },
    { 342, 12, _("EVENT_S09E01A_L001"), s_script_EVENT_S09E01A_L001 },
    { 343, 12, _("EVENT_S09E01A_L002"), s_script_EVENT_S09E01A_L002 },
    { 344, 12, _("EVENT_S09E01A_L003"), s_script_EVENT_S09E01A_L003 },
    { 345, 10, _("EVENT_S09E01A_L004"), s_script_EVENT_S09E01A_L004 },
    { 346, 10, _("EVENT_S09E01A_L004B"), s_script_EVENT_S09E01A_L004B },
    { 347, 10, _("EVENT_S09E01A_L005"), s_script_EVENT_S09E01A_L005 },
    { 348, 12, _("EVENT_S09E01A_L005L"), s_script_EVENT_S09E01A_L005L },
    { 349, 10, _("EVENT_S09E01B_L001"), s_script_EVENT_S09E01B_L001 },
    { 350, 10, _("EVENT_S09E01B_L001B"), s_script_EVENT_S09E01B_L001B },
    { 351, 10, _("EVENT_S09E01B_L002"), s_script_EVENT_S09E01B_L002 },
    { 352, 12, _("EVENT_S09E01B_L002L"), s_script_EVENT_S09E01B_L002L },
    { 353, 12, _("EVENT_S09E01C_L001"), s_script_EVENT_S09E01C_L001 },
    { 354, 7, _("EVENT_R00E01A_L001"), s_script_EVENT_R00E01A_L001 },
    { 355, 1, _("COMMON_ENTER"), s_script_COMMON_ENTER },
    { 356, 1, _("DEBUG_ENTER"), s_script_DEBUG_ENTER },
    { 357, 2, _("GETOUT_NORMAL"), NULL },
    { 358, 2, _("GETOUT_HABITAT"), s_script_GETOUT_HABITAT },
    { 359, 2, _("GETOUT_M01E01A"), s_script_GETOUT_M01E01A },
    { 360, 2, _("GETOUT_M01E02A"), s_script_GETOUT_M01E02A },
    { 361, 2, _("GETOUT_M01E02B"), s_script_GETOUT_M01E02B },
    { 362, 2, _("GETOUT_M01E03A"), s_script_GETOUT_M01E03A },
    { 363, 2, _("GETOUT_M01E04A"), s_script_GETOUT_M01E04A },
    { 364, 2, _("GETOUT_M01E04B"), s_script_GETOUT_M01E04B },
    { 365, 2, _("GETOUT_M01E05A"), s_script_GETOUT_M01E05A },
    { 366, 2, _("GETOUT_M01E07A"), s_script_GETOUT_M01E07A },
    { 367, 2, _("GETOUT_M01E07B"), s_script_GETOUT_M01E07B },
    { 368, 2, _("GETOUT_M01E08A"), s_script_GETOUT_M01E08A },
    { 369, 2, _("GETOUT_M01E08B"), s_script_GETOUT_M01E08B },
    { 370, 2, _("GETOUT_M01E09A"), s_script_GETOUT_M01E09A },
    { 371, 2, _("GETOUT_M01E10A"), s_script_GETOUT_M01E10A },
    { 372, 2, _("GETOUT_S00E01A"), s_script_GETOUT_S00E01A },
    { 373, 2, _("GETOUT_S01E01A"), s_script_GETOUT_S01E01A },
    { 374, 2, _("GETOUT_S01E02A"), s_script_GETOUT_S01E02A },
    { 375, 2, _("GETOUT_S02E01A"), s_script_GETOUT_S02E01A },
    { 376, 2, _("GETOUT_S02E02A"), s_script_GETOUT_S02E02A },
    { 377, 2, _("GETOUT_S03E01A"), s_script_GETOUT_S03E01A },
    { 378, 2, _("GETOUT_S04E01A"), s_script_GETOUT_S04E01A },
    { 379, 2, _("GETOUT_S04E01B"), s_script_GETOUT_S04E01B },
    { 380, 2, _("GETOUT_S04E01C"), s_script_GETOUT_S04E01C },
    { 381, 2, _("GETOUT_S04E01D"), s_script_GETOUT_S04E01D },
    { 382, 2, _("GETOUT_S04E01E"), s_script_GETOUT_S04E01E },
    { 383, 2, _("GETOUT_S05E01A"), s_script_GETOUT_S05E01A },
    { 384, 2, _("GETOUT_S06E01A"), s_script_GETOUT_S06E01A },
    { 385, 2, _("GETOUT_S06E01B"), s_script_GETOUT_S06E01B },
    { 386, 2, _("GETOUT_S07E01A"), s_script_GETOUT_S07E01A },
    { 387, 2, _("GETOUT_S08E01A"), s_script_GETOUT_S08E01A },
    { 388, 2, _("GETOUT_S09E01A"), s_script_GETOUT_S09E01A },
    { 389, 2, _("GETOUT_S09E01B"), s_script_GETOUT_S09E01B },
    { 390, 2, _("GETOUT_D62E01A"), s_script_GETOUT_D62E01A },
    { 391, 2, _("GETOUT_D43E01A"), s_script_GETOUT_D43E01A },
    { 392, 2, _("GETOUT_D44E01A"), s_script_GETOUT_D44E01A },
    { 393, 2, _("GETOUT_D45E01A"), s_script_GETOUT_D45E01A },
    { 394, 2, _("GETOUT_D46E01A"), s_script_GETOUT_D46E01A },
    { 395, 2, _("GETOUT_U00E01A"), s_script_GETOUT_U00E01A },
    { 396, 2, _("GETOUT_R00E01A"), s_script_GETOUT_R00E01A },
    { 397, 2, _("GETOUT_T00E01A"), s_script_GETOUT_T00E01A },
    { 398, 2, _("GETOUT_M01E07T"), s_script_GETOUT_M01E07T },
    { 399, 2, _("GETOUT_M01E08T"), s_script_GETOUT_M01E08T },
    { 400, 7, _("EVENT_CONTROL"), NULL },
    { 401, 7, _("EVENT_WAKEUP"), NULL },
    { 402, 7, _("EVENT_STATION"), NULL },
    { 403, 8, _("STATION_CONTROL"), NULL },
    { 404, 1, _("ENTER_CONTROL"), NULL },
    { 405, 7, _("SETUP_DEBUG_CAMERA"), s_script_SETUP_DEBUG_CAMERA },
    { 406, 5, _("MOVE_DEBUG_CAMERA"), s_script_MOVE_DEBUG_CAMERA },
};

