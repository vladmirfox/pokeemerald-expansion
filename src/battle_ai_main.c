#include "global.h"
#include "main.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_ai_util.h"
#include "battle_ai_main.h"
#include "battle_controllers.h"
#include "battle_factory.h"
#include "battle_setup.h"
#include "battle_z_move.h"
#include "battle_terastal.h"
#include "data.h"
#include "debug.h"
#include "event_data.h"
#include "item.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "util.h"
#include "script.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "constants/trainers.h"


#define AI_ACTION_DONE          (1 << 0)
#define AI_ACTION_FLEE          (1 << 1)
#define AI_ACTION_WATCH         (1 << 2)
#define AI_ACTION_DO_NOT_ATTACK (1 << 3)

static u32 ChooseMoveOrAction_Singles(u32 battlerAi);
static u32 ChooseMoveOrAction_Doubles(u32 battlerAi);
static inline void BattleAI_DoAIProcessing(struct AI_ThinkingStruct *aiThink, u32 battlerAi, u32 battlerDef);
static s16 BattleAI_CalcScore(u8 battlerAtk, u8 battlerDef, u16 move, u32 aiFlags, s16 score);
static bool32 IsPinchBerryItemEffect(u32 holdEffect);

#include "battle_ai_move_effects.h"

// ewram
EWRAM_DATA const u8 *gAIScriptPtr = NULL;   // Still used in contests
EWRAM_DATA u8 sBattler_AI = 0;
EWRAM_DATA AiScoreFunc sDynamicAiFunc = NULL;

// const rom data
static s32 AI_CheckBadMove(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_TryToFaint(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_CheckViability(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_SetupFirstTurn(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_Risky(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_PreferStrongestMove(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_PreferBatonPass(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_HPAware(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_Roaming(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_Safari(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_FirstBattle(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_DoubleBattle(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_PowerfulStatus(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_DynamicFunc(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);


// Functions
void BattleAI_SetupItems(void)
{
    s32 i;
    u8 *data = (u8 *)BATTLE_HISTORY;
    const u16 *items = GetTrainerItemsFromId(gTrainerBattleOpponent_A);

    for (i = 0; i < sizeof(struct BattleHistory); i++)
        data[i] = 0;

    // Items are allowed to use in ONLY trainer battles.
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_SAFARI | BATTLE_TYPE_BATTLE_TOWER
                               | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_SECRET_BASE | BATTLE_TYPE_FRONTIER
                               | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_RECORDED_LINK)
            )
       )
    {
        for (i = 0; i < MAX_TRAINER_ITEMS; i++)
        {
            if (items[i] != ITEM_NONE)
            {
                BATTLE_HISTORY->trainerItems[BATTLE_HISTORY->itemsNo] = items[i];
                BATTLE_HISTORY->itemsNo++;
            }
        }
    }
}

static u32 GetWildAiFlags(void)
{
    u32 avgLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u32 flags = 0;

    if (IsDoubleBattle())
        avgLevel = (GetMonData(&gEnemyParty[0], MON_DATA_LEVEL) + GetMonData(&gEnemyParty[1], MON_DATA_LEVEL)) / 2;

    flags |= AI_FLAG_CHECK_BAD_MOVE;
    if (avgLevel >= 20)
        flags |= AI_FLAG_CHECK_VIABILITY;
    if (avgLevel >= 60)
        flags |= AI_FLAG_PREFER_STRONGEST_MOVE;
    if (avgLevel >= 80)
        flags |= AI_FLAG_HP_AWARE;

    if (B_VAR_WILD_AI_FLAGS != 0 && VarGet(B_VAR_WILD_AI_FLAGS) != 0)
        flags |= VarGet(B_VAR_WILD_AI_FLAGS);

    return flags;
}

static u32 GetAiFlags(u16 trainerId)
{
    u32 flags = 0;

    if (!(gBattleTypeFlags & BATTLE_TYPE_HAS_AI) && !IsWildMonSmart())
        return 0;
    if (trainerId == 0xFFFF)
    {
        flags = GetWildAiFlags();
    }
    else
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            flags = GetAiScriptsInRecordedBattle();
        else if (gBattleTypeFlags & BATTLE_TYPE_SAFARI)
            flags = AI_FLAG_SAFARI;
        else if (gBattleTypeFlags & BATTLE_TYPE_ROAMER)
            flags = AI_FLAG_ROAMING;
        else if (gBattleTypeFlags & BATTLE_TYPE_FIRST_BATTLE)
            flags = AI_FLAG_FIRST_BATTLE;
        else if (gBattleTypeFlags & BATTLE_TYPE_FACTORY)
            flags = GetAiScriptsInBattleFactory();
        else if (gBattleTypeFlags & (BATTLE_TYPE_FRONTIER | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_TRAINER_HILL | BATTLE_TYPE_SECRET_BASE))
            flags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT;
        else
            flags = GetTrainerAIFlagsFromId(trainerId);
    }

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        flags |= AI_FLAG_DOUBLE_BATTLE;
    }

    // Automatically includes AI_FLAG_SMART_MON_CHOICES to improve smart switching
    if (flags & AI_FLAG_SMART_SWITCHING)
        flags |= AI_FLAG_SMART_MON_CHOICES;

    if (sDynamicAiFunc != NULL)
        flags |= AI_FLAG_DYNAMIC_FUNC;

    return flags;
}

void BattleAI_SetupFlags(void)
{
    if (IsAiVsAiBattle())
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_LEFT] = GetAiFlags(gPartnerTrainerId);
    else
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_LEFT] = 0; // player has no AI

#if DEBUG_OVERWORLD_MENU == TRUE
    if (gIsDebugBattle)
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] = gDebugAIFlags;
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = gDebugAIFlags;
        return;
    }
#endif

    if (IsWildMonSmart() && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_TRAINER)))
    {
        // smart wild AI
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] = GetAiFlags(0xFFFF);
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = GetAiFlags(0xFFFF);
    }
    else
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] = GetAiFlags(gTrainerBattleOpponent_A);
        if (gTrainerBattleOpponent_B != 0)
            AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = GetAiFlags(gTrainerBattleOpponent_B);
        else
            AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT];
    }

    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_RIGHT] = GetAiFlags(gPartnerTrainerId - TRAINER_PARTNER(PARTNER_NONE));
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsAiVsAiBattle())
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_RIGHT] = AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_LEFT];
    }
    else
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_RIGHT] = 0; // player
    }
}

// sBattler_AI set in ComputeBattleAiScores
void BattleAI_SetupAIData(u8 defaultScoreMoves, u32 battler)
{
    s32 i;
    u8 moveLimitations;
    u32 flags[MAX_BATTLERS_COUNT];

    // Clear AI data but preserve the flags.
    memcpy(&flags[0], &AI_THINKING_STRUCT->aiFlags[0], sizeof(u32) * MAX_BATTLERS_COUNT);
    memset(AI_THINKING_STRUCT, 0, sizeof(struct AI_ThinkingStruct));
    memcpy(&AI_THINKING_STRUCT->aiFlags[0], &flags[0], sizeof(u32) * MAX_BATTLERS_COUNT);

    // Conditional score reset, unlike Ruby.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (defaultScoreMoves & 1)
            SET_SCORE(battler, i, AI_SCORE_DEFAULT);
        else
            SET_SCORE(battler, i, 0);

        defaultScoreMoves >>= 1;
    }

    moveLimitations = AI_DATA->moveLimitations[battler];

    // Ignore moves that aren't possible to use.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gBitTable[i] & moveLimitations)
            SET_SCORE(battler, i, 0);
    }

    //sBattler_AI = battler;
    gBattlerTarget = SetRandomTarget(sBattler_AI);
    gBattleStruct->aiChosenTarget[sBattler_AI] = gBattlerTarget;
}

u32 BattleAI_ChooseMoveOrAction(void)
{
    u32 ret;

    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
        ret = ChooseMoveOrAction_Singles(sBattler_AI);
    else
        ret = ChooseMoveOrAction_Doubles(sBattler_AI);

    // Clear protect structures, some flags may be set during AI calcs
    // e.g. pranksterElevated from GetMovePriority
    memset(&gProtectStructs, 0, MAX_BATTLERS_COUNT * sizeof(struct ProtectStruct));
    #if TESTING
    TestRunner_Battle_CheckAiMoveScores(sBattler_AI);
    #endif // TESTING
    return ret;
}

// damages/other info computed in GetAIDataAndCalcDmg
u32 ComputeBattleAiScores(u32 battler)
{
    sBattler_AI = battler;
    BattleAI_SetupAIData(0xF, sBattler_AI);
    return BattleAI_ChooseMoveOrAction();
}

static void CopyBattlerDataToAIParty(u32 bPosition, u32 side)
{
    u32 battler = GetBattlerAtPosition(bPosition);
    struct AiPartyMon *aiMon = &AI_PARTY->mons[side][gBattlerPartyIndexes[battler]];
    struct BattlePokemon *bMon = &gBattleMons[battler];

    aiMon->species = bMon->species;
    aiMon->level = bMon->level;
    aiMon->status = bMon->status1;
    aiMon->gender = GetBattlerGender(battler);
    aiMon->isFainted = FALSE;
    aiMon->wasSentInBattle = TRUE;
    aiMon->switchInCount++;
}

void Ai_InitPartyStruct(void)
{
    u32 i;
    bool32 isOmniscient = (AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] & AI_FLAG_OMNISCIENT) || (AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] & AI_FLAG_OMNISCIENT);
    struct Pokemon *mon;

    AI_PARTY->count[B_SIDE_PLAYER] = gPlayerPartyCount;
    AI_PARTY->count[B_SIDE_OPPONENT] = gEnemyPartyCount;

    // Save first 2 or 4(in doubles) mons
    CopyBattlerDataToAIParty(B_POSITION_PLAYER_LEFT, B_SIDE_PLAYER);
    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
        CopyBattlerDataToAIParty(B_POSITION_PLAYER_RIGHT, B_SIDE_PLAYER);

    // If player's partner is AI, save opponent mons
    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
    {
        CopyBattlerDataToAIParty(B_POSITION_OPPONENT_LEFT, B_SIDE_OPPONENT);
        CopyBattlerDataToAIParty(B_POSITION_OPPONENT_RIGHT, B_SIDE_OPPONENT);
    }

    // Find fainted mons
    for (i = 0; i < AI_PARTY->count[B_SIDE_PLAYER]; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_HP) == 0)
            AI_PARTY->mons[B_SIDE_PLAYER][i].isFainted = TRUE;

        if (isOmniscient)
        {
            u32 j;
            mon = &gPlayerParty[i];
            AI_PARTY->mons[B_SIDE_PLAYER][i].item = GetMonData(mon, MON_DATA_HELD_ITEM);
            AI_PARTY->mons[B_SIDE_PLAYER][i].heldEffect = ItemId_GetHoldEffect(AI_PARTY->mons[B_SIDE_PLAYER][i].item);
            AI_PARTY->mons[B_SIDE_PLAYER][i].ability = GetMonAbility(mon);
            for (j = 0; j < MAX_MON_MOVES; j++)
                AI_PARTY->mons[B_SIDE_PLAYER][i].moves[j] = GetMonData(mon, MON_DATA_MOVE1 + j);
        }
    }
}

void Ai_UpdateSwitchInData(u32 battler)
{
    u32 i;
    u32 side = GetBattlerSide(battler);
    struct AiPartyMon *aiMon = &AI_PARTY->mons[side][gBattlerPartyIndexes[battler]];

    // See if the switched-in mon has been already in battle
    if (aiMon->wasSentInBattle)
    {
        if (aiMon->ability)
            BATTLE_HISTORY->abilities[battler] = aiMon->ability;
        if (aiMon->heldEffect)
            BATTLE_HISTORY->itemEffects[battler] = aiMon->heldEffect;
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (aiMon->moves[i])
                BATTLE_HISTORY->usedMoves[battler][i] = aiMon->moves[i];
        }
        aiMon->switchInCount++;
        aiMon->status = gBattleMons[battler].status1; // Copy status, because it could've been changed in battle.
    }
    else // If not, copy the newly switched-in mon in battle and clear battle history.
    {
        ClearBattlerMoveHistory(battler);
        ClearBattlerAbilityHistory(battler);
        ClearBattlerItemEffectHistory(battler);
        CopyBattlerDataToAIParty(GetBattlerPosition(battler), side);
    }
}

