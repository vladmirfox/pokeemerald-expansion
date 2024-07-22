// static s32 UNUSED AI_EffectTemplate(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
// {
//     s32 tempScore = 0;

//     if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
//     {

//     }

//     if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
//     {

//     }

//     return tempScore;
// }

static s32 AI_EffectSleep(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AI_CanPutToSleep(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        IncreaseSleepScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_EffectYawn(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerDef] & STATUS3_YAWN)
            return BAD_MOVE;
        if (!AI_CanPutToSleep(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        IncreaseSleepScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_EffectAbsorb(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_LIQUID_OOZE)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_BIG_ROOT
         && aiData->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] >= AI_EFFECTIVENESS_x1)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectExplosion(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0)
            return BAD_MOVE;;
        if (IsAbilityOnField(ABILITY_DAMP) && !DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
            return BAD_MOVE;;
        if (CountUsablePartyMons(battlerAtk) == 0 && CountUsablePartyMons(battlerDef) != 0)
            return BAD_MOVE;;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_WILL_SUICIDE && gBattleMons[battlerDef].statStages[STAT_EVASION] < 7)
    {
        tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectMemento(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (CountUsablePartyMons(battlerAtk) == 0 || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
        if (gBattleMons[battlerDef].statStages[STAT_ATK] == MIN_STAT_STAGE && gBattleMons[battlerDef].statStages[STAT_SPATK] == MIN_STAT_STAGE)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_WILL_SUICIDE && gBattleMons[battlerDef].statStages[STAT_EVASION] < 7)
    {
        tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectFinalGambit(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (CountUsablePartyMons(battlerAtk) == 0 || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_WILL_SUICIDE && gBattleMons[battlerDef].statStages[STAT_EVASION] < 7)
    {
        tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectMirrorMove(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        // tempScore = AI_CheckBadMove(battlerAtk, battlerDef, predictedMove, score);
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->predictedMoves[battlerDef] != MOVE_NONE) {

        }
            // tempScore = AI_CheckViability(battlerAtk, battlerDef, gLastMoves[battlerDef], tempScore);
    }

    return tempScore;
}

static s32 AI_EffectAttackUp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gMovesInfo[move].effect == STAT_CHANGE_ATK)
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        else
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK_2);
    }

    return tempScore;
}

static s32 AI_EffectDefenseUp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gMovesInfo[move].effect == STAT_CHANGE_DEF)
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        else
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF_2);
    }

    return tempScore;
}

static s32 AI_EffectSpeedUp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
            return BAD_MOVE;
        if (AI_IsFaster(battlerAtk, battlerDef, move))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gMovesInfo[move].effect == STAT_CHANGE_SPEED)
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
    }   else
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED_2);

    return tempScore;
}

static s32 AI_EffectSpecialAttackUp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gMovesInfo[move].effect == STAT_CHANGE_SPATK)
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        else
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK_2);
    }

    return tempScore;
}

static s32 AI_EffectSpecialDefenseUp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gMovesInfo[move].effect == STAT_CHANGE_SPDEF)
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
        else
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF_2);
    }

    return tempScore;
}

static s32 AI_EffectAccuracyUp(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ACC))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ACC);
    }

    return tempScore;
}

static s32 AI_EffectEvasionUp(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_EVASION))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_EVASION);
    }

    return tempScore;
}

// TODO: Needs better AI Check Viability checks (currently such moves will never be used)
static s32 AI_EffectAttackDown(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK)) //|| !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;
        else if (aiData->abilities[battlerDef] == ABILITY_HYPER_CUTTER)
            return BAD_MOVE;

    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!ShouldLowerAttack(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += -2;
        if (gBattleMons[battlerDef].statStages[STAT_ATK] < DEFAULT_STAT_STAGE)
            tempScore += -2;
        else if (aiData->hpPercents[battlerAtk] <= 90)
            tempScore += -2;
        if (gBattleMons[battlerDef].statStages[STAT_ATK] > 3 && !AI_RandLessThan(50))
            tempScore += -2;
        else if (aiData->hpPercents[battlerDef] < 70)
            tempScore += -2;
    }

    return tempScore;
}

// TODO: Needs better AI Check Viability checks (currently such moves will never be used)
static s32 AI_EffectDefenseDown(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_DEF))
            return BAD_MOVE;

    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!ShouldLowerDefense(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += -2;
        if ((aiData->hpPercents[battlerAtk] < 70 && !AI_RandLessThan(50)) || (gBattleMons[battlerDef].statStages[STAT_DEF] <= 3 && !AI_RandLessThan(50)))
            tempScore += -2;
        if (aiData->hpPercents[battlerDef] <= 70)
            tempScore += -2;
    }

    return tempScore;
}

static s32 AI_EffectSpeedDown(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPEED))
            return BAD_MOVE;
        if (aiData->abilities[battlerDef] == ABILITY_SPEED_BOOST)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_IsSlower(battlerAtk, battlerDef, move))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

// TODO: Needs better AI Check Viability checks (currently such moves will never be used)
static s32 AI_EffectSpecialAttackDown(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPATK)) //|| !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!ShouldLowerSpAtk(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += -2;
        if (gBattleMons[battlerDef].statStages[STAT_SPATK] < DEFAULT_STAT_STAGE)
            tempScore += -2;
        else if (aiData->hpPercents[battlerAtk] <= 90)
            tempScore += -2;
        if (gBattleMons[battlerDef].statStages[STAT_SPATK] > 3 && !AI_RandLessThan(50))
            tempScore += -2;
        else if (aiData->hpPercents[battlerDef] < 70)
            tempScore += -2;
    }

    return tempScore;
}

// TODO: Needs better AI Check Viability checks (currently such moves will never be used)
static s32 AI_EffectSpecialDefenseDown(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!ShouldLowerSpDef(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += -2;
        if (aiData->hpPercents[battlerAtk] < 70 && !AI_RandLessThan(50))
            tempScore += -2;
        if (gBattleMons[battlerDef].statStages[STAT_SPDEF] <= 3 && !AI_RandLessThan(50))
            tempScore += -2;
        if (aiData->hpPercents[battlerDef] <= 70)
            tempScore += -2;
    }

    return tempScore;
}

// TODO: Needs better AI Check Viability checks (currently such moves will never be used)
static s32 AI_EffectAccuracyDown(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ACC))
            return BAD_MOVE;
        else if (aiData->abilities[battlerDef] == ABILITY_KEEN_EYE || aiData->abilities[battlerDef] == ABILITY_MINDS_EYE
              || (B_ILLUMINATE_EFFECT >= GEN_9 && aiData->abilities[battlerDef] == ABILITY_ILLUMINATE))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldLowerAccuracy(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += -2;
        if ((aiData->hpPercents[battlerAtk] < 70 || aiData->hpPercents[battlerDef] < 70) && AI_RandLessThan(100))
            tempScore += -2;
        if (gBattleMons[battlerDef].statStages[STAT_ACC] <= 4 && !AI_RandLessThan(80))
            tempScore += -2;
        if (gBattleMons[battlerDef].status1 & STATUS1_PSN_ANY && !AI_RandLessThan(70))
            tempScore += DECENT_EFFECT;
        if (gStatuses3[battlerDef] & STATUS3_LEECHSEED && !AI_RandLessThan(70))
            tempScore += DECENT_EFFECT;
        if (gStatuses3[battlerDef] & STATUS3_ROOTED && AI_RandLessThan(128))
            tempScore += WEAK_EFFECT;
        if (gBattleMons[battlerDef].status2 & STATUS2_CURSED && !AI_RandLessThan(70))
            tempScore += DECENT_EFFECT;
        else if (aiData->hpPercents[battlerAtk] < 40 || aiData->hpPercents[battlerDef] < 40 || !AI_RandLessThan(70))
            tempScore += -2;
    }

    return tempScore;
}

// TODO: Needs better AI Check Viability checks (currently such moves will never be used)
static s32 AI_EffectEvasionDown(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
            return BAD_MOVE;
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_DEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!ShouldLowerEvasion(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += -2;
        if ((aiData->hpPercents[battlerAtk] < 70 || gBattleMons[battlerDef].statStages[STAT_EVASION] <= 3) && !AI_RandLessThan(50))
            tempScore += -2;
        if (aiData->hpPercents[battlerDef] <= 70)
            tempScore += -2;
        if (gBattleMons[battlerAtk].statStages[STAT_ACC] < DEFAULT_STAT_STAGE)
            tempScore += WEAK_EFFECT;
        if (gBattleMons[battlerDef].statStages[STAT_EVASION] < 7 || aiData->abilities[battlerAtk] == ABILITY_NO_GUARD)
            tempScore += -2;
    }

    return tempScore;
}

// TODO: Missing checks
static s32 AI_EffectSpicyExtract(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (battlerAtk != BATTLE_PARTNER(battlerDef)
         && (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
         || aiData->abilities[battlerDef] == ABILITY_CLEAR_BODY
         || aiData->abilities[battlerDef] == ABILITY_GOOD_AS_GOLD
         || aiData->holdEffects[battlerDef] == HOLD_EFFECT_CLEAR_AMULET))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {

    }

    return tempScore;
}

static s32 AI_EffectBide(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!HasDamagingMove(battlerDef)
         || aiData->hpPercents[battlerAtk] < 30 //Close to death
         || gBattleMons[battlerDef].status1 & (STATUS1_SLEEP | STATUS1_FREEZE)) //No point in biding if can't take damage
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->hpPercents[battlerAtk] < 90)
            tempScore += -2; // Should be either removed or turned into increasing score
    }

    return tempScore;
}

static s32 AI_EffectAcupressure(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (DoesSubstituteBlockMove(battlerAtk, battlerDef, move) || AreBattlersStatsMaxed(battlerDef))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectCoil(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
            return BAD_MOVE;;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ACC);
    }

    return tempScore;
}

static s32 AI_EffectAttackAccuracyUp(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        // TODO
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ACC);
    }

    return tempScore;
}

// TODO: Handle the case for +2
static s32 UNUSED AI_EffectGrowth(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK)
         && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK))
            return BAD_MOVE;
        if (!HasDamagingMove(battlerAtk))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
    }

    return tempScore;
}

static s32 AI_EffectAttackSpAtkUp(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK)
         && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK))
            return BAD_MOVE;
        if (!HasDamagingMove(battlerAtk))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
    }

    return tempScore;
}

static s32 AI_EffectHaze(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        u32 stat;

        if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;

        for (stat = STAT_ATK; stat < NUM_BATTLE_STATS; stat++)
        {
            if (gBattleMons[battlerAtk].statStages[stat] > DEFAULT_STAT_STAGE || gBattleMons[BATTLE_PARTNER(battlerAtk)].statStages[stat] > DEFAULT_STAT_STAGE)
                return BAD_MOVE; // Don't reset own stat
        }
        for (stat = STAT_ATK; stat < NUM_BATTLE_STATS; stat++)
        {
            if (gBattleMons[battlerDef].statStages[stat] < DEFAULT_STAT_STAGE || gBattleMons[BATTLE_PARTNER(battlerDef)].statStages[stat] < DEFAULT_STAT_STAGE)
                return BAD_MOVE; // Don't reset opponents lowered stats
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += AI_TryToClearStats(battlerAtk, battlerDef, IsDoubleBattle());
    }

    return tempScore;
}

static s32 UNUSED AI_EffectRoar(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (CountUsablePartyMons(battlerDef) == 0)
            return BAD_MOVE;
        if (aiData->abilities[battlerDef] == ABILITY_SUCTION_CUPS)
            return BAD_MOVE;
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += AI_TryToClearStats(battlerAtk, battlerDef, IsDoubleBattle());
    }

    return tempScore;
}

// Should be handled in AI compare damageing moves
static s32 UNUSED AI_EffectMultiHit(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {

    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_MoveMakesContact(aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk], move)
          && aiData->abilities[battlerAtk] != ABILITY_MAGIC_GUARD
          && aiData->holdEffects[battlerDef] == HOLD_EFFECT_ROCKY_HELMET)
            tempScore += -2;
    }

    return tempScore;
}

