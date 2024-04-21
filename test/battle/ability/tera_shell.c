#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Tera Shell makes all moves against Terapagos not very effective when at full HP")
{
    u16 hp;
    PARAMETRIZE { hp = 100; }
    PARAMETRIZE { hp = 99; }
    GIVEN {
        PLAYER(SPECIES_TERAPAGOS_TERASTAL) { Ability(ABILITY_TERA_SHELL); HP(hp); MaxHP(100);}
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        if (hp == 100) {
            MESSAGE("Foe Wobbuffet used Tackle!");
            ABILITY_POPUP(player, ABILITY_TERA_SHELL);
            MESSAGE("Terapagos made its shell gleam! It's distorting type matchups!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            MESSAGE("It's not very effective…");
        }
        else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_TERA_SHELL);
                MESSAGE("Terapagos made its shell gleam! It's distorting type matchups!");
                MESSAGE("It's not very effective…");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Tera Shell makes all hits of multi-hit moves against Terapagos not very effective")
{
    s16 firstHit;
    s16 secondHit;
    GIVEN {
        PLAYER(SPECIES_TERAPAGOS_TERASTAL) { Ability(ABILITY_TERA_SHELL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DOUBLE_HIT); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used Double Hit!");
        ABILITY_POPUP(player, ABILITY_TERA_SHELL);
        MESSAGE("Terapagos made its shell gleam! It's distorting type matchups!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_HIT, opponent);
        HP_BAR(player, captureDamage: &firstHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_HIT, opponent);
        HP_BAR(player, captureDamage: &secondHit);
        MESSAGE("It's not very effective…");
    } THEN {
        EXPECT_EQ(firstHit, secondHit);
    }
}