void Ai_UpdateFaintData(u32 battler)
{
    struct AiPartyMon *aiMon = &AI_PARTY->mons[GetBattlerSide(battler)][gBattlerPartyIndexes[battler]];
    ClearBattlerMoveHistory(battler);
    ClearBattlerAbilityHistory(battler);
    ClearBattlerItemEffectHistory(battler);
    aiMon->isFainted = TRUE;
}

static void SetBattlerAiData(u32 battler, struct AiLogicData *aiData)
{
    u32 ability, holdEffect;

    ability = aiData->abilities[battler] = AI_DecideKnownAbilityForTurn(battler);
    aiData->items[battler] = gBattleMons[battler].item;
    holdEffect = aiData->holdEffects[battler] = AI_DecideHoldEffectForTurn(battler);
    aiData->holdEffectParams[battler] = GetBattlerHoldEffectParam(battler);
    aiData->predictedMoves[battler] = gLastMoves[battler];
    aiData->hpPercents[battler] = GetHealthPercentage(battler);
    aiData->moveLimitations[battler] = CheckMoveLimitations(battler, 0, MOVE_LIMITATIONS_ALL);
    aiData->speedStats[battler] = GetBattlerTotalSpeedStatArgs(battler, ability, holdEffect);
}

static u32 Ai_SetMoveAccuracy(struct AiLogicData *aiData, u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 accuracy;
    u32 abilityAtk = aiData->abilities[battlerAtk];
    u32 abilityDef = aiData->abilities[battlerAtk];
    if (abilityAtk == ABILITY_NO_GUARD || abilityDef == ABILITY_NO_GUARD || gMovesInfo[move].accuracy == 0) // Moves with accuracy 0 or no guard ability always hit.
        accuracy = 100;
    else
        accuracy = GetTotalAccuracy(battlerAtk, battlerDef, move, abilityAtk, abilityDef, aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef]);

    return accuracy;
}

static void SetBattlerAiMovesData(struct AiLogicData *aiData, u32 battlerAtk, u32 battlersCount)
{
    u32 battlerDef, i, weather;
    u16 *moves;

    SaveBattlerData(battlerAtk);
    moves = GetMovesArray(battlerAtk);
    weather = AI_GetWeather(aiData);

    SetBattlerData(battlerAtk);

    // Simulate dmg for both ai controlled mons and for player controlled mons.
    for (battlerDef = 0; battlerDef < battlersCount; battlerDef++)
    {
        if (battlerAtk == battlerDef || !IsBattlerAlive(battlerDef))
            continue;

        SaveBattlerData(battlerDef);
        SetBattlerData(battlerDef);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            struct SimulatedDamage dmg = {0};
            u8 effectiveness = AI_EFFECTIVENESS_x0;
            u32 move = moves[i];

            if (move != 0
             && move != 0xFFFF
             //&& gMovesInfo[move].power != 0  /* we want to get effectiveness and accuracy of status moves */
             && !(aiData->moveLimitations[battlerAtk] & gBitTable[i]))
            {
                if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_RISKY)
                    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, TRUE, weather, DMG_ROLL_HIGHEST);
                else if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CONSERVATIVE)
                    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, TRUE, weather, DMG_ROLL_LOWEST);
                else
                    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, TRUE, weather, DMG_ROLL_DEFAULT);
                aiData->moveAccuracy[battlerAtk][battlerDef][i] = Ai_SetMoveAccuracy(aiData, battlerAtk, battlerDef, move);
            }
            aiData->simulatedDmg[battlerAtk][battlerDef][i] = dmg;
            aiData->effectiveness[battlerAtk][battlerDef][i] = effectiveness;
        }
        RestoreBattlerData(battlerDef);
    }
    RestoreBattlerData(battlerAtk);
}

void SetAiLogicDataForTurn(struct AiLogicData *aiData)
{
    u32 battlerAtk, battlersCount;

    memset(aiData, 0, sizeof(struct AiLogicData));
    if (!(gBattleTypeFlags & BATTLE_TYPE_HAS_AI) && !IsWildMonSmart())
        return;

    // Set delay timer to count how long it takes for AI to choose action/move
    gBattleStruct->aiDelayTimer = gMain.vblankCounter1;

    aiData->weatherHasEffect = WEATHER_HAS_EFFECT;
    // get/assume all battler data and simulate AI damage
    battlersCount = gBattlersCount;
    for (battlerAtk = 0; battlerAtk < battlersCount; battlerAtk++)
    {
        if (!IsBattlerAlive(battlerAtk))
            continue;

        SetBattlerAiData(battlerAtk, aiData);
        SetBattlerAiMovesData(aiData, battlerAtk, battlersCount);
    }
}

static bool32 AI_SwitchMonIfSuitable(u32 battler, bool32 doubleBattle)
{
    u32 monToSwitchId = AI_DATA->mostSuitableMonId[battler];
    if (monToSwitchId != PARTY_SIZE && IsValidForBattle(&GetBattlerParty(battler)[monToSwitchId]))
    {
        gBattleMoveDamage = monToSwitchId;
        // Edge case: See if partner already chose to switch into the same mon
        if (doubleBattle)
        {
            u32 partner = BATTLE_PARTNER(battler);
            if (AI_DATA->shouldSwitchMon & gBitTable[partner] && AI_DATA->monToSwitchId[partner] == monToSwitchId)
            {
                return FALSE;
            }
        }
        AI_DATA->shouldSwitchMon |= gBitTable[battler];
        AI_DATA->monToSwitchId[battler] = monToSwitchId;
        return TRUE;
    }
    return FALSE;
}

static bool32 AI_ShouldSwitchIfBadMoves(u32 battler, bool32 doubleBattle)
{
    u32 i, j;
    // If can switch.
    if (CountUsablePartyMons(battler) > 0
        && !IsBattlerTrapped(battler, TRUE)
        && !(gBattleTypeFlags & (BATTLE_TYPE_ARENA | BATTLE_TYPE_PALACE))
        && AI_THINKING_STRUCT->aiFlags[battler] & (AI_FLAG_CHECK_VIABILITY | AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_PREFER_BATON_PASS)
        && !(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING))
    {
        // Consider switching if all moves are worthless to use.
        if (GetTotalBaseStat(gBattleMons[battler].species) >= 310 // Mon is not weak.
            && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2) // Mon has more than 50% of its HP
        {
            s32 cap = AI_THINKING_STRUCT->aiFlags[battler] & (AI_FLAG_CHECK_VIABILITY) ? 95 : 93;
            if (doubleBattle)
            {
                for (i = 0; i < MAX_BATTLERS_COUNT; i++)
                {
                    if (i != battler && IsBattlerAlive(i))
                    {
                        for (j = 0; j < MAX_MON_MOVES; j++)
                        {
                            if (gBattleStruct->aiFinalScore[battler][i][j] > cap)
                                break;
                        }
                        if (j != MAX_MON_MOVES)
                            break;
                    }
                }
                if (i == MAX_BATTLERS_COUNT && AI_SwitchMonIfSuitable(battler, doubleBattle))
                    return TRUE;
            }
            else
            {
                for (i = 0; i < MAX_MON_MOVES; i++)
                {
                    if (AI_THINKING_STRUCT->score[i] > cap)
                        break;
                }

                if (i == MAX_MON_MOVES && AI_SwitchMonIfSuitable(battler, doubleBattle))
                    return TRUE;
            }

        }

        // Consider switching if your mon with truant is bodied by Protect spam.
        // Or is using a double turn semi invulnerable move(such as Fly) and is faster.
        if (AI_DATA->abilities[battler] == ABILITY_TRUANT
            && IsTruantMonVulnerable(battler, gBattlerTarget)
            && gDisableStructs[battler].truantCounter
            && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2
            && AI_SwitchMonIfSuitable(battler, doubleBattle))
        {
            return TRUE;
        }
    }
    return FALSE;
}

static u32 ChooseMoveOrAction_Singles(u32 battlerAi)
{
    u8 currentMoveArray[MAX_MON_MOVES];
    u8 consideredMoveArray[MAX_MON_MOVES];
    u32 numOfBestMoves;
    s32 i;

    AI_DATA->partnerMove = 0;   // no ally
    BattleAI_DoAIProcessing(AI_THINKING_STRUCT, battlerAi, gBattlerTarget);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        gBattleStruct->aiFinalScore[battlerAi][gBattlerTarget][i] = AI_THINKING_STRUCT->score[i];
    }

    // Check special AI actions.
    if (AI_THINKING_STRUCT->aiAction & AI_ACTION_FLEE)
        return AI_CHOICE_FLEE;
    if (AI_THINKING_STRUCT->aiAction & AI_ACTION_WATCH)
        return AI_CHOICE_WATCH;

    // Switch mon if there are no good moves to use.
    if (AI_ShouldSwitchIfBadMoves(battlerAi, FALSE))
        return AI_CHOICE_SWITCH;

    numOfBestMoves = 1;
    currentMoveArray[0] = AI_THINKING_STRUCT->score[0];
    consideredMoveArray[0] = 0;

    for (i = 1; i < MAX_MON_MOVES; i++)
    {
        if (gBattleMons[battlerAi].moves[i] != MOVE_NONE)
        {
            // In ruby, the order of these if statements is reversed.
            if (currentMoveArray[0] == AI_THINKING_STRUCT->score[i])
            {
                currentMoveArray[numOfBestMoves] = AI_THINKING_STRUCT->score[i];
                consideredMoveArray[numOfBestMoves++] = i;
            }
            if (currentMoveArray[0] < AI_THINKING_STRUCT->score[i])
            {
                numOfBestMoves = 1;
                currentMoveArray[0] = AI_THINKING_STRUCT->score[i];
                consideredMoveArray[0] = i;
            }
        }
    }
    return consideredMoveArray[Random() % numOfBestMoves];
}

static u32 ChooseMoveOrAction_Doubles(u32 battlerAi)
{
    s32 i, j;
    s32 bestMovePointsForTarget[MAX_BATTLERS_COUNT];
    u8 mostViableTargetsArray[MAX_BATTLERS_COUNT];
    u8 actionOrMoveIndex[MAX_BATTLERS_COUNT];
    s32 mostViableMovesScores[MAX_MON_MOVES];
    u8 mostViableMovesIndices[MAX_MON_MOVES];
    u32 mostViableTargetsNo;
    u32 mostViableMovesNo;
    s32 mostMovePoints;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        if (i == battlerAi || gBattleMons[i].hp == 0)
        {
            actionOrMoveIndex[i] = 0xFF;
            bestMovePointsForTarget[i] = -1;
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_PALACE)
                BattleAI_SetupAIData(gBattleStruct->palaceFlags >> 4, battlerAi);
            else
                BattleAI_SetupAIData(0xF, battlerAi);

            gBattlerTarget = i;

            AI_DATA->partnerMove = GetAllyChosenMove(battlerAi);
            AI_THINKING_STRUCT->aiLogicId = 0;
            AI_THINKING_STRUCT->movesetIndex = 0;
            BattleAI_DoAIProcessing(AI_THINKING_STRUCT, battlerAi, gBattlerTarget);

            if (AI_THINKING_STRUCT->aiAction & AI_ACTION_FLEE)
            {
                actionOrMoveIndex[i] = AI_CHOICE_FLEE;
            }
            else if (AI_THINKING_STRUCT->aiAction & AI_ACTION_WATCH)
            {
                actionOrMoveIndex[i] = AI_CHOICE_WATCH;
            }
            else
            {
                mostViableMovesScores[0] = AI_THINKING_STRUCT->score[0];
                mostViableMovesIndices[0] = 0;
                mostViableMovesNo = 1;
                for (j = 1; j < MAX_MON_MOVES; j++)
                {
                    if (gBattleMons[battlerAi].moves[j] != 0)
                    {
                        if (!CanTargetBattler(battlerAi, i, gBattleMons[battlerAi].moves[j]))
                            continue;

                        if (mostViableMovesScores[0] == AI_THINKING_STRUCT->score[j])
                        {
                            mostViableMovesScores[mostViableMovesNo] = AI_THINKING_STRUCT->score[j];
                            mostViableMovesIndices[mostViableMovesNo] = j;
                            mostViableMovesNo++;
                        }
                        if (mostViableMovesScores[0] < AI_THINKING_STRUCT->score[j])
                        {
                            mostViableMovesScores[0] = AI_THINKING_STRUCT->score[j];
                            mostViableMovesIndices[0] = j;
                            mostViableMovesNo = 1;
                        }
                    }
                }
                actionOrMoveIndex[i] = mostViableMovesIndices[Random() % mostViableMovesNo];
                bestMovePointsForTarget[i] = mostViableMovesScores[0];

                // Don't use a move against ally if it has less than 100 points.
                if (i == BATTLE_PARTNER(battlerAi) && bestMovePointsForTarget[i] < AI_SCORE_DEFAULT)
                {
                    bestMovePointsForTarget[i] = -1;
                }
            }

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                gBattleStruct->aiFinalScore[battlerAi][gBattlerTarget][j] = AI_THINKING_STRUCT->score[j];
            }
        }
    }

    // Switch mon if all of the moves are bad to use against any of the target.
    if (AI_ShouldSwitchIfBadMoves(battlerAi, TRUE))
        return AI_CHOICE_SWITCH;

    mostMovePoints = bestMovePointsForTarget[0];
    mostViableTargetsArray[0] = 0;
    mostViableTargetsNo = 1;

    for (i = 1; i < MAX_BATTLERS_COUNT; i++)
    {
        if (mostMovePoints == bestMovePointsForTarget[i])
        {
            mostViableTargetsArray[mostViableTargetsNo] = i;
            mostViableTargetsNo++;
        }
        if (mostMovePoints < bestMovePointsForTarget[i])
        {
            mostMovePoints = bestMovePointsForTarget[i];
            mostViableTargetsArray[0] = i;
            mostViableTargetsNo = 1;
        }
    }

    gBattlerTarget = mostViableTargetsArray[Random() % mostViableTargetsNo];
    gBattleStruct->aiChosenTarget[battlerAi] = gBattlerTarget;
    return actionOrMoveIndex[gBattlerTarget];
}