static s32 AI_EffectConversion(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_BATTLER_OF_TYPE(battlerAtk, gMovesInfo[gBattleMons[battlerAtk].moves[0]].type))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!IS_BATTLER_OF_TYPE(battlerAtk, gMovesInfo[gBattleMons[battlerAtk].moves[0]].type))
            tempScore += WEAK_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectSwallow(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gDisableStructs[battlerAtk].stockpileCounter == 0)
            return BAD_MOVE;
        if (AtMaxHp(battlerAtk))
            return BAD_MOVE;
        if (aiData->hpPercents[battlerAtk] >= 80)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 healPercent = 0;
        switch (gDisableStructs[battlerAtk].stockpileCounter)
        {
        case 1:
            healPercent = 25;
            break;
        case 2:
            healPercent = 50;
            break;
        case 3:
            healPercent = 100;
            break;
        default:
            break;
        }

        if (ShouldRecover(battlerAtk, battlerDef, move, healPercent))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectRestoreHp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_RESTORE_HP:
        case EFFECT_SOFTBOILED:
        case EFFECT_ROOST:
            if (AtMaxHp(battlerAtk))
                return BAD_MOVE;
            if (aiData->hpPercents[battlerAtk] >= 90)
                return BAD_MOVE;
        case EFFECT_MORNING_SUN:
        case EFFECT_SYNTHESIS:
        case EFFECT_MOONLIGHT:
            if ((AI_GetWeather(aiData) & (B_WEATHER_RAIN | B_WEATHER_SANDSTORM | B_WEATHER_HAIL | B_WEATHER_SNOW | B_WEATHER_FOG)))
                return BAD_MOVE;
            if (AtMaxHp(battlerAtk))
                return BAD_MOVE;
            if (aiData->hpPercents[battlerAtk] >= 90)
                return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldRecover(battlerAtk, battlerDef, move, 50))
            tempScore += GOOD_EFFECT;
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_BIG_ROOT)
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPoison(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_MAGIC_GUARD)
            return BAD_MOVE;
        if (!AI_CanPoison(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        IncreasePoisonScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_ScreenEffects(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_LIGHTSCREEN)
            return BAD_MOVE;
        if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
        if (gMovesInfo[move].effect == EFFECT_AURORA_VEIL && !(AI_GetWeather(aiData) & (B_WEATHER_HAIL | B_WEATHER_SNOW)))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldSetScreen(battlerAtk, battlerDef, gMovesInfo[move].effect))
        {
            tempScore += BEST_EFFECT;
            if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_LIGHT_CLAY)
                tempScore += DECENT_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectRest(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!CanBeSlept(battlerAtk, aiData->abilities[battlerAtk])
         || AtMaxHp(battlerAtk)
         || aiData->hpPercents[battlerAtk] >= 90)
        {
            tempScore += BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!ShouldRecover(battlerAtk, battlerDef, move, 100))
            return tempScore;

        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_CURE_SLP
         || aiData->holdEffects[battlerAtk] == HOLD_EFFECT_CURE_STATUS
         || HasMoveEffect(EFFECT_SLEEP_TALK, battlerAtk)
         || HasMoveEffect(EFFECT_SNORE, battlerAtk)
         || aiData->abilities[battlerAtk] == ABILITY_SHED_SKIN
         || aiData->abilities[battlerAtk] == ABILITY_EARLY_BIRD
         || (AI_GetWeather(aiData) & B_WEATHER_RAIN && gWishFutureKnock.weatherDuration != 1 && aiData->abilities[battlerAtk] == ABILITY_HYDRATION && aiData->holdEffects[battlerAtk] != HOLD_EFFECT_UTILITY_UMBRELLA))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectOHKO(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (B_SHEER_COLD_IMMUNITY >= GEN_7 && move == MOVE_SHEER_COLD && IS_BATTLER_OF_TYPE(battlerDef, TYPE_ICE))
            tempScore += BAD_MOVE;
        if (!ShouldTryOHKO(battlerAtk, battlerDef, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], move))
            tempScore += BAD_MOVE;
        else if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            tempScore += BAD_MOVE;

        if (tempScore < 0)
            return tempScore;

    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gStatuses3[battlerAtk] & STATUS3_ALWAYS_HITS)
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectMeanLook(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IsBattlerTrapped(battlerDef, TRUE) || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
        {
            tempScore += BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldTrap(battlerAtk, battlerDef, move))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectFocusEnergy(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerAtk].status2 & STATUS2_FOCUS_ENERGY_ANY)
        {
            tempScore += BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_SUPER_LUCK
         || aiData->abilities[battlerAtk] == ABILITY_SNIPER
         || aiData->holdEffects[battlerAtk] == HOLD_EFFECT_SCOPE_LENS
         || HasHighCritRatioMove(battlerAtk))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectLaserFocus(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerAtk] & STATUS3_LASER_FOCUS
         || aiData->abilities[battlerDef] == ABILITY_SHELL_ARMOR
         || aiData->abilities[battlerDef] == ABILITY_BATTLE_ARMOR)
        {
            tempScore += BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_SUPER_LUCK
         || aiData->abilities[battlerAtk] == ABILITY_SNIPER
         || aiData->holdEffects[battlerAtk] == HOLD_EFFECT_SCOPE_LENS
         || HasHighCritRatioMove(battlerAtk))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectConfuse(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AI_CanConfuse(battlerAtk, battlerDef, aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        IncreaseConfusionScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_EffectParalyze(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AI_CanParalyze(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        IncreaseParalyzeScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 UNUSED AI_EffectSubstitute(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE
         || aiData->abilities[battlerDef] == ABILITY_INFILTRATOR
         || aiData->hpPercents[battlerAtk] <= 25
         || HasSubstituteIgnoringMove(battlerDef))
        {
            tempScore += BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasAnyKnownMove(battlerDef) && GetBestDmgFromBattler(battlerDef, battlerAtk) < gBattleMons[battlerAtk].maxHP / 4)
            tempScore += GOOD_EFFECT;
        if (gStatuses3[battlerDef] & STATUS3_PERISH_SONG)
            tempScore += GOOD_EFFECT;
        if (gBattleMons[battlerDef].status1 & STATUS1_SLEEP)
            tempScore += GOOD_EFFECT;
        else if (gBattleMons[battlerDef].status1 & (STATUS1_BURN | STATUS1_PSN_ANY | STATUS1_FROSTBITE))
            tempScore += DECENT_EFFECT;
        // TODO:
        // if (IsPredictedToSwitch(battlerDef, battlerAtk)
        //     tempScore += DECENT_EFFECT;
        if (HasMoveEffect(battlerDef, EFFECT_SLEEP)
         || HasMoveEffect(battlerDef, EFFECT_TOXIC)
         || HasMoveEffect(battlerDef, EFFECT_POISON)
         || HasMoveEffect(battlerDef, EFFECT_PARALYZE)
         || HasMoveEffect(battlerDef, EFFECT_WILL_O_WISP)
         || HasMoveEffect(battlerDef, EFFECT_CONFUSE)
         || HasMoveEffect(battlerDef, EFFECT_LEECH_SEED))
            tempScore += GOOD_EFFECT;
        if (!gBattleMons[battlerDef].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION && aiData->hpPercents[battlerAtk] > 70))
            tempScore += WEAK_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectMimic(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        {
            if (gLastMoves[battlerDef] == MOVE_NONE || gLastMoves[battlerDef] == 0xFFFF)
            {
                tempScore += BAD_MOVE;
                return tempScore;
            }
        }
        else if (aiData->predictedMoves[battlerDef] == MOVE_NONE)
        {
            // TODO predicted move separate from gLastMoves
            tempScore += BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_IsSlower(battlerAtk, battlerDef, MOVE_NONE)
         && gLastMoves[battlerDef] != MOVE_NONE
         && gLastMoves[battlerDef] != 0xFFFF)
        {
            // TODO:
            // tempScore = AI_CheckViability(battlerAtk, battlerDef, gLastMoves[battlerDef], score);
            return tempScore;
        }

    }

    return tempScore;
}

static s32 UNUSED AI_EffectLeechSeed(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerDef] & STATUS3_LEECHSEED
         || IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS)
         || aiData->abilities[battlerDef] == ABILITY_MAGIC_GUARD
         || aiData->abilities[battlerDef] == ABILITY_LIQUID_OOZE
         || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
        {
            tempScore = BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_RAPID_SPIN))
            return tempScore;

        if (!HasDamagingMove(battlerDef) || IsBattlerTrapped(battlerDef, FALSE))
            tempScore += DECENT_EFFECT;

        tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectHitEscapeOrEscape(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;
    u32 moveEffect = gMovesInfo[move].effect;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if ((moveEffect == EFFECT_PARTING_SHOT && CountUsablePartyMons(battlerAtk) == 0)
         || (gBattleTypeFlags & BATTLE_TYPE_TRAINER && moveEffect == EFFECT_TELEPORT))
        {
            tempScore = BAD_MOVE;
            return tempScore;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gMovesInfo[move].effect == EFFECT_TELEPORT)
        {
            if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battlerAtk) != B_SIDE_PLAYER)
                return tempScore;
        }

        if (CountUsablePartyMons(battlerAtk) == 0)
            return tempScore;

        if (!IsDoubleBattle())
        {
            switch (ShouldPivot(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, AI_THINKING_STRUCT->movesetIndex))
            {
            case 0: // no
                return BAD_MOVE;    // technically should go in CheckBadMove, but this is easier/less computationally demanding
            case 1: // maybe
                return tempScore;
            case 2: // yes
                return BEST_EFFECT;
            }
        }
    }

    return tempScore;
}

static s32 AI_EffectBatonPass(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (CountUsablePartyMons(battlerAtk) == 0)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldSwitch(battlerAtk, FALSE) && (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE))
            tempScore += BEST_EFFECT;
        else if (gStatuses3[battlerAtk] & (STATUS3_ROOTED | STATUS3_AQUA_RING | STATUS3_MAGNET_RISE | STATUS3_POWER_TRICK))
            tempScore += BEST_EFFECT;
        else if (AnyStatIsRaised(battlerAtk))
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectDisable(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX
         || gDisableStructs[battlerDef].disableTimer != 0
         || aiData->predictedMoves[battlerDef] == MOVE_NONE
         || (B_MENTAL_HERB >= GEN_5 && aiData->holdEffects[battlerDef] == HOLD_EFFECT_MENTAL_HERB))
            return BAD_MOVE;

        if (!PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
        {
            if (AI_IsSlower(battlerAtk, battlerDef, move)) // Attacker should go first
                return BAD_MOVE;
            if (gLastMoves[battlerDef] == MOVE_NONE || gLastMoves[battlerDef] == 0xFFFF)
                return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_IsFaster(battlerAtk, battlerDef, move) && CanTargetMoveFaintAi(gLastMoves[battlerDef], battlerDef, battlerAtk, 1))
            tempScore += GOOD_EFFECT; // Disable move that can kill attacker
    }

    return tempScore;
}

static s32 AI_EffectEncore(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX
         || gDisableStructs[battlerDef].encoreTimer != 0
         || aiData->predictedMoves[battlerDef] == MOVE_NONE
         || (B_MENTAL_HERB >= GEN_5 && aiData->holdEffects[battlerDef] == HOLD_EFFECT_MENTAL_HERB))
            return BAD_MOVE;

        if (!PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
        {
            if (AI_IsSlower(battlerAtk, battlerDef, move)) // Attacker should go first
                return BAD_MOVE;
            if (gLastMoves[battlerDef] == MOVE_NONE || gLastMoves[battlerDef] == 0xFFFF)
                return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMoveEffects[gMovesInfo[gLastMoves[battlerDef]].effect].encourageEncore)
            tempScore += BEST_EFFECT;

    }

    return tempScore;
}

static s32 AI_EffectSleepTalkSnore(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IsWakeupTurn(battlerAtk) || !AI_IsBattlerAsleepOrComatose(battlerAtk))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerAtk].status1 & STATUS1_SLEEP)
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectLockOn(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerDef] & STATUS3_ALWAYS_HITS
         || aiData->abilities[battlerAtk] == ABILITY_NO_GUARD
         || aiData->abilities[battlerDef] == ABILITY_NO_GUARD
         || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveEffect(battlerAtk, EFFECT_OHKO)
         || HasMoveWithLowAccuracy(battlerAtk, battlerDef, 85, TRUE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef]))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectDestinyBond(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerDef].status2 & STATUS2_DESTINY_BOND
         || GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_IsFaster(battlerAtk, battlerDef, move) && CanTargetFaintAi(battlerDef, battlerAtk))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectWish(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gWishFutureKnock.wishCounter[battlerAtk] != 0)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldUseWishAromatherapy(battlerAtk, battlerDef, move))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectHealBell(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AnyPartyMemberStatused(battlerAtk, gMovesInfo[move].soundMove) || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldUseWishAromatherapy(battlerAtk, battlerDef, move))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectCurse(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GHOST) && aiData->abilities[battlerDef] == ABILITY_MAGIC_GUARD)
            return BAD_MOVE;

        if (IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GHOST))
        {
            if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                return BAD_MOVE;
            if (gBattleMons[battlerDef].status2 & STATUS2_CURSED)
                return BAD_MOVE;
            if (aiData->hpPercents[battlerAtk] <= 50)
                return BAD_MOVE;
        }
        else
        {
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK))
                return BAD_MOVE;
            if (!HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                return BAD_MOVE;
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GHOST))
        {
            if (IsBattlerTrapped(battlerDef, TRUE))
                tempScore =+ GOOD_EFFECT;
            else
                tempScore =+ WEAK_EFFECT;
        }
        else
        {
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        }
    }

    return tempScore;
}

static s32 AI_EffectProtect(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        switch (move)
        {
        case MOVE_QUICK_GUARD:
        case MOVE_WIDE_GUARD:
        case MOVE_CRAFTY_SHIELD:
            if (!IsDoubleBattle())
                return BAD_MOVE;
            break;
        case MOVE_MAT_BLOCK:
            if (!gDisableStructs[battlerAtk].isFirstTurn)
                return BAD_MOVE;
            break;
        }

        if (IsBattlerIncapacitated(battlerDef, aiData->abilities[battlerDef]))
            return BAD_MOVE;

        if (move != MOVE_QUICK_GUARD
         && move != MOVE_WIDE_GUARD
         && move != MOVE_CRAFTY_SHIELD) // These moves have infinite usage
        {
            if (GetBattlerSecondaryDamage(battlerAtk) >= gBattleMons[battlerAtk].hp
             && aiData->abilities[battlerDef] != ABILITY_MOXIE
             && aiData->abilities[battlerDef] != ABILITY_BEAST_BOOST)
                return BAD_MOVE; //Don't protect if you're going to faint after protecting
            if (gDisableStructs[battlerAtk].protectUses == 1 && Random() % 100 < 50)
                return BAD_MOVE; //Don't protect if you're going to faint after protecting
            if (gDisableStructs[battlerAtk].protectUses >= 2)
                return BAD_MOVE; //Don't protect if you're going to faint after protecting
        }

        /*if (IsDoubleBattle()) //Make the regular AI know how to use Protect minimally in Doubles
        {
            u8 shouldProtect = ShouldProtect(battlerAtk, battlerDef, move);
            if (shouldProtect == USE_PROTECT || shouldProtect == PROTECT_FROM_FOES)
                IncreaseFoeProtectionViability(&viability, 0xFF, battlerAtk, battlerDef);
            else if (shouldProtect == PROTECT_FROM_ALLIES)
                IncreaseAllyProtectionViability(&viability, 0xFF);
        }*/
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (predictedMove == 0xFFFF)
            predictedMove = MOVE_NONE;

        switch (move)
        {
        case MOVE_QUICK_GUARD:
            if (predictedMove != MOVE_NONE && gMovesInfo[predictedMove].priority > 0)
                ProtectChecks(battlerAtk, battlerDef, move, predictedMove, &tempScore);
            break;
        case MOVE_WIDE_GUARD:
            if (predictedMove != MOVE_NONE && AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & (MOVE_TARGET_FOES_AND_ALLY | MOVE_TARGET_BOTH))
            {
                ProtectChecks(battlerAtk, battlerDef, move, predictedMove, &tempScore);
            }
            else if (IsDoubleBattle() && AI_GetBattlerMoveTargetType(BATTLE_PARTNER(battlerAtk), aiData->partnerMove) & MOVE_TARGET_FOES_AND_ALLY)
            {
                if (aiData->abilities[battlerAtk] != ABILITY_TELEPATHY)
                  ProtectChecks(battlerAtk, battlerDef, move, predictedMove, &tempScore);
            }
            break;
        case MOVE_CRAFTY_SHIELD:
            if (predictedMove != MOVE_NONE && IS_MOVE_STATUS(predictedMove) && !(AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & MOVE_TARGET_USER))
                ProtectChecks(battlerAtk, battlerDef, move, predictedMove, &tempScore);
            break;
        case MOVE_MAT_BLOCK:
            if (gDisableStructs[battlerAtk].isFirstTurn && predictedMove != MOVE_NONE
              && !IS_MOVE_STATUS(predictedMove) && !(AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & MOVE_TARGET_USER))
                ProtectChecks(battlerAtk, battlerDef, move, predictedMove, &tempScore);
            break;
        case MOVE_KINGS_SHIELD:
            if (aiData->abilities[battlerAtk] == ABILITY_STANCE_CHANGE //Special logic for Aegislash
             && gBattleMons[battlerAtk].species == SPECIES_AEGISLASH_BLADE
             && !IsBattlerIncapacitated(battlerDef, aiData->abilities[battlerDef]))
            {
                tempScore += GOOD_EFFECT;
                break;
            }
            //fallthrough
        default: // protect
            ProtectChecks(battlerAtk, battlerDef, move, predictedMove, &tempScore);
            break;
        }
    }

    return tempScore;
}

