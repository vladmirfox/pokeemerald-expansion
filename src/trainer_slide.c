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

static const u8 *const sFrontierTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT];
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

static const u8 *const sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
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

bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 slideType)
{
    //return (sTrainerSlides[difficulty].messages[slideType] != NULL);
    return TRUE;
}

bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_BEFORE_FIRST_TURN]== NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideBeforeFirstTurnMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlidePlayerLandsFirstCriticalHitMsgState != 1)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(enum DifficultyLevel difficulty, u32 trainerId, u32 battler)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlidePlayerLandsFirstSuperEffectiveHitMsgState != 1)
        return FALSE;

    if (gBattleMons[battler].hp == 0)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlidePlayerLandsFirstSTABMoveMsgState != 1)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] == NULL)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE) - 1)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideEnemyMonUnaffected(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideEnemyMonUnaffectedMsgState != 1)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastSwitchIn(const u8 *const sAllTrainerSlides[TRAINERS_COUNT][TRAINER_SLIDE_COUNT], enum DifficultyLevel difficulty, u32 trainerId, u32 battler)
{
    if ((sAllTrainerSlides)[difficulty][trainerId][TRAINER_SLIDE_LAST_SWITCHIN] == 0)
        return FALSE;

    if (CanBattlerSwitch(battler))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel difficulty, u32 trainerId, u32 battler, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_LAST_HALF_HP] == NULL)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    if (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    if (gBattleStruct->trainerSlideHalfHpMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId, u32 battler)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_LAST_LOW_HP] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideLowHpMsgDone)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (!BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_MEGA_EVOLUTION] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideMegaEvolutionMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_Z_MOVE] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideZMoveMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_DYNAMAX] == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideDynamaxMsgDone)
        return FALSE;

    return TRUE;
}

u32 ShouldDoTrainerSlide(u32 battler, u32 which)
{
    u32 firstId, lastId, trainerId, retValue = 1;
    const u8 *const (*sAllTrainerSlides)[TRAINER_SLIDE_COUNT] = NULL;

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

    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        sAllTrainerSlides = sFrontierTrainerSlides[difficulty];
    else
        sAllTrainerSlides = sTrainerSlides[difficulty];

    gBattleScripting.battler = battler;
    switch (which)
    {
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
            if (ShouldRunTrainerSlideBeforeFirstTurn(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideBeforeFirstTurnMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_BEFORE_FIRST_TURN];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT:
            if (ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(difficulty, trainerId))
            {
                gBattleStruct->trainerSlidePlayerLandsFirstCriticalHitMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
            if (ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(difficulty, trainerId, battler))
            {
                gBattleStruct->trainerSlidePlayerLandsFirstSuperEffectiveHitMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE:
            if (ShouldRunTrainerSlidePlayerLandsFirstSTABMove(difficulty, trainerId, firstId, lastId))
            {
                gBattleStruct->trainerSlidePlayerLandsFirstSTABMoveMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN:
            if (ShouldRunTrainerSlidePlayerLandsFirstDown(difficulty, trainerId,firstId, lastId))
            {
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN];
                return retValue;
            }
            break;
        case TRAINER_SLIDE_ENEMY_MON_UNAFFECTED:
            if (ShouldRunTrainerSlideEnemyMonUnaffected(difficulty, trainerId, firstId, lastId))
            {
                gBattleStruct->trainerSlideEnemyMonUnaffectedMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_ENEMY_MON_UNAFFECTED];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_LAST_SWITCHIN:
            if (ShouldRunTrainerSlideLastSwitchIn(sAllTrainerSlides,difficulty,trainerId, battler))
            {
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_LAST_SWITCHIN];
                return retValue;
            }
            break;
        case TRAINER_SLIDE_LAST_HALF_HP:
            if (ShouldRunTrainerSlideLastHalfHP(difficulty, trainerId,battler, firstId, lastId))
            {
                gBattleStruct->trainerSlideHalfHpMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_LAST_HALF_HP];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_LAST_LOW_HP:
            if (ShouldRunTrainerSlideLastLowHp(difficulty,trainerId,firstId,lastId,battler))
            {
                gBattleStruct->trainerSlideLowHpMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_LAST_LOW_HP];
                return retValue;
            }
            break;
        case TRAINER_SLIDE_MEGA_EVOLUTION:
            if (ShouldRunTrainerSlideMegaEvolution(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideMegaEvolutionMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_MEGA_EVOLUTION];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_Z_MOVE:
            if (ShouldRunTrainerSlideZMove(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideZMoveMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_Z_MOVE];
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_DYNAMAX:
            if (ShouldRunTrainerSlideDynamax(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideDynamaxMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId][TRAINER_SLIDE_DYNAMAX];
                return TRUE;
            }
            break;
    }

    return 0;
}

void TryInitalizeFirstSTABMoveTrainerSlide(bool32 recordAbilities, u32 battlerDef, u32 battlerAtk, u32 moveType)
{

    if (!recordAbilities)
        return;

    if ((GetBattlerSide(battlerDef) == B_SIDE_PLAYER))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    if (gBattleStruct->trainerSlidePlayerLandsFirstSTABMoveMsgState != 0)
        return;

    gBattleStruct->trainerSlidePlayerLandsFirstSTABMoveMsgState = 1;
}

//TODO
