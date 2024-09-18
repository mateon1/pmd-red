#include "global.h"
#include "code_800D090.h"
#include "code_8097DD0.h"
#include "constants/colors.h"
#include "constants/dungeon.h"
#include "constants/move_id.h"
#include "decompress.h"
#include "items.h"
#include "moves.h"
#include "pokemon.h"
#include "pokemon_3.h"
#include "pokemon_mid.h"
#include "text_util.h"

extern MonsterDataEntry *gMonsterParameters;
extern const char gUnknown_8107600[];
extern const char gUnknown_8107608[];
extern const char gUnownLetters[];
extern const char gUnknown_8107630[];
extern const char gUnknown_8107638[];
extern const char gUnknown_810763C[];
extern const char gUnknown_810768C[];  // lvmp%03d\0
extern struct FileArchive gSystemFileArchive;
extern s16 gFrenzyPlantIQReq;  // 0x14d
extern s16 gHydroCannonIQReq;  // 0x14d
extern s16 gBlastBurnIQReq;  // 0x14d
extern s16 gVoltTackleIQReq;  // 0x14d
extern char* gFormattedStatusNames[];

// wram data:
extern u16 gLevelCurrentPokeId;
extern LevelData gLevelCurrentData[];


extern int sprintf(char *, const char *, ...);
extern u32 ReturnIntFromChar(u8 r0);
extern void xxx_pokemon2_to_pokemonstruct_808DF44(PokemonStruct1*, PokemonStruct2*);

extern u8 GetBodySize(s16 index);

struct unkStruct_8107654 {
  s16 unk0;
  s16 fill2;
  s32 unk4;
};

extern u8 gUnknown_8107645[12];
extern struct unkStruct_8107654 gUnknown_8107654[6];
extern MonsterDataEntry *gMonsterParameters;
extern struct FileArchive gMonsterFileArchive;
extern const char gUnknown_8107684[];

static inline bool8 sub_808D654_sub(PokemonStruct1 *ptr)
{
    return ptr->dungeonLocation.id == DUNGEON_JOIN_LOCATION_PARTNER;
}

s32 sub_808D654(s32 *ptr) {
    s32 index;
    s32 count;
    PokemonStruct1 *pokeStruct;
    s32 *ptr2;

    pokeStruct = gRecruitedPokemonRef->pokemon;
    count = 0;
    for(index = 0, ptr2 = ptr; index < NUM_MONSTERS; index++, pokeStruct++)
    {
        if(((pokeStruct->unk0 >> 1) & 1) && (!pokeStruct->isTeamLeader) && !sub_808D654_sub(pokeStruct)){
            if(ptr != 0) *ptr2 = index;
            ptr2++;
            count++;
        }
    }
    return count;
}

// 80 (97.58 % matching) - Seth
// https://decomp.me/scratch/B8Ont
#ifdef NONMATCHING
s32 sub_808D6A4(s32 *param_1)
{
  PokemonStruct1 *pokeStruct;
  int index;
  s32 counter;
  s32 *piVar1;

  pokeStruct = gRecruitedPokemonRef->pokemon;
  counter = 0;

  for(index = 0, piVar1 = param_1; index < 0x19d; index++)
  {
    pokeStruct = &gRecruitedPokemonRef->pokemon[index];
    if (((pokeStruct->unk0 >> 1 & 1) != 0) && (!pokeStruct->isTeamLeader)) {
      if (param_1 != 0x0) {
        *piVar1 = index;
      }
      piVar1++;
      counter++;
    }
  }
  return counter;
}
#else
NAKED
s32 sub_808D6A4(s32 *param_1)
{
    asm_unified(
	"\tpush {r4-r6,lr}\n"
	"\tadds r5, r0, 0\n"
	"\tldr r0, _0808D6E4\n"
	"\tldr r2, [r0]\n"
	"\tmovs r6, 0\n"
	"\tmovs r4, 0\n"
	"\tadds r3, r5, 0\n"
"_0808D6B2:\n"
	"\tldrh r0, [r2]\n"
	"\tlsrs r0, 1\n"
	"\tmovs r1, 0x1\n"
	"\tands r0, r1\n"
	"\tcmp r0, 0\n"
	"\tbeq _0808D6CE\n"
	"\tldrb r0, [r2, 0x2]\n"
	"\tcmp r0, 0\n"
	"\tbne _0808D6CE\n"
	"\tcmp r5, 0\n"
	"\tbeq _0808D6CA\n"
	"\tstr r4, [r3]\n"
"_0808D6CA:\n"
	"\tadds r3, 0x4\n"
	"\tadds r6, 0x1\n"
"_0808D6CE:\n"
	"\tadds r4, 0x1\n"
	"\tadds r2, 0x58\n"
	"\tmovs r0, 0xCE\n"
	"\tlsls r0, 1\n"
	"\tcmp r4, r0\n"
	"\tble _0808D6B2\n"
	"\tadds r0, r6, 0\n"
	"\tpop {r4-r6}\n"
	"\tpop {r1}\n"
	"\tbx r1\n"
	"\t.align 2, 0\n"
"_0808D6E4: .4byte gRecruitedPokemonRef");
}