static s32 AI_EffectEndure(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerAtk].hp == 1 || GetBattlerSecondaryDamage(battlerAtk)) //Don't use Endure if you'll die after using it
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (CanTargetFaintAi(battlerDef, battlerAtk))
        {
            if (gBattleMons[battlerAtk].hp > gBattleMons[battlerAtk].maxHP / 4 // Pinch berry couldn't have activated yet
             && IsPinchBerryItemEffect(aiData->holdEffects[battlerAtk]))
                tempScore += GOOD_EFFECT;
            else if ((gBattleMons[battlerAtk].hp > 1) // Only spam endure for Flail/Reversal if you're not at Min Health
             && (HasMoveEffect(battlerAtk, EFFECT_FLAIL) || HasMoveEffect(battlerAtk, EFFECT_ENDEAVOR)))
                tempScore += GOOD_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectSpikes(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideTimers[GetBattlerSide(battlerDef)].spikesAmount >= 3)
            return BAD_MOVE;
        if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove)
         && gSideTimers[GetBattlerSide(battlerDef)].spikesAmount == 2)
            return BAD_MOVE;
        if (!AI_ShouldSetUpHazards(battlerAtk, battlerDef, aiData))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gDisableStructs[battlerAtk].isFirstTurn)
            tempScore += BEST_EFFECT;
        else
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectStealthRock(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideTimers[GetBattlerSide(battlerDef)].stealthRockAmount > 0)
            return BAD_MOVE;
        if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove)) //Only one mon needs to set up Stealth Rocks
            return BAD_MOVE;
        if (!AI_ShouldSetUpHazards(battlerAtk, battlerDef, aiData))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gDisableStructs[battlerAtk].isFirstTurn)
            tempScore += BEST_EFFECT;
        else
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectStickyWeb(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideTimers[GetBattlerSide(battlerDef)].stickyWebAmount)
            return BAD_MOVE;
        else if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove) && gSideTimers[GetBattlerSide(battlerDef)].stickyWebAmount)
            return BAD_MOVE;
        if (!AI_ShouldSetUpHazards(battlerAtk, battlerDef, aiData))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gDisableStructs[battlerAtk].isFirstTurn)
            tempScore += BEST_EFFECT;
        else
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectToxicSpikes(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideTimers[GetBattlerSide(battlerDef)].toxicSpikesAmount >= 2)
            return BAD_MOVE;
        if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove) && gSideTimers[GetBattlerSide(battlerDef)].toxicSpikesAmount == 1)
            return BAD_MOVE;
        if (!AI_ShouldSetUpHazards(battlerAtk, battlerDef, aiData))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gDisableStructs[battlerAtk].isFirstTurn)
            tempScore += BEST_EFFECT;
        else
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectForesight(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_SCRAPPY || aiData->abilities[battlerAtk] == ABILITY_MINDS_EYE)
            return BAD_MOVE;
        if (gBattleMons[battlerDef].status2 & STATUS2_FORESIGHT)
            return BAD_MOVE;
        if (gBattleMons[battlerDef].statStages[STAT_EVASION] <= 4)
            return BAD_MOVE;
        if (!IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST))
            return BAD_MOVE;
        if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerDef].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE
         || (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST) && (HasMoveWithType(battlerAtk, TYPE_NORMAL) || HasMoveWithType(battlerAtk, TYPE_FIGHTING))))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectMiracleEye(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerDef] & STATUS3_MIRACLE_EYED)
            return BAD_MOVE;
        if (gBattleMons[battlerDef].statStages[STAT_EVASION] <= 4)
            return BAD_MOVE;
        if (!IS_BATTLER_OF_TYPE(battlerDef, TYPE_DARK))
            return BAD_MOVE;
        if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerDef].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE
          || (IS_BATTLER_OF_TYPE(battlerDef, TYPE_DARK) && (HasMoveWithType(battlerAtk, TYPE_PSYCHIC))))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPerishSong(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IsDoubleBattle())
        {
            if (CountUsablePartyMons(battlerAtk) == 0
             && aiData->abilities[battlerAtk] != ABILITY_SOUNDPROOF
             && aiData->abilities[BATTLE_PARTNER(battlerAtk)] != ABILITY_SOUNDPROOF
             && CountUsablePartyMons(FOE(battlerAtk)) >= 1)
                return BAD_MOVE; // Don't wipe your team if you're going to lose

            if ((!IsBattlerAlive(FOE(battlerAtk)) || aiData->abilities[FOE(battlerAtk)] == ABILITY_SOUNDPROOF
             || gStatuses3[FOE(battlerAtk)] & STATUS3_PERISH_SONG)
             && (!IsBattlerAlive(BATTLE_PARTNER(FOE(battlerAtk))) || aiData->abilities[BATTLE_PARTNER(FOE(battlerAtk))] == ABILITY_SOUNDPROOF
             || gStatuses3[BATTLE_PARTNER(FOE(battlerAtk))] & STATUS3_PERISH_SONG))
                return BAD_MOVE; // Both enemies are perish songed

            if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                return BAD_MOVE;
        }
        else
        {
            if (CountUsablePartyMons(battlerAtk) == 0 && aiData->abilities[battlerAtk] != ABILITY_SOUNDPROOF
             && CountUsablePartyMons(battlerDef) >= 1)
                return BAD_MOVE;

            if (gStatuses3[FOE(battlerAtk)] & STATUS3_PERISH_SONG || aiData->abilities[FOE(battlerAtk)] == ABILITY_SOUNDPROOF)
                return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IsBattlerTrapped(battlerDef, TRUE))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectSandstorm(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AI_GetWeather(aiData) & (B_WEATHER_SANDSTORM | B_WEATHER_PRIMAL_ANY) || IsMoveEffectWeather(aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldSetSandstorm(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
        {
            tempScore += DECENT_EFFECT;
            if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_SMOOTH_ROCK)
                tempScore += WEAK_EFFECT;
            if (HasMoveEffect(battlerDef, EFFECT_MORNING_SUN)
             || HasMoveEffect(battlerDef, EFFECT_SYNTHESIS)
             || HasMoveEffect(battlerDef, EFFECT_MOONLIGHT))
                tempScore += WEAK_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectHail(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AI_GetWeather(aiData) & (B_WEATHER_HAIL | B_WEATHER_PRIMAL_ANY) || IsMoveEffectWeather(aiData->partnerMove))
            return BAD_MOVE;
        if (AI_GetWeather(aiData) & B_WEATHER_SNOW)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldSetHail(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
        {
            if ((HasMoveEffect(battlerAtk, EFFECT_AURORA_VEIL) || HasMoveEffect(BATTLE_PARTNER(battlerAtk), EFFECT_AURORA_VEIL))
             && ShouldSetScreen(battlerAtk, battlerDef, EFFECT_AURORA_VEIL))
                tempScore += GOOD_EFFECT;

            tempScore += DECENT_EFFECT;
            if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_ICY_ROCK)
                tempScore += WEAK_EFFECT;
            if (HasMoveEffect(battlerDef, EFFECT_MORNING_SUN)
             || HasMoveEffect(battlerDef, EFFECT_SYNTHESIS)
             || HasMoveEffect(battlerDef, EFFECT_MOONLIGHT))
                tempScore += WEAK_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectSnowscape(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AI_GetWeather(aiData) & (B_WEATHER_SNOW | B_WEATHER_PRIMAL_ANY) || IsMoveEffectWeather(aiData->partnerMove))
            return BAD_MOVE;
        if (AI_GetWeather(aiData) & B_WEATHER_HAIL)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldSetSnow(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
        {
            if ((HasMoveEffect(battlerAtk, EFFECT_AURORA_VEIL) || HasMoveEffect(BATTLE_PARTNER(battlerAtk), EFFECT_AURORA_VEIL))
             && ShouldSetScreen(battlerAtk, battlerDef, EFFECT_AURORA_VEIL))
                tempScore += GOOD_EFFECT;

            tempScore += DECENT_EFFECT;
            if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_ICY_ROCK)
                tempScore += WEAK_EFFECT;
            if (HasMoveEffect(battlerDef, EFFECT_MORNING_SUN)
             || HasMoveEffect(battlerDef, EFFECT_SYNTHESIS)
             || HasMoveEffect(battlerDef, EFFECT_MOONLIGHT))
                tempScore += WEAK_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectRainDance(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AI_GetWeather(aiData) & (B_WEATHER_RAIN | B_WEATHER_PRIMAL_ANY) || IsMoveEffectWeather(aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldSetRain(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
        {
            tempScore += DECENT_EFFECT;
            if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_DAMP_ROCK)
                tempScore += WEAK_EFFECT;
            if (HasMoveEffect(battlerDef, EFFECT_MORNING_SUN)
             || HasMoveEffect(battlerDef, EFFECT_SYNTHESIS)
             || HasMoveEffect(battlerDef, EFFECT_SOLAR_BEAM)
             || HasMoveEffect(battlerDef, EFFECT_MOONLIGHT))
                tempScore += WEAK_EFFECT;
            if (HasMoveWithType(battlerDef, TYPE_FIRE) || HasMoveWithType(BATTLE_PARTNER(battlerDef), TYPE_FIRE))
                tempScore += WEAK_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectSunnyDay(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AI_GetWeather(aiData) & (B_WEATHER_SUN | B_WEATHER_PRIMAL_ANY) || IsMoveEffectWeather(aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldSetSun(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
        {
            tempScore += DECENT_EFFECT;
            if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_HEAT_ROCK)
                tempScore += WEAK_EFFECT;
            if (HasMoveWithType(battlerDef, TYPE_WATER) || HasMoveWithType(BATTLE_PARTNER(battlerDef), TYPE_WATER))
                tempScore += WEAK_EFFECT;
            if (HasMoveEffect(battlerDef, EFFECT_THUNDER) || HasMoveEffect(BATTLE_PARTNER(battlerDef), EFFECT_THUNDER))
                tempScore += WEAK_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectBellyDrum(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_CONTRARY)
            return BAD_MOVE;
        if (aiData->hpPercents[battlerAtk] <= 60)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!CanTargetFaintAi(battlerDef, battlerAtk)
         && gBattleMons[battlerAtk].statStages[STAT_ATK] < MAX_STAT_STAGE - 2
         && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL)
         && aiData->abilities[battlerAtk] != ABILITY_CONTRARY)
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPsychUp(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        u32 stat;
        for (stat = STAT_ATK; stat < NUM_BATTLE_STATS; stat++)
        {
            if (gBattleMons[battlerAtk].statStages[stat] > DEFAULT_STAT_STAGE || gBattleMons[BATTLE_PARTNER(battlerAtk)].statStages[stat] > DEFAULT_STAT_STAGE)
                return BAD_MOVE;  // Don't want to reset our boosted stats
        }
        for (stat = STAT_ATK; stat < NUM_BATTLE_STATS; stat++)
        {
            if (gBattleMons[battlerDef].statStages[stat] < DEFAULT_STAT_STAGE || gBattleMons[BATTLE_PARTNER(battlerDef)].statStages[stat] < DEFAULT_STAT_STAGE)
                return BAD_MOVE; //Don't want to copy enemy lowered stats
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += AI_ShouldCopyStatChanges(battlerAtk, battlerDef);
    }

    return tempScore;
}

static s32 AI_EffectSemiInvulnerable(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;
    u32 predictedMove = aiData->predictedMoves[battlerDef];

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (predictedMove != MOVE_NONE
         && AI_IsSlower(battlerAtk, battlerDef, move)
         && gMovesInfo[predictedMove].effect == EFFECT_SEMI_INVULNERABLE)
            return BAD_MOVE; // Don't Fly/dig/etc if opponent is going to fly/dig/etc after you

        if (BattlerWillFaintFromWeather(battlerAtk, aiData->abilities[battlerAtk])
         && (move == MOVE_FLY || move == MOVE_BOUNCE))
            return BAD_MOVE; // Attacker will faint while in the air
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (predictedMove != MOVE_NONE && !IsDoubleBattle())
        {
            if ((AI_IsFaster(battlerAtk, battlerDef, move))
             && (gMovesInfo[predictedMove].effect == EFFECT_EXPLOSION || gMovesInfo[predictedMove].effect == EFFECT_PROTECT))
                tempScore += GOOD_EFFECT;
            else if (gMovesInfo[predictedMove].effect == EFFECT_SEMI_INVULNERABLE && !(gStatuses3[battlerDef] & STATUS3_SEMI_INVULNERABLE))
                tempScore += GOOD_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectDefenseCurl(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveEffect(battlerAtk, EFFECT_ROLLOUT) && !(gBattleMons[battlerAtk].status2 & STATUS2_DEFENSE_CURL))
            tempScore += DECENT_EFFECT;
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
    }

    return tempScore;
}

static s32 AI_EffectFirstTurnOnly(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!gDisableStructs[battlerAtk].isFirstTurn)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (MoveHasAdditionalEffectWithChance(move, MOVE_EFFECT_FLINCH, 100) && ShouldFakeOut(battlerAtk, battlerDef, move))
            tempScore += GOOD_EFFECT;
        else if (gDisableStructs[battlerAtk].isFirstTurn && GetBestDmgMoveFromBattler(battlerAtk, battlerDef) == move)
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32  AI_EffectStockpile(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gDisableStructs[battlerAtk].stockpileCounter >= 3)
            return BAD_MOVE;
        if (aiData->abilities[battlerAtk] == ABILITY_CONTRARY)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveEffect(battlerAtk, EFFECT_SWALLOW) || HasMoveEffect(battlerAtk, EFFECT_SPIT_UP))
            tempScore += DECENT_EFFECT;
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);

    }

    return tempScore;
}

static s32 AI_EffectSwagger(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AI_CanConfuse(battlerAtk, battlerDef, aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveEffect(battlerAtk, EFFECT_FOUL_PLAY)
         || HasMoveEffect(battlerAtk, EFFECT_PSYCH_UP)
         || HasMoveWithAdditionalEffect(battlerAtk, MOVE_EFFECT_SPECTRAL_THIEF))
            tempScore += DECENT_EFFECT;
        if (aiData->abilities[battlerDef] == ABILITY_CONTRARY)
            tempScore += GOOD_EFFECT;
        IncreaseConfusionScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_EffectFlatter(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AI_CanConfuse(battlerAtk, battlerDef, aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveEffect(battlerAtk, EFFECT_FOUL_PLAY)
         || HasMoveEffect(battlerAtk, EFFECT_PSYCH_UP)
         || HasMoveWithAdditionalEffect(battlerAtk, MOVE_EFFECT_SPECTRAL_THIEF))
            tempScore += DECENT_EFFECT;
        if (aiData->abilities[battlerDef] == ABILITY_CONTRARY)
            tempScore += GOOD_EFFECT;
        IncreaseConfusionScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_EffectFuryCutter(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!IsDoubleBattle() && aiData->holdEffects[battlerAtk] == HOLD_EFFECT_METRONOME)
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectAttract(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AI_CanBeInfatuated(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            return BAD_MOVE;
        if (!IsDoubleBattle()
         && (AI_IsSlower(battlerAtk, battlerDef, move))
         && BattlerWillFaintFromSecondaryDamage(battlerDef, aiData->abilities[battlerDef]))
            return BAD_MOVE; // Don't use if the attract won't have a change to activate
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerDef].status1 & STATUS1_ANY
         || (gBattleMons[battlerDef].status2 & STATUS2_CONFUSION)
         || IsBattlerTrapped(battlerDef, TRUE))
            tempScore += GOOD_EFFECT;
        else
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectSafeguard(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_SAFEGUARD
         || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectDefog(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
            if (gSideStatuses[GetBattlerSide(battlerDef)] & (SIDE_STATUS_SCREEN_ANY | SIDE_STATUS_SAFEGUARD | SIDE_STATUS_MIST)
             || gSideTimers[GetBattlerSide(battlerDef)].auroraVeilTimer != 0
             || gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY)
                return BAD_MOVE;

            if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                return BAD_MOVE;

            if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_HAZARDS_ANY)
                return BAD_MOVE;

            if (IsDoubleBattle()
             && IsHazardMoveEffect(gMovesInfo[aiData->partnerMove].effect) // Partner is going to set up hazards
             && AI_IsSlower(battlerAtk, BATTLE_PARTNER(battlerAtk), move)) // Partner going first

            // evasion check
            if (gBattleMons[battlerDef].statStages[STAT_EVASION] == MIN_STAT_STAGE
             || ((aiData->abilities[battlerDef] == ABILITY_CONTRARY) && !IS_TARGETING_PARTNER(battlerAtk, battlerDef))) // don't want to raise target stats unless its your partner
                return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if ((gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerAtk) != 0)
         || (gSideStatuses[GetBattlerSide(battlerDef)] & (SIDE_STATUS_SCREEN_ANY | SIDE_STATUS_SAFEGUARD | SIDE_STATUS_MIST)))
            tempScore += GOOD_EFFECT;
        else if (ShouldLowerEvasion(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectTorment(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return BAD_MOVE;
        if (gBattleMons[battlerDef].status2 & STATUS2_TORMENT || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
        if (B_MENTAL_HERB >= GEN_5 && aiData->holdEffects[battlerDef] == HOLD_EFFECT_MENTAL_HERB)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectWillOWisp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)

{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_MAGIC_GUARD)
            return BAD_MOVE;
        if (!AI_CanBurn(battlerAtk, battlerDef, aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        IncreaseBurnScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_EffectFollowMe(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IsDoubleBattle())
            return BAD_MOVE;

        if (!IsBattlerAlive(BATTLE_PARTNER(battlerAtk))
         || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove)
         || (aiData->partnerMove != MOVE_NONE && IS_MOVE_STATUS(aiData->partnerMove))
         || *(gBattleStruct->monToSwitchIntoId + BATTLE_PARTNER(battlerAtk)) != PARTY_SIZE) //Partner is switching out.
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (move != MOVE_SPOTLIGHT
          && !IsBattlerIncapacitated(battlerDef, aiData->abilities[battlerDef])
          && (move != MOVE_RAGE_POWDER || IsAffectedByPowder(battlerDef, aiData->abilities[battlerDef], aiData->holdEffects[battlerDef])) // Rage Powder doesn't affect powder immunities
          && IsBattlerAlive(BATTLE_PARTNER(battlerAtk)))
        {
            u32 predictedMoveOnPartner = gLastMoves[BATTLE_PARTNER(battlerAtk)];
            if (predictedMoveOnPartner != MOVE_NONE && !IS_MOVE_STATUS(predictedMoveOnPartner))
                tempScore += GOOD_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectCharge(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerAtk] & STATUS3_CHARGED_UP)
            return BAD_MOVE;
        if (!HasMoveWithType(battlerAtk, TYPE_ELECTRIC))
            return BAD_MOVE;
        if (B_CHARGE_SPDEF_RAISE >= GEN_5
         && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasDamagingMoveOfType(battlerAtk, TYPE_ELECTRIC))
            tempScore += DECENT_EFFECT;
        if (B_CHARGE_SPDEF_RAISE >= GEN_5)
            tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
    }

    return tempScore;
}

static s32 AI_EffectTaunt(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gDisableStructs[battlerDef].tauntTimer > 0)
            return BAD_MOVE;
        if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IS_MOVE_STATUS(aiData->predictedMoves[battlerDef]))
            tempScore += GOOD_EFFECT;
        else if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_STATUS))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectTrick(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_STICKY_HOLD)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_ShouldTrickOrBestow(battlerAtk, battlerDef, move, aiData))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectBestow(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_NONE)
            return BAD_MOVE;
        if (!CanBattlerGetOrLoseItem(battlerAtk, gBattleMons[battlerAtk].item)) // AI knows its own item
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_ShouldTrickOrBestow(battlerAtk, battlerDef, move, aiData))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectRolePlay(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == aiData->abilities[battlerDef]
         || aiData->abilities[battlerDef] == ABILITY_NONE
         || gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeSuppressed
         || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeCopied)
            return BAD_MOVE;
        if (IsAbilityOfRating(aiData->abilities[battlerAtk], 5))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeSuppressed
         && !gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeCopied
         && !IsAbilityOfRating(aiData->abilities[battlerAtk], 5)
         && IsAbilityOfRating(aiData->abilities[battlerDef], 5))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectIngrain(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerAtk] & STATUS3_ROOTED)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += WEAK_EFFECT;
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_BIG_ROOT)
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectMagicCoat(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!HasMagicCoatAffectedMove(battlerDef))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (IS_MOVE_STATUS(predictedMove)
         && AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & (MOVE_TARGET_SELECTED | MOVE_TARGET_OPPONENTS_FIELD | MOVE_TARGET_BOTH))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectRecycle(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (GetUsedHeldItem(battlerAtk) == 0 || gBattleMons[battlerAtk].item != 0)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (GetUsedHeldItem(battlerAtk) != ITEM_NONE)
            tempScore += WEAK_EFFECT;
        if (IsRecycleEncouragedItem(GetUsedHeldItem(battlerAtk)))
            tempScore += WEAK_EFFECT;
        if (aiData->abilities[battlerAtk] == ABILITY_RIPEN)
        {
            u32 item = GetUsedHeldItem(battlerAtk);
            u32 toHeal = (ItemId_GetHoldEffectParam(item) == 10) ? 10 : gBattleMons[battlerAtk].maxHP / ItemId_GetHoldEffectParam(item);

            if (IsStatBoostingBerry(item) && aiData->hpPercents[battlerAtk] > 60)
                tempScore += WEAK_EFFECT;
            else if (ShouldRestoreHpBerry(battlerAtk, item) && !CanAIFaintTarget(battlerAtk, battlerDef, 0)
              && ((GetWhichBattlerFaster(battlerAtk, battlerDef, TRUE) == 1 && CanTargetFaintAiWithMod(battlerDef, battlerAtk, 0, 0))
               || !CanTargetFaintAiWithMod(battlerDef, battlerAtk, toHeal, 0)))
                tempScore += WEAK_EFFECT;    // Recycle healing berry if we can't otherwise faint the target and the target wont kill us after we activate the berry
        }
    }

    return tempScore;
}

