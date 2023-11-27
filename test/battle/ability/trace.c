#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Trace copies opponents ability")
{
    GIVEN {
        PLAYER(SPECIES_RALTS) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_TORCHIC) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_TRACE);
        MESSAGE("Ralts TRACED Foe Torchic's Blaze!");
    }
}

SINGLE_BATTLE_TEST("Trace copies opponents ability on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET)
        PLAYER(SPECIES_RALTS) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_TORCHIC) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_TRACE);
        MESSAGE("Ralts TRACED Foe Torchic's Blaze!");
    }
}

SINGLE_BATTLE_TEST("Trace copies opponents ability on switch-in even if opponent switched in at the same time - 1")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET)
        PLAYER(SPECIES_RALTS) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_TREECKO) { HP(1); }
        OPPONENT(SPECIES_TORCHIC) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { MOVE(player, MOVE_MISTY_EXPLOSION); SEND_OUT(opponent, 1); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MISTY_EXPLOSION);
        ABILITY_POPUP(player, ABILITY_TRACE);
        MESSAGE("Ralts TRACED Foe Torchic's Blaze!");
    }
}

SINGLE_BATTLE_TEST("Trace copies opponents ability on switch-in even if opponent switched in at the same time - 2")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET)
        PLAYER(SPECIES_RALTS) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_TREECKO) { HP(1); }
        OPPONENT(SPECIES_TORCHIC) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { MOVE(player, MOVE_VOLT_SWITCH); SEND_OUT(opponent, 1); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_VOLT_SWITCH);
        ABILITY_POPUP(player, ABILITY_TRACE);
        MESSAGE("Ralts TRACED Foe Torchic's Blaze!");
    }
}

SINGLE_BATTLE_TEST("Trace copies opponents ability on switch-in even if opponent switched in at the same time - 3")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_RALTS) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_TREECKO) { HP(1); }
        OPPONENT(SPECIES_TORCHIC) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { MOVE(player, MOVE_OVERHEAT); SEND_OUT(opponent, 1); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OVERHEAT);
        ABILITY_POPUP(player, ABILITY_TRACE);
        MESSAGE("Ralts TRACED Foe Torchic's Blaze!");
    }
}