#endif

bool8 sub_808D6E8()
{
    s32 i;
    s32 count = 0;
    s32 size_count = 0;
    for (i = 0; i < NUM_MONSTERS; i++) {
        PokemonStruct1* pokemon = &gRecruitedPokemonRef->pokemon[i];
        if ((1 & pokemon->unk0) && ((pokemon->unk0 >> 1) % 2)) {
            size_count += GetBodySize(pokemon->speciesNum);
            count++;
        }
    }
    if ((size_count < 6) && (count < 4)) {
        return 1;
    }
    return 0;
}

// this one is surprisingly frustrating
NAKED
bool8 sub_808D750(s16 index_) {
  asm_unified(
"\tpush {r4-r7,lr}\n"
"\tmov r7, r9\n"
"\tmov r6, r8\n"
"\tpush {r6,r7}\n"
"\tlsls r0, 16\n"
"\tasrs r0, 16\n"
"\tmov r8, r0\n"
"\tmovs r6, 0\n"
"\tmovs r5, 0\n"
"\tmovs r4, 0\n"
"\tldr r0, _0808D7C8\n"
"\tmov r9, r0\n"
"\tmovs r7, 0x1\n"
"_0808D76A:\n"
"\tmovs r0, 0x58\n"
"\tadds r1, r4, 0\n"
"\tmuls r1, r0\n"
"\tmov r2, r9\n"
"\tldr r0, [r2]\n"
"\tadds r1, r0, r1\n"
"\tldrh r2, [r1]\n"
"\tadds r0, r7, 0\n"
"\tands r0, r2\n"
"\tcmp r0, 0\n"
"\tbeq _0808D798\n"
"\tlsrs r0, r2, 1\n"
"\tands r0, r7\n"
"\tcmp r0, 0\n"
"\tbeq _0808D798\n"
"\tmovs r2, 0x8\n"
"\tldrsh r0, [r1, r2]\n"
"\tbl GetBodySize\n"
"\tlsls r0, 24\n"
"\tlsrs r0, 24\n"
"\tadds r5, r0\n"
"\tadds r6, 0x1\n"
"_0808D798:\n"
"\tadds r4, 0x1\n"
"\tmovs r0, 0xCE\n"
"\tlsls r0, 1\n"
"\tcmp r4, r0\n"
"\tble _0808D76A\n"
"\tcmp r6, 0x3\n"
"\tbgt _0808D7CC\n"
"\tldr r2, _0808D7C8\n"
"\tmovs r0, 0x58\n"
"\tmov r1, r8\n"
"\tmuls r1, r0\n"
"\tldr r0, [r2]\n"
"\tadds r1, r0, r1\n"
"\tmovs r2, 0x8\n"
"\tldrsh r0, [r1, r2]\n"
"\tbl GetBodySize\n"
"\tlsls r0, 24\n"
"\tlsrs r0, 24\n"
"\tadds r5, r0\n"
"\tcmp r5, 0x6\n"
"\tbgt _0808D7CC\n"
"\tmovs r0, 0x1\n"
"\tb _0808D7CE\n"
"\t.align 2, 0\n"
"_0808D7C8: .4byte gRecruitedPokemonRef\n"
"_0808D7CC:\n"
"\tmovs r0, 0\n"
"_0808D7CE:\n"
"\tpop {r3,r4}\n"
"\tmov r8, r3\n"
"\tmov r9, r4\n"
"\tpop {r4-r7}\n"
"\tpop {r1}\n"
"\tbx r1\n"
  );
}