static s32 AI_EffectBrickBreak(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_REFLECT)
            tempScore += DECENT_EFFECT;
        if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_LIGHTSCREEN)
            tempScore += DECENT_EFFECT;
        if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_AURORA_VEIL)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectSkillSwap(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_NONE || aiData->abilities[battlerDef] == ABILITY_NONE
         || gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeSwapped
         || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeSwapped
         || aiData->holdEffects[battlerDef] == HOLD_EFFECT_ABILITY_SHIELD)
            return BAD_MOVE;
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gAbilitiesInfo[aiData->abilities[battlerDef]].aiRating > gAbilitiesInfo[aiData->abilities[battlerAtk]].aiRating)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectWorrySeed(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_INSOMNIA
         || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeOverwritten
         || aiData->holdEffects[battlerDef] == HOLD_EFFECT_ABILITY_SHIELD)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IsAbilityOfRating(aiData->abilities[battlerDef], 5))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectGastroAcid(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerDef] & STATUS3_GASTRO_ACID
         || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeSuppressed)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IsAbilityOfRating(aiData->abilities[battlerDef], 5))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectSimpleBeam(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_SIMPLE
         || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeOverwritten
         || aiData->holdEffects[battlerDef] == HOLD_EFFECT_ABILITY_SHIELD)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IsAbilityOfRating(aiData->abilities[battlerDef], 5))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectEntrainment(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_NONE
         || gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeCopied
         || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeOverwritten
         || aiData->holdEffects[battlerAtk] == HOLD_EFFECT_ABILITY_SHIELD)
            return BAD_MOVE;
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if ((IsAbilityOfRating(aiData->abilities[battlerDef], 5) || gAbilitiesInfo[aiData->abilities[battlerAtk]].aiRating <= 0)
         && (aiData->abilities[battlerDef] != aiData->abilities[battlerAtk] && !(gStatuses3[battlerDef] & STATUS3_GASTRO_ACID)))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectImprison(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerAtk] & STATUS3_IMPRISONED_OTHERS)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (predictedMove != MOVE_NONE && HasMove(battlerAtk, predictedMove))
            tempScore += DECENT_EFFECT;
        if (gDisableStructs[battlerAtk].isFirstTurn == 0)
            tempScore += WEAK_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectRefresh(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!(gBattleMons[battlerDef].status1 & (STATUS1_PSN_ANY | STATUS1_BURN | STATUS1_PARALYSIS | STATUS1_FROSTBITE)))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerAtk].status1 & STATUS1_ANY)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectTakeHeart(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if ((!(gBattleMons[battlerAtk].status1 & STATUS1_ANY)
          || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_JUNGLE_HEALING)
          || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_HEAL_BELL)
          || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_AROMATHERAPY))
          && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK)
          && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerAtk].status1 & STATUS1_ANY
         || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK)
         || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPsychoShift(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerAtk].status1 & STATUS1_PSN_ANY && !AI_CanPoison(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].status1 & STATUS1_BURN && !AI_CanBurn(battlerAtk, battlerDef,
            aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].status1 & STATUS1_FROSTBITE && !AI_CanGiveFrostbite(battlerAtk, battlerDef,
            aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].status1 & STATUS1_PARALYSIS && !AI_CanParalyze(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].status1 & STATUS1_SLEEP && !AI_CanPutToSleep(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerAtk].status1 & STATUS1_PSN_ANY)
            IncreasePoisonScore(battlerAtk, battlerDef, move, &tempScore);
        else if (gBattleMons[battlerAtk].status1 & STATUS1_BURN)
            IncreaseBurnScore(battlerAtk, battlerDef, move, &tempScore);
        else if (gBattleMons[battlerAtk].status1 & STATUS1_PARALYSIS)
            IncreaseParalyzeScore(battlerAtk, battlerDef, move, &tempScore);
        else if (gBattleMons[battlerAtk].status1 & STATUS1_SLEEP)
            IncreaseSleepScore(battlerAtk, battlerDef, move, &tempScore);
        else if (gBattleMons[battlerAtk].status1 & STATUS1_FROSTBITE)
            IncreaseFrostbiteScore(battlerAtk, battlerDef, move, &tempScore);
    }

    return tempScore;
}

static s32 AI_EffectSnatch(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!HasSnatchAffectedMove(battlerDef)
         || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (predictedMove != MOVE_NONE && gMovesInfo[predictedMove].snatchAffected)
            tempScore += GOOD_EFFECT; // Steal move
    }

    return tempScore;
}

static s32 AI_EffectMudSport(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_MUDSPORT
         || gStatuses4[battlerAtk] & STATUS4_MUD_SPORT
         || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!HasMoveWithType(battlerAtk, TYPE_ELECTRIC) && HasMoveWithType(battlerDef, TYPE_ELECTRIC))
            tempScore += WEAK_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectWaterSport(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_WATERSPORT
         || gStatuses4[battlerAtk] & STATUS4_WATER_SPORT
         || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!HasMoveWithType(battlerAtk, TYPE_FIRE) && (HasMoveWithType(battlerDef, TYPE_FIRE)))
            tempScore += WEAK_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectTickle(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
            return BAD_MOVE;
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_DEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerDef].statStages[STAT_DEF] > 4 && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL)
         && aiData->abilities[battlerDef] != ABILITY_CONTRARY && ShouldLowerDefense(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += DECENT_EFFECT;
        else if (ShouldLowerAttack(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
            tempScore += DECENT_EFFECT;

    }

    return tempScore;
}

static s32 AI_EffectCosmicPower(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
    }

    return tempScore;
}

static s32 AI_EffectBulkUp(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
    }

    return tempScore;
}

static s32 AI_EffectCalmMind(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK))
            return BAD_MOVE;
         if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
    }

    return tempScore;
}

static s32 AI_EffectGeomancy(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerAtk].statStages[STAT_SPATK] >= MAX_STAT_STAGE || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_POWER_HERB)
            tempScore += GOOD_EFFECT;
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
    }

    return tempScore;
}

static s32 AI_EffectQuiverDance(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerAtk].statStages[STAT_SPATK] >= MAX_STAT_STAGE || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
    }

    return tempScore;
}

static s32 AI_EffectVictoryDance(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerAtk].statStages[STAT_ATK] >= MAX_STAT_STAGE || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
    }

    return tempScore;
}

static s32 AI_EffectShellSmash(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_CONTRARY)
        {
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                return BAD_MOVE;
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                return BAD_MOVE;
        }
        else
        {
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                return BAD_MOVE;
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
                return BAD_MOVE;
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
                return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_RESTORE_STATS)
            tempScore += WEAK_EFFECT;

        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED_2);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK_2);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK_2);
    }

    return tempScore;
}

