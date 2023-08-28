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

SINGLE_BATTLE_TEST("Sandstorm damage does not hurt Ground-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SANDSLASH].types[0] == TYPE_GROUND);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SANDSLASH);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        NOT MESSAGE("Foe Sandslash is buffeted by the sandstorm!");
    }
}

SINGLE_BATTLE_TEST("Sandstorm damage does not hurt Rock-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_NOSEPASS].types[0] == TYPE_ROCK);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_NOSEPASS);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        NOT MESSAGE("Foe Nosepass is buffeted by the sandstorm!");
    }
}

SINGLE_BATTLE_TEST("Sandstorm damage does not hurt Steel-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_REGISTEEL].types[0] == TYPE_STEEL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_REGISTEEL);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        NOT MESSAGE("Foe Registeel is buffeted by the sandstorm!");
    }
}