// bool8 sub_808D750(s16 index_) {
//     s32 i;
//     register s32 index asm("r8") = index_;
//     s32 count = 0;
//     s32 size_count = 0;

//     for (i = 0; i < 413; i++) {
//         register PokemonStruct1* pokemon = &i[gRecruitedPokemonRef->pokemon];
//         register u16 unk0 = pokemon->unk0;
//         if ((unk0 & 1) && ((pokemon->unk0 >> 1) & 1)) {
//             size_count += GetBodySize(pokemon->speciesNum);
//             count++;
//         }
//     }

//     if (count < 4) {
//         PokemonStruct1* pokemon;

//         pokemon = &gRecruitedPokemonRef->pokemon[index];

//         size_count += GetBodySize(pokemon->speciesNum);
//         if (size_count < 7) {
//             return TRUE;
//         }
//     }
//     return FALSE;
// }


void PeekPokemonItem(s16 index_, BulkItem* item) {
    s32 index = index_;
    PokemonStruct1* pokemon = &gRecruitedPokemonRef->pokemon[index];
    item->id = pokemon->heldItem.id;
    item->quantity = pokemon->heldItem.quantity;
}

void GivePokemonItem(s16 index_, BulkItem* item) {
    s32 index = index_;
    PokemonStruct1* pokemon = &gRecruitedPokemonRef->pokemon[index];
    pokemon->heldItem.id = item->id;
    pokemon->heldItem.quantity = item->quantity;
}

bool8 IsPokemonRenamed(PokemonStruct1* pokemon) {
    char species_name[20];
    char* species = GetMonSpecies(pokemon->speciesNum);
    s32 i;
    CopyStringtoBuffer(species_name, species);
    for (i = 0; i < POKEMON_NAME_LENGTH; i++) {
        if (pokemon->name[i] != species_name[i]) {
            return FALSE;
        }
        if (!pokemon->name[i]) {
            return TRUE;
        }
    }
    return TRUE;
}

bool8 ComparePokemonNames(s16 a1, s16 a2)
{
    s32 index1 = a1;
    s32 index2 = a2;
    u8* name1 = gRecruitedPokemonRef->pokemon[index1].name;
    u8* name2 = gRecruitedPokemonRef->pokemon[index2].name;

    s32 i;
    for (i = 0; i < POKEMON_NAME_LENGTH; i++) {
        s32 c1 = ReturnIntFromChar(*name1);
        s32 c2 = ReturnIntFromChar(*name2);
        if (c1 > c2) {
            return TRUE;
        }
        if (c1 < c2) {
            return FALSE;
        }
        name1++;
        name2++;
    }
    return FALSE;
}

void CopyMonsterNametoBuffer(u8 * buffer, s16 index)
{
    strncpy(buffer, gMonsterParameters[index].species, 0x14);
}

void CopyYellowMonsterNametoBuffer(u8 *buffer, s16 index)
{
    s32 new_index = index;
    sprintfStatic(buffer, gUnknown_8107600, gMonsterParameters[new_index].species); // {COLOR_2 YELLOW}%s{END_COLOR_TEXT_2}
}

void CopyCyanMonsterNametoBuffer(u8 *buffer, s16 index)
{
    s32 new_index = index;
    sprintfStatic(buffer, gUnknown_8107608, gMonsterParameters[new_index].species); // {COLOR_2 CYAN}%s{END_COLOR_TEXT_2}
}

void sub_808D930(u8 *buffer, s32 index)
{
  char *unownString;
  s32 unownIndex;
  const char *preload;
  s16 index_s16 = index;

  if (GetBaseSpecies(index_s16) == MONSTER_UNOWN) {
    preload = gUnknown_8107630; // %s%c
    unownString = GetMonSpecies(MONSTER_UNOWN);
    unownIndex = GetUnownIndex(index_s16);
    sprintfStatic(buffer,preload,unownString,gUnownLetters[unownIndex]); // ABCDEFGHIJKLMNOPQRSTUVWXYZ!?
  }
  else {
    sprintfStatic(buffer,gUnknown_8107638, gMonsterParameters[index_s16].species); // %s
  }
}

