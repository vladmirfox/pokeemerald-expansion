#ifndef GUARD_BATTLE_SETUP_H
#define GUARD_BATTLE_SETUP_H

#include "gym_leader_rematch.h"

#define REMATCHES_COUNT 5
#define MAX_STACK_SIZE 20

struct RematchTrainer
{
    u16 trainerIds[REMATCHES_COUNT];
    u16 mapGroup;
    u16 mapNum;
};

typedef union PACKED TrainerBattleParameterUnion
{
    struct PACKED Parameters
    {
        u8 battleMode;
        u16 objEventLocalId;
        u16 battleOpponentA;
        u8* introTextA;
        u8* defeatTextA;
        u8* battleScriptRetAddrA;
        u16 battleOpponentB;
        u8* introTextB;
        u8* defeatTextB;
        u8* battleScriptRetAddrB;
        u8* victoryText;
        u8* cannotBattleText;
    } params;
    u8 data[sizeof(struct Parameters)];
} TrainerBattleParameterU;

typedef struct TrainerBattleScriptStack
{
    const u8* stack[MAX_STACK_SIZE];
    s8 stackPtr;
} TrainerBattleScriptStack;

#define TRAINER_BATTLE_PARAM sTrainerBattleParameter.params

extern const struct RematchTrainer gRematchTable[REMATCH_TABLE_ENTRIES];

extern TrainerBattleParameterU sTrainerBattleParameter;
extern u16 gTrainerBattleOpponent_A;
extern u16 gTrainerBattleOpponent_B;
extern u16 gPartnerTrainerId;

void BattleSetup_StartWildBattle(void);
void BattleSetup_StartDoubleWildBattle(void);
void BattleSetup_StartBattlePikeWildBattle(void);
void BattleSetup_StartRoamerBattle(void);
void StartWallyTutorialBattle(void);
void BattleSetup_StartScriptedWildBattle(void);
void BattleSetup_StartScriptedDoubleWildBattle(void);
void BattleSetup_StartLatiBattle(void);
void BattleSetup_StartLegendaryBattle(void);
void StartGroudonKyogreBattle(void);
void StartRegiBattle(void);
u8 BattleSetup_GetTerrainId(void);
u8 GetWildBattleTransition(void);
u8 GetTrainerBattleTransition(void);
u8 GetSpecialBattleTransition(s32 id);
void ChooseStarter(void);
void ResetTrainerOpponentIds(void);
void SetMapVarsToTrainer(void);
const u8 *BattleSetup_ConfigureTrainerBattle(const u8 *data, TrainerBattleScriptStack *scrStack);
void ConfigureAndSetUpOneTrainerBattle(u8 trainerObjEventId, const u8 *trainerScript);
void ConfigureTwoTrainersBattle(u8 trainerObjEventId, const u8 *trainerScript);
void SetUpTwoTrainersBattle(void);
bool32 GetTrainerFlagFromScriptPointer(const u8 *data);
void SetTrainerFacingDirection(void);
u8 GetTrainerBattleMode(void);
bool8 GetTrainerFlag(void);
bool8 HasTrainerBeenFought(u16 trainerId);
void SetTrainerFlag(u16 trainerId);
void ClearTrainerFlag(u16 trainerId);
void BattleSetup_StartTrainerBattle(void);
void BattleSetup_StartRematchBattle(void);
void ShowTrainerIntroSpeech(void);
const u8 *BattleSetup_GetScriptAddrAfterBattle(void);
const u8 *BattleSetup_GetTrainerPostBattleScript(void);
void ShowTrainerCantBattleSpeech(void);
void PlayTrainerEncounterMusic(void);
const u8 *GetTrainerALoseText(void);
const u8 *GetTrainerBLoseText(void);
const u8 *GetTrainerWonSpeech(void);
void UpdateRematchIfDefeated(s32 rematchTableId);
void IncrementRematchStepCounter(void);
void TryUpdateRandomTrainerRematches(u16 mapGroup, u16 mapNum);
bool32 DoesSomeoneWantRematchIn(u16 mapGroup, u16 mapNum);
bool32 IsRematchTrainerIn(u16 mapGroup, u16 mapNum);
u16 GetLastBeatenRematchTrainerId(u16 trainerId);
bool8 ShouldTryRematchBattle(void);
bool8 IsTrainerReadyForRematch(void);
void ShouldTryGetTrainerScript(void);
u16 CountBattledRematchTeams(u16 trainerId);

void DoStandardWildBattle_Debug(void);
void BattleSetup_StartTrainerBattle_Debug(void);
s32 TrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId);
s32 FirstBattleTrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId);
u16 GetRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId);

void initStack(TrainerBattleScriptStack *scrStack);
const u8* pop(TrainerBattleScriptStack *scrStack);
bool8 push(TrainerBattleScriptStack *scrStack, const u8* ptr);

#endif // GUARD_BATTLE_SETUP_H
