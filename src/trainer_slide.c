#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"
#include "trainer_slide.h"
#include "battle_message.h"

static bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastSwitchIn(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel,u32,u32,u32,u32,u32,enum TrainerSlideType slideId);
static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue);

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT];

static const u8* const sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_THALIA_4] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = COMPOUND_STRING("Before_First_Turn{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("First_Critical_Hit{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = COMPOUND_STRING("First_Super_Effective_Hit{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = COMPOUND_STRING("First_Down{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_THALIA_5] =
        {
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Player_Mon_Unaffected{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE] = COMPOUND_STRING("First_Stab_Move{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MARIELA] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Last_Switchin{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_LAST_HALF_HP] = COMPOUND_STRING("Last_Half_Hp{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_LAST_LOW_HP] = COMPOUND_STRING("Last_Low_Hp{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_ALVARO] =
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Mega_Evolution{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_Z_MOVE] = COMPOUND_STRING("Z_Move{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_DYNAMAX] = COMPOUND_STRING("Dynamax{PAUSE_UNTIL_PRESS}"),
        },
    },
    [DIFFICULTY_EASY] = {},
    [DIFFICULTY_HARD] = {},
};

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold)
{
    switch (operation)
    {
        case LESS_THAN:
            return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
        case EQUAL:
            return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN:
            return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
        case LESS_THAN_OR_EQUAL:
            return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN_OR_EQUAL:
            return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
        case NOT_EQUAL:
        default:
            return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive)
{
    u32 i, count = 0;

    for (i = firstId; i < lastId; i++)
    {
        u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG, NULL);
        if (species != SPECIES_NONE
                && species != SPECIES_EGG
                && (!onlyAlive || GetMonData(&gEnemyParty[i], MON_DATA_HP, NULL)))
            count++;
    }

    return count;
}

static bool32 (* const sShouldRunTrainerSlideFunctions[])(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId) =
{
    [TRAINER_SLIDE_BEFORE_FIRST_TURN] = ShouldRunTrainerSlideBeforeFirstTurn,
    [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = ShouldRunTrainerSlidePlayerLandsFirstCriticalHit,
    [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit,
    [TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE] = ShouldRunTrainerSlidePlayerLandsFirstSTABMove,
    [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = ShouldRunTrainerSlidePlayerLandsFirstDown,
    [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = ShouldRunTrainerSlideEnemyMonUnaffected,
    [TRAINER_SLIDE_LAST_SWITCHIN] = ShouldRunTrainerSlideLastSwitchIn,
    [TRAINER_SLIDE_LAST_HALF_HP] = ShouldRunTrainerSlideLastHalfHP,
    [TRAINER_SLIDE_LAST_LOW_HP] = ShouldRunTrainerSlideLastLowHp,
    [TRAINER_SLIDE_MEGA_EVOLUTION] = ShouldRunTrainerSlideMegaEvolution,
    [TRAINER_SLIDE_Z_MOVE] = ShouldRunTrainerSlideZMove,
    [TRAINER_SLIDE_DYNAMAX] = ShouldRunTrainerSlideDynamax,
};

bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideType)
{
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return (sFrontierTrainerSlides[difficulty][trainerId][slideType] != NULL);
    else
        return (sTrainerSlides[difficulty][trainerId][slideType] != NULL);
}

void SetTrainerSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        gBattleStruct->trainerSlideMsg = sFrontierTrainerSlides[difficulty][trainerId][slideId];
    else
        gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][slideId];
}

static bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (gBattleMons[battler].hp == 0)
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE) - 1)
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlideLastSwitchIn(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (CanBattlerSwitch(battler))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    if (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (!BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    return TRUE;
}

static bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    return TRUE;
}

static bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 trainerId, u32 retValue, u32 battler, enum TrainerSlideType slideId)
{
    return TRUE;
}

static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (gBattlerPartyIndexes[battler] >= MULTI_PARTY_SIZE)
        {
            *firstId = MULTI_PARTY_SIZE;
            *lastId = PARTY_SIZE;
            *trainerId = gTrainerBattleOpponent_B;
            *retValue = TRAINER_SLIDE_TARGET_TRAINER_B;
        }
        else
        {
            *firstId = 0;
            *lastId = MULTI_PARTY_SIZE;
            *trainerId = gTrainerBattleOpponent_A;
        }
    }
    else
    {
        *firstId = 0,
        *lastId = PARTY_SIZE;
        *trainerId = gTrainerBattleOpponent_A;
    }

}

enum TrainerSlideTargets ShouldDoTrainerSlide(u32 battler, enum TrainerSlideType slideId)
{
    u32 firstId, lastId, trainerId, retValue = TRAINER_SLIDE_TARGET_TRAINER_A;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battler) != B_SIDE_OPPONENT)
        return TRAINER_SLIDE_TARGET_NONE;

    SetTrainerSlideParamters(battler, &firstId, &lastId, &trainerId, &retValue);
    enum DifficultyLevel difficulty = GetTrainerDifficultyLevel(trainerId);

    gBattleScripting.battler = battler;

    if (IsTrainerSlidePlayed(slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (sShouldRunTrainerSlideFunctions[slideId](difficulty,firstId, lastId,trainerId,retValue,battler,slideId) == FALSE)
        return TRAINER_SLIDE_TARGET_NONE;

    MarkTrainerSlideAsPlayed(slideId);
    SetTrainerSlideMessage(difficulty,trainerId,slideId);
    return retValue;
}

static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId)
{
    if (IsTrainerSlideInitialized(slideId))
        return TRUE;

    if (IsTrainerSlidePlayed(slideId))
        return TRUE;

    return FALSE;
}

void TryInitalizeFirstSTABMoveTrainerSlide(bool32 recordAbilities, u32 battlerDef, u32 battlerAtk, u32 moveType)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (!recordAbilities)
        return;

    if ((GetBattlerSide(battlerDef) == B_SIDE_PLAYER))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitalizeTrainerSlidePlayerLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitalizeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target, u32 stringId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (stringId != STRINGID_SUPEREFFECTIVE)
        if (stringId != STRINGID_SUPEREFFECTIVETWOFOES)
            return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitalizeTrainerSlideEnemyMonUnaffected(u32 target, u32 stringId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if ((stringId != STRINGID_ITDOESNTAFFECT && stringId != STRINGID_PKMNWASNTAFFECTED && stringId != STRINGID_PKMNUNAFFECTED))
        return;

    if (GetBattlerSide(target) != B_SIDE_OPPONENT)
        return;

    InitalizeTrainerSlide(slideId);
}

bool32 IsTrainerSlideInitialized(enum TrainerSlideType slideId)
{
    return (gBattleStruct->slideMessageStatus.messageInitalized & (1u << slideId)) != 0;
}

bool32 IsTrainerSlidePlayed(enum TrainerSlideType slideId)
{
    return (gBattleStruct->slideMessageStatus.messagePlayed & (1u << slideId)) != 0;
}

void InitalizeTrainerSlide(enum TrainerSlideType slideId)
{
    gBattleStruct->slideMessageStatus.messageInitalized |= (1u << slideId);
}

void MarkTrainerSlideAsPlayed(enum TrainerSlideType slideId)
{
    gBattleStruct->slideMessageStatus.messagePlayed |= (1u << slideId);
}