char * GetMonSpecies(s16 index)
{
    return gMonsterParameters[index].species;
}

void PrintColoredPokeNameToBuffer(u8 *buffer, PokemonStruct1 *pokemon, s32 colorNum)
{
  u8 nameBuffer [20];

  sub_80922B4(nameBuffer, pokemon->name, POKEMON_NAME_LENGTH);
  if (colorNum == COLOR_WHITE) {
    colorNum = COLOR_CYAN;
  }
  sprintfStatic(buffer,gUnknown_810763C,colorNum,nameBuffer); // {COLOR_2}%c%s{END_COLOR_TEXT_2}
}

void sub_808D9DC(u8 *buffer, PokemonStruct2 *param_2, s32 colorNum)
{
  u8 nameBuffer [20];

  sub_80922B4(nameBuffer, param_2->name, POKEMON_NAME_LENGTH);
  if (colorNum == COLOR_WHITE) {
    colorNum = COLOR_YELLOW;
  }
  sprintfStatic(buffer,gUnknown_810763C,colorNum,nameBuffer); // {COLOR_2}%c%s{END_COLOR_TEXT_2}
}

void sub_808DA0C(u8 *buffer, PokemonStruct2 *param_2)
{
  u8 nameBuffer [20];

  sub_80922B4(nameBuffer, param_2->name, POKEMON_NAME_LENGTH);
  sprintfStatic(buffer,gUnknown_8107638,nameBuffer); // %s
}

void PrintPokeNameToBuffer(u8 *buffer, PokemonStruct1 *pokemon)
{
  sub_80922B4(buffer, pokemon->name, POKEMON_NAME_LENGTH);
}

bool8 sub_808DA44(s32 a1_, u32 a2_)
{
  // this is the dumbest thing ever, but just making a1 a s16 and
  // a2 a u8 did weird stuff with shifting...
  s32 a1 = (s16)a1_;
  u32 a2 = (u8)a2_;
  if (a2 > 0xc) {
    s32 i;
    struct unkStruct_8107654 data[6];
    memcpy(data, gUnknown_8107654, 6 * sizeof(struct unkStruct_8107654));

    for (i = 0; i < 10 && data[i].unk0; i++) {
      if (data[i].unk0 == a1 && data[i].unk4 == a2) {
        return 1;
      }
    }
    return 0;
  }
  else {
    return gUnknown_8107645[a2];
  }
}

u8 *GetCategoryString(s16 index)
{
    return gMonsterParameters[index].category;
}

u8 GetBodySize(s16 index)
{
    return gMonsterParameters[index].bodySize;
}

u8 GetShadowSize(s16 index)
{
    return gMonsterParameters[index].shadowSize;
}

s32 GetMovementSpeed(s16 index)
{
    return gMonsterParameters[index].movementSpeed;
}

u8 GetMovementType(s16 index)
{
    return gMonsterParameters[index].movementType;
}

u8 GetRegenSpeed(s16 index)
{
    return ((u8)(gMonsterParameters[index].regenSpeed) << 25) >> 24;
}

bool8 CanMove(s16 index)
{
    return gMonsterParameters[index].canMove;
}

u8 GetChanceAsleep(s16 index)
{
    return gMonsterParameters[index].chanceAsleep;
}

u32 GetWeight(s16 index)
{
    return gMonsterParameters[index].weight;
}

u32 GetSize(s16 index)
{
    return gMonsterParameters[index].size;
}

u8 GetFriendArea(s32 index)
{
    s16 index_s32 = index;
    return gMonsterParameters[index_s32].friendArea;
}

u16 GetBaseHP(s16 index)
{
    return gMonsterParameters[index].baseHP;
}

bool8 MonsterIDCanThrowItems(s16 index)
{
    return gMonsterParameters[index].canThrowItems;
}

u8 GetUnk12(s16 index)
{
    return gMonsterParameters[index].unk12;
}

