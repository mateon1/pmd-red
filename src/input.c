#include "global.h"
#include "input.h"

EWRAM_DATA struct Input gUnknown_2025600;
EWRAM_DATA struct UnkInputStruct1 gUnknown_20255F0;
EWRAM_DATA struct UnkInputStruct1 gUnknown_2025638;
EWRAM_DATA struct UnkInputStruct1 gCurrentInputs;
EWRAM_DATA struct UnkInputStruct1 gLastInputs;
EWRAM_DATA struct UnkInputStruct2 gUnknown_2025668;
EWRAM_DATA u32 gUnusedScrambledInputJunk;

void ReadKeyInput(struct UnkInputStruct1 *r0);

void InitInput(void)
{
    gUnknown_20255F0.held = 0;
    gUnknown_20255F0.pressed = 0;
    gUnknown_20255F0.unk4 = 0;
    gUnknown_20255F0.unk6 = 0;

    gUnknown_2025638.held = 0;
    gUnknown_2025638.pressed = 0;
    gUnknown_2025638.unk4 = 0;
    gUnknown_2025638.unk6 = 0;

    gUnusedScrambledInputJunk = 0x4a14c1; // seems like random keyboard mashing (see UpdateInput)

    gUnknown_2025600.unk20 = 0;
    gUnknown_2025600.unk0 = 0xffff; // probably a mask
    gUnknown_2025600.unk2 = -1;
    gUnknown_2025600.unk4 = -1;
    gUnknown_2025600.unk6 = -1;
    gUnknown_2025600.unk1C = -1;
    gUnknown_2025600.unk1E = -1;
    gUnknown_2025600.unk8 = -1;
    gUnknown_2025600.unkA = -1;
    gUnknown_2025600.unkC = -1;
    gUnknown_2025600.unkE = -1;
    gUnknown_2025600.unk10 = -1;
    gUnknown_2025600.unk12 = -1;
    gUnknown_2025600.unk14 = -1;
    gUnknown_2025600.unk16 = -1;
    gUnknown_2025600.unk28 = 0;
    gUnknown_2025600.unk29 = 0;

    gUnknown_2025668.holdTimerB = 0;
    gUnknown_2025668.holdTimerR = 0;
}

void sub_800485C(void)
{
    gUnknown_20255F0 = gUnknown_2025638;

    gUnknown_2025638.held = 0;
    gUnknown_2025638.pressed = 0;
    gUnknown_2025638.unk4 = 0;
    gUnknown_2025638.unk6 = 0;

    gUnknown_2025600.unk0 = 0xffff;
    gUnknown_2025600.unk2 = -1;
    gUnknown_2025600.unk4 = -1;
    gUnknown_2025600.unk6 = -1;
    gUnknown_2025600.unk8 = -1;
    gUnknown_2025600.unkA = -1;
    gUnknown_2025600.unkC = -1;
    gUnknown_2025600.unkE = -1;
    gUnknown_2025600.unk10 = -1;
    gUnknown_2025600.unk12 = -1;
    gUnknown_2025600.unk14 = -1;
    gUnknown_2025600.unk16 = -1;

    gUnknown_2025600.unk28 = 0;
    gUnknown_2025600.unk29 = 0;
}

// Unused
u8 sub_80048B8(void)
{
    return 0;
}

u8 sub_80048BC(void)
{
    return 0;
}

// Unused
u8 sub_80048C0(void)
{
    return 0;
}

// Unused
u8 sub_80048C4(void)
{
    return 0;
}

u8 sub_80048C8(void)
{
    return 0;
}

// Unused
u8 sub_80048CC(void)
{
    return 0;
}

void sub_80048D0(void)
{
    gUnknown_20255F0.unk4 = 0;
    gCurrentInputs.repeatTimer = 0;
    gCurrentInputs.unk8 = 0;
    gUnknown_2025668.holdTimerB = 999;
    gUnknown_2025668.holdTimerR = 999;

}

