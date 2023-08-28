#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_EMBER].type == TYPE_FIRE);
    ASSUME(gBattleMoves[MOVE_WATER_GUN].type == TYPE_WATER);
}
 
SINGLE_BATTLE_TEST("Rain multiplies the power of Fire-type moves by 0.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_RAIN_DANCE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}
 
SINGLE_BATTLE_TEST("Rain multiplies the power of Water-type moves by 1.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_RAIN_DANCE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Rain turns Weather Ball to a Water-type move and doubles its power", s16 damage)
{
    u16 move;
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    PARAMETRIZE{ move = MOVE_RAIN_DANCE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_WEATHER_BALL].effect == EFFECT_WEATHER_BALL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARCANINE);
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, MOVE_WEATHER_BALL); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(6.0), results[1].damage); // double base power + type effectiveness + rain 50% boost
    }
}

SINGLE_BATTLE_TEST("Rain allows Thunder to bypass accuracy checks")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_THUNDER].accuracy == 70);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_THUNDER); }
    } SCENE {
        NONE_OF { MESSAGE("Wobbuffet's attack missed!"); }
    }
}

SINGLE_BATTLE_TEST("Rain allows Hurricane to bypass accuracy checks")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_HURRICANE].accuracy == 70);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_HURRICANE); }
    } SCENE {
        NONE_OF { MESSAGE("Wobbuffet's attack missed!"); }
    }
}

SINGLE_BATTLE_TEST("Rain halves the power of Solar Beam", s16 damage)
{
    u16 move;
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    PARAMETRIZE{ move = MOVE_RAIN_DANCE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SOLAR_BEAM].effect == EFFECT_SOLAR_BEAM);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_SOLAR_BEAM); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Rain halves the power of Solar Blade", s16 damage)
{
    u16 move;
    KNOWN_FAILING; // fails bc the bp of solar blade gets rounded up which leads to slightly incorrect calcs down the line
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    PARAMETRIZE{ move = MOVE_RAIN_DANCE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SOLAR_BLADE].effect == EFFECT_SOLAR_BEAM);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_SOLAR_BLADE); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Rain causes Moonlight to recover 1/4 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MOONLIGHT].effect == EFFECT_MOONLIGHT);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_MOONLIGHT); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

SINGLE_BATTLE_TEST("Rain causes Synthesis to recover 1/4 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SYNTHESIS].effect == EFFECT_SYNTHESIS);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_SYNTHESIS); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

SINGLE_BATTLE_TEST("Rain causes Morning Sun to recover 1/4 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MORNING_SUN].effect == EFFECT_MORNING_SUN);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}