s16 GetPokemonEvolveFrom(s16 index)
{
    return gMonsterParameters[index].preEvolution.evolveFrom;
}

u16 GetBaseOffensiveStat(s32 index, u32 r1)
{
    s16 index_s16 = index;
    return gMonsterParameters[index_s16].baseAtkSpAtk[r1];
}

u16 GetBaseDefensiveStat(s32 index, u32 r1)
{
    s16 index_s16 = index;
    return gMonsterParameters[index_s16].baseDefSpDef[r1];
}

u8 GetPokemonType(s32 index, u32 typeIndex)
{
    s16 newIndex = index;
    return gMonsterParameters[newIndex].types[typeIndex];
}

u8 GetPokemonAbility(s16 index, u32 abilityIndex)
{
    return gMonsterParameters[index].abilities[abilityIndex];
}

s16 GetDexInternalNo(s32 index, u32 r1)
{
    s16 index_s16 = index;
    return gMonsterParameters[index_s16].dexInternal[r1];
}

s16 GetRecruitRate(s16 index)
{
    return gMonsterParameters[index].recruitRate;
}

s16 GetAlphabetParentNo(s16 index, s32 r1)
{
    return gMonsterParameters[index].alphabetParent[r1];
}


s16 GetInternalNo(s16 index)
{
    return gMonsterParameters[index].dexInternal[1];
}

s32 CalculateEXPGain(s16 index, s32 level)
{
    s32 expYield = gMonsterParameters[index].expYield;
    return expYield + (expYield * (level - 1)) / 10;
}

s16 GetPokemonEvolveConditions(s16 index, unkEvolve *r1)
{
    PreEvolution temp2;
    EvolutionRequirements temp1;
    temp1 = gMonsterParameters[index].evolutionRequirements;
    temp2 = gMonsterParameters[index].preEvolution;
    r1->preEvolution = temp2;
    r1->evolutionRequirements = temp1;
    // The return value is not used anywhere, but necessary for the function to match.
    return index;
}

u8 GetPokemonOverworldPalette(s16 index, u32 r1)
{
    // Had to have this cast to match
    u32 temp;
    temp = index;
    if (r1 != 0)
    {
        return 10;
    }
    else
    {
        return gMonsterParameters[temp].overworldPalette;
    }
}

OpenedFile *OpenPokemonDialogueSpriteFile(s16 index)
{
    // Looks like this loads the dialogue sprite for the pokemon

    char buffer[0xC];
    if(gMonsterParameters[index].dialogueSprites == 0)
    {
        return NULL;
    }
    sprintf(buffer, gUnknown_8107684, index); // "kao%03d"
    return OpenFile(buffer, &gMonsterFileArchive);
}

OpenedFile *GetDialogueSpriteDataPtr(s16 index)
{
    // Looks like this loads the dialogue sprite for the pokemon

    char buffer[0xC];
    if(gMonsterParameters[index].dialogueSprites == 0)
    {
        return NULL;
    }
    sprintf(buffer, gUnknown_8107684, index); // "kao%03d"
    return OpenFileAndGetFileDataPtr(buffer, &gMonsterFileArchive);
}

bool8 IsPokemonDialogueSpriteAvail(s16 index, s32 r1)
{
    // checking to see if dialogue sprite is available??
    return (gMonsterParameters[index].dialogueSprites >> r1) & 1;
}

void xxx_pokemonstruct_index_to_pokemon2_808DE30(void* r0, u32 r1)
{
    xxx_pokemonstruct_to_pokemon2_808DE50(r0, &gRecruitedPokemonRef->pokemon[r1], r1);
}