static inline bool32 ShouldConsiderMoveForBattler(u32 battlerAi, u32 battlerDef, u32 move)
{
    if (battlerAi == BATTLE_PARTNER(battlerDef))
    {
        if (gMovesInfo[move].target == MOVE_TARGET_BOTH || gMovesInfo[move].target == MOVE_TARGET_OPPONENTS_FIELD)
            return FALSE;
    }
    return TRUE;
}

static inline void BattleAI_DoAIProcessing(struct AI_ThinkingStruct *aiThink, u32 battlerAi, u32 battlerDef)
{
    do
    {
        if (gBattleMons[battlerAi].pp[aiThink->movesetIndex] == 0)
            aiThink->moveConsidered = MOVE_NONE;
        else
            aiThink->moveConsidered = gBattleMons[battlerAi].moves[aiThink->movesetIndex];

        // There is no point in calculating scores for all 3 battlers(2 opponents + 1 ally) with certain moves.
        if (aiThink->moveConsidered != MOVE_NONE
         && aiThink->score[aiThink->movesetIndex] > 0
         && ShouldConsiderMoveForBattler(battlerAi, battlerDef, aiThink->moveConsidered))
        {
            aiThink->score[aiThink->movesetIndex] = BattleAI_CalcScore(battlerAi,
                                                                       battlerDef,
                                                                       aiThink->moveConsidered,
                                                                       aiThink->aiFlags[battlerDef],
                                                                       aiThink->score[aiThink->movesetIndex]);

        }
        else
        {
            aiThink->score[aiThink->movesetIndex] = 0;
        }
        aiThink->movesetIndex++;
    } while (aiThink->movesetIndex < MAX_MON_MOVES && !(aiThink->aiAction & AI_ACTION_DO_NOT_ATTACK));

    aiThink->movesetIndex = 0;
}

// AI Score Functions
// AI_FLAG_CHECK_BAD_MOVE - decreases move scores
static s32 AI_CheckBadMove(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    // move data
    s8 atkPriority = GetMovePriority(battlerAtk, move);
    u32 moveEffect = gMovesInfo[move].effect;
    s32 moveType;
    u32 moveTarget = AI_GetBattlerMoveTargetType(battlerAtk, move);
    struct AiLogicData *aiData = AI_DATA;
    u32 effectiveness = aiData->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex];
    bool32 isDoubleBattle = IsValidDoubleBattle(battlerAtk);

    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
        return score;

    SetTypeBeforeUsingMove(move, battlerAtk);
    GET_MOVE_TYPE(move, moveType);

    if (gMovesInfo[move].powderMove && !IsAffectedByPowder(battlerDef, aiData->abilities[battlerDef], aiData->holdEffects[battlerDef]))
        RETURN_SCORE_MINUS(10);

    if (IsSemiInvulnerable(battlerDef, move) && moveEffect != EFFECT_SEMI_INVULNERABLE && AI_IsFaster(battlerAtk, battlerDef, move))
        RETURN_SCORE_MINUS(10);

    if (IsTwoTurnNotSemiInvulnerableMove(battlerAtk, move) && CanTargetFaintAi(battlerDef, battlerAtk))
        RETURN_SCORE_MINUS(10);

    // check if negates type
    switch (effectiveness)
    {
    case AI_EFFECTIVENESS_x0:
        RETURN_SCORE_MINUS(20);
        break;
    case AI_EFFECTIVENESS_x0_125:
    case AI_EFFECTIVENESS_x0_25:
        switch (moveEffect)
        {
        case EFFECT_FIXED_DAMAGE_ARG:
        case EFFECT_LEVEL_DAMAGE:
        case EFFECT_PSYWAVE:
        case EFFECT_OHKO:
        case EFFECT_BIDE:
        case EFFECT_SUPER_FANG:
        case EFFECT_ENDEAVOR:
        case EFFECT_COUNTER:
        case EFFECT_MIRROR_COAT:
        case EFFECT_METAL_BURST:
            break;
        default:
            RETURN_SCORE_MINUS(10);
        }
        break;
    }

    // check non-user target
    if (!(moveTarget & MOVE_TARGET_USER))
    {
        // target ability checks
        if (!DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
        {
            switch (aiData->abilities[battlerDef])
            {
            case ABILITY_JUSTIFIED:
                if (moveType == TYPE_DARK && !IS_MOVE_STATUS(move))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_RATTLED:
                if (!IS_MOVE_STATUS(move)
                  && (moveType == TYPE_DARK || moveType == TYPE_GHOST || moveType == TYPE_BUG))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_DAZZLING:
            case ABILITY_QUEENLY_MAJESTY:
            case ABILITY_ARMOR_TAIL:
                if (atkPriority > 0)
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_AROMA_VEIL:
                if (IsAromaVeilProtectedMove(move))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_SWEET_VEIL:
                if (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN)
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_FLOWER_VEIL:
                if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS) && (IsNonVolatileStatusMoveEffect(moveEffect) || IsStatLoweringEffect(moveEffect)))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_MAGIC_BOUNCE:
                if (gMovesInfo[move].magicCoatAffected)
                    RETURN_SCORE_MINUS(20);
                break;
            case ABILITY_CONTRARY:
                if (IsStatLoweringEffect(moveEffect))
                    RETURN_SCORE_MINUS(20);
                break;
            case ABILITY_CLEAR_BODY:
            case ABILITY_FULL_METAL_BODY:
            case ABILITY_WHITE_SMOKE:
                if (IsStatLoweringEffect(moveEffect))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_HYPER_CUTTER:
                if ((moveEffect == EFFECT_ATTACK_DOWN ||  moveEffect == EFFECT_ATTACK_DOWN_2)
                  && move != MOVE_PLAY_NICE && move != MOVE_NOBLE_ROAR && move != MOVE_TEARFUL_LOOK && move != MOVE_VENOM_DRENCH)
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_ILLUMINATE:
                if (B_ILLUMINATE_EFFECT < GEN_9)
                    break;
                // fallthrough
            case ABILITY_KEEN_EYE:
            case ABILITY_MINDS_EYE:
                if (moveEffect == EFFECT_ACCURACY_DOWN || moveEffect == EFFECT_ACCURACY_DOWN_2)
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_BIG_PECKS:
                if (moveEffect == EFFECT_DEFENSE_DOWN || moveEffect == EFFECT_DEFENSE_DOWN_2)
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_DEFIANT:
            case ABILITY_COMPETITIVE:
                if (IsStatLoweringEffect(moveEffect) && !IS_TARGETING_PARTNER(battlerAtk, battlerDef))
                    RETURN_SCORE_MINUS(8);
                break;
            case ABILITY_COMATOSE:
                if (IsNonVolatileStatusMoveEffect(moveEffect))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_SHIELDS_DOWN:
                if (IsShieldsDownProtected(battlerAtk) && IsNonVolatileStatusMoveEffect(moveEffect))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_LEAF_GUARD:
                if ((AI_GetWeather(aiData) & B_WEATHER_SUN)
                  && aiData->holdEffects[battlerDef] != HOLD_EFFECT_UTILITY_UMBRELLA
                  && IsNonVolatileStatusMoveEffect(moveEffect))
                    RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_LIGHTNING_ROD:
                if (B_REDIRECT_ABILITY_IMMUNITY < GEN_5)
                    break;
                // Fallthrough
            case ABILITY_MOTOR_DRIVE:
            case ABILITY_VOLT_ABSORB:
                if (moveType == TYPE_ELECTRIC)
                    RETURN_SCORE_MINUS(20);
                break;
            case ABILITY_STORM_DRAIN:
                if (B_REDIRECT_ABILITY_IMMUNITY < GEN_5)
                    break;
                // Fallthrough
            case ABILITY_WATER_ABSORB:
            case ABILITY_DRY_SKIN:
                if (moveType == TYPE_WATER)
                    RETURN_SCORE_MINUS(20);
                break;
            case ABILITY_FLASH_FIRE:
                if (moveType == TYPE_FIRE)
                    RETURN_SCORE_MINUS(20);
                break;
            case ABILITY_EARTH_EATER:
                if (moveType == TYPE_GROUND)
                    RETURN_SCORE_MINUS(20);
                break;
            } // def ability checks

            // target partner ability checks & not attacking partner
            if (isDoubleBattle)
            {
                switch (aiData->abilities[BATTLE_PARTNER(battlerDef)])
                {
                case ABILITY_LIGHTNING_ROD:
                    if (moveType == TYPE_ELECTRIC && !IsMoveRedirectionPrevented(move, aiData->abilities[battlerAtk]))
                        RETURN_SCORE_MINUS(20);
                    break;
                case ABILITY_STORM_DRAIN:
                    if (moveType == TYPE_WATER && !IsMoveRedirectionPrevented(move, aiData->abilities[battlerAtk]))
                        RETURN_SCORE_MINUS(20);
                    break;
                case ABILITY_MAGIC_BOUNCE:
                    if (gMovesInfo[move].magicCoatAffected && moveTarget & (MOVE_TARGET_BOTH | MOVE_TARGET_FOES_AND_ALLY | MOVE_TARGET_OPPONENTS_FIELD))
                        RETURN_SCORE_MINUS(20);
                    break;
                case ABILITY_SWEET_VEIL:
                    if (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN)
                        RETURN_SCORE_MINUS(20);
                    break;
                case ABILITY_FLOWER_VEIL:
                    if ((IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS)) && (IsNonVolatileStatusMoveEffect(moveEffect) || IsStatLoweringEffect(moveEffect)))
                        RETURN_SCORE_MINUS(10);
                    break;
                case ABILITY_AROMA_VEIL:
                    if (IsAromaVeilProtectedMove(move))
                        RETURN_SCORE_MINUS(10);
                    break;
                case ABILITY_DAZZLING:
                case ABILITY_QUEENLY_MAJESTY:
                case ABILITY_ARMOR_TAIL:
                    if (atkPriority > 0)
                        RETURN_SCORE_MINUS(10);
                    break;
                }
            } // def partner ability checks
        } // ignore def ability check

        // gen7+ dark type mons immune to priority->elevated moves from prankster
        if (B_PRANKSTER_DARK_TYPES >= GEN_7 && IS_BATTLER_OF_TYPE(battlerDef, TYPE_DARK)
          && aiData->abilities[battlerAtk] == ABILITY_PRANKSTER && IS_MOVE_STATUS(move)
          && !(moveTarget & (MOVE_TARGET_OPPONENTS_FIELD | MOVE_TARGET_USER)))
            RETURN_SCORE_MINUS(10);

        // terrain & effect checks
        if (AI_IsTerrainAffected(battlerDef, STATUS_FIELD_ELECTRIC_TERRAIN))
        {
            if (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN)
                RETURN_SCORE_MINUS(20);
        }

        if (AI_IsTerrainAffected(battlerDef, STATUS_FIELD_MISTY_TERRAIN))
        {
            if (IsNonVolatileStatusMoveEffect(moveEffect) || IsConfusionMoveEffect(moveEffect))
                RETURN_SCORE_MINUS(20);
        }

        if (AI_IsTerrainAffected(battlerAtk, STATUS_FIELD_PSYCHIC_TERRAIN) && atkPriority > 0)
        {
            RETURN_SCORE_MINUS(20);
        }
    }

    if (gDisableStructs[battlerAtk].throatChopTimer && gMovesInfo[move].soundMove)
        return 0;
    if (gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK && IsHealBlockPreventingMove(battlerAtk, move))
        return 0;

    if (HOLD_EFFECT_CHOICE(aiData->holdEffects[battlerAtk]) && gBattleMons[battlerAtk].ability != ABILITY_KLUTZ)
    {
        // Don't use user-target moves ie. Swords Dance, with exceptions
        if ((moveTarget & MOVE_TARGET_USER)
        && moveEffect != EFFECT_DESTINY_BOND && moveEffect != EFFECT_WISH && moveEffect != EFFECT_HEALING_WISH
        && !(moveEffect == EFFECT_AURORA_VEIL && (AI_GetWeather(aiData) & (B_WEATHER_SNOW | B_WEATHER_HAIL))))
            ADJUST_SCORE(-30);
        // Don't use a status move if the mon is the last one in the party, has no good switchin, or is trapped
        else if (GetBattleMoveCategory(move) == DAMAGE_CATEGORY_STATUS
            && (CountUsablePartyMons(battlerAtk) < 1
            || AI_DATA->mostSuitableMonId[battlerAtk] == PARTY_SIZE
            || IsBattlerTrapped(battlerAtk, TRUE)))
            ADJUST_SCORE(-30);
    }

    if (score < 0)
        score = 0;

    return score;
}