static s32 AI_EffectTidyUp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        // TODO
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerAtk) != 0)
            tempScore += GOOD_EFFECT;
        if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerDef) != 0)
            tempScore += -2;

        if (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE && AI_IsFaster(battlerAtk, battlerDef, move))
            tempScore += -10;
        if (gBattleMons[battlerDef].status2 & STATUS2_SUBSTITUTE)
            tempScore += GOOD_EFFECT;

        if (gStatuses3[battlerAtk] & STATUS3_LEECHSEED)
            tempScore += DECENT_EFFECT;
        if (gStatuses3[battlerDef] & STATUS3_LEECHSEED)
            tempScore += -2;
    }

    return tempScore;
}

static s32 AI_EffectDragonDance(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
    }

    return tempScore;
}

static s32 AI_EffectShiftGear(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED_2);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
    }

    return tempScore;
}

static s32 AI_EffectGuardSwap(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].statStages[STAT_DEF] >= gBattleMons[battlerDef].statStages[STAT_DEF]
         && gBattleMons[battlerAtk].statStages[STAT_SPDEF] >= gBattleMons[battlerDef].statStages[STAT_SPDEF])
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerDef].statStages[STAT_DEF] > gBattleMons[battlerAtk].statStages[STAT_DEF]
         && gBattleMons[battlerDef].statStages[STAT_SPDEF] >= gBattleMons[battlerAtk].statStages[STAT_SPDEF])
            tempScore += DECENT_EFFECT;
        else if (gBattleMons[battlerDef].statStages[STAT_SPDEF] > gBattleMons[battlerAtk].statStages[STAT_SPDEF]
              && gBattleMons[battlerDef].statStages[STAT_DEF] >= gBattleMons[battlerAtk].statStages[STAT_DEF])
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPowerSwap(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].statStages[STAT_ATK] >= gBattleMons[battlerDef].statStages[STAT_ATK]
         && gBattleMons[battlerAtk].statStages[STAT_SPATK] >= gBattleMons[battlerDef].statStages[STAT_SPATK])
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerDef].statStages[STAT_ATK] > gBattleMons[battlerAtk].statStages[STAT_ATK]
         && gBattleMons[battlerDef].statStages[STAT_SPATK] >= gBattleMons[battlerAtk].statStages[STAT_SPATK])
            tempScore += DECENT_EFFECT;
        else if (gBattleMons[battlerDef].statStages[STAT_SPATK] > gBattleMons[battlerAtk].statStages[STAT_SPATK]
              && gBattleMons[battlerDef].statStages[STAT_ATK] >= gBattleMons[battlerAtk].statStages[STAT_ATK])
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPowerTrick(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].defense >= gBattleMons[battlerAtk].attack && !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!(gStatuses3[battlerAtk] & STATUS3_POWER_TRICK)
         && gBattleMons[battlerAtk].defense > gBattleMons[battlerAtk].attack
         && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectHeartSwap(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;

        u32 atkPositiveStages = CountPositiveStatStages(battlerAtk);
        u32 atkNegativeStages = CountNegativeStatStages(battlerAtk);
        u32 defPositiveStages = CountPositiveStatStages(battlerDef);
        u32 defNegativeStages = CountNegativeStatStages(battlerDef);
        if (atkPositiveStages >= defPositiveStages && atkNegativeStages <= defNegativeStages)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        bool32 hasHigherStat = FALSE;
        u32 stat;
        //Only use if all target stats are >= attacker stats to prevent infinite loop
        for (stat = STAT_ATK; stat < NUM_BATTLE_STATS; stat++)
        {
            if (gBattleMons[battlerDef].statStages[stat] < gBattleMons[battlerAtk].statStages[stat])
                break;
            if (gBattleMons[battlerDef].statStages[stat] > gBattleMons[battlerAtk].statStages[stat])
                hasHigherStat = TRUE;
        }
        if (hasHigherStat && stat == NUM_BATTLE_STATS)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectSpeedSwap(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;

        if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM && (gBattleMons[battlerAtk].speed <= gBattleMons[battlerDef].speed))
            return BAD_MOVE;
        if (gBattleMons[battlerAtk].speed >= gBattleMons[battlerDef].speed)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (gBattleMons[battlerDef].speed > gBattleMons[battlerAtk].speed)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectGuardSplit(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;

        u32 atkDefense = gBattleMons[battlerAtk].defense;
        u32 defDefense = gBattleMons[battlerDef].defense;
        u32 atkSpDefense = gBattleMons[battlerAtk].spDefense;
        u32 defSpDefense = gBattleMons[battlerDef].spDefense;
        if (atkDefense + atkSpDefense >= defDefense + defSpDefense) //Combined attacker stats are > than combined target stats
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 newDefense = (gBattleMons[battlerAtk].defense + gBattleMons[battlerDef].defense) / 2;
        u32 newSpDef = (gBattleMons[battlerAtk].spDefense + gBattleMons[battlerDef].spDefense) / 2;

        if ((newDefense > gBattleMons[battlerAtk].defense && newSpDef >= gBattleMons[battlerAtk].spDefense)
         || (newSpDef > gBattleMons[battlerAtk].spDefense && newDefense >= gBattleMons[battlerAtk].defense))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPowerSplit(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;

        u32 atkAttack = gBattleMons[battlerAtk].attack;
        u32 defAttack = gBattleMons[battlerDef].attack;
        u32 atkSpAttack = gBattleMons[battlerAtk].spAttack;
        u32 defSpAttack = gBattleMons[battlerDef].spAttack;

        if (atkAttack + atkSpAttack >= defAttack + defSpAttack) // Combined attacker stats are > than combined target stats
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 newAttack = (gBattleMons[battlerAtk].attack + gBattleMons[battlerDef].attack) / 2;
        u32 newSpAtk = (gBattleMons[battlerAtk].spAttack + gBattleMons[battlerDef].spAttack) / 2;

        if ((newAttack > gBattleMons[battlerAtk].attack && newSpAtk >= gBattleMons[battlerAtk].spAttack)
         || (newSpAtk > gBattleMons[battlerAtk].spAttack && newAttack >= gBattleMons[battlerAtk].attack))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectElectricTerrain(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN)
            return BAD_MOVE;
        if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove))
            return BAD_MOVE;
    }

    // TODO: Check if current battler or partner would benefit
    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_TERRAIN_EXTENDER)
            tempScore += GOOD_EFFECT;
        if (gStatuses3[battlerAtk] & STATUS3_YAWN && IsBattlerGrounded(battlerAtk))
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectMistyTerrain(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN)
            return BAD_MOVE;
        if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove))
            return BAD_MOVE;
    }

    // TODO: Check if current battler or partner would benefit
    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_TERRAIN_EXTENDER)
            tempScore += GOOD_EFFECT;
        if (gStatuses3[battlerAtk] & STATUS3_YAWN && IsBattlerGrounded(battlerAtk))
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectGrassyTerrain(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN)
            return BAD_MOVE;
        if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove))
            return BAD_MOVE;
    }

    // TODO: Check if current battler or partner would benefit
    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_TERRAIN_EXTENDER)
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPsychicTerrain(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN)
            return BAD_MOVE;
        if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove))
            return BAD_MOVE;
    }

    // TODO: Check if current battler or partner would benefit
    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_TERRAIN_EXTENDER)
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPledge(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    // TODO needs some better logic
    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IsDoubleBattle() && IsBattlerAlive(BATTLE_PARTNER(battlerAtk)))
        {
            if (aiData->partnerMove != MOVE_NONE
             && gMovesInfo[aiData->partnerMove].effect == EFFECT_PLEDGE
             && move != aiData->partnerMove) // Different pledge moves
            {
                if (gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 & (STATUS1_SLEEP | STATUS1_FREEZE))
                // && gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 != 1) // Will wake up this turn - how would AI know
                    return BAD_MOVE; // Don't use combo move if your partner will cause failure
            }
        }

    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IsDoubleBattle() && HasMoveEffect(BATTLE_PARTNER(battlerAtk), EFFECT_PLEDGE))
            tempScore += GOOD_EFFECT; // Partner might use pledge move
    }

    return tempScore;
}

static s32 AI_EffectTrickRoom(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_TRICK_ROOM))
            return BAD_MOVE;

        if (!(AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_POWERFUL_STATUS))
        {
            if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM) // Trick Room Up
            {
                if (GetBattlerSideSpeedAverage(battlerAtk) < GetBattlerSideSpeedAverage(battlerDef)) // Attacker side slower than target side
                    return BAD_MOVE; // Keep the Trick Room up
            }
            else
            {
                if (GetBattlerSideSpeedAverage(battlerAtk) >= GetBattlerSideSpeedAverage(battlerDef)) // Attacker side faster than target side
                    return BAD_MOVE; // Keep the Trick Room down
            }
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!(AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_POWERFUL_STATUS))
        {
            if (!(gFieldStatuses & STATUS_FIELD_TRICK_ROOM) && GetBattlerSideSpeedAverage(battlerAtk) < GetBattlerSideSpeedAverage(battlerDef))
                tempScore += GOOD_EFFECT;
            else if ((gFieldStatuses & STATUS_FIELD_TRICK_ROOM) && GetBattlerSideSpeedAverage(battlerAtk) >= GetBattlerSideSpeedAverage(battlerDef))
                tempScore += GOOD_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectMagicRoom(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        tempScore += WEAK_EFFECT;
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_NONE && aiData->holdEffects[battlerDef] != HOLD_EFFECT_NONE)
            tempScore += WEAK_EFFECT;
        if (IsDoubleBattle() && aiData->holdEffects[BATTLE_PARTNER(battlerAtk)] == HOLD_EFFECT_NONE && aiData->holdEffects[BATTLE_PARTNER(battlerDef)] != HOLD_EFFECT_NONE)
            tempScore += WEAK_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectWonderRoom(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_WONDER_ROOM || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if ((HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) && gBattleMons[battlerAtk].defense < gBattleMons[battlerAtk].spDefense)
         || (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) && gBattleMons[battlerAtk].spDefense < gBattleMons[battlerAtk].defense))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectGravity(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if ((gFieldStatuses & STATUS_FIELD_GRAVITY
         && !IS_BATTLER_OF_TYPE(battlerAtk, TYPE_FLYING)
         && aiData->holdEffects[battlerAtk] != HOLD_EFFECT_AIR_BALLOON)) // Should revert Gravity in this case
            return BAD_MOVE;
        if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!(gFieldStatuses & STATUS_FIELD_GRAVITY))
        {
            if (HasSleepMoveWithLowAccuracy(battlerAtk, battlerDef)) // Has Gravity for a move like Hypnosis
                IncreaseSleepScore(battlerAtk, battlerDef, move, &tempScore);
            if (HasMoveWithLowAccuracy(battlerAtk, battlerDef, 90, FALSE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef]))
                tempScore += DECENT_EFFECT;
        }
    }

    return tempScore;
}

static s32 AI_EffectIonDeluge(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_ION_DELUGE
         || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if ((aiData->abilities[battlerAtk] == ABILITY_VOLT_ABSORB
          || aiData->abilities[battlerAtk] == ABILITY_MOTOR_DRIVE
          || (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5 && aiData->abilities[battlerAtk] == ABILITY_LIGHTNING_ROD))
          && gMovesInfo[aiData->predictedMoves[battlerDef]].type == TYPE_NORMAL)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectFling(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!CanFling(battlerAtk))
            return BAD_MOVE;

        /* TODO Fling
        u8 effect = gFlingTable[gBattleMons[battlerAtk].item].effect;
        switch (effect)
        {
        case MOVE_EFFECT_BURN:
            if (!AI_CanBurn(battlerAtk, battlerDef, BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                return -10;
        case MOVE_EFFECT_PARALYSIS:
            if (!AI_CanParalyze(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
                return -10;
        case MOVE_EFFECT_POISON:
            if (!AI_CanPoison(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
                return -10;
        case MOVE_EFFECT_TOXIC:
            if (!AI_CanPoison(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
                return -10;
        case MOVE_EFFECT_FREEZE:
            if (!CanBeFrozen(battlerDef, TRUE)
                || MoveBlockedBySubstitute(move, battlerAtk, battlerDef))
                return -10;
        }*/
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        /* TODO
        switch (gFlingTable[aiData->items[battlerAtk]].effect)
        {
        case MOVE_EFFECT_BURN:
            IncreaseBurnScore(battlerAtk, battlerDef, move, &score);
            break;
        case MOVE_EFFECT_FLINCH:
            score += ShouldTryToFlinch(battlerAtk, battlerDef, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], move);
            break;
        case MOVE_EFFECT_PARALYSIS:
            IncreaseParalyzeScore(battlerAtk, battlerDef, move, &score);
            break;
        case MOVE_EFFECT_POISON:
        case MOVE_EFFECT_TOXIC:
            IncreasePoisonScore(battlerAtk, battlerDef, move, &score);
            break;
        case MOVE_EFFECT_FREEZE:
            if (AI_CanFreeze(battlerAtk, battlerDef))
                return GOOD_EFFECT;
        }*/
    }

    return tempScore;
}

static s32 AI_EffectEmbargo(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_KLUTZ
         || gFieldStatuses & STATUS_FIELD_MAGIC_ROOM
         || gDisableStructs[battlerDef].embargoTimer != 0
         || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->holdEffects[battlerDef] != HOLD_EFFECT_NONE)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectPowder(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!HasMoveWithType(battlerDef, TYPE_FIRE))
            return BAD_MOVE;
        if (PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (predictedMove != MOVE_NONE
         && !IS_MOVE_STATUS(predictedMove)
         && gMovesInfo[predictedMove].type == TYPE_FIRE)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectTelekinesis(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerDef] & (STATUS3_TELEKINESIS | STATUS3_ROOTED | STATUS3_SMACKED_DOWN)
         || gFieldStatuses & STATUS_FIELD_GRAVITY
         || aiData->holdEffects[battlerDef] == HOLD_EFFECT_IRON_BALL
         || IsTelekinesisBannedSpecies(gBattleMons[battlerDef].species)
         || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveWithLowAccuracy(battlerAtk, battlerDef, 90, FALSE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef])
         || !IsBattlerGrounded(battlerDef))
            tempScore += DECENT_EFFECT;

    }

    return tempScore;
}

