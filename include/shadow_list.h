#ifndef GUARD_SHADOW_LIST_H
#define GUARD_SHADOW_LIST_H

extern u8 gUnusedShadowListU8;
extern void (*gShadowListVBlankCB)(void);

enum
{
    FLAG_GET_MET,
    FLAG_GET_SNAGGED,
    FLAG_SET_MET,
    FLAG_SET_SNAGGED
};

struct ShadowListData
{
    /*0x00*/ u16 shadowState:1; // 0 is purified, 1 is Shadow
             u16 shadowVar:4; //  Can be used to designate "varieties" of Shadows -- by default, 0 does not go into Hyper/Reverse mode, 1-7 are "normal" Shadows (used for aggression values), 8-15 are Shadow Lugia style (unpurifiable).
             u16 shadowId:11; // due to the way this is handled elsewhere, keep to 11 bits (2048 max possible IDs)
    /*0x02*/ u16 species;
    /*0x04*/ u16 shadowMoves[MAX_MON_MOVES];
    /*0x06*/ u16 purifyMoves[MAX_MON_MOVES];
    /*0x08*/ u8 hpEV;
    /*0x09*/ u8 attackEV;
    /*0x0A*/ u8 defenseEV;
    /*0x0B*/ u8 speedEV;
    /*0x0C*/ u8 spAttackEV;
    /*0x0D*/ u8 spDefenseEV;
    /*0x0E*/ u32 hpIV:5;
    /*0x0E*/ u32 attackIV:5;
    /*0x0F*/ u32 defenseIV:5;
    /*0x0F*/ u32 speedIV:5;
    /*0x0F*/ u32 spAttackIV:5;
    /*0x10*/ u32 spDefenseIV:5;
    /*0x10*/ u32 boostLevel:2; // Shadow Boost, is added to base level to recalculate stats for Shadow Pokemon.
    /*0x11*/ u8 level;
    /*0x12*/ u16 heartMax;
    /*0x14*/ u8 gender;
    /*0x15*/ u8 nature;
    /*0x16*/ u8 shiny;
    /*0x17*/ u8 snagLocation; //If unsnagged, it's where you can snag them, with potential to change if wild/roaming; once snagged, this is then used for where you caught them
    /*0x18*/ u8 snagTrainerName[TRAINER_NAME_LENGTH]; //if wild/roaming, you can designate it as N/A, or just fill it in with a random name for lore or something.
    // /*0x??*/ u32 trueTrainerId; // If you want to implement a reunion system
    // /*0x??*/ u8 trueTrainerName[TRAINER_NAME_LENGTH]

void ResetShadowList(void);
u16 GetShadowHeartValue(u16 shadowId, u8 data);
u16 GetShadowCount(u8);
u8 DisplaySnaggedMonInfo(u16 dexNum, u32 otId, u32 personality);
s8 GetSetPokedexFlag(u16 nationalNum, u8 caseId);
u16 CreateMonSpriteFromNationalDexNumber(u16, s16, s16, u16);
bool16 HasAllShadows(void);
void ResetShadowListScrollPositions(void);
void CB2_OpenShadowList(void);

#endif // SHADOW_LIST_H