static s32 AI_TryToFaint(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    u32 movesetIndex = AI_THINKING_STRUCT->movesetIndex;

    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
        return score;

    if (gMovesInfo[move].power == 0)
        return score; // can't make anything faint with no power

    if (CanIndexMoveFaintTarget(battlerAtk, battlerDef, movesetIndex, 0) && gMovesInfo[move].effect != EFFECT_EXPLOSION)
    {
        if (AI_IsFaster(battlerAtk, battlerDef, move))
            ADJUST_SCORE(FAST_KILL);
        else
            ADJUST_SCORE(SLOW_KILL);

        if (gMovesInfo[move].effect == EFFECT_FELL_STINGER
         && gBattleMons[battlerAtk].statStages[STAT_ATK] < MAX_STAT_STAGE && AI_DATA->abilities[battlerAtk] != ABILITY_CONTRARY)
            ADJUST_SCORE(DECENT_EFFECT);
    }
    else if (CanTargetFaintAi(battlerDef, battlerAtk)
            && GetWhichBattlerFaster(battlerAtk, battlerDef, TRUE) != AI_IS_FASTER
            && GetMovePriority(battlerAtk, move) > 0)
    {
        ADJUST_SCORE(LAST_CHANCE);
    }

    return score;
}

// double battle logic
static s32 AI_DoubleBattle(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    // move data
    u32 moveType = gMovesInfo[move].type;
    u32 effect = gMovesInfo[move].effect;
    u32 moveTarget = AI_GetBattlerMoveTargetType(battlerAtk, move);
    // ally data
    u32 battlerAtkPartner = BATTLE_PARTNER(battlerAtk);
    struct AiLogicData *aiData = AI_DATA;
    u32 atkPartnerAbility = aiData->abilities[BATTLE_PARTNER(battlerAtk)];
    u32 atkPartnerHoldEffect = aiData->holdEffects[BATTLE_PARTNER(battlerAtk)];
    bool32 partnerProtecting = (gMovesInfo[aiData->partnerMove].effect == EFFECT_PROTECT);
    bool32 attackerHasBadAbility = (gAbilitiesInfo[aiData->abilities[battlerAtk]].aiRating < 0);
    bool32 partnerHasBadAbility = (gAbilitiesInfo[atkPartnerAbility].aiRating < 0);
    u32 predictedMove = aiData->predictedMoves[battlerDef];

    SetTypeBeforeUsingMove(move, battlerAtk);
    GET_MOVE_TYPE(move, moveType);

    // check what effect partner is using
    if (aiData->partnerMove != 0)
    {
        switch (gMovesInfo[aiData->partnerMove].effect)
        {
        case EFFECT_HELPING_HAND:
            if (IS_MOVE_STATUS(move))
                ADJUST_SCORE(-7);
            break;
        case EFFECT_PERISH_SONG:
            if (!(gBattleMons[battlerDef].status2 & (STATUS2_ESCAPE_PREVENTION | STATUS2_WRAPPED)))
            {
                if (IsTrappingMove(aiData->partnerMove) || predictedMove == MOVE_INGRAIN)
                    ADJUST_SCORE(WEAK_EFFECT);
            }
            break;
        }
    } // check partner move effect

    // Adjust for always crit moves
    if (gMovesInfo[aiData->partnerMove].alwaysCriticalHit && aiData->abilities[battlerAtk] == ABILITY_ANGER_POINT)
    {
        if (AI_IsSlower(battlerAtk, battlerAtkPartner, move))   // Partner moving first
        {
            // discourage raising our attack since it's about to be maxed out
            if (IsAttackBoostMoveEffect(effect))
                ADJUST_SCORE(-3);
            // encourage moves hitting multiple opponents
            if (!IS_MOVE_STATUS(move) && (moveTarget & (MOVE_TARGET_BOTH | MOVE_TARGET_FOES_AND_ALLY)))
                ADJUST_SCORE(GOOD_EFFECT);
        }
    }

    // consider our move effect relative to partner state
    switch (effect)
    {
    case EFFECT_HELPING_HAND:
        if (!IsBattlerAlive(battlerAtkPartner) || !HasDamagingMove(battlerAtkPartner))
            ADJUST_SCORE(-5);
        break;
    case EFFECT_PERISH_SONG:
        if (aiData->partnerMove != 0 && HasTrappingMoveEffect(battlerAtkPartner))
            ADJUST_SCORE(WEAK_EFFECT);
        break;
    case EFFECT_MAGNET_RISE:
        if (IsBattlerGrounded(battlerAtk)
          && (HasMove(battlerAtkPartner, MOVE_EARTHQUAKE) || HasMove(battlerAtkPartner, MOVE_MAGNITUDE))
          && (AI_GetMoveEffectiveness(MOVE_EARTHQUAKE, battlerAtk, battlerAtkPartner) != AI_EFFECTIVENESS_x0)) // Doesn't resist ground move
        {
            RETURN_SCORE_PLUS(DECENT_EFFECT);   // partner has earthquake or magnitude -> good idea to use magnet rise
        }
        break;
    case EFFECT_DRAGON_CHEER:
        if (gBattleMons[battlerAtkPartner].status2 & STATUS2_FOCUS_ENERGY_ANY || !HasDamagingMove(battlerAtkPartner))
            ADJUST_SCORE(-5);
        else if (atkPartnerHoldEffect == HOLD_EFFECT_SCOPE_LENS
              || IS_BATTLER_OF_TYPE(battlerAtkPartner, TYPE_DRAGON)
              || gMovesInfo[aiData->partnerMove].criticalHitStage > 0
              || HasMoveWithCriticalHitChance(battlerAtkPartner))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    } // our effect relative to partner

    // consider global move effects
    switch (effect)
    {
    case EFFECT_SANDSTORM:
        if (ShouldSetSandstorm(battlerAtkPartner, atkPartnerAbility, atkPartnerHoldEffect))
        {
            RETURN_SCORE_PLUS(WEAK_EFFECT);   // our partner benefits from sandstorm
        }
        break;
    case EFFECT_RAIN_DANCE:
        if (ShouldSetRain(battlerAtkPartner, atkPartnerAbility, atkPartnerHoldEffect))
        {
            RETURN_SCORE_PLUS(WEAK_EFFECT);   // our partner benefits from rain
        }
        break;
    case EFFECT_SUNNY_DAY:
        if (ShouldSetSun(battlerAtkPartner, atkPartnerAbility, atkPartnerHoldEffect))
        {
            RETURN_SCORE_PLUS(WEAK_EFFECT);   // our partner benefits from sun
        }
        break;
    case EFFECT_HAIL:
        if (IsBattlerAlive(battlerAtkPartner)
         && ShouldSetHail(battlerAtkPartner, atkPartnerAbility, atkPartnerHoldEffect))
        {
            RETURN_SCORE_PLUS(DECENT_EFFECT);   // our partner benefits from hail
        }
        break;
    case EFFECT_SNOWSCAPE:
        if (IsBattlerAlive(battlerAtkPartner)
         && ShouldSetSnow(battlerAtkPartner, atkPartnerAbility, atkPartnerHoldEffect))
        {
            RETURN_SCORE_PLUS(DECENT_EFFECT);   // our partner benefits from snow
        }
        break;
    } // global move effect check

    // check specific target
    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
    {
        // partner ability checks
        if (!partnerProtecting && moveTarget != MOVE_TARGET_BOTH && !DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
        {
            switch (atkPartnerAbility)
            {
            case ABILITY_VOLT_ABSORB:
                if (!(AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_HP_AWARE))
                {
                    RETURN_SCORE_MINUS(10);
                }
                break;  // handled in AI_HPAware
            case ABILITY_MOTOR_DRIVE:
                if (moveType == TYPE_ELECTRIC && BattlerStatCanRise(battlerAtkPartner, atkPartnerAbility, STAT_SPEED))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case ABILITY_LIGHTNING_ROD:
                if (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5
                    && moveType == TYPE_ELECTRIC
                    && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_SPECIAL)
                    && BattlerStatCanRise(battlerAtkPartner, atkPartnerAbility, STAT_SPATK))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case ABILITY_WATER_ABSORB:
            case ABILITY_DRY_SKIN:
            case ABILITY_EARTH_EATER:
                if (!(AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_HP_AWARE))
                {
                    RETURN_SCORE_MINUS(10);
                }
                break;  // handled in AI_HPAware
            case ABILITY_STORM_DRAIN:
                if (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5
                    && moveType == TYPE_WATER
                    && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_SPECIAL)
                    && BattlerStatCanRise(battlerAtkPartner, atkPartnerAbility, STAT_SPATK))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case ABILITY_WATER_COMPACTION:
                if (moveType == TYPE_WATER && GetNoOfHitsToKOBattler(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex) >= 4)
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);   // only mon with this ability is weak to water so only make it okay if we do very little damage
                }
                RETURN_SCORE_MINUS(10);
                break;
            case ABILITY_FLASH_FIRE:
                if (moveType == TYPE_FIRE
                    && HasMoveWithType(battlerAtkPartner, TYPE_FIRE)
                    && !(gBattleResources->flags->flags[battlerAtkPartner] & RESOURCE_FLAG_FLASH_FIRE))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case ABILITY_SAP_SIPPER:
                if (moveType == TYPE_GRASS
                    && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_PHYSICAL)
                    && BattlerStatCanRise(battlerAtkPartner, atkPartnerAbility, STAT_ATK))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case ABILITY_JUSTIFIED:
                if (moveType == TYPE_DARK
                    && !IS_MOVE_STATUS(move)
                    && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_PHYSICAL)
                    && BattlerStatCanRise(battlerAtkPartner, atkPartnerAbility, STAT_ATK)
                    && !CanIndexMoveFaintTarget(battlerAtk, battlerAtkPartner, AI_THINKING_STRUCT->movesetIndex, 1))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case ABILITY_RATTLED:
                if (!IS_MOVE_STATUS(move)
                    && (moveType == TYPE_DARK || moveType == TYPE_GHOST || moveType == TYPE_BUG)
                    && BattlerStatCanRise(battlerAtkPartner, atkPartnerAbility, STAT_SPEED)
                    && !CanIndexMoveFaintTarget(battlerAtk, battlerAtkPartner, AI_THINKING_STRUCT->movesetIndex, 1))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case ABILITY_CONTRARY:
                if (IsStatLoweringEffect(effect))
                {
                    RETURN_SCORE_PLUS(DECENT_EFFECT);
                }
                break;
            }
        } // ability checks

        // attacker move effects specifically targeting partner
        if (!partnerProtecting)
        {
            switch (effect)
            {
            case EFFECT_SPICY_EXTRACT:
                if (AI_ShouldSpicyExtract(battlerAtk, battlerAtkPartner, move, aiData))
                {
                    RETURN_SCORE_PLUS(GOOD_EFFECT);
                }
                break;
            case EFFECT_PURIFY:
                if (gBattleMons[battlerAtkPartner].status1 & STATUS1_ANY)
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_SWAGGER:
                if (gBattleMons[battlerAtkPartner].statStages[STAT_ATK] < MAX_STAT_STAGE
                 && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_PHYSICAL)
                 && (!AI_CanBeConfused(battlerAtk, battlerAtkPartner, move, atkPartnerAbility)
                  || atkPartnerHoldEffect == HOLD_EFFECT_CURE_CONFUSION
                  || atkPartnerHoldEffect == HOLD_EFFECT_CURE_STATUS))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_FLATTER:
                if (gBattleMons[battlerAtkPartner].statStages[STAT_SPATK] < MAX_STAT_STAGE
                 && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_SPECIAL)
                 && (!AI_CanBeConfused(battlerAtk, battlerAtkPartner, move, atkPartnerAbility)
                  || atkPartnerHoldEffect == HOLD_EFFECT_CURE_CONFUSION
                  || atkPartnerHoldEffect == HOLD_EFFECT_CURE_STATUS))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_BEAT_UP:
                if (atkPartnerAbility == ABILITY_JUSTIFIED
                  && moveType == TYPE_DARK
                  && !IS_MOVE_STATUS(move)
                  && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_PHYSICAL)
                  && BattlerStatCanRise(battlerAtkPartner, atkPartnerAbility, STAT_ATK)
                  && !CanIndexMoveFaintTarget(battlerAtk, battlerAtkPartner, AI_THINKING_STRUCT->movesetIndex, 0))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_SKILL_SWAP:
                if (aiData->abilities[battlerAtk] != aiData->abilities[BATTLE_PARTNER(battlerAtk)] && !attackerHasBadAbility)
                {
                    if (aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_TRUANT)
                    {
                        RETURN_SCORE_PLUS(10);
                    }
                    else if (aiData->abilities[battlerAtk] == ABILITY_COMPOUND_EYES
                     && HasMoveWithLowAccuracy(battlerAtkPartner, FOE(battlerAtkPartner), 90, TRUE, atkPartnerAbility, aiData->abilities[FOE(battlerAtkPartner)], atkPartnerHoldEffect, aiData->holdEffects[FOE(battlerAtkPartner)]))
                    {
                        RETURN_SCORE_PLUS(3);
                    }
                }
                break;
            case EFFECT_ROLE_PLAY:
                if (attackerHasBadAbility && !partnerHasBadAbility)
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_WORRY_SEED:
            case EFFECT_GASTRO_ACID:
            case EFFECT_SIMPLE_BEAM:
                if (partnerHasBadAbility)
                {
                    RETURN_SCORE_PLUS(DECENT_EFFECT);
                }
                break;
            case EFFECT_ENTRAINMENT:
                if (partnerHasBadAbility && IsAbilityOfRating(aiData->abilities[battlerAtk], 0))
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_SOAK:
                if (atkPartnerAbility == ABILITY_WONDER_GUARD
                 && !IS_BATTLER_OF_TYPE(battlerAtkPartner, TYPE_WATER)
                 && GetActiveGimmick(battlerAtkPartner) != GIMMICK_TERA)
                {
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_INSTRUCT:
                {
                    u16 instructedMove;
                    if (AI_IsFaster(battlerAtk, battlerAtkPartner, move))
                        instructedMove = aiData->partnerMove;
                    else
                        instructedMove = gLastMoves[battlerAtkPartner];

                    if (instructedMove != MOVE_NONE
                      && !IS_MOVE_STATUS(instructedMove)
                      && (AI_GetBattlerMoveTargetType(battlerAtkPartner, instructedMove) & (MOVE_TARGET_BOTH | MOVE_TARGET_FOES_AND_ALLY))) // Use instruct on multi-target moves
                    {
                        RETURN_SCORE_PLUS(WEAK_EFFECT);
                    }
                }
                break;
            case EFFECT_AFTER_YOU:
                if (AI_IsSlower(battlerAtkPartner, FOE(battlerAtkPartner), aiData->partnerMove)  // Opponent mon 1 goes before partner
                 || AI_IsSlower(battlerAtkPartner, BATTLE_PARTNER(FOE(battlerAtkPartner)), aiData->partnerMove)) // Opponent mon 2 goes before partner
                {
                    if (gMovesInfo[aiData->partnerMove].effect == EFFECT_COUNTER || gMovesInfo[aiData->partnerMove].effect == EFFECT_MIRROR_COAT)
                        break; // These moves need to go last
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                }
                break;
            case EFFECT_HEAL_PULSE:
            case EFFECT_HIT_ENEMY_HEAL_ALLY:
                if (AI_IsFaster(battlerAtk, FOE(battlerAtk), move)
                 && AI_IsFaster(battlerAtk, BATTLE_PARTNER(FOE(battlerAtk)), move)
                 && gBattleMons[battlerAtkPartner].hp < gBattleMons[battlerAtkPartner].maxHP / 2)
                    RETURN_SCORE_PLUS(WEAK_EFFECT);
                break;
            } // attacker move effects
        } // check partner protecting

        ADJUST_SCORE(-30); // otherwise, don't target partner
    }
    else // checking opponent
    {
        // these checks mostly handled in AI_CheckBadMove and AI_CheckViability
        switch (effect)
        {
        case EFFECT_SKILL_SWAP:
            if (aiData->abilities[battlerAtk] == ABILITY_TRUANT)
                ADJUST_SCORE(GOOD_EFFECT);
            else if (IsAbilityOfRating(aiData->abilities[battlerAtk], 0) || IsAbilityOfRating(aiData->abilities[battlerDef], 10))
                ADJUST_SCORE(DECENT_EFFECT); // we want to transfer our bad ability or take their awesome ability
            break;
        }

        // lightning rod, flash fire against enemy handled in AI_CheckBadMove
    }

    return score;
}