void xxx_pokemonstruct_to_pokemon2_808DE50(PokemonStruct2 * a1, PokemonStruct1 *pokemon, s32 a3)
{
    s32 i;
    BulkItem* held;
    Item* slot;

    a1->unk0 = pokemon->unk0;
    a1->level = pokemon->level;
    a1->IQ = pokemon->IQ;
    a1->IQSkills = pokemon->IQSkills;
    GenerateHiddenPower(&a1->hiddenPower);
    a1->dungeonLocation = pokemon->dungeonLocation;
    a1->isTeamLeader = pokemon->isTeamLeader;
    a1->unkA = a3;
    a1->speciesNum = pokemon->speciesNum;
    a1->tacticIndex = pokemon->tacticIndex;
    a1->unk12 = pokemon->pokeHP;
    a1->unk10 = pokemon->pokeHP;

    for (i = 0; i < 2; i++) {
        a1->offense.att[i] = pokemon->offense.att[i];
        a1->offense.def[i] = pokemon->offense.def[i];
    }

    a1->currExp = pokemon->currExp;
    CopyAndResetMoves(a1->moves.moves, pokemon->moves);

    for (i = 0; i < POKEMON_NAME_LENGTH; i++) {
        a1->name[i] = pokemon->name[i];
    }

    held = &pokemon->heldItem;
    slot = &a1->itemSlot;

    if ((u32)(-held->id | held->id) >> 31) {
        HeldItemToSlot(slot, held);
    }
    else {
        slot->id = ITEM_NOTHING;
        slot->quantity = 0;
        slot->flags = 0;
    }

  a1->belly = IntToFixedPoint(100);
  a1->maxBelly = IntToFixedPoint(100);
}

void xxx_pokemon2_to_pokemonstruct_index_808DF2C(s32 a1, PokemonStruct2* a2)
{
    xxx_pokemon2_to_pokemonstruct_808DF44(&a1[gRecruitedPokemonRef->pokemon], a2);
}


void xxx_pokemon2_to_pokemonstruct_808DF44(PokemonStruct1* pokemon, PokemonStruct2* a2)
{
    s32 i;

    pokemon->unk0 = a2->unk0;
    pokemon->level = a2->level;
    pokemon->IQ = a2->IQ;
    pokemon->IQSkills = a2->IQSkills;
    pokemon->dungeonLocation = a2->dungeonLocation;
    pokemon->isTeamLeader = a2->isTeamLeader;
    pokemon->speciesNum = a2->speciesNum;
    pokemon->tacticIndex = a2->tacticIndex;
    pokemon->pokeHP = a2->unk12;

    for (i = 0; i < 2; i++) {
        pokemon->offense.att[i] = a2->offense.att[i];
        pokemon->offense.def[i] = a2->offense.def[i];
    }

    pokemon->currExp = a2->currExp;
    CopyBareMoveData(pokemon->moves, a2->moves.moves);

    for (i = 0; i < POKEMON_NAME_LENGTH; i++) {
        pokemon->name[i] = a2->name[i];
    }

    if (a2->itemSlot.flags & ITEM_FLAG_EXISTS) {
        SlotToHeldItem(&pokemon->heldItem, &a2->itemSlot);
    }
    else {
        pokemon->heldItem.id = ITEM_NOTHING;
    }
}

void sub_808DFDC(s32 a1, PokemonStruct2* a2)
{
    // transfer item from unk to pokemon at index
    PokemonStruct1* pokemon = &gRecruitedPokemonRef->pokemon[a1];
    if (a2->itemSlot.flags & ITEM_FLAG_EXISTS) {
        SlotToHeldItem(&pokemon->heldItem, &a2->itemSlot);
    }
    else {
        pokemon->heldItem.id = ITEM_NOTHING;
    }
}

void GetPokemonLevelData(LevelData* a1, s16 _id, s32 level)
{
  u8 buffer[12];
  s32 id = _id;

  if ((s16)gLevelCurrentPokeId != id)
  {
    OpenedFile *file;

    gLevelCurrentPokeId = id;
    // lvmp%03d\0
    sprintf(buffer, gUnknown_810768C, id);
    file = OpenFileAndGetFileDataPtr(buffer, &gSystemFileArchive);
    DecompressATFile((char*)gLevelCurrentData, 0, file);
    CloseFile(file);
  }
  level -= 1;
  if ( level < 0 )
    level = 0;

   *a1 = gLevelCurrentData[level];
}

const u8* DecompressMoveID(const u8* a1, u16* moveID)
{
    u32 r1 = *a1++;
    u32 r3;
    if (r1 & 0x80) {
        r3 = *a1++;
    }
    else {
        r3 = r1;
        r1 = 0;
    }
#ifdef NONMATCHING
    // wrong order
    r1 &= 0x7f;
    r3 &= 0x7f;
    *moveID = (r1 << 7) | r3;
#else
    {
        register u32 mask asm("r0") = 0x7f;
        r3 &= mask;
        r1 &= mask;
        *moveID = (r1 << 7) | r3;
    }
#endif
    return a1;
}

