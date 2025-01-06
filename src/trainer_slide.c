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

static const struct TrainerSlide sFrontierTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_NONE] =
        {
            /*
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
            */
        }
    }
};

static const struct TrainerSlide sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_THALIA_4] =
        {
            .msgBeforeFirstTurn = COMPOUND_STRING("Before_First_Turn{PAUSE_UNTIL_PRESS}"),
            .msgFirstCriticalHit = COMPOUND_STRING("First_Critical_Hit{PAUSE_UNTIL_PRESS}"),
            .msgFirstSuperEffectiveHit = COMPOUND_STRING("First_Super_Effective_Hit{PAUSE_UNTIL_PRESS}"),
            //.msgFirstSTABMove = COMPOUND_STRING("First_Stab_Move{PAUSE_UNTIL_PRESS}"),
            .msgFirstDown = COMPOUND_STRING("First_Down{PAUSE_UNTIL_PRESS}"),
            //.msgPlayerMonUnaffected = COMPOUND_STRING("Player_Mon_Unaffected{PAUSE_UNTIL_PRESS}"),
            //.msgLastSwitchIn = COMPOUND_STRING("Last_Switchin{PAUSE_UNTIL_PRESS}"),
            //.msgLastHalfHp = COMPOUND_STRING("Last_Half_Hp{PAUSE_UNTIL_PRESS}"),
            //.msgLastLowHp = COMPOUND_STRING("Last_Low_Hp{PAUSE_UNTIL_PRESS}"),
            //.msgMegaEvolution = COMPOUND_STRING("Mega_Evolution{PAUSE_UNTIL_PRESS}"),
            //.msgZMove = COMPOUND_STRING("Z_Move{PAUSE_UNTIL_PRESS}"),
            //.msgDynamax = COMPOUND_STRING("Dynamax{PAUSE_UNTIL_PRESS}"),
        },
        /* Put any trainer slide-in messages inside this array.
Example:
{
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

bool32 ShouldRunTrainerSlideLastSwitchIn(const struct TrainerSlide (*sAllTrainerSlides)[TRAINERS_COUNT], enum DifficultyLevel difficulty, u32 trainerId, u32 battler)
{
    if (sAllTrainerSlides[difficulty][trainerId].msgLastSwitchIn == NULL)
        return FALSE;

    if (CanBattlerSwitch(battler))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId, u32 battler)
{
    if (sTrainerSlides[difficulty][trainerId].msgLastLowHp == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideLowHpMsgDone)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (!BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideFirstDown(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId].msgFirstDown == NULL)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE) - 1)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel difficulty, u32 trainerId, u32 battler, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId].msgLastHalfHp == NULL)
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

bool32 ShouldRunTrainerSlideFirstCriticalHit(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId].msgFirstCriticalHit == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideFirstCriticalHitMsgState != 1)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideFirstSuperEffectiveHit(enum DifficultyLevel difficulty, u32 trainerId, u32 battler)
{
    if (sTrainerSlides[difficulty][trainerId].msgFirstSuperEffectiveHit == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideFirstSuperEffectiveHitMsgState != 1)
        return FALSE;

    if (gBattleMons[battler].hp == 0)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideFirstSTABMove(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId].msgFirstSTABMove == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideFirstSTABMoveMsgState != 1)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlidePlayMonUnaffected(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId)
{
    if (sTrainerSlides[difficulty][trainerId].msgPlayerMonUnaffected == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlidePlayerMonUnaffectedMsgState != 1)
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId].msgMegaEvolution == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideMegaEvolutionMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId].msgZMove == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideZMoveMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId].msgDynamax == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideDynamaxMsgDone)
        return FALSE;

    return TRUE;
}

bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel difficulty, u32 trainerId)
{
    if (sTrainerSlides[difficulty][trainerId].msgBeforeFirstTurn == NULL)
        return FALSE;

    if (gBattleStruct->trainerSlideBeforeFirstTurnMsgDone)
        return FALSE;

    DebugPrintf("ShouldRunTrainerSlideBeforeFirstTurn success");

    return TRUE;
}

u32 ShouldDoTrainerSlide(u32 battler, u32 which)
{
    u32 firstId, lastId, trainerId, retValue = 1;
    const struct TrainerSlide (*sAllTrainerSlides)[TRAINERS_COUNT] = NULL;

    DebugPrintf("ShouldDoTrainerSlide");

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
        sAllTrainerSlides = sFrontierTrainerSlides;
    else
        sAllTrainerSlides = sTrainerSlides;

    gBattleScripting.battler = battler;
    switch (which)
    {
        case TRAINER_SLIDE_LAST_SWITCHIN:
            if (ShouldRunTrainerSlideLastSwitchIn(sAllTrainerSlides,difficulty,trainerId, battler))
            {
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgLastSwitchIn;
                return retValue;
            }
            break;
        case TRAINER_SLIDE_LAST_LOW_HP:
            if (ShouldRunTrainerSlideLastLowHp(difficulty,trainerId,firstId,lastId,battler))
            {
                gBattleStruct->trainerSlideLowHpMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgLastLowHp;
                return retValue;
            }
            break;
        case TRAINER_SLIDE_FIRST_DOWN:
            if (ShouldRunTrainerSlideFirstDown(difficulty, trainerId,firstId, lastId))
            {
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgFirstDown;
                return retValue;
            }
            break;
        case TRAINER_SLIDE_LAST_HALF_HP:
            if (ShouldRunTrainerSlideLastHalfHP(difficulty, trainerId,battler, firstId, lastId))
            {
                gBattleStruct->trainerSlideHalfHpMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgLastHalfHp;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_FIRST_CRITICAL_HIT:
            if (ShouldRunTrainerSlideFirstCriticalHit(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideFirstCriticalHitMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgFirstCriticalHit;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_FIRST_SUPER_EFFECTIVE_HIT:
            if (ShouldRunTrainerSlideFirstSuperEffectiveHit(difficulty, trainerId, battler))
            {
                gBattleStruct->trainerSlideFirstSuperEffectiveHitMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgFirstSuperEffectiveHit;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_FIRST_STAB_MOVE:
            if (ShouldRunTrainerSlideFirstSTABMove(difficulty, trainerId, firstId, lastId))
            {
                gBattleStruct->trainerSlideFirstSTABMoveMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgFirstSTABMove;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_PLAYER_MON_UNAFFECTED:
            if (ShouldRunTrainerSlidePlayMonUnaffected(difficulty, trainerId, firstId, lastId))
            {
                gBattleStruct->trainerSlidePlayerMonUnaffectedMsgState = 2;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgPlayerMonUnaffected;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_MEGA_EVOLUTION:
            if (ShouldRunTrainerSlideMegaEvolution(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideMegaEvolutionMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgMegaEvolution;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_Z_MOVE:
            if (ShouldRunTrainerSlideZMove(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideZMoveMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgZMove;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
            if (ShouldRunTrainerSlideBeforeFirstTurn(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideBeforeFirstTurnMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgBeforeFirstTurn;
                return TRUE;
            }
            break;
        case TRAINER_SLIDE_DYNAMAX:
            if (ShouldRunTrainerSlideDynamax(difficulty, trainerId))
            {
                gBattleStruct->trainerSlideDynamaxMsgDone = TRUE;
                gBattleStruct->trainerSlideMsg = sTrainerSlides[difficulty][trainerId].msgDynamax;
                return TRUE;
            }
            break;
    }

    return 0;
}