static bool32 IsPinchBerryItemEffect(u32 holdEffect)
{
    switch (holdEffect)
    {
    case HOLD_EFFECT_ATTACK_UP:
    case HOLD_EFFECT_DEFENSE_UP:
    case HOLD_EFFECT_SPEED_UP:
    case HOLD_EFFECT_SP_ATTACK_UP:
    case HOLD_EFFECT_SP_DEFENSE_UP:
    case HOLD_EFFECT_CRITICAL_UP:
    case HOLD_EFFECT_RANDOM_STAT_UP:
    case HOLD_EFFECT_CUSTAP_BERRY:
    case HOLD_EFFECT_MICLE_BERRY:
        return TRUE;
    }

    return FALSE;
}

static s32 CompareMoveAccuracies(u32 battlerAtk, u32 battlerDef, u32 moveSlot1, u32 moveSlot2)
{
    u32 acc1 = AI_DATA->moveAccuracy[battlerAtk][battlerDef][moveSlot1];
    u32 acc2 = AI_DATA->moveAccuracy[battlerAtk][battlerDef][moveSlot2];

    if (acc1 > acc2)
        return 1;
    else if (acc2 > acc1)
        return -1;
    return 0;
}

static inline bool32 ShouldUseSpreadDamageMove(u32 battlerAtk, u32 move, u32 moveIndex, u32 hitsToFaintOpposingBattler)
{
    u32 partnerBattler = BATTLE_PARTNER(battlerAtk);
    u32 noOfHitsToFaintPartner = GetNoOfHitsToKOBattler(battlerAtk, partnerBattler, moveIndex);
    return (IsDoubleBattle()
         && noOfHitsToFaintPartner != 0 // Immunity check
         && IsBattlerAlive(partnerBattler)
         && gMovesInfo[move].target == MOVE_TARGET_FOES_AND_ALLY
         && !(noOfHitsToFaintPartner < 4 && hitsToFaintOpposingBattler == 1)
         && noOfHitsToFaintPartner < 7);
}

static s32 AI_CompareDamagingMoves(u32 battlerAtk, u32 battlerDef, u32 currId)
{
    u32 i;
    bool32 multipleBestMoves = FALSE;
    s32 viableMoveScores[MAX_MON_MOVES];
    s32 bestViableMoveScore;
    s32 noOfHits[MAX_MON_MOVES];
    s32 score = 0;
    s32 leastHits = 1000;
    u16 *moves = GetMovesArray(battlerAtk);
    bool8 isTwoTurnNotSemiInvulnerableMove[MAX_MON_MOVES];

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && gMovesInfo[moves[i]].power)
        {
            noOfHits[i] = GetNoOfHitsToKOBattler(battlerAtk, battlerDef, i);
            if (ShouldUseSpreadDamageMove(battlerAtk,moves[i], i, noOfHits[i]))
            {
                noOfHits[i] = -1;
                viableMoveScores[i] = 0;
                isTwoTurnNotSemiInvulnerableMove[i] = FALSE;
            }
            else if (noOfHits[i] < leastHits && noOfHits[i] != 0)
            {
                leastHits = noOfHits[i];
            }
            viableMoveScores[i] = AI_SCORE_DEFAULT;
            isTwoTurnNotSemiInvulnerableMove[i] = IsTwoTurnNotSemiInvulnerableMove(battlerAtk, moves[i]);
        }
        else
        {
            noOfHits[i] = -1;
            viableMoveScores[i] = 0;
            isTwoTurnNotSemiInvulnerableMove[i] = FALSE;
        }
        /*
            Test_MgbaPrintf("%S: required hits: %d Dmg: %d", gMoveNames[moves[i]], noOfHits[i], AI_DATA->simulatedDmg[battlerAtk][battlerDef][i]);
        */
    }

    // Priority list:
    // 1. Less no of hits to ko
    // 2. Not charging
    // 3. More accuracy
    // 4. Better effect

    // Current move requires the least hits to KO. Compare with other moves.
    if (leastHits == noOfHits[currId])
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (i == currId)
                continue;
            if (noOfHits[currId] == noOfHits[i])
            {
                multipleBestMoves = TRUE;
                // We need to make sure it's the current move which is objectively better.
                if (isTwoTurnNotSemiInvulnerableMove[i] && !isTwoTurnNotSemiInvulnerableMove[currId])
                    viableMoveScores[i] -= 3;
                else if (!isTwoTurnNotSemiInvulnerableMove[i] && isTwoTurnNotSemiInvulnerableMove[currId])
                    viableMoveScores[currId] -= 3;

                switch (CompareMoveAccuracies(battlerAtk, battlerDef, currId, i))
                {
                case 1:
                    viableMoveScores[i] -= 2;
                    break;
                case -1:
                    viableMoveScores[currId] -= 2;
                    break;
                }
                switch (AI_WhichMoveBetter(moves[currId], moves[i], battlerAtk, battlerDef, noOfHits[currId]))
                {
                case 1:
                    viableMoveScores[i] -= 1;
                    break;
                case -1:
                    viableMoveScores[currId] -= 1;
                    break;
                }
            }
        }
        // Turns out the current move deals the most dmg compared to the other 3.
        if (!multipleBestMoves)
            ADJUST_SCORE(BEST_DAMAGE_MOVE);
        else
        {
            bestViableMoveScore = 0;
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                if (viableMoveScores[i] > bestViableMoveScore)
                    bestViableMoveScore = viableMoveScores[i];
            }
            // Unless a better move was found increase score of current move
            if (viableMoveScores[currId] == bestViableMoveScore)
                ADJUST_SCORE(BEST_DAMAGE_MOVE);
        }
    }

    return score;
}