s32 sub_808E0AC(u16* a1, s16 species, s32 a3, s32 IQPoints)
{
  const u8* stream;
  u16 moveID;  // moveID
  s32 count;
  register s32 _species asm("r2");  // weird regalloc

  _species = (s16)species;
  count = 0;

  if (species == MONSTER_DECOY) return 0;
  if (species == MONSTER_NONE) return 0;
  if (species == MONSTER_MUNCHLAX) return 0;
  // get stream
  stream = GetLevelUpMoves(_species);

  while (*stream)
  {
    u8 v12;

    // read from stream
    stream = DecompressMoveID(stream, &moveID);
    v12 = *stream++;

    if (v12 > a3)
      break;
    if (v12 == a3) {
      bool8 cond = 1;

      // NOTE: these moves require IQ to be > 333
      if ((moveID == MOVE_FRENZY_PLANT) && (IQPoints < gFrenzyPlantIQReq)) cond = 0;
      if ((moveID == MOVE_HYDRO_CANNON) && (IQPoints < gHydroCannonIQReq)) cond = 0;
      if ((moveID == MOVE_BLAST_BURN) && (IQPoints < gBlastBurnIQReq)) cond = 0;
      if ((moveID == MOVE_VOLT_TACKLE) && (IQPoints < gVoltTackleIQReq)) cond = 0;

      if (cond) {
        if (count < 16) {
          *a1++ = moveID;
          ++count;
        }
      }
    }
  }
  return count;
}

bool8 CanMonLearnMove(u16 moveID, s16 _species)
{
  u16 levelUpMoveID;
  u16 HMTMMoveID;
  s32 species = _species;  // r4
  const u8* learnsetPtr;

  if (species == MONSTER_DECOY) return 0;
  if (species == MONSTER_NONE) return 0;
  if (species == MONSTER_MUNCHLAX) return 0;
  if (moveID == MOVE_STRUGGLE) return 0;

  learnsetPtr = GetLevelUpMoves(_species);
  while (*learnsetPtr) {
    learnsetPtr = DecompressMoveID(learnsetPtr, &levelUpMoveID);
    learnsetPtr++;
    if (moveID == levelUpMoveID) {
      return TRUE;
    }
  }

  learnsetPtr = GetHMTMMoves(species);
  while (*learnsetPtr) {
    learnsetPtr = DecompressMoveID(learnsetPtr, &HMTMMoveID);
    if (HMTMMoveID == moveID) {
      return TRUE;
    }
  }
  return FALSE;
}


s32 sub_808E218(unkStruct_808E218_arg* a1, PokemonStruct1* pokemon)
{
  s32 i;
  s32 count;
  struct EvolveStage evolve_sequence[3];
  s32 sequence_length;

  count = 0;
  a1->count = 0;
  if (pokemon->speciesNum == MONSTER_DECOY) return 0;
  if (pokemon->speciesNum == MONSTER_NONE) return 0;
  if (pokemon->speciesNum == MONSTER_MUNCHLAX) return 0;

  sequence_length = GetEvolutionSequence(pokemon, evolve_sequence);
  for (i = 0; i < sequence_length; i++) {
    const u8 *ptr;
    u16 result;

    ptr = GetLevelUpMoves(evolve_sequence[i].speciesNum);
    while (*ptr) {
      s32 value;
      ptr = DecompressMoveID(ptr, &result);
      value = *ptr++;

      if (value > evolve_sequence[i].level) {
        break;
      }

      if (count < NUM_MONSTERS) {
        s32 j;
        bool8 cond = 1;

        if ((result == MOVE_FRENZY_PLANT) && (pokemon->IQ < gFrenzyPlantIQReq)) cond = 0;
        if ((result == MOVE_HYDRO_CANNON) && (pokemon->IQ < gHydroCannonIQReq)) cond = 0;
        if ((result == MOVE_BLAST_BURN) && (pokemon->IQ < gBlastBurnIQReq)) cond = 0;
        if ((result == MOVE_VOLT_TACKLE) && (pokemon->IQ < gVoltTackleIQReq)) cond = 0;

        for (j = 0; j < MAX_MON_MOVES; j++) {
          if ((pokemon->moves[j].moveFlags & MOVE_FLAG_EXISTS) && pokemon->moves[j].id == result) {
            cond = 0;
          }
        }

        if (cond) {
          s32 k;
          for (k = 0; k < count && a1->unk0[k] != result; k++) {}

          if (k == count) {
            a1->unk0[count++] = result;
          }
        }
      }
    }
  }

  a1->count = count;
  return count;
}