static s32 AI_EffectHealBlock(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gDisableStructs[battlerDef].healBlockTimer != 0)
            return BAD_MOVE;
        if (PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (AI_IsFaster(battlerAtk, battlerDef, move) && predictedMove != MOVE_NONE && IsHealingMove(predictedMove))
            tempScore += DECENT_EFFECT; // Try to cancel healing move
        else if (HasHealingEffect(battlerDef) || aiData->holdEffects[battlerDef] == HOLD_EFFECT_LEFTOVERS
              || (aiData->holdEffects[battlerDef] == HOLD_EFFECT_BLACK_SLUDGE && IS_BATTLER_OF_TYPE(battlerDef, TYPE_POISON)))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectSoak(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
        if (GetBattlerType(battlerDef, 0, FALSE) == TYPE_WATER
         && GetBattlerType(battlerDef, 1, FALSE) == TYPE_WATER
         && GetBattlerType(battlerDef, 2, FALSE) == TYPE_MYSTERY)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (HasMoveWithType(battlerAtk, TYPE_ELECTRIC) || HasMoveWithType(battlerAtk, TYPE_GRASS) || (HasMoveEffect(battlerAtk, EFFECT_SUPER_EFFECTIVE_ON_ARG) && gMovesInfo[move].argument == TYPE_WATER) )
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectThirdType(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        switch (move)
        {
        case MOVE_TRICK_OR_TREAT:
            if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST) || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove) || GetActiveGimmick(battlerDef) == GIMMICK_TERA)
                return BAD_MOVE;
            break;
        case MOVE_FORESTS_CURSE:
            if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS) || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove) || GetActiveGimmick(battlerDef) == GIMMICK_TERA)
                return BAD_MOVE;
            break;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->abilities[battlerDef] == ABILITY_WONDER_GUARD)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectElectrify(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AI_IsSlower(battlerAtk, battlerDef, move)
          //|| GetMoveTypeSpecial(battlerDef, predictedMove) == TYPE_ELECTRIC // Move will already be electric type
         || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (aiData->predictedMoves[battlerDef] != MOVE_NONE
         && (aiData->abilities[battlerAtk] == ABILITY_VOLT_ABSORB
          || aiData->abilities[battlerAtk] == ABILITY_MOTOR_DRIVE
          || (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5 && aiData->abilities[battlerAtk] == ABILITY_LIGHTNING_ROD)))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectTopsyTurvy(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IS_TARGETING_PARTNER(battlerAtk, battlerDef))
        {
            u32 targetPositiveStages = CountPositiveStatStages(battlerDef);
            u32 targetNegativeStages = CountNegativeStatStages(battlerDef);

            if (targetPositiveStages == 0) //No good stat changes to make bad
                return BAD_MOVE;
            if (PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                return BAD_MOVE;
            if (targetNegativeStages < targetPositiveStages)
                return BAD_MOVE; //More stages would be made positive than negative
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (CountPositiveStatStages(battlerDef) > CountNegativeStatStages(battlerDef))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectFairyLock(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if ((gFieldStatuses & STATUS_FIELD_FAIRY_LOCK) || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldTrap(battlerAtk, battlerDef, move))
            tempScore += BEST_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectQuash(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IsDoubleBattle())
            return BAD_MOVE;

        if (AI_IsSlower(battlerAtk, battlerDef, move)
         || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (AI_IsSlower(BATTLE_PARTNER(battlerAtk), battlerDef, aiData->partnerMove))
            tempScore += DECENT_EFFECT; // Attacker partner wouldn't go before target
    }

    return tempScore;
}

static s32 AI_EffectAfterYou(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IS_TARGETING_PARTNER(battlerAtk, battlerDef)
         || !IsDoubleBattle()
         || AI_IsSlower(battlerAtk, battlerDef, move)
         || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    return tempScore;
}

static s32 AI_EffectTailwind(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideTimers[GetBattlerSide(battlerAtk)].tailwindTimer != 0
         || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_TAILWIND)
         || (gFieldStatuses & STATUS_FIELD_TRICK_ROOM && gFieldTimers.trickRoomTimer > 1)) // Trick Room active and not ending this turn
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (GetBattlerSideSpeedAverage(battlerAtk) < GetBattlerSideSpeedAverage(battlerDef))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectLuckyChant(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideTimers[GetBattlerSide(battlerAtk)].luckyChantTimer != 0)
            return BAD_MOVE;
        if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (!IsDoubleBattle() && CountUsablePartyMons(battlerDef) > 0)
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectMagnetRise(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gFieldStatuses & STATUS_FIELD_GRAVITY
         || gDisableStructs[battlerAtk].magnetRiseTimer != 0
         || aiData->holdEffects[battlerAtk] == HOLD_EFFECT_IRON_BALL
         || gStatuses3[battlerAtk] & (STATUS3_ROOTED | STATUS3_MAGNET_RISE | STATUS3_SMACKED_DOWN)
         || !IsBattlerGrounded(battlerAtk))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IsBattlerGrounded(battlerAtk) && HasDamagingMoveOfType(battlerDef, TYPE_ELECTRIC)
         && !(AI_GetTypeEffectiveness(MOVE_EARTHQUAKE, battlerDef, battlerAtk) == AI_EFFECTIVENESS_x0)) // Doesn't resist ground move
        {
            if (AI_IsFaster(battlerAtk, battlerDef, move)) // Attacker goes first
            {
                if (gMovesInfo[aiData->predictedMoves[battlerDef]].type == TYPE_GROUND)
                    tempScore += GOOD_EFFECT; // Cause the enemy's move to fail
            }
            else // Opponent Goes First
            {
                if (HasDamagingMoveOfType(battlerDef, TYPE_GROUND))
                    tempScore += DECENT_EFFECT;
            }
        }
    }

    return tempScore;
}

static s32 AI_EffectCamouflage(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!CanCamouflage(battlerAtk))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (predictedMove != MOVE_NONE
         && AI_IsFaster(battlerAtk, battlerDef, move) // Attacker goes first
         && !IS_MOVE_STATUS(move)
         && AI_GetTypeEffectiveness(predictedMove, battlerDef, battlerAtk) != AI_EFFECTIVENESS_x0)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectToxicThread(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPEED))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        IncreasePoisonScore(battlerAtk, battlerDef, move, &tempScore);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
    }

    return tempScore;
}

static s32 AI_EffectCounter(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;
    u32 predictedMove = aiData->predictedMoves[battlerDef];

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (GetBattleMoveCategory(predictedMove) == DAMAGE_CATEGORY_STATUS
         || DoesSubstituteBlockMove(battlerAtk, BATTLE_PARTNER(battlerDef), predictedMove))
            return BAD_MOVE;

        if (predictedMove == MOVE_NONE)
        {
            if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_RISKY)
            {
                // Let Risky AI predict blindly based on stats. Skip move none check
            }
            else
            {
                return BAD_MOVE;
            }
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if ((!IsBattlerIncapacitated(battlerDef, aiData->abilities[battlerDef]) && predictedMove != MOVE_NONE)
         && (GetNoOfHitsToKOBattler(battlerDef, battlerAtk, GetMoveSlot(GetMovesArray(battlerDef), predictedMove)) >= 2)
         && (GetBattleMoveCategory(predictedMove) == DAMAGE_CATEGORY_PHYSICAL))
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectMirrorCoat(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;
    u32 predictedMove = aiData->predictedMoves[battlerDef];

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {

        if (GetBattleMoveCategory(predictedMove) == DAMAGE_CATEGORY_STATUS
         || DoesSubstituteBlockMove(battlerAtk, BATTLE_PARTNER(battlerDef), predictedMove))
            return BAD_MOVE;

        if (predictedMove == MOVE_NONE)
        {
            if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_RISKY)
            {
                // Let Risky AI predict blindly based on stats. Skip move none check
            }
            else
            {
                return BAD_MOVE;
            }
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if ((!IsBattlerIncapacitated(battlerDef, aiData->abilities[battlerDef]) && predictedMove != MOVE_NONE)
         && (GetNoOfHitsToKOBattler(battlerDef, battlerAtk, GetMoveSlot(GetMovesArray(battlerDef), predictedMove)) >= 2)
         && (GetBattleMoveCategory(predictedMove) == DAMAGE_CATEGORY_SPECIAL))
            tempScore =+ GOOD_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectShoreUp(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        // TODO: Check Heal Block
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if ((AI_GetWeather(aiData) & B_WEATHER_SANDSTORM) && ShouldRecover(battlerAtk, battlerDef, move, 67))
            tempScore += DECENT_EFFECT;
        else if (ShouldRecover(battlerAtk, battlerDef, move, 50))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectRevivalBlessing(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (GetFirstFaintedPartyIndex(battlerAtk) == PARTY_SIZE)
            return BAD_MOVE;
        if (CanAIFaintTarget(battlerAtk, battlerDef, 0))
            return BAD_MOVE;
        if (CanTargetFaintAi(battlerDef, battlerAtk) && AI_IsSlower(battlerAtk, battlerDef, move))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (GetFirstFaintedPartyIndex(battlerAtk) != PARTY_SIZE)
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 UNUSED AI_EffectJungleHealing(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (AtMaxHp(battlerAtk)
         && AtMaxHp(BATTLE_PARTNER(battlerAtk))
         && !(gBattleMons[battlerAtk].status1 & STATUS1_ANY)
         && !(gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 & STATUS1_ANY))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (ShouldRecover(battlerAtk, battlerDef, move, 25)
         || ShouldRecover(BATTLE_PARTNER(battlerAtk), battlerDef, move, 25)
         || gBattleMons[battlerAtk].status1 & STATUS1_ANY
         || gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 & STATUS1_ANY)
            tempScore += GOOD_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectSaltCure(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_WATER) || IS_BATTLER_OF_TYPE(battlerDef, TYPE_STEEL))
            tempScore += DECENT_EFFECT;
    }

    return tempScore;
}

static s32 AI_EffectStuffCheeks(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (ItemId_GetPocket(gBattleMons[battlerAtk].item) != POCKET_BERRIES)
            return MOVE_UNUSABLE;   // cannot even select
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_EVASION))
            return BAD_MOVE;

    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectMinimize(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_EVASION))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectRototiller(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IsDoubleBattle())
        {
            if (!(IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GRASS)
              && AI_IsBattlerGrounded(battlerAtk)
              && (BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK)))
              && !(IS_BATTLER_OF_TYPE(BATTLE_PARTNER(battlerAtk), TYPE_GRASS)
              && AI_IsBattlerGrounded(BATTLE_PARTNER(battlerAtk))
              && aiData->abilities[BATTLE_PARTNER(battlerAtk)] != ABILITY_CONTRARY
              && (BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_ATK)
              || BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPATK))))
            {
                return BAD_MOVE;
            }

        }
        else if (!(IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GRASS)
              && AI_IsBattlerGrounded(battlerAtk)
              && (BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK))))
        {
            return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32  AI_EffectGearUp(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IsDoubleBattle())
            return BAD_MOVE;

        if (aiData->abilities[battlerAtk] == ABILITY_PLUS || aiData->abilities[battlerAtk] == ABILITY_MINUS)
        {
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                return BAD_MOVE;
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
                return BAD_MOVE;
        }

        if (aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_PLUS || aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_MINUS)
        {
            if ((!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
             && (!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL)))
                return BAD_MOVE;
        }

        if (aiData->abilities[battlerAtk] != ABILITY_PLUS && aiData->abilities[battlerAtk] != ABILITY_MINUS)
            return BAD_MOVE; // nor our or our partner's ability is plus/minus
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectMagneticFlux(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IsDoubleBattle())
            return BAD_MOVE;

        if (aiData->abilities[battlerAtk] == ABILITY_PLUS || aiData->abilities[battlerAtk] == ABILITY_MINUS)
        {
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                return BAD_MOVE;
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
                return BAD_MOVE;
        }

        if (aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_PLUS || aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_MINUS)
        {
            if ((!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
             && (!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL)))
                return BAD_MOVE;
        }

        if (aiData->abilities[battlerAtk] != ABILITY_PLUS && aiData->abilities[battlerAtk] != ABILITY_MINUS)
            return BAD_MOVE; // nor our or our partner's ability is plus/minus
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectVenonDrench(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!(gBattleMons[battlerDef].status1 & STATUS1_PSN_ANY))
            return BAD_MOVE;

        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPEED))
            return BAD_MOVE;
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPATK))
            return BAD_MOVE;
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectNobleRoar(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPATK))
            return BAD_MOVE;
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectCaptivate(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!AreBattlersOfOppositeGender(battlerAtk, battlerDef))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {

    }

    return tempScore;
}

static s32 AI_EffectMist(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_MIST
         || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectNightmare(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gBattleMons[battlerDef].status2 & STATUS2_NIGHTMARE)
            return BAD_MOVE;
        if (!AI_IsBattlerAsleepOrComatose(battlerDef))
            return BAD_MOVE;
        if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {

    }

    return tempScore;
}

static s32 AI_EffectFilletAway(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_CONTRARY)
            return BAD_MOVE;
        if (aiData->hpPercents[battlerAtk] <= 60)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TDOD
    }

    return tempScore;
}

static s32 AI_EffectHelpingHand(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IsDoubleBattle()
         || !IsBattlerAlive(BATTLE_PARTNER(battlerAtk))
         || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove)
         || (aiData->partnerMove != MOVE_NONE && IS_MOVE_STATUS(aiData->partnerMove))
         || *(gBattleStruct->monToSwitchIntoId + BATTLE_PARTNER(battlerAtk)) != PARTY_SIZE) //Partner is switching out.
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectAquaRing(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gStatuses3[battlerAtk] & STATUS3_AQUA_RING)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectStrengthSap(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerDef] == ABILITY_CONTRARY)
            return BAD_MOVE;
        if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectCopycat(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        // TODO
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectFlowerShield(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GRASS)
         && !(IsDoubleBattle() && IS_BATTLER_OF_TYPE(BATTLE_PARTNER(battlerAtk), TYPE_GRASS)))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {

    }

    return tempScore;
}

static s32 AI_EffectAromaticMist(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IsDoubleBattle())
            return BAD_MOVE;
        if (gBattleMons[BATTLE_PARTNER(battlerAtk)].hp == 0 || !BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPDEF))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {

    }

    return tempScore;
}

static s32 AI_EffectHitSwitchTarget(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
        else if (aiData->hpPercents[battlerDef] < 10 && GetBattlerSecondaryDamage(battlerDef))
            return BAD_MOVE;
        else if (gStatuses3[battlerDef] & STATUS3_PERISH_SONG)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectPurify(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!(gBattleMons[battlerDef].status1 & STATUS1_ANY))
            return BAD_MOVE;
        if (battlerDef == BATTLE_PARTNER(battlerAtk))
            return tempScore;
        else if (AtMaxHp(battlerAtk))
            return BAD_MOVE;
        else if (aiData->hpPercents[battlerAtk] >= 90)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectRecoilIfMiss(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] != ABILITY_MAGIC_GUARD && aiData->moveAccuracy[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] < 75
         && !(AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_RISKY))
            return BAD_MOVE;
    }

    return tempScore;
}

