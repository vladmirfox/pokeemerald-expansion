#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Speed Boost gradually boosts Speed")
{
    GIVEN {
        PLAYER(SPECIES_TORCHIC) { Ability(ABILITY_SPEED_BOOST); Speed(99); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Torchic used " MOVE_NAME(MOVE_CELEBRATE) "!");
        ABILITY_POPUP(player, ABILITY_SPEED_BOOST);
        MESSAGE("Torchic's Speed Boost raised its SPEED!");
        MESSAGE("Torchic used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
    }
}
