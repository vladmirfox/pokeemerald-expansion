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

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT];
            /*
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_NONE] =
        {
            [TRAINER_SLIDE_LAST_SWTICHIN] = sText_AarghAlmostHadIt,
            [TRAINER_SLIDE_LAST_LOW_HP] = sText_BoxIsFull,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_123Poof,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_ShootSoClose,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHit,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_SuperEffective,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE] = sText_ABoosted,
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = sText_ButNoEffect,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_PowderExplodes,
            [TRAINER_SLIDE_Z_MOVE] = sText_Electromagnetism,
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_GravityIntensified,
            [TRAINER_SLIDE_DYNAMAX] = sText_TargetWokeUp,
        }
    }
};
            */

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

static void DebugPrintFlippedBits(void)
{
    return;
    DebugPrintf("DebugPrintFlippedBits");

    for (u32 i = 0; i < 32; i++) {
        if (gBattleStruct->slideMessageStatus.messagePlayed & (1u << i))
        {
            DebugPrintf("messagePlayed %d is flipped",i);
        }
    }

    for (u32 i = 0; i < 32; i++) {
        if (gBattleStruct->slideMessageStatus.messageInitalized & (1u << i))
        {
            DebugPrintf("messageInitalized %d is flipped",i);
        }
    }
}

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

bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideType)
{
    return (sTrainerSlides[difficulty][trainerId][slideType] != NULL);
}

bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel difficulty, u32 trainerId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_BEFORE_FIRST_TURN;


    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum DifficultyLevel difficulty, u32 trainerId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(enum DifficultyLevel difficulty, u32 trainerId, u32 battler)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (gBattleMons[battler].hp == 0)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    DebugPrintFlippedBits();

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (IsTrainerSlideInitialized(TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE) == FALSE)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE) - 1)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideEnemyMonUnaffected(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastSwitchIn(enum DifficultyLevel difficulty, u32 trainerId, u32 battler)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_LAST_SWITCHIN;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (CanBattlerSwitch(battler))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel difficulty, u32 trainerId, u32 battler, u32 firstId, u32 lastId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_LAST_HALF_HP;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    if (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId, u32 battler)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_LAST_LOW_HP;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (!BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel difficulty, u32 trainerId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_MEGA_EVOLUTION;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel difficulty, u32 trainerId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_Z_MOVE;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel difficulty, u32 trainerId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_DYNAMAX;

    if (IsTrainerSlidePlayed(slideId))
        return FALSE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return FALSE;

    return TRUE;
}

u32 ShouldDoTrainerSlide(u32 battler, u32 which)
{
    u32 firstId, lastId, trainerId, retValue = 1;
    //const u8* const (*sAllTrainerSlides)[TRAINER_SLIDE_COUNT] = NULL;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battler) != B_SIDE_OPPONENT)
        return 0;

    // Two opponents support.
    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (gBattlerPartyIndexes[battler] >= 3)
        {
            firstId = 3, lastId = PARTY_SIZE;
            trainerId = gTrainerBattleOpponent_B;
            retValue = 2;
        }
        else
        {
            firstId = 0, lastId = 3;
            trainerId = gTrainerBattleOpponent_A;
        }
    }
    else
    {
        firstId = 0, lastId = PARTY_SIZE;
        trainerId = gTrainerBattleOpponent_A;
    }

    enum DifficultyLevel difficulty = GetTrainerDifficultyLevel(trainerId);

    /*
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        sAllTrainerSlides = sFrontierTrainerSlides[difficulty];
    else
        sAllTrainerSlides = sTrainerSlides[difficulty];
        */

    gBattleScripting.battler = battler;
    switch (which)
    {
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
            if (ShouldRunTrainerSlideBeforeFirstTurn(difficulty, trainerId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT:
            if (ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(difficulty, trainerId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
            if (ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(difficulty, trainerId, battler))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE:
            if (ShouldRunTrainerSlidePlayerLandsFirstSTABMove(difficulty, trainerId, firstId, lastId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN:
            if (ShouldRunTrainerSlidePlayerLandsFirstDown(difficulty, trainerId,firstId, lastId))
            {
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return retValue;
            }
            break;
        case TRAINER_SLIDE_ENEMY_MON_UNAFFECTED:
            if (ShouldRunTrainerSlideEnemyMonUnaffected(difficulty, trainerId, firstId, lastId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_LAST_SWITCHIN:
            if (ShouldRunTrainerSlideLastSwitchIn(difficulty,trainerId, battler))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return retValue;
            }
            break;
        case TRAINER_SLIDE_LAST_HALF_HP:
            if (ShouldRunTrainerSlideLastHalfHP(difficulty, trainerId,battler, firstId, lastId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_LAST_LOW_HP:
            if (ShouldRunTrainerSlideLastLowHp(difficulty,trainerId,firstId,lastId,battler))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return retValue;
            }
            break;
        case TRAINER_SLIDE_MEGA_EVOLUTION:
            if (ShouldRunTrainerSlideMegaEvolution(difficulty, trainerId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_Z_MOVE:
            if (ShouldRunTrainerSlideZMove(difficulty, trainerId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_DYNAMAX:
            if (ShouldRunTrainerSlideDynamax(difficulty, trainerId))
            {
                MarkTrainerSlideAsPlayed(which);
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][which];
                return TRUE;
            }
            break;
    }

    return 0;
}

void TryInitalizeFirstSTABMoveTrainerSlide(bool32 recordAbilities, u32 battlerDef, u32 battlerAtk, u32 moveType)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    if (IsTrainerSlideInitialized(slideId))
        return;

    if (IsTrainerSlidePlayed(slideId))
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

    if (IsTrainerSlidePlayed(slideId))
        return;

    if (IsTrainerSlideInitialized(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitalizeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target, u32 stringId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (stringId != STRINGID_SUPEREFFECTIVE)
        if (stringId != STRINGID_SUPEREFFECTIVETWOFOES)
            return;

    if (IsTrainerSlidePlayed(slideId))
        return;

    if (IsTrainerSlideInitialized(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitalizeTrainerSlideEnemyMonUnaffected(u32 target, u32 stringId)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsTrainerSlidePlayed(slideId))
        return;

    if (IsTrainerSlideInitialized(slideId))
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

//TODO
//swap between frontier and not frontier slide messages
