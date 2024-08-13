#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Accuracy controls the proportion of misses")
{
    u32 move;
    PARAMETRIZE { move = MOVE_DYNAMIC_PUNCH; }
    PARAMETRIZE { move = MOVE_THUNDER; }
    PARAMETRIZE { move = MOVE_HYDRO_PUMP; }
    PARAMETRIZE { move = MOVE_RAZOR_LEAF; }
    PARAMETRIZE { move = MOVE_SCRATCH; }
    ASSUME(0 < gMovesInfo[move].accuracy && gMovesInfo[move].accuracy <= 100);
    PASSES_RANDOMLY(gMovesInfo[move].accuracy, 100, RNG_ACCURACY);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
    }
}

SINGLE_BATTLE_TEST("AdditionalEffect.chance controls the proportion of secondary effects")
{
    u32 move, chance;
    PARAMETRIZE { move = MOVE_THUNDER_SHOCK; chance = 10; }
    PARAMETRIZE { move = MOVE_DISCHARGE; chance = 30; }
    PARAMETRIZE { move = MOVE_NUZZLE; chance = 100; }
    ASSUME(MoveHasAdditionalEffect(move, MOVE_EFFECT_PARALYSIS) == TRUE);
    PASSES_RANDOMLY(chance, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Turn order is determined by priority")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_QUICK_ATTACK].priority > gMovesInfo[MOVE_TACKLE].priority);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Turn order is determined by Speed if priority ties")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK); MOVE(opponent, MOVE_QUICK_ATTACK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponent);
    }
}

SINGLE_BATTLE_TEST("Turn order is determined randomly if priority and Speed tie [singles]")
{
    PASSES_RANDOMLY(1, 2, RNG_SPEED_TIE);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK); MOVE(opponent, MOVE_QUICK_ATTACK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponent);
    }
}