static s32 AI_EffectTransform(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if ((gBattleMons[battlerAtk].status2 & STATUS2_TRANSFORMED)
         || (gBattleMons[battlerDef].status2 & (STATUS2_TRANSFORMED | STATUS2_SUBSTITUTE))) //Leave out Illusion b/c AI is supposed to be fooled
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODo
    }

    return tempScore;
}

static s32 AI_EffectSketch(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (gLastMoves[battlerDef] == MOVE_NONE)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODo
    }

    return tempScore;
}

static s32 AI_EffectHealingWish(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (CountUsablePartyMons(battlerAtk) == 0 || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;
        else if (IsPartyFullyHealedExceptBattler(battlerAtk))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODo
    }

    return tempScore;
}

static s32 AI_EffectAssist(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (CountUsablePartyMons(battlerAtk) == 0)
            return BAD_MOVE;    // no teammates to assist from
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODo
    }

    return tempScore;
}

static s32 AI_EffectMeFirst(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->predictedMoves[battlerDef] != MOVE_NONE)
        {
            if (AI_IsSlower(battlerAtk, battlerDef, move))
                return BAD_MOVE;    // Target is predicted to go first, Me First will fail
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectNaturalGift(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->abilities[battlerAtk] == ABILITY_KLUTZ
         || gFieldStatuses & STATUS_FIELD_MAGIC_ROOM
         || GetPocketByItemId(gBattleMons[battlerAtk].item) != POCKET_BERRIES)
            return BAD_MOVE;
    }

    return tempScore;
}