void sub_80048F8(void)
{
    gUnknown_20255F0.pressed = 0;
    gUnknown_2025638.pressed = 0;
    gCurrentInputs.pressed = 0;
}

void sub_8004914(void)
{
    gUnknown_2025600.unk20 = 0x5;
    gUnknown_2025600.unk24 = 0;
    gUnknown_2025600.unk0 = 0xffff;
    gUnknown_2025600.unk2 = -1;
    gUnknown_2025600.unk4 = -1;
    gUnknown_2025600.unk6 = -1;
    gUnknown_2025600.unk8 = -1;
    gUnknown_2025600.unkA = -1;
    gUnknown_2025600.unkC = -1;
    gUnknown_2025600.unkE = -1;
    gUnknown_2025600.unk10 = -1;
    gUnknown_2025600.unk12 = -1;
    gUnknown_2025600.unk14 = -1;
    gUnknown_2025600.unk16 = -1;

    gUnknown_2025600.unk28 = 0;
    gUnknown_2025600.unk29 = 0;

}

void UpdateInput(void)
{
    gLastInputs = gCurrentInputs;

    ReadKeyInput(&gCurrentInputs);

    gCurrentInputs.pressed = (gLastInputs.held ^ gCurrentInputs.held) & gCurrentInputs.held;

    if (gCurrentInputs.held) {
        // 0xF0 -- DPAD buttons
        if ((gCurrentInputs.unk8 & 0xf0) == (gCurrentInputs.held & 0xf0)) {
            if (gCurrentInputs.repeatTimer < 50)
                gCurrentInputs.repeatTimer = gCurrentInputs.repeatTimer + 1;
        } else {
            gCurrentInputs.unk8 = gCurrentInputs.held & 0xf0;
            gCurrentInputs.repeatTimer = 1;
        }
    } else {
        gCurrentInputs.repeatTimer = 0;
        gCurrentInputs.unk8 = 0;
    }

    if (gCurrentInputs.repeatTimer == 1) {
        gCurrentInputs.unk4 = (gCurrentInputs.unk8 & 0xf0) | gCurrentInputs.pressed;
    } else if (gCurrentInputs.repeatTimer == 48) {
        gCurrentInputs.repeatTimer = 43;
        gCurrentInputs.unk4 = (gCurrentInputs.unk8 & 0xf0) | gCurrentInputs.pressed;
    } else {
        gCurrentInputs.unk4 = 0;
    }
    gCurrentInputs.unk6 = 0;

    if (gCurrentInputs.held & B_BUTTON) {
        if (gUnknown_2025668.holdTimerB < 100)
            gUnknown_2025668.holdTimerB++;
    } else if (1 < gUnknown_2025668.holdTimerB && gUnknown_2025668.holdTimerB < 12) {
        gCurrentInputs.unk6 = B_BUTTON;
        gUnknown_2025668.holdTimerB = 0;
    } else {
        gUnknown_2025668.holdTimerB = 0;
    }

    if (gCurrentInputs.held & R_BUTTON) {
        if (gUnknown_2025668.holdTimerR < 100)
            gUnknown_2025668.holdTimerR++;
    } else if (1 < gUnknown_2025668.holdTimerR && gUnknown_2025668.holdTimerR < 12) {
        gCurrentInputs.unk6 |= R_BUTTON;
        gUnknown_2025668.holdTimerR = 0;
    } else {
        gUnknown_2025668.holdTimerR = 0;
    }

    gUnknown_2025638.held |= gCurrentInputs.held;
    gUnknown_2025638.pressed |= gCurrentInputs.pressed;
    gUnknown_2025638.unk4 |= gCurrentInputs.unk4;
    gUnknown_2025638.unk6 |= gCurrentInputs.unk6;

    gUnusedScrambledInputJunk *= gCurrentInputs.held | 0x54a1c41; // very similar to odd constant in InitInput - probably keymashing
}
