#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Sandstorm deals 1/16 damage per turn")
{
    s16 sandstormDamage;

    GIVEN {
        PLAYER(SPECIES_SANDSLASH);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        MESSAGE("Foe Wobbuffet is buffeted by the sandstorm!");
        HP_BAR(opponent, captureDamage: &sandstormDamage);
   } THEN { EXPECT_EQ(sandstormDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Sandstorm multiplies the special defense of Rock-types by 1.5x", s16 damage)
{
    u16 move;
    PARAMETRIZE{ move = MOVE_SANDSTORM; }
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) ;
        OPPONENT(SPECIES_NOSEPASS);
    } WHEN {
        TURN { MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sandstorm turns Weather Ball to a Rock-type move and doubles its power", s16 damage)
{
    u16 move;
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    PARAMETRIZE{ move = MOVE_SANDSTORM; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_WEATHER_BALL].effect == EFFECT_WEATHER_BALL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_MAGMAR) { Item(ITEM_SAFETY_GOGGLES); }; //sandstorm damage throws the calculation off so i have to give safety goggles
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, MOVE_WEATHER_BALL); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(4.0), results[1].damage); // double base power + type effectiveness.
    }
}

SINGLE_BATTLE_TEST("Sandstorm halves the power of Solar Beam", s16 damage)
{
    u16 move;
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    PARAMETRIZE{ move = MOVE_SANDSTORM; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SOLAR_BEAM].effect == EFFECT_SOLAR_BEAM);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_SAFETY_GOGGLES); };
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_SOLAR_BEAM); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sandstorm halves the power of Solar Blade", s16 damage)
{
    u16 move;
    KNOWN_FAILING; // fails bc the bp of solar blade gets rounded up which leads to slightly incorrect calcs down the line
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    PARAMETRIZE{ move = MOVE_SANDSTORM; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SOLAR_BLADE].effect == EFFECT_SOLAR_BEAM);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_SAFETY_GOGGLES); };
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_SOLAR_BLADE); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sandstorm causes Moonlight to recover 1/4 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MOONLIGHT].effect == EFFECT_MOONLIGHT);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); MOVE(player, MOVE_MOONLIGHT); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

SINGLE_BATTLE_TEST("Sandstorm causes Synthesis to recover 1/4 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SYNTHESIS].effect == EFFECT_SYNTHESIS);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); MOVE(player, MOVE_SYNTHESIS); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

SINGLE_BATTLE_TEST("Sandstorm causes Morning Sun to recover 1/4 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MORNING_SUN].effect == EFFECT_MORNING_SUN);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}
