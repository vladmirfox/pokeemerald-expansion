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

static const struct TrainerSlide sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
    /* Put any trainer slide-in messages inside this array.
    Example:
    {
        .trainerId = TRAINER_WALLY_VR_2,
        .isFrontierTrainer = FALSE,
        .msgLastSwitchIn = sText_AarghAlmostHadIt,
        .msgLastLowHp = sText_BoxIsFull,
        .msgFirstDown = sText_123Poof,
        .msgLastHalfHp = sText_ShootSoClose,
        .msgFirstCriticalHit = sText_CriticalHit,
        .msgFirstSuperEffectiveHit = sText_SuperEffective,
        .msgFirstSTABMove = sText_ABoosted,
        .msgPlayerMonUnaffected = sText_ButNoEffect,
        .msgMegaEvolution = sText_PowderExplodes,
        .msgZMove = sText_Electromagnetism,
        .msgBeforeFirstTurn = sText_GravityIntensified,
        .msgDynamax = sText_TargetWokeUp,
    },
    },
    [DIFFICULTY_EASY] =
    {
    },
    [DIFFICULTY_HARD] =
    {
    */
    },
};

u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold)
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

bool32 ShouldRunTrainerSlideSwitchIn(enum DifficultyLevel difficulty, u32 battler)
{
    if (sTrainerSlides[difficulty]->msgLastSwitchIn == NULL)
        return FALSE;

    if (CanBattlerSwitch(battler))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32 firstId, u32 lastId, u32 battler)
{
    if (sTrainerSlides[difficulty]->msgLastLowHp == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideLowHpMsgDone)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (!BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideFirstDown(enum DifficultyLevel difficulty, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty]->msgFirstDown == NULL)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE) - 1)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel difficulty, u32 battler, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty]->msgLastHalfHp == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideHalfHpMsgDone)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE) - 1)
        return FALSE;

    if (!BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 2))
        return FALSE;

    if (!BattlerHPPercentage(battler, GREATER_THAN, 4))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideFirstCriticalHit(enum DifficultyLevel difficulty)
{
    if (sTrainerSlides[difficulty]->msgFirstCriticalHit == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideFirstCriticalHitMsgState != 1)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideFirstSuperEffectiveHit(enum DifficultyLevel difficulty, u32 battler)
{
    if (sTrainerSlides[difficulty]->msgFirstSuperEffectiveHit == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideFirstSuperEffectiveHitMsgState != 1)
        return FALSE;

    if (gBattleMons[battler].hp == 0)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideFirstSTABMove(enum DifficultyLevel difficulty, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty]->msgFirstSTABMove == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideFirstSTABMoveMsgState != 1)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayMonUnaffected(enum DifficultyLevel difficulty, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty]->msgPlayerMonUnaffected == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlidePlayerMonUnaffectedMsgState != 1)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel difficulty)
{
    if (sTrainerSlides[difficulty]->msgMegaEvolution == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideMegaEvolutionMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel difficulty)
{
    if (sTrainerSlides[difficulty]->msgZMove == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideZMoveMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel difficulty)
{
    if (sTrainerSlides[difficulty]->msgDynamax == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideDynamaxMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel difficulty)
{
    if (sTrainerSlides[difficulty]->msgBeforeFirstTurn == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideBeforeFirstTurnMsgDone)
        return FALSE;

    return TRUE;
}

u32 ShouldDoTrainerSlide(u32 battler, u32 which)
{
    u32 i, firstId, lastId, trainerId, retValue = 1;

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

    for (i = 0; i < ARRAY_COUNT(sTrainerSlides); i++)
    {
        if (trainerId == sTrainerSlides[difficulty]->trainerId
            && (((gBattleTypeFlags & BATTLE_TYPE_FRONTIER) && sTrainerSlides[difficulty]->isFrontierTrainer)
                || (!(gBattleTypeFlags & BATTLE_TYPE_FRONTIER) && !sTrainerSlides[difficulty]->isFrontierTrainer)))
        {
            gBattleScripting.battler = battler;
            switch (which)
            {
            case TRAINER_SLIDE_LAST_SWITCHIN:
                if (ShouldRunTrainerSlideSwitchIn(difficulty, battler))
                {
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgLastSwitchIn;
                    return retValue;
                }
                break;
            case TRAINER_SLIDE_LAST_LOW_HP:
                if (ShouldRunTrainerSlideLastLowHp(difficulty,firstId,lastId,battler))
                {
                    gBattleStruct->trainerSlideLowHpMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgLastLowHp;
                    return retValue;
                }
                break;
            case TRAINER_SLIDE_FIRST_DOWN:
                if (ShouldRunTrainerSlideFirstDown(difficulty, firstId, lastId))
                {
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgFirstDown;
                    return retValue;
                }
                break;
            case TRAINER_SLIDE_LAST_HALF_HP:
                if (ShouldRunTrainerSlideLastHalfHP(difficulty, battler, firstId, lastId))
                {
                    gBattleStruct->trainerSlideHalfHpMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgLastHalfHp;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_FIRST_CRITICAL_HIT:
                if (ShouldRunTrainerSlideFirstCriticalHit(difficulty))
                {
                    gBattleStruct->trainerSlideFirstCriticalHitMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgFirstCriticalHit;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_FIRST_SUPER_EFFECTIVE_HIT:
                if (ShouldRunTrainerSlideFirstSuperEffectiveHit(difficulty, battler))
                {
                    gBattleStruct->trainerSlideFirstSuperEffectiveHitMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgFirstSuperEffectiveHit;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_FIRST_STAB_MOVE:
                if (ShouldRunTrainerSlideFirstSTABMove(difficulty, firstId, lastId))
                {
                    gBattleStruct->trainerSlideFirstSTABMoveMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgFirstSTABMove;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_PLAYER_MON_UNAFFECTED:
                if (ShouldRunTrainerSlidePlayMonUnaffected(difficulty, firstId, lastId))
                {
                    gBattleStruct->trainerSlidePlayerMonUnaffectedMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgPlayerMonUnaffected;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_MEGA_EVOLUTION:
                if (ShouldRunTrainerSlideMegaEvolution(difficulty))
                {
                    gBattleStruct->trainerSlideMegaEvolutionMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgMegaEvolution;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_Z_MOVE:
                if (ShouldRunTrainerSlideZMove(difficulty))
                {
                    gBattleStruct->trainerSlideZMoveMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgZMove;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_BEFORE_FIRST_TURN:
                if (ShouldRunTrainerSlideBeforeFirstTurn(difficulty))
                {
                    gBattleStruct->trainerSlideBeforeFirstTurnMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgBeforeFirstTurn;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_DYNAMAX:
                if (ShouldRunTrainerSlideDynamax(difficulty))
                {
                    gBattleStruct->trainerSlideDynamaxMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty]->msgDynamax;
                    return TRUE;
                }
                break;
            }
            break;
        }
    }

    return 0;
}