s32 GetEvolutionSequence(PokemonStruct1* pokemon, struct EvolveStage* a2)
{
#ifdef NONMATCHING
  s32 count;
  s32 species;
  s32 i;

  a2[0].speciesNum = pokemon->speciesNum;
  a2[0].level = pokemon->level;

  count = 1;
  species = pokemon->speciesNum;
  i = 0;

  for (; i < 2; i++) {
      if (!pokemon->unkC[i].level) {
          break;
      }
      species = GetPokemonEvolveFrom(species);
      if (!species) {
          break;
      }
      a2[1 + i].speciesNum = species;
      a2[1 + i].level = pokemon->unkC[i].level;
      // wrong increment order:
      count++;
  }
  return count;
#else
  s32 count;
  s32 species;
  s32 i;
  struct EvolveStage* stage;
  struct unkPokeSubStruct_C* has_next_stage;

  a2[0].speciesNum = pokemon->speciesNum;
  a2[0].level = pokemon->level;

  count = 1;
  species = pokemon->speciesNum;
  i = 0;
  has_next_stage = pokemon->unkC;
  stage = &a2[1];

  for (; i < 2; i++) {
      if (!has_next_stage->level) {
          break;
      }
      species = GetPokemonEvolveFrom(species);
      if (!species) {
          break;
      }
      stage->speciesNum = species;
      stage->level = has_next_stage->level;
      stage++;
      count++;
      has_next_stage++;
  }
  return count;
#endif
}

s32 sub_808E400(s32 _species, s16* _a2, bool32 bodySizeCheck, bool32 shedinjaCheck)
{
  // this is horrible
  s32 i;
  register s32 species asm("r9") = (s16)_species;
  bool32 bodySizeCheck_bool32 = (bool8)bodySizeCheck;
  bool32 shedinjaCheck_bool32 = (bool8)shedinjaCheck;
  s32 count = 0;
  register s16* a2 asm("r6");
  i = 1;
  a2 = _a2;
  for (i = 1; i < MONSTER_MAX; i++) {
    register s32 current asm("r8") = (s16)i;
    if (species != GetPokemonEvolveFrom(i)) {
      continue;
    }
    if (!bodySizeCheck_bool32 && (GetBodySize(species) != GetBodySize(i))) {
      continue;
    }
    if (!shedinjaCheck_bool32 && ((s16)i == MONSTER_SHEDINJA)) {
      continue;
    }
    *a2++ = current;
    count++;
  }
  return count;
}

void sub_808E490(Move* a1, s16 species)
{
    u16 buffer[0x10]; // of moveIDs
    s32 i;
    s32 count = sub_808E0AC(buffer, species, 1, 999);
    if (count == 0) {
        count = 1;
        buffer[0] = MOVE_ITEM_TOSS;
    }

    i = 0;
    if (i < count) {
        while (i < count) {
            InitZeroedPPPokemonMove(&a1[i], buffer[i]);
            i++;
        }
        i = count;
    }
    while (i < MAX_MON_MOVES) {
        a1[i].moveFlags = 0;
        i++;
    }
}

char* sub_808E4FC(s32 a1)
{
    struct subStruct_203B240 *result[4];
    sub_8097DF0(gFormattedStatusNames[a1], result);
    return result[0]->pokeName;
}

char* sub_808E51C(s32 a1)
{
    struct subStruct_203B240 *result[4];
    sub_8097DF0(gFormattedStatusNames[a1], result);
    return result[0]->unk4;
}