DOUBLE_BATTLE_TEST("Turn order is determined randomly if priority and Speed tie [doubles]")
{
    u16 hpMon1, hpMon2;

    PASSES_RANDOMLY(1, 24, RNG_SPEED_TIE);

    ASSUME(gMovesInfo[MOVE_ENDEAVOR].effect == EFFECT_ENDEAVOR);
    ASSUME(gMovesInfo[MOVE_LIFE_DEW].effect == EFFECT_JUNGLE_HEALING);
    ASSUME(gMovesInfo[MOVE_CRUSH_GRIP].effect == EFFECT_VARY_POWER_BASED_ON_HP);
    ASSUME(gMovesInfo[MOVE_SUPER_FANG].effect == EFFECT_SUPER_FANG);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { MaxHP(480); HP(360); Defense(100); Speed(1); }
        PLAYER(SPECIES_WYNAUT) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Attack(100); Speed(1); }
        OPPONENT(SPECIES_WYNAUT) { Speed(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ENDEAVOR, target: opponentLeft); MOVE(playerRight, MOVE_LIFE_DEW); MOVE(opponentLeft, MOVE_CRUSH_GRIP, target: playerLeft, WITH_RNG(RNG_DAMAGE_MODIFIER, 0)); MOVE(opponentRight, MOVE_SUPER_FANG, target: playerLeft); }
    } THEN {
        hpMon1 = playerLeft->hp;
        hpMon2 = opponentLeft->hp;
        //  This tests for unique combinatins of HP values depending on which order the moves are executed in
        //  The unique outcomes arise from the specific attacks and HP, Def, and Atk values chosen
        //  The switch is then set up in such a way that the only way for this test to pass exactly one is for each HP combination to occur exactly once
        //  HP values for individual 'mons are the 3 first for player 'mon and 3 last digits for opponent 'mon
        switch (hpMon1*1000+hpMon2)
        {
            case 188360:
                gBattleTestRunnerState->occurenceCounter += 1 << 0;
                break;
            case 189360:
                gBattleTestRunnerState->occurenceCounter += 1 << 1;
                break;
            case 261360:
                gBattleTestRunnerState->occurenceCounter += 1 << 2;
                break;
            case 235360:
                gBattleTestRunnerState->occurenceCounter += 1 << 3;
                break;
            case 262360:
                gBattleTestRunnerState->occurenceCounter += 1 << 4;
                break;
            case 202360:
                gBattleTestRunnerState->occurenceCounter += 1 << 5;
                break;
            case 189378:
                gBattleTestRunnerState->occurenceCounter += 1 << 6;
                break;
            case 189189:
                gBattleTestRunnerState->occurenceCounter += 1 << 7;
                break;
            case 189480:
                gBattleTestRunnerState->occurenceCounter += 1 << 8;
                break;
            case 188480:
                gBattleTestRunnerState->occurenceCounter += 1 << 9;
                break;
            case 188240:
                gBattleTestRunnerState->occurenceCounter += 1 << 10;
                break;
            case 188188:
                gBattleTestRunnerState->occurenceCounter += 1 << 11;
                break;
            case 262262:
                gBattleTestRunnerState->occurenceCounter += 1 << 12;
                break;
            case 262142:
                gBattleTestRunnerState->occurenceCounter += 1 << 13;
                break;
            case 202403:
                gBattleTestRunnerState->occurenceCounter += 1 << 14;
                break;
            case 202202:
                gBattleTestRunnerState->occurenceCounter += 1 << 15;
                break;
            case 262283:
                gBattleTestRunnerState->occurenceCounter += 1 << 16;
                break;
            case 202283:
                gBattleTestRunnerState->occurenceCounter += 1 << 17;
                break;
            case 235180:
                gBattleTestRunnerState->occurenceCounter += 1 << 18;
                break;
            case 261180:
                gBattleTestRunnerState->occurenceCounter += 1 << 19;
                break;
            case 235235:
                gBattleTestRunnerState->occurenceCounter += 1 << 20;
                break;
            case 235300:
                gBattleTestRunnerState->occurenceCounter += 1 << 21;
                break;
            case 261141:
                gBattleTestRunnerState->occurenceCounter += 1 << 22;
                break;
            case 261261:
                gBattleTestRunnerState->occurenceCounter += 1 << 23;
                break;
        }
        EXPECT_EQ(gBattleTestRunnerState->occurenceCounter, (1 << 24) - 1);
    }
}

SINGLE_BATTLE_TEST("Critical hits occur at a 1/24 rate")
{
    ASSUME(B_CRIT_CHANCE >= GEN_7);
    PASSES_RANDOMLY(1, 24, RNG_CRITICAL_HIT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Slash's critical hits occur at a 1/8 rate")
{
    ASSUME(B_CRIT_CHANCE >= GEN_7);
    ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Critical hits deal 50% more damage", s16 damage)
{
    bool32 criticalHit;
    PARAMETRIZE { criticalHit = FALSE; }
    PARAMETRIZE { criticalHit = TRUE; }
    GIVEN {
        ASSUME(B_CRIT_MULTIPLIER >= GEN_6);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH, criticalHit: criticalHit); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Critical hits do not ignore positive stat stages", s16 damage)
{
    u32 move;
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    PARAMETRIZE { move = MOVE_HOWL; }
    PARAMETRIZE { move = MOVE_TAIL_WHIP; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SCRATCH].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, MOVE_SCRATCH, criticalHit: TRUE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } THEN {
        if (i > 0)
            EXPECT_LT(results[0].damage, results[i].damage);
    }
}

SINGLE_BATTLE_TEST("Critical hits ignore negative stat stages", s16 damage)
{
    u32 move;
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    PARAMETRIZE { move = MOVE_HARDEN; }
    PARAMETRIZE { move = MOVE_GROWL; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SCRATCH].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_SCRATCH, criticalHit: TRUE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } THEN {
        if (i > 0)
            EXPECT_EQ(results[0].damage, results[i].damage);
    }
}