// AI_FLAG_CHECK_VIABILITY - Chooses best possible move to hit player
static s32 AI_CheckViability(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    struct AiLogicData *aiData = AI_DATA;
    u32 movesetIndex = AI_THINKING_STRUCT->movesetIndex;
    u32 effectiveness = aiData->effectiveness[battlerAtk][battlerDef][movesetIndex];
    u32 predictedMove = aiData->predictedMoves[battlerDef];
    u32 i;

    // Targeting partner, check benefits of doing that instead
    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
        return score;

    if (gMovesInfo[move].power)
    {
        if (GetNoOfHitsToKOBattler(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex) == 0)
            ADJUST_AND_RETURN_SCORE(NO_DAMAGE_OR_FAILS); // No point in checking the move further so return early
        else
        {
            if ((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_RISKY) && GetBestDmgMoveFromBattler(battlerAtk, battlerDef) == move)
                ADJUST_SCORE(BEST_DAMAGE_MOVE);
            else
                ADJUST_SCORE(AI_CompareDamagingMoves(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex));
        }
    }

    // check status move preference
    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_PREFER_STATUS_MOVES && IS_MOVE_STATUS(move) && effectiveness != AI_EFFECTIVENESS_x0)
        ADJUST_SCORE(10);

    // check thawing moves
    if ((gBattleMons[battlerAtk].status1 & (STATUS1_FREEZE | STATUS1_FROSTBITE)) && gMovesInfo[move].thawsUser)
        ADJUST_SCORE(10);

    // check burn / frostbite
    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_SMART_SWITCHING && AI_DATA->abilities[battlerAtk] == ABILITY_NATURAL_CURE)
    {
        if ((gBattleMons[battlerAtk].status1 & STATUS1_BURN && HasOnlyMovesWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL, TRUE))
         || (gBattleMons[battlerAtk].status1 & STATUS1_FROSTBITE && HasOnlyMovesWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL, TRUE)))
            ADJUST_SCORE(-20); // Force switch if all your attacking moves are physical and you have Natural Cure.
    }

    // check move additional effects that are likely to happen
    for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
        // Only consider effects with a guaranteed chance to happen
        if (!MoveEffectIsGuaranteed(battlerAtk, aiData->abilities[battlerAtk], &gMovesInfo[move].additionalEffects[i]))
            continue;

        // Consider move effects that target self
        if (gMovesInfo[move].additionalEffects[i].self)
        {
            u32 StageStatId;

            if (aiData->abilities[battlerAtk] != ABILITY_CONTRARY)
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                case MOVE_EFFECT_ATK_PLUS_1:
                case MOVE_EFFECT_DEF_PLUS_1:
                case MOVE_EFFECT_SPD_PLUS_1:
                case MOVE_EFFECT_SP_ATK_PLUS_1:
                case MOVE_EFFECT_SP_DEF_PLUS_1:
                    StageStatId = STAT_CHANGE_ATK + gMovesInfo[move].additionalEffects[i].moveEffect - MOVE_EFFECT_ATK_PLUS_1;
                    ADJUST_SCORE(IncreaseStatUpScore(battlerAtk, battlerDef, StageStatId));
                    break;
                case MOVE_EFFECT_ATK_PLUS_2:
                case MOVE_EFFECT_DEF_PLUS_2:
                case MOVE_EFFECT_SPD_PLUS_2:
                case MOVE_EFFECT_SP_ATK_PLUS_2:
                case MOVE_EFFECT_SP_DEF_PLUS_2:
                    StageStatId = STAT_CHANGE_ATK_2 + gMovesInfo[move].additionalEffects[i].moveEffect - MOVE_EFFECT_ATK_PLUS_1;
                    ADJUST_SCORE(IncreaseStatUpScore(battlerAtk, battlerDef, StageStatId));
                    break;
                case MOVE_EFFECT_ACC_PLUS_1:
                case MOVE_EFFECT_ACC_PLUS_2:
                    ADJUST_SCORE(IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ACC));
                    break;
                case MOVE_EFFECT_EVS_PLUS_1:
                case MOVE_EFFECT_EVS_PLUS_2:
                    ADJUST_SCORE(IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_EVASION));
                    break;
                case MOVE_EFFECT_RAPID_SPIN:
                    if ((gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerAtk) != 0)
                    || (gStatuses3[battlerAtk] & STATUS3_LEECHSEED || gBattleMons[battlerAtk].status2 & STATUS2_WRAPPED))
                        ADJUST_SCORE(GOOD_EFFECT);
                    break;
                }
            }
            else
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                    StageStatId = STAT_CHANGE_ATK + gMovesInfo[move].additionalEffects[i].moveEffect - MOVE_EFFECT_ATK_MINUS_1;
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, StageStatId));
                    break;
                case MOVE_EFFECT_ATK_MINUS_2:
                case MOVE_EFFECT_DEF_MINUS_2:
                case MOVE_EFFECT_SPD_MINUS_2:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                    StageStatId = STAT_CHANGE_ATK + gMovesInfo[move].additionalEffects[i].moveEffect - MOVE_EFFECT_ATK_MINUS_2;
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, StageStatId));
                    break;
                case MOVE_EFFECT_ACC_MINUS_1:
                case MOVE_EFFECT_ACC_MINUS_2:
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_ACC));
                    break;
                case MOVE_EFFECT_EVS_MINUS_1:
                case MOVE_EFFECT_EVS_MINUS_2:
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_EVASION));
                    break;
                case MOVE_EFFECT_DEF_SPDEF_DOWN:
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_DEF));
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_SPDEF));
                    break;
                case MOVE_EFFECT_ATK_DEF_DOWN:
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_ATK));
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_DEF));
                    break;
                case MOVE_EFFECT_V_CREATE:
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_DEF));
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_SPEED));
                    ADJUST_SCORE(IncreaseStatUpScoreContrary(battlerAtk, battlerDef, STAT_CHANGE_SPDEF));
                    break;
                }
            }
        }
        else // consider move effects that hinder the target
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
            case MOVE_EFFECT_FLINCH:
                score += ShouldTryToFlinch(battlerAtk, battlerDef, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], move);
                break;
            case MOVE_EFFECT_SPD_MINUS_1:
            case MOVE_EFFECT_SPD_MINUS_2:
                if (!ShouldLowerSpeed(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
                    break;
            case MOVE_EFFECT_ATK_MINUS_1:
            case MOVE_EFFECT_DEF_MINUS_1:
            case MOVE_EFFECT_SP_ATK_MINUS_1:
            case MOVE_EFFECT_SP_DEF_MINUS_1:
            case MOVE_EFFECT_ACC_MINUS_1:
            case MOVE_EFFECT_EVS_MINUS_1:
                if (aiData->abilities[battlerDef] != ABILITY_CONTRARY)
                    ADJUST_SCORE(DECENT_EFFECT);
                break;
            case MOVE_EFFECT_ATK_MINUS_2:
            case MOVE_EFFECT_DEF_MINUS_2:
            case MOVE_EFFECT_SP_ATK_MINUS_2:
            case MOVE_EFFECT_SP_DEF_MINUS_2:
            case MOVE_EFFECT_ACC_MINUS_2:
            case MOVE_EFFECT_EVS_MINUS_2:
                if (aiData->abilities[battlerDef] != ABILITY_CONTRARY)
                    ADJUST_SCORE(DECENT_EFFECT);
                break;
            case MOVE_EFFECT_POISON:
                IncreasePoisonScore(battlerAtk, battlerDef, move, &score);
                break;
            case MOVE_EFFECT_CLEAR_SMOG:
                score += AI_TryToClearStats(battlerAtk, battlerDef, FALSE);
                break;
            case MOVE_EFFECT_SPECTRAL_THIEF:
                score += AI_ShouldCopyStatChanges(battlerAtk, battlerDef);
                break;
            case MOVE_EFFECT_BUG_BITE:   // And pluck
                if (gBattleMons[battlerDef].status2 & STATUS2_SUBSTITUTE || aiData->abilities[battlerDef] == ABILITY_STICKY_HOLD)
                    break;
                else if (ItemId_GetPocket(aiData->items[battlerDef]) == POCKET_BERRIES)
                    ADJUST_SCORE(DECENT_EFFECT);
                break;
            case MOVE_EFFECT_INCINERATE:
                if (gBattleMons[battlerDef].status2 & STATUS2_SUBSTITUTE || aiData->abilities[battlerDef] == ABILITY_STICKY_HOLD)
                    break;
                else if (ItemId_GetPocket(aiData->items[battlerDef]) == POCKET_BERRIES || aiData->holdEffects[battlerDef] == HOLD_EFFECT_GEMS)
                    ADJUST_SCORE(DECENT_EFFECT);
                break;
            case MOVE_EFFECT_SMACK_DOWN:
                if (!IsBattlerGrounded(battlerDef) && HasDamagingMoveOfType(battlerAtk, TYPE_GROUND) && !CanTargetFaintAi(battlerDef, battlerAtk))
                    ADJUST_SCORE(DECENT_EFFECT);
                break;
            case MOVE_EFFECT_KNOCK_OFF:
                if (CanKnockOffItem(battlerDef, aiData->items[battlerDef]))
                {
                    switch (aiData->holdEffects[battlerDef])
                    {
                    case HOLD_EFFECT_IRON_BALL:
                        if (HasMoveEffect(battlerDef, EFFECT_FLING))
                            ADJUST_SCORE(DECENT_EFFECT);
                        break;
                    case HOLD_EFFECT_LAGGING_TAIL:
                    case HOLD_EFFECT_STICKY_BARB:
                        break;
                    default:
                        ADJUST_SCORE(DECENT_EFFECT);
                        break;
                    }
                }
                break;
            case MOVE_EFFECT_STEAL_ITEM:
                {
                    bool32 canSteal = FALSE;

                    if (B_TRAINERS_KNOCK_OFF_ITEMS == TRUE)
                        canSteal = TRUE;
                    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER || GetBattlerSide(battlerAtk) == B_SIDE_PLAYER)
                        canSteal = TRUE;

                    if (canSteal && aiData->items[battlerAtk] == ITEM_NONE
                    && aiData->items[battlerDef] != ITEM_NONE
                    && CanBattlerGetOrLoseItem(battlerDef, aiData->items[battlerDef])
                    && CanBattlerGetOrLoseItem(battlerAtk, aiData->items[battlerDef])
                    && !HasMoveEffect(battlerAtk, EFFECT_ACROBATICS)
                    && aiData->abilities[battlerDef] != ABILITY_STICKY_HOLD)
                    {
                        switch (aiData->holdEffects[battlerDef])
                        {
                        case HOLD_EFFECT_NONE:
                            break;
                        case HOLD_EFFECT_CHOICE_BAND:
                        case HOLD_EFFECT_CHOICE_SCARF:
                        case HOLD_EFFECT_CHOICE_SPECS:
                            ADJUST_SCORE(DECENT_EFFECT);
                            break;
                        case HOLD_EFFECT_TOXIC_ORB:
                            if (ShouldPoisonSelf(battlerAtk, aiData->abilities[battlerAtk]))
                                ADJUST_SCORE(DECENT_EFFECT);
                            break;
                        case HOLD_EFFECT_FLAME_ORB:
                            if (ShouldBurnSelf(battlerAtk, aiData->abilities[battlerAtk]))
                                ADJUST_SCORE(DECENT_EFFECT);
                            break;
                        case HOLD_EFFECT_BLACK_SLUDGE:
                            if (IS_BATTLER_OF_TYPE(battlerAtk, TYPE_POISON))
                                ADJUST_SCORE(DECENT_EFFECT);
                            break;
                        case HOLD_EFFECT_IRON_BALL:
                            if (HasMoveEffect(battlerAtk, EFFECT_FLING))
                                ADJUST_SCORE(DECENT_EFFECT);
                            break;
                        case HOLD_EFFECT_LAGGING_TAIL:
                        case HOLD_EFFECT_STICKY_BARB:
                            break;
                        default:
                            ADJUST_SCORE(WEAK_EFFECT);
                            break;
                        }
                    }
                    break;
                }
                break;
            case MOVE_EFFECT_STEALTH_ROCK:
            case MOVE_EFFECT_SPIKES:
                if (AI_ShouldSetUpHazards(battlerAtk, battlerDef, aiData));
                {
                    if (gDisableStructs[battlerAtk].isFirstTurn)
                        ADJUST_SCORE(BEST_EFFECT);
                    else
                        ADJUST_SCORE(DECENT_EFFECT);
                }
                break;
            case MOVE_EFFECT_FEINT:
                if (gMovesInfo[predictedMove].effect == EFFECT_PROTECT)
                    ADJUST_SCORE(GOOD_EFFECT);
                break;
            case MOVE_EFFECT_THROAT_CHOP:
                if (gMovesInfo[GetBestDmgMoveFromBattler(battlerDef, battlerAtk)].soundMove)
                {
                    if (AI_IsFaster(battlerAtk, battlerDef, move))
                        ADJUST_SCORE(GOOD_EFFECT);
                    else
                        ADJUST_SCORE(DECENT_EFFECT);
                }
                break;
            case MOVE_EFFECT_WRAP:
                if (!HasMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_RAPID_SPIN) && ShouldTrap(battlerAtk, battlerDef, move))
                    ADJUST_SCORE(BEST_EFFECT);
                break;
            }
        }
    }

    ADJUST_SCORE(AI_CalcMoveEffectScore(battlerAtk, battlerDef, move, aiData));
    return score;
}

// Effects that are encouraged on the first turn of battle
static s32 AI_SetupFirstTurn(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    u8 i;
    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef)
      || gBattleResults.battleTurnCounter != 0)
        return score;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_SMART_SWITCHING
      && AI_IsSlower(battlerAtk, battlerDef, move)
      && CanTargetFaintAi(battlerDef, battlerAtk)
      && GetMovePriority(battlerAtk, move) == 0)
    {
        RETURN_SCORE_MINUS(20);    // No point in setting up if you will faint. Should just switch if possible..
    }

    // check effects to prioritize first turn
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_USER_ALLY:
    case EFFECT_DEFENSE_UP:
    case EFFECT_SPEED_UP:
    case EFFECT_SPECIAL_ATTACK_UP:
    case EFFECT_SPECIAL_DEFENSE_UP:
    case EFFECT_ACCURACY_UP:
    case EFFECT_EVASION_UP:
    case EFFECT_ATTACK_DOWN:
    case EFFECT_DEFENSE_DOWN:
    case EFFECT_SPEED_DOWN:
    case EFFECT_SPECIAL_ATTACK_DOWN:
    case EFFECT_SPECIAL_DEFENSE_DOWN:
    case EFFECT_ACCURACY_DOWN:
    case EFFECT_EVASION_DOWN:
    case EFFECT_CONVERSION:
    case EFFECT_LIGHT_SCREEN:
    case EFFECT_FOCUS_ENERGY:
    case EFFECT_CONFUSE:
    case EFFECT_ATTACK_UP_2:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_SPEED_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_3:
    case EFFECT_SPECIAL_DEFENSE_UP_2:
    case EFFECT_ACCURACY_UP_2:
    case EFFECT_EVASION_UP_2:
    case EFFECT_ATTACK_DOWN_2:
    case EFFECT_DEFENSE_DOWN_2:
    case EFFECT_SPEED_DOWN_2:
    case EFFECT_SPECIAL_ATTACK_DOWN_2:
    case EFFECT_SPECIAL_DEFENSE_DOWN_2:
    case EFFECT_ACCURACY_DOWN_2:
    case EFFECT_EVASION_DOWN_2:
    case EFFECT_REFLECT:
    case EFFECT_POISON:
    case EFFECT_PARALYZE:
    case EFFECT_SUBSTITUTE:
    case EFFECT_LEECH_SEED:
    case EFFECT_MINIMIZE:
    case EFFECT_CURSE:
    case EFFECT_SWAGGER:
    case EFFECT_CAMOUFLAGE:
    case EFFECT_YAWN:
    case EFFECT_DEFENSE_CURL:
    case EFFECT_TORMENT:
    case EFFECT_FLATTER:
    case EFFECT_WILL_O_WISP:
    case EFFECT_INGRAIN:
    case EFFECT_IMPRISON:
    case EFFECT_TICKLE:
    case EFFECT_COSMIC_POWER:
    case EFFECT_BULK_UP:
    case EFFECT_CALM_MIND:
    case EFFECT_ACUPRESSURE:
    case EFFECT_AUTOTOMIZE:
    case EFFECT_SHIFT_GEAR:
    case EFFECT_SHELL_SMASH:
    case EFFECT_GROWTH:
    case EFFECT_QUIVER_DANCE:
    case EFFECT_ATTACK_SPATK_UP:
    case EFFECT_ATTACK_ACCURACY_UP:
    case EFFECT_PSYCHIC_TERRAIN:
    case EFFECT_GRASSY_TERRAIN:
    case EFFECT_ELECTRIC_TERRAIN:
    case EFFECT_MISTY_TERRAIN:
    case EFFECT_STEALTH_ROCK:
    case EFFECT_TOXIC_SPIKES:
    case EFFECT_TRICK_ROOM:
    case EFFECT_WONDER_ROOM:
    case EFFECT_MAGIC_ROOM:
    case EFFECT_TAILWIND:
    case EFFECT_DRAGON_DANCE:
    case EFFECT_TIDY_UP:
    case EFFECT_STICKY_WEB:
    case EFFECT_RAIN_DANCE:
    case EFFECT_SUNNY_DAY:
    case EFFECT_SANDSTORM:
    case EFFECT_HAIL:
    case EFFECT_SNOWSCAPE:
    case EFFECT_GEOMANCY:
    case EFFECT_VICTORY_DANCE:
        ADJUST_SCORE(DECENT_EFFECT);
        break;
    case EFFECT_HIT:
    {
        // TEMPORARY - should applied to all moves regardless of EFFECT
        // Consider move effects
        for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_STEALTH_ROCK:
                case MOVE_EFFECT_SPIKES:
                    ADJUST_SCORE(DECENT_EFFECT);
                    break;
                default:
                    break;
            }
        }
    }
    default:
        break;
    }

    return score;
}

// Adds score bonus to 'riskier' move effects and high crit moves
static s32 AI_Risky(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    u8 i;
    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
        return score;

    if (gMovesInfo[move].criticalHitStage > 0)
        ADJUST_SCORE(DECENT_EFFECT);

    // +3 Score
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_COUNTER:
        if (gSpeciesInfo[gBattleMons[battlerDef].species].baseAttack >= gSpeciesInfo[gBattleMons[battlerDef].species].baseSpAttack + 10)
            ADJUST_SCORE(STRONG_RISKY_EFFECT);
        break;
    case EFFECT_MIRROR_COAT:
        if (gSpeciesInfo[gBattleMons[battlerDef].species].baseSpAttack >= gSpeciesInfo[gBattleMons[battlerDef].species].baseAttack + 10)
            ADJUST_SCORE(STRONG_RISKY_EFFECT);
        break;
    case EFFECT_EXPLOSION:
        ADJUST_SCORE(STRONG_RISKY_EFFECT);
        break;

    // +2 Score
    case EFFECT_REVENGE:
        if (gSpeciesInfo[gBattleMons[battlerDef].species].baseSpeed >= gSpeciesInfo[gBattleMons[battlerAtk].species].baseSpeed + 10)
            ADJUST_SCORE(AVERAGE_RISKY_EFFECT);
        break;
    case EFFECT_BELLY_DRUM:
        if (gBattleMons[battlerAtk].hp >= gBattleMons[battlerAtk].maxHP * 90 / 100)
            ADJUST_SCORE(AVERAGE_RISKY_EFFECT);
        break;
    case EFFECT_MAX_HP_50_RECOIL:
    case EFFECT_MIND_BLOWN:
    case EFFECT_SWAGGER:
    case EFFECT_FLATTER:
    case EFFECT_ATTRACT:
    case EFFECT_OHKO:
        ADJUST_SCORE(AVERAGE_RISKY_EFFECT);
        break;
    case EFFECT_HIT:
    {
        // TEMPORARY - should applied to all moves regardless of EFFECT
        // Consider move effects
        for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_ALL_STATS_UP:
                    if (Random() & 1)
                        ADJUST_SCORE(AVERAGE_RISKY_EFFECT);
                    break;
                default:
                    break;
            }
        }
    }
    default:
        break;
    }

    return score;
}

// Adds score bonus to best powered move
static s32 AI_PreferStrongestMove(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
        return score;

    if (GetNoOfHitsToKOBattler(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex) == 1)
        ADJUST_SCORE(BEST_EFFECT);
    else if (GetNoOfHitsToKOBattler(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex) == 2)
        ADJUST_SCORE(DECENT_EFFECT);

    return score;
}

// Prefers moves that are good for baton pass
static s32 AI_PreferBatonPass(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef)
      || CountUsablePartyMons(battlerAtk) == 0
      || gMovesInfo[move].power != 0
      || !HasMoveEffect(battlerAtk, EFFECT_BATON_PASS)
      || IsBattlerTrapped(battlerAtk, TRUE))
        return score;

    if (IsStatRaisingEffect(gMovesInfo[move].effect))
    {
        if (gBattleResults.battleTurnCounter == 0)
            ADJUST_SCORE(GOOD_EFFECT);
        else if (AI_DATA->hpPercents[battlerAtk] < 60)
            ADJUST_SCORE(-10);
        else
            ADJUST_SCORE(WEAK_EFFECT);
    }

    // other specific checks
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_INGRAIN:
        if (!(gStatuses3[battlerAtk] & STATUS3_ROOTED))
            ADJUST_SCORE(DECENT_EFFECT);
        break;
    case EFFECT_AQUA_RING:
        if (!(gStatuses3[battlerAtk] & STATUS3_AQUA_RING))
            ADJUST_SCORE(DECENT_EFFECT);
        break;
    case EFFECT_PROTECT:
        if (gLastMoves[battlerAtk] == MOVE_PROTECT || gLastMoves[battlerAtk] == MOVE_DETECT)
            ADJUST_SCORE(-2);
        else
            ADJUST_SCORE(DECENT_EFFECT);
        break;
    case EFFECT_BATON_PASS:
        if (gStatuses3[battlerAtk] & (STATUS3_ROOTED | STATUS3_AQUA_RING))
            ADJUST_SCORE(DECENT_EFFECT);
        if (gStatuses3[battlerAtk] & STATUS3_LEECHSEED)
            ADJUST_SCORE(-3);
        ADJUST_SCORE(CountPositiveStatStages(battlerAtk) - CountNegativeStatStages(battlerAtk));
        break;
    default:
        break;
    }

    return score;
}