static s32 AI_EffectHealPulse(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (!IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;

        if (gStatuses3[battlerDef] & STATUS3_HEAL_BLOCK)
            return MOVE_UNUSABLE;
        if (AtMaxHp(battlerDef))
            return BAD_MOVE;
        else if (gBattleMons[battlerDef].hp > gBattleMons[battlerDef].maxHP / 2)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectHitEnemyHealAlly(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_TARGETING_PARTNER(battlerAtk, battlerDef))
        {
            if (gStatuses3[battlerDef] & STATUS3_HEAL_BLOCK)
                return MOVE_UNUSABLE;
            if (AtMaxHp(battlerDef))
                return BAD_MOVE;
            else if (gBattleMons[battlerDef].hp > gBattleMons[battlerDef].maxHP / 2)
                return BAD_MOVE;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectInstruct(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        u16 instructedMove;

        if (IsDoubleBattle() && !IS_TARGETING_PARTNER(battlerAtk, battlerDef))
            return BAD_MOVE;
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return BAD_MOVE;

        if (AI_IsSlower(battlerAtk, battlerDef, move))
            instructedMove = aiData->predictedMoves[battlerDef];
        else
            instructedMove = gLastMoves[battlerDef];

        if (instructedMove == MOVE_NONE
         || gMovesInfo[instructedMove].instructBanned
         || MoveHasAdditionalEffectSelf(instructedMove, MOVE_EFFECT_RECHARGE)
         || IsZMove(instructedMove)
         || (gLockedMoves[battlerDef] != 0 && gLockedMoves[battlerDef] != 0xFFFF)
         || gBattleMons[battlerDef].status2 & STATUS2_MULTIPLETURNS
         || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
            return BAD_MOVE;

        if (AI_GetBattlerMoveTargetType(battlerDef, instructedMove) & (MOVE_TARGET_SELECTED
                                                    | MOVE_TARGET_DEPENDS
                                                    | MOVE_TARGET_RANDOM
                                                    | MOVE_TARGET_BOTH
                                                    | MOVE_TARGET_FOES_AND_ALLY
                                                    | MOVE_TARGET_OPPONENTS_FIELD)
            && instructedMove != MOVE_MIND_BLOWN && instructedMove != MOVE_STEEL_BEAM)
            return BAD_MOVE; //Don't force the enemy to attack you again unless it can kill itself with Mind Blown
        if (instructedMove != MOVE_MIND_BLOWN)
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectSuckerPunch(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (predictedMove != MOVE_NONE)
        {
            if (IS_MOVE_STATUS(predictedMove) || AI_IsSlower(battlerAtk, battlerDef, move)) // Opponent going first
                return BAD_MOVE;
        }
    }

    return tempScore;
}

static s32 AI_EffectSynchronoise(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (aiData->holdEffects[battlerDef] != HOLD_EFFECT_RING_TARGET && !DoBattlersShareType(battlerAtk, battlerDef))
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectSkyDrop(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_FLYING))
            return BAD_MOVE;
        if (BattlerWillFaintFromWeather(battlerAtk, aiData->abilities[battlerAtk])
        ||  DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
        ||  GetBattlerWeight(battlerDef) >= 2000) //200.0 kg
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static s32 AI_EffectUpperHand(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 tempScore = 0;

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_BAD_MOVE)
    {
        u32 predictedMove = aiData->predictedMoves[battlerDef];
        if (predictedMove == MOVE_NONE || IS_MOVE_STATUS(predictedMove) || AI_IsSlower(battlerAtk, battlerDef, move) || GetMovePriority(battlerDef, predictedMove) < 1 || GetMovePriority(battlerDef, predictedMove) > 3) // Opponent going first or not using priority move
            return BAD_MOVE;
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CHECK_VIABILITY)
    {
        // TODO
    }

    return tempScore;
}

static u32 AI_CalcMoveEffectScore(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    u32 moveEffect = gMovesInfo[move].effect;

    if (GetActiveGimmick(battlerAtk) == GIMMICK_DYNAMAX && gMovesInfo[move].category == DAMAGE_CATEGORY_STATUS)
    {
        move = MOVE_PROTECT;
        moveEffect = EFFECT_PROTECT;
    }

    switch (moveEffect)
    {
    default:
        return NO_INCREASE;
    case EFFECT_SLEEP:
        return AI_EffectSleep(battlerAtk, battlerDef, move, aiData);
    case EFFECT_YAWN:
        return AI_EffectYawn(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ABSORB:
        return AI_EffectAbsorb(battlerAtk, battlerDef, aiData);
    case EFFECT_EXPLOSION:
        return AI_EffectExplosion(battlerAtk, battlerDef, move, aiData);
    case EFFECT_MEMENTO:
        return AI_EffectMemento(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FINAL_GAMBIT:
        return AI_EffectFinalGambit(battlerAtk, battlerDef, move, aiData);
    case EFFECT_MIRROR_MOVE:
        return AI_EffectMirrorMove(battlerAtk, battlerDef, aiData);
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_USER_ALLY:
    case EFFECT_ATTACK_UP_2:
        return AI_EffectAttackUp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
        return AI_EffectDefenseUp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SPEED_UP:
    case EFFECT_SPEED_UP_2:
        return AI_EffectSpeedUp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SPECIAL_ATTACK_UP:
    case EFFECT_SPECIAL_ATTACK_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_3:
        return AI_EffectSpecialAttackUp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SPECIAL_DEFENSE_UP:
    case EFFECT_SPECIAL_DEFENSE_UP_2:
        return AI_EffectSpecialDefenseUp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ACCURACY_UP:
    case EFFECT_ACCURACY_UP_2:
        return AI_EffectAccuracyUp(battlerAtk, battlerDef, aiData);
    case EFFECT_EVASION_UP:
    case EFFECT_EVASION_UP_2:
        return AI_EffectEvasionUp(battlerAtk, battlerDef, aiData);
    case EFFECT_ATTACK_DOWN:
    case EFFECT_ATTACK_DOWN_2:
        return AI_EffectAttackDown(battlerAtk, battlerDef, aiData);
    case EFFECT_DEFENSE_DOWN:
    case EFFECT_DEFENSE_DOWN_2:
        return AI_EffectDefenseDown(battlerAtk, battlerDef, aiData);
    case EFFECT_SPEED_DOWN:
    case EFFECT_SPEED_DOWN_2:
        return AI_EffectSpeedDown(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SPECIAL_ATTACK_DOWN_2:
        return AI_EffectSpecialAttackDown(battlerAtk, battlerDef, aiData);
    case EFFECT_SPECIAL_DEFENSE_DOWN:
    case EFFECT_SPECIAL_DEFENSE_DOWN_2:
        return AI_EffectSpecialDefenseDown(battlerAtk, battlerDef, aiData);
    case EFFECT_ACCURACY_DOWN:
    case EFFECT_ACCURACY_DOWN_2:
        return AI_EffectAccuracyDown(battlerAtk, battlerDef, aiData);
    case EFFECT_EVASION_DOWN:
    case EFFECT_EVASION_DOWN_2:
        return AI_EffectEvasionDown(battlerAtk, battlerDef, aiData);
    case EFFECT_SPICY_EXTRACT:
        return AI_EffectSpicyExtract(battlerAtk, battlerDef, aiData);
    case EFFECT_BIDE:
        return AI_EffectBide(battlerAtk, battlerDef, aiData);
    case EFFECT_ACUPRESSURE:
        return AI_EffectAcupressure(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ATTACK_ACCURACY_UP:
        return AI_EffectAttackAccuracyUp(battlerAtk, battlerDef, aiData);
    case EFFECT_GROWTH:
        return AI_EffectGrowth(battlerAtk, battlerDef, aiData);
    case EFFECT_COIL:
        return AI_EffectCoil(battlerAtk, battlerDef, aiData);
    case EFFECT_ATTACK_SPATK_UP:
        return AI_EffectAttackSpAtkUp(battlerAtk, battlerDef, aiData);
    case EFFECT_HAZE:
        return AI_EffectHaze(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ROAR:
        return AI_EffectRoar(battlerAtk, battlerDef, aiData);
    case EFFECT_MULTI_HIT:
    case EFFECT_TRIPLE_KICK:
        return AI_EffectMultiHit(battlerAtk, battlerDef, move, aiData);
    case EFFECT_CONVERSION:
        return AI_EffectConversion(battlerAtk, battlerDef, aiData);
    case EFFECT_SWALLOW:
        return AI_EffectSwallow(battlerAtk, battlerDef, move, aiData);
    case EFFECT_RESTORE_HP:
    case EFFECT_SOFTBOILED:
    case EFFECT_ROOST:
    case EFFECT_MORNING_SUN:
    case EFFECT_SYNTHESIS:
    case EFFECT_MOONLIGHT:
        return AI_EffectRestoreHp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_POISON:
    case EFFECT_TOXIC:
        return AI_EffectPoison(battlerAtk, battlerDef, move, aiData);
    case EFFECT_LIGHT_SCREEN:
    case EFFECT_REFLECT:
    case EFFECT_AURORA_VEIL:
        return AI_ScreenEffects(battlerAtk, battlerDef, move, aiData);
    case EFFECT_REST:
        return AI_EffectRest(battlerAtk, battlerDef, move, aiData);
        return AI_EffectOHKO(battlerAtk, battlerDef, move, aiData);
    case EFFECT_MEAN_LOOK:
        return AI_EffectMeanLook(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FOCUS_ENERGY:
        return AI_EffectFocusEnergy(battlerAtk, battlerDef, aiData);
    case EFFECT_LASER_FOCUS:
        return AI_EffectLaserFocus(battlerAtk, battlerDef, aiData);
    case EFFECT_CONFUSE:
        return AI_EffectConfuse(battlerAtk, battlerDef, move, aiData);
    case EFFECT_PARALYZE:
        return AI_EffectParalyze(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SUBSTITUTE:
        return AI_EffectSubstitute(battlerAtk, battlerDef, aiData);
    case EFFECT_MIMIC:
        return AI_EffectMimic(battlerAtk, battlerDef, aiData);
    case EFFECT_LEECH_SEED:
        return AI_EffectLeechSeed(battlerAtk, battlerDef, move, aiData);
    case EFFECT_DO_NOTHING:
        return BAD_MOVE;
    case EFFECT_TELEPORT:
    case EFFECT_HIT_ESCAPE:
    case EFFECT_PARTING_SHOT:
        return AI_EffectHitEscapeOrEscape(battlerAtk, battlerDef, move, aiData);
    case EFFECT_BATON_PASS:
        return AI_EffectBatonPass(battlerAtk, battlerDef, aiData);
    case EFFECT_DISABLE:
        return AI_EffectDisable(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ENCORE:
        return AI_EffectEncore(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SLEEP_TALK:
    case EFFECT_SNORE:
        return AI_EffectSleepTalkSnore(battlerAtk, battlerDef, aiData);
    case EFFECT_LOCK_ON:
        return AI_EffectLockOn(battlerAtk, battlerDef, move, aiData);
    case EFFECT_DESTINY_BOND:
        return AI_EffectDestinyBond(battlerAtk, battlerDef, move, aiData);
    case EFFECT_WISH:
        return AI_EffectWish(battlerAtk, battlerDef, move, aiData);
    case EFFECT_HEAL_BELL:
        return AI_EffectHealBell(battlerAtk, battlerDef, move, aiData);
    case EFFECT_CURSE:
        return AI_EffectCurse(battlerAtk, battlerDef, move, aiData);
    case EFFECT_PROTECT:
        return AI_EffectProtect(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ENDURE:
        return AI_EffectEndure(battlerAtk, battlerDef, aiData);
    case EFFECT_SPIKES:
        return AI_EffectSpikes(battlerAtk, battlerDef, move, aiData);
    case EFFECT_STEALTH_ROCK:
        return AI_EffectStealthRock(battlerAtk, battlerDef, move, aiData);
    case EFFECT_STICKY_WEB:
        return AI_EffectStickyWeb(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TOXIC_SPIKES:
        return AI_EffectToxicSpikes(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FORESIGHT:
        return AI_EffectForesight(battlerAtk, battlerDef, move, aiData);
    case EFFECT_MIRACLE_EYE:
        return AI_EffectMiracleEye(battlerAtk, battlerDef, move, aiData);
    case EFFECT_PERISH_SONG:
        return AI_EffectPerishSong(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SANDSTORM:
        return AI_EffectSandstorm(battlerAtk, battlerDef, aiData);
    case EFFECT_HAIL:
        return AI_EffectHail(battlerAtk, battlerDef, aiData);
    case EFFECT_SNOWSCAPE:
        return AI_EffectSnowscape(battlerAtk, battlerDef, aiData);
    case EFFECT_RAIN_DANCE:
        return AI_EffectRainDance(battlerAtk, battlerDef, aiData);
    case EFFECT_SUNNY_DAY:
        return AI_EffectSunnyDay(battlerAtk, battlerDef, aiData);
    case EFFECT_BELLY_DRUM:
        return AI_EffectBellyDrum(battlerAtk, battlerDef, aiData);
    case EFFECT_PSYCH_UP:
        return AI_EffectPsychUp(battlerAtk, battlerDef, aiData);
    case EFFECT_SEMI_INVULNERABLE:
        return AI_EffectSemiInvulnerable(battlerAtk, battlerDef, move, aiData);
    case EFFECT_DEFENSE_CURL:
        return AI_EffectDefenseCurl(battlerAtk, battlerDef, aiData);
    case EFFECT_FIRST_TURN_ONLY:
        return AI_EffectFirstTurnOnly(battlerAtk, battlerDef, move, aiData);
    case EFFECT_STOCKPILE:
        return AI_EffectStockpile(battlerAtk, battlerDef, aiData);
    case EFFECT_SWAGGER:
        return AI_EffectSwagger(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FLATTER:
        return AI_EffectFlatter(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FURY_CUTTER:
        return AI_EffectFuryCutter(battlerAtk, battlerDef, aiData);
    case EFFECT_ATTRACT:
        return AI_EffectAttract(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SAFEGUARD:
        return AI_EffectSafeguard(battlerAtk, battlerDef, move, aiData);
    case EFFECT_DEFOG:
        return AI_EffectDefog(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TORMENT:
        return AI_EffectTorment(battlerAtk, battlerDef, move, aiData);
    case EFFECT_WILL_O_WISP:
        return AI_EffectWillOWisp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FOLLOW_ME:
        return AI_EffectFollowMe(battlerAtk, battlerDef, move, aiData);
    case EFFECT_CHARGE:
        return AI_EffectCharge(battlerAtk, battlerDef, aiData);
    case EFFECT_TAUNT:
        return AI_EffectTaunt(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TRICK:
        return AI_EffectTrick(battlerAtk, battlerDef, move, aiData);
    case EFFECT_BESTOW:
        return AI_EffectBestow(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ROLE_PLAY:
        return AI_EffectRolePlay(battlerAtk, battlerDef, aiData);
    case EFFECT_INGRAIN:
        return AI_EffectIngrain(battlerAtk, battlerDef, aiData);
    case EFFECT_MAGIC_COAT:
        return AI_EffectMagicCoat(battlerAtk, battlerDef, aiData);
    case EFFECT_RECYCLE:
        return AI_EffectRecycle(battlerAtk, battlerDef, aiData);
    case EFFECT_RAGING_BULL:
    case EFFECT_BRICK_BREAK:
        return AI_EffectBrickBreak(battlerAtk, battlerDef, aiData);
    case EFFECT_SKILL_SWAP:
        return AI_EffectSkillSwap(battlerAtk, battlerDef, aiData);
    case EFFECT_WORRY_SEED:
        return AI_EffectWorrySeed(battlerAtk, battlerDef, aiData);
    case EFFECT_GASTRO_ACID:
        return AI_EffectGastroAcid(battlerAtk, battlerDef, aiData);
    case EFFECT_SIMPLE_BEAM:
        return AI_EffectSimpleBeam(battlerAtk, battlerDef, aiData);
    case EFFECT_ENTRAINMENT:
        return AI_EffectEntrainment(battlerAtk, battlerDef, aiData);
    case EFFECT_IMPRISON:
        return AI_EffectImprison(battlerAtk, battlerDef, aiData);
    case EFFECT_REFRESH:
        return AI_EffectRefresh(battlerAtk, battlerDef, aiData);
    case EFFECT_TAKE_HEART:
        return AI_EffectTakeHeart(battlerAtk, battlerDef, aiData);
    case EFFECT_PSYCHO_SHIFT:
        return AI_EffectPsychoShift(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SNATCH:
        return AI_EffectSnatch(battlerAtk, battlerDef, move, aiData);
    case EFFECT_MUD_SPORT:
        return AI_EffectMudSport(battlerAtk, battlerDef, move, aiData);
    case EFFECT_WATER_SPORT:
        return AI_EffectWaterSport(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TICKLE:
        return AI_EffectTickle(battlerAtk, battlerDef, aiData);
    case EFFECT_COSMIC_POWER:
        return AI_EffectCosmicPower(battlerAtk, battlerDef, aiData);
    case EFFECT_BULK_UP:
        return AI_EffectBulkUp(battlerAtk, battlerDef, aiData);
    case EFFECT_CALM_MIND:
        return AI_EffectCalmMind(battlerAtk, battlerDef, aiData);
    case EFFECT_GEOMANCY:
        return AI_EffectGeomancy(battlerAtk, battlerDef, aiData);
    case EFFECT_QUIVER_DANCE:
        return AI_EffectQuiverDance(battlerAtk, battlerDef, aiData);
    case EFFECT_VICTORY_DANCE:
        return AI_EffectVictoryDance(battlerAtk, battlerDef, aiData);
    case EFFECT_SHELL_SMASH:
        return AI_EffectShellSmash(battlerAtk, battlerDef, aiData);
    case EFFECT_TIDY_UP:
        return AI_EffectTidyUp(battlerAtk, battlerDef, move, aiData);
        return AI_EffectDragonDance(battlerAtk, battlerDef, aiData);
    case EFFECT_SHIFT_GEAR:
        return AI_EffectShiftGear(battlerAtk, battlerDef, aiData);
    case EFFECT_GUARD_SWAP:
        return AI_EffectGuardSwap(battlerAtk, battlerDef, aiData);
    case EFFECT_POWER_SWAP:
        return AI_EffectPowerSwap(battlerAtk, battlerDef, aiData);
    case EFFECT_POWER_TRICK:
        return AI_EffectPowerTrick(battlerAtk, battlerDef, aiData);
    case EFFECT_HEART_SWAP:
        return AI_EffectHeartSwap(battlerAtk, battlerDef, aiData);
    case EFFECT_SPEED_SWAP:
        return AI_EffectSpeedSwap(battlerAtk, battlerDef, aiData);
    case EFFECT_GUARD_SPLIT:
        return AI_EffectGuardSplit(battlerAtk, battlerDef, aiData);
    case EFFECT_POWER_SPLIT:
        return AI_EffectPowerSplit(battlerAtk, battlerDef, aiData);
    case EFFECT_ELECTRIC_TERRAIN:
        return AI_EffectElectricTerrain(battlerAtk, battlerDef, move, aiData);
    case EFFECT_MISTY_TERRAIN:
        return AI_EffectMistyTerrain(battlerAtk, battlerDef, move, aiData);
    case EFFECT_GRASSY_TERRAIN:
        return AI_EffectGrassyTerrain(battlerAtk, battlerDef, move, aiData);
    case EFFECT_PSYCHIC_TERRAIN:
        return AI_EffectPsychicTerrain(battlerAtk, battlerDef, move, aiData);
    case EFFECT_PLEDGE:
        return AI_EffectPledge(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TRICK_ROOM:
        return AI_EffectTrickRoom(battlerAtk, battlerDef, aiData);
    case EFFECT_MAGIC_ROOM:
        return AI_EffectMagicRoom(battlerAtk, battlerDef, move, aiData);
    case EFFECT_WONDER_ROOM:
        return AI_EffectWonderRoom(battlerAtk, battlerDef, move, aiData);
    case EFFECT_GRAVITY:
        return AI_EffectGravity(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ION_DELUGE:
        return AI_EffectIonDeluge(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FLING:
        return AI_EffectFling(battlerAtk, battlerDef, aiData);
    case EFFECT_EMBARGO:
        return AI_EffectEmbargo(battlerAtk, battlerDef, move, aiData);
    case EFFECT_POWDER:
        return AI_EffectPowder(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TELEKINESIS:
        return AI_EffectTelekinesis(battlerAtk, battlerDef, move, aiData);
    case EFFECT_HEAL_BLOCK:
        return AI_EffectHealBlock(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SOAK:
        return AI_EffectSoak(battlerAtk, battlerDef, move, aiData);
    case EFFECT_THIRD_TYPE:
        return AI_EffectThirdType(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ELECTRIFY:
        return AI_EffectElectrify(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TOPSY_TURVY:
        return AI_EffectTopsyTurvy(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FAIRY_LOCK:
        return AI_EffectFairyLock(battlerAtk, battlerDef, move, aiData);
    case EFFECT_QUASH:
        return AI_EffectQuash(battlerAtk, battlerDef, move, aiData);
    case EFFECT_AFTER_YOU:
        return AI_EffectAfterYou(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TAILWIND:
        return AI_EffectTailwind(battlerAtk, battlerDef, aiData);
    case EFFECT_LUCKY_CHANT:
        return AI_EffectLuckyChant(battlerAtk, battlerDef, move, aiData);
    case EFFECT_MAGNET_RISE:
        return AI_EffectMagnetRise(battlerAtk, battlerDef, move, aiData);
    case EFFECT_CAMOUFLAGE:
        return AI_EffectCamouflage(battlerAtk, battlerDef, move, aiData);
    case EFFECT_TOXIC_THREAD:
        return AI_EffectToxicThread(battlerAtk, battlerDef, move, aiData);
    case EFFECT_COUNTER:
        return AI_EffectCounter(battlerAtk, battlerDef, aiData);
    case EFFECT_MIRROR_COAT:
        return AI_EffectMirrorCoat(battlerAtk, battlerDef, aiData);
    case EFFECT_SHORE_UP:
        return AI_EffectShoreUp(battlerAtk, battlerDef, move, aiData);
    case EFFECT_REVIVAL_BLESSING:
        return AI_EffectRevivalBlessing(battlerAtk, battlerDef, move, aiData);
    case EFFECT_JUNGLE_HEALING:
        return AI_EffectJungleHealing(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SALT_CURE:
        return AI_EffectSaltCure(battlerAtk, battlerDef, aiData);
    case EFFECT_STUFF_CHEEKS:
        return AI_EffectStuffCheeks(battlerAtk, battlerDef, aiData);
    case EFFECT_MINIMIZE:
        return AI_EffectMinimize(battlerAtk, battlerDef, aiData);
    case EFFECT_ROTOTILLER:
        return AI_EffectRototiller(battlerAtk, battlerDef, aiData);
    case EFFECT_GEAR_UP:
        return AI_EffectGearUp(battlerAtk, battlerDef, aiData);
    case EFFECT_MAGNETIC_FLUX:
        return AI_EffectMagneticFlux(battlerAtk, battlerDef, aiData);
    case EFFECT_VENOM_DRENCH:
        return AI_EffectVenonDrench(battlerAtk, battlerDef, aiData);
    case EFFECT_NOBLE_ROAR:
        return AI_EffectNobleRoar(battlerAtk, battlerDef, aiData);
    case EFFECT_CAPTIVATE:
        return AI_EffectCaptivate(battlerAtk, battlerDef, aiData);
    case EFFECT_MIST:
        return AI_EffectMist(battlerAtk, battlerDef, move, aiData);
    case EFFECT_NIGHTMARE:
        return AI_EffectNightmare(battlerAtk, battlerDef, move, aiData);
    case EFFECT_FILLET_AWAY:
        return AI_EffectFilletAway(battlerAtk, battlerDef, aiData);
    case EFFECT_HELPING_HAND:
        return AI_EffectHelpingHand(battlerAtk, battlerDef, move, aiData);
    case EFFECT_AQUA_RING:
        return AI_EffectAquaRing(battlerAtk, battlerDef, aiData);
    case EFFECT_STRENGTH_SAP:
        return AI_EffectStrengthSap(battlerAtk, battlerDef, aiData);
    case EFFECT_COPYCAT:
        return AI_EffectCopycat(battlerAtk, battlerDef, aiData);
    case EFFECT_FLOWER_SHIELD:
        return AI_EffectFlowerShield(battlerAtk, battlerDef, aiData);
    case EFFECT_AROMATIC_MIST:
        return AI_EffectAromaticMist(battlerAtk, battlerDef, aiData);
    case EFFECT_HIT_SWITCH_TARGET:
        return AI_EffectHitSwitchTarget(battlerAtk, battlerDef, move, aiData);
    case EFFECT_PURIFY:
        return AI_EffectPurify(battlerAtk, battlerDef, aiData);
    case EFFECT_RECOIL_IF_MISS:
        return AI_EffectRecoilIfMiss(battlerAtk, battlerDef, aiData);
    case EFFECT_TRANSFORM:
        return AI_EffectTransform(battlerAtk, battlerDef, aiData);
    case EFFECT_SKETCH:
        return AI_EffectSketch(battlerAtk, battlerDef, aiData);
    case EFFECT_HEALING_WISH:
        return AI_EffectHealingWish(battlerAtk, battlerDef, move, aiData);
    case EFFECT_ASSIST:
        return AI_EffectAssist(battlerAtk, battlerDef, aiData);
    case EFFECT_ME_FIRST:
        return AI_EffectMeFirst(battlerAtk, battlerDef, move, aiData);
    case EFFECT_NATURAL_GIFT:
        return AI_EffectNaturalGift(battlerAtk, battlerDef, aiData);
    case EFFECT_HEAL_PULSE:
        return AI_EffectHealPulse(battlerAtk, battlerDef, aiData);
    case EFFECT_HIT_ENEMY_HEAL_ALLY:
        return AI_EffectHitEnemyHealAlly(battlerAtk, battlerDef, aiData);
    case EFFECT_INSTRUCT:
        return AI_EffectInstruct(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SUCKER_PUNCH:
        return AI_EffectSuckerPunch(battlerAtk, battlerDef, move, aiData);
    case EFFECT_SYNCHRONOISE:
        return AI_EffectSynchronoise(battlerAtk, battlerDef, aiData);
    case EFFECT_SKY_DROP:
        return AI_EffectSkyDrop(battlerAtk, battlerDef, move, aiData);
    case EFFECT_UPPER_HAND:
        return AI_EffectUpperHand(battlerAtk, battlerDef, move, aiData);
    case EFFECT_PLACEHOLDER:
        return MOVE_UNUSABLE;
    // TODO: Missing Effects
    // case EFFECT_SPITE:
    //     break;
    // case EFFECT_GRUDGE:
    //     break;
    // case EFFECT_PLASMA_FISTS:
    //     break;
    // case EFFECT_SHELL_TRAP:
    //     break;
    // case EFFECT_BEAK_BLAST:
    //     break;
    // case EFFECT_EXTREME_EVOBOOST:
    //     break;
    // case EFFECT_CLANGOROUS_SOUL:
    //     break;
    // case EFFECT_NO_RETREAT:
    //     break;
    // case EFFECT_SKY_DROP
    //     break;
    // case EFFECT_SPITE:
    //     break;
    // case EFFECT_METRONOME:
    //     break;
    // case EFFECT_CONVERSION_2:
    //     break;
    }
    return NO_INCREASE;
}