static s32 AI_HPAware(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    u32 effect = gMovesInfo[move].effect;
    u32 moveType = gMovesInfo[move].type;

    SetTypeBeforeUsingMove(move, battlerAtk);
    GET_MOVE_TYPE(move, moveType);

    if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
    {
        if ((effect == EFFECT_HEAL_PULSE || effect == EFFECT_HIT_ENEMY_HEAL_ALLY)
         || (moveType == TYPE_ELECTRIC && AI_DATA->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_VOLT_ABSORB)
         || (moveType == TYPE_GROUND && AI_DATA->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_EARTH_EATER)
         || (moveType == TYPE_WATER && (AI_DATA->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_DRY_SKIN || AI_DATA->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_WATER_ABSORB)))
        {
            if (gStatuses3[battlerDef] & STATUS3_HEAL_BLOCK)
                return 0;

            if (CanTargetFaintAi(FOE(battlerAtk), BATTLE_PARTNER(battlerAtk))
              || (CanTargetFaintAi(BATTLE_PARTNER(FOE(battlerAtk)), BATTLE_PARTNER(battlerAtk))))
                ADJUST_SCORE(-1);

            if (AI_DATA->hpPercents[battlerDef] <= 50)
                ADJUST_SCORE(WEAK_EFFECT);
        }
    }
    else
    {
        // Consider AI HP
        if (AI_DATA->hpPercents[battlerAtk] > 70)
        {
            // high hp
            switch (effect)
            {
            case EFFECT_EXPLOSION:
            case EFFECT_RESTORE_HP:
            case EFFECT_REST:
            case EFFECT_DESTINY_BOND:
            case EFFECT_FLAIL:
            case EFFECT_ENDURE:
            case EFFECT_MORNING_SUN:
            case EFFECT_SYNTHESIS:
            case EFFECT_MOONLIGHT:
            case EFFECT_SHORE_UP:
            case EFFECT_SOFTBOILED:
            case EFFECT_ROOST:
            case EFFECT_MEMENTO:
            case EFFECT_GRUDGE:
                ADJUST_SCORE(-2);
                break;
            default:
                break;
            }
        }
        else if (AI_DATA->hpPercents[battlerAtk] > 30)
        {
            // med hp
            if (IsStatRaisingEffect(effect) || IsStatLoweringEffect(effect))
                ADJUST_SCORE(-2);

            switch (effect)
            {
            case EFFECT_EXPLOSION:
            case EFFECT_BIDE:
            case EFFECT_CONVERSION:
            case EFFECT_LIGHT_SCREEN:
            case EFFECT_REFLECT:
            case EFFECT_MIST:
            case EFFECT_FOCUS_ENERGY:
            case EFFECT_CONVERSION_2:
            case EFFECT_SAFEGUARD:
            case EFFECT_BELLY_DRUM:
            case EFFECT_FILLET_AWAY:
                ADJUST_SCORE(-2);
                break;
            default:
                break;
            }
        }
        else
        {
            // low hp
            if (IsStatRaisingEffect(effect) || IsStatLoweringEffect(effect))
                ADJUST_SCORE(-2);

            // check other discouraged low hp effects
            switch (effect)
            {
            case EFFECT_BIDE:
            case EFFECT_CONVERSION:
            case EFFECT_REFLECT:
            case EFFECT_LIGHT_SCREEN:
            case EFFECT_MIST:
            case EFFECT_FOCUS_ENERGY:
            case EFFECT_RAGE:
            case EFFECT_CONVERSION_2:
            case EFFECT_LOCK_ON:
            case EFFECT_SAFEGUARD:
            case EFFECT_BELLY_DRUM:
            case EFFECT_PSYCH_UP:
            case EFFECT_MIRROR_COAT:
            case EFFECT_TICKLE:
            case EFFECT_SUNNY_DAY:
            case EFFECT_SANDSTORM:
            case EFFECT_HAIL:
            case EFFECT_SNOWSCAPE:
            case EFFECT_RAIN_DANCE:
            case EFFECT_FILLET_AWAY:
                ADJUST_SCORE(-2);
                break;
            default:
                break;
            }
        }
    }

    // consider target HP
    if (CanIndexMoveFaintTarget(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex, 0))
    {
        ADJUST_SCORE(DECENT_EFFECT);
    }
    else
    {
        if (AI_DATA->hpPercents[battlerDef] > 70)
        {
            // high HP
            ; // nothing yet
        }
        else if (AI_DATA->hpPercents[battlerDef] > 30)
        {
            // med HP - check discouraged effects
            switch (effect)
            {
            case EFFECT_ATTACK_UP:
            case EFFECT_ATTACK_UP_USER_ALLY:
            case EFFECT_DEFENSE_UP:
            case EFFECT_SPEED_UP:
            case EFFECT_SPECIAL_ATTACK_UP:
            case EFFECT_SPECIAL_DEFENSE_UP:
            case EFFECT_ACCURACY_UP:
            case EFFECT_EVASION_UP:
            case EFFECT_ATTACK_DOWN:
            case EFFECT_DEFENSE_DOWN:
            case EFFECT_SPEED_DOWN:
            case EFFECT_SPECIAL_ATTACK_DOWN:
            case EFFECT_SPECIAL_DEFENSE_DOWN:
            case EFFECT_ACCURACY_DOWN:
            case EFFECT_EVASION_DOWN:
            case EFFECT_MIST:
            case EFFECT_FOCUS_ENERGY:
            case EFFECT_ATTACK_UP_2:
            case EFFECT_DEFENSE_UP_2:
            case EFFECT_SPEED_UP_2:
            case EFFECT_SPECIAL_ATTACK_UP_2:
            case EFFECT_SPECIAL_DEFENSE_UP_2:
            case EFFECT_ACCURACY_UP_2:
            case EFFECT_EVASION_UP_2:
            case EFFECT_ATTACK_DOWN_2:
            case EFFECT_DEFENSE_DOWN_2:
            case EFFECT_SPEED_DOWN_2:
            case EFFECT_SPECIAL_ATTACK_DOWN_2:
            case EFFECT_SPECIAL_DEFENSE_DOWN_2:
            case EFFECT_ACCURACY_DOWN_2:
            case EFFECT_EVASION_DOWN_2:
            case EFFECT_POISON:
            case EFFECT_PAIN_SPLIT:
            case EFFECT_PERISH_SONG:
            case EFFECT_SAFEGUARD:
            case EFFECT_TICKLE:
            case EFFECT_COSMIC_POWER:
            case EFFECT_BULK_UP:
            case EFFECT_CALM_MIND:
            case EFFECT_DRAGON_DANCE:
            case EFFECT_DEFENSE_UP_3:
            case EFFECT_SPECIAL_ATTACK_UP_3:
                ADJUST_SCORE(-2);
                break;
            default:
                break;
            }
        }
        else
        {
            // low HP
            if (IS_MOVE_STATUS(move))
                ADJUST_SCORE(-2); // don't use status moves if target is at low health
        }
    }

    return score;
}

static s32 AI_PowerfulStatus(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    u32 moveEffect = gMovesInfo[move].effect;

    if (gMovesInfo[move].category != DAMAGE_CATEGORY_STATUS || gMovesInfo[AI_DATA->partnerMove].effect == moveEffect)
        return score;

    switch (moveEffect)
    {
    case EFFECT_TAILWIND:
        if (!gSideTimers[GetBattlerSide(battlerAtk)].tailwindTimer && !(gFieldStatuses & STATUS_FIELD_TRICK_ROOM && gFieldTimers.trickRoomTimer > 1))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_TRICK_ROOM:
        if (!(gFieldStatuses & STATUS_FIELD_TRICK_ROOM) && !HasMoveEffect(battlerDef, EFFECT_TRICK_ROOM))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_MAGIC_ROOM:
        if (!(gFieldStatuses & STATUS_FIELD_MAGIC_ROOM) && !HasMoveEffect(battlerDef, EFFECT_MAGIC_ROOM))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_WONDER_ROOM:
        if (!(gFieldStatuses & STATUS_FIELD_WONDER_ROOM) && !HasMoveEffect(battlerDef, EFFECT_WONDER_ROOM))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_GRAVITY:
        if (!(gFieldStatuses & STATUS_FIELD_GRAVITY))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_SAFEGUARD:
        if (!(gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_SAFEGUARD))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_MIST:
        if (!(gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_MIST))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_LIGHT_SCREEN:
    case EFFECT_REFLECT:
    case EFFECT_AURORA_VEIL:
        if (ShouldSetScreen(battlerAtk, battlerDef, moveEffect))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_SPIKES:
    case EFFECT_STEALTH_ROCK:
    case EFFECT_STICKY_WEB:
    case EFFECT_TOXIC_SPIKES:
        if (AI_ShouldSetUpHazards(battlerAtk, battlerDef, AI_DATA))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_GRASSY_TERRAIN:
        if (!(gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_ELECTRIC_TERRAIN:
        if (!(gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_PSYCHIC_TERRAIN:
        if (!(gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_MISTY_TERRAIN:
        if (!(gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_SANDSTORM:
        if (!(AI_GetWeather(AI_DATA) & (B_WEATHER_SANDSTORM | B_WEATHER_PRIMAL_ANY)))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_SUNNY_DAY:
        if (!(AI_GetWeather(AI_DATA) & (B_WEATHER_SUN | B_WEATHER_PRIMAL_ANY)))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_RAIN_DANCE:
        if (!(AI_GetWeather(AI_DATA) & (B_WEATHER_RAIN | B_WEATHER_PRIMAL_ANY)))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_HAIL:
        if (!(AI_GetWeather(AI_DATA) & (B_WEATHER_HAIL | B_WEATHER_PRIMAL_ANY)))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
        break;
    case EFFECT_SNOWSCAPE:
        if (!(AI_GetWeather(AI_DATA) & (B_WEATHER_SNOW | B_WEATHER_PRIMAL_ANY)))
            ADJUST_SCORE(POWERFUL_STATUS_MOVE);
    }

    return score;
}

static void AI_Flee(void)
{
    AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_FLEE | AI_ACTION_DO_NOT_ATTACK);
}

static void AI_Watch(void)
{
    AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_WATCH | AI_ACTION_DO_NOT_ATTACK);
}

// Roaming pokemon logic
static s32 AI_Roaming(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (IsBattlerTrapped(battlerAtk, FALSE))
        return score;

    AI_Flee();
    return score;
}

// Safari pokemon logic
static s32 AI_Safari(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    u32 safariFleeRate = gBattleStruct->safariEscapeFactor * 5; // Safari flee rate, from 0-20.

    if ((Random() % 100) < safariFleeRate)
        AI_Flee();
    else
        AI_Watch();

    return score;
}

// First battle logic
static s32 AI_FirstBattle(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (AI_DATA->hpPercents[battlerDef] <= 20)
        AI_Flee();

    return score;
}


// Dynamic AI Functions
// For specific battle scenarios

// Example - prefer attacking opposite foe in a tag battle
s32 AI_TagBattlePreferFoe(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (!(gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER))
    {
        /* not a partner battle */
        return score;
    }
    else if (!IsBattlerAlive(BATTLE_OPPOSITE(battlerAtk)) || !IsBattlerAlive(BATTLE_PARTNER(BATTLE_OPPOSITE(battlerAtk))))
    {
        /* partner is defeated so attack normally */
        return score;
    }
    else if (battlerDef == BATTLE_OPPOSITE(battlerAtk))
    {
        /* attacking along the diagonal */
        ADJUST_SCORE(-20);
    }

    return score;
}

static s32 AI_DynamicFunc(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (sDynamicAiFunc != NULL)
        score = sDynamicAiFunc(battlerAtk, battlerDef, move, score);
    return score;
}

void ScriptSetDynamicAiFunc(struct ScriptContext *ctx)
{
    AiScoreFunc func = (AiScoreFunc)ScriptReadWord(ctx);
    sDynamicAiFunc = func;
}

void ResetDynamicAiFunc(void)
{
    sDynamicAiFunc = NULL;
}

static s16 BattleAI_CalcScore(u8 battlerAtk, u8 battlerDef, u16 move, u32 aiFlags, s16 score)
{
    if (aiFlags & AI_FLAG_DYNAMIC_FUNC)
        score = AI_DynamicFunc(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_ROAMING)
        score = AI_Roaming(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_SAFARI)
        score = AI_Safari(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_FIRST_BATTLE)
        score = AI_FirstBattle(battlerAtk, battlerDef, move, score);

    if (aiFlags & AI_FLAG_CHECK_BAD_MOVE)
    {
        score = AI_CheckBadMove(battlerAtk, battlerDef, move, score);
        if (score <= 90) // Return early because AI_CheckBadMove outcome conluded the the move is bad
            return score;
    }

    ADJUST_SCORE(AI_CalcMoveEffectScore(battlerAtk, battlerDef, move, AI_DATA));
    if (score <= 90) // Return early because AI_CalcMoveEffectScore outcome conluded the the move is bad
        return score;

    if (aiFlags & AI_FLAG_TRY_TO_FAINT)
        score = AI_TryToFaint(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_CHECK_VIABILITY)
        score = AI_CheckViability(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_SETUP_FIRST_TURN)
        score = AI_SetupFirstTurn(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_RISKY)
        score = AI_Risky(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_PREFER_STRONGEST_MOVE)
        score = AI_PreferStrongestMove(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_PREFER_BATON_PASS)
        score = AI_PreferBatonPass(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_DOUBLE_BATTLE)
        score = AI_DoubleBattle(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_HP_AWARE)
        score = AI_HPAware(battlerAtk, battlerDef, move, score);
    if (aiFlags & AI_FLAG_POWERFUL_STATUS)
        score = AI_PowerfulStatus(battlerAtk, battlerDef, move, score);

    // if (aiFlag & AI_FLAG_NEGATE_UNAWARE)
    // if (aiFlag & AI_FLAG_WILL_SUICIDE)
    return score;
}