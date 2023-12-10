#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gSpeciesInfo[SPECIES_UMBREON].types[0] == TYPE_DARK);
}

SINGLE_BATTLE_TEST("Prankster-affected moves don't affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_UMBREON);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("It doesn't affect Umbreon…");
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves don't affect Dark-type Pokémon after they switch-in")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_UMBREON);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("It doesn't affect Umbreon…");
    }
}

DOUBLE_BATTLE_TEST("Prankster-affected moves affect Ally Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_UMBREON);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CONFUSE_RAY, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerLeft);
        NOT MESSAGE("It doesn't affect Umbreon…");
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves called via Assist don't affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_UMBREON);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CONFUSE_RAY); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_ASSIST); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("It doesn't affect Umbreon…");
    }
}

DOUBLE_BATTLE_TEST("Prankster-affected moves called via Instruct affect Dark-type Pokémon")
{
    KNOWN_FAILING;
    GIVEN {
        PLAYER(SPECIES_VOLBEAT) { Speed(20); Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(10);}
        OPPONENT(SPECIES_UMBREON) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CONFUSE_RAY, target: opponentLeft);
               MOVE(playerRight, MOVE_INSTRUCT, target: playerLeft);
        }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerLeft);
        MESSAGE("It doesn't affect Foe Umbreon…");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INSTRUCT, playerLeft);
    }
}

SINGLE_BATTLE_TEST("Prankster increases the priority of moves by 1")
{
    KNOWN_FAILING; // Prio isn't increased
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(10); }
        OPPONENT(SPECIES_VOLBEAT) { Speed(5); Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
    }
}

DOUBLE_BATTLE_TEST("Prankster-affected moves called via After you affect Dark-type Pokémon")
{
    KNOWN_FAILING; // Dark types are still not affected.
    GIVEN {
        PLAYER(SPECIES_VOLBEAT) { Speed(1); Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(20);}
        OPPONENT(SPECIES_UMBREON) { Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); }
    } WHEN {
        TURN { MOVE(playerRight, MOVE_AFTER_YOU, target: playerLeft);
               MOVE(playerLeft, MOVE_CONFUSE_RAY, target: opponentLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerLeft);
    }
}

SINGLE_BATTLE_TEST("Prankster is blocked by Quick Guard in Gen5+")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_GUARD); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_GUARD, player);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("Wobbuffet protected itself!");
    }
}

DOUBLE_BATTLE_TEST("Prankster-affected moves that target all Pokémon are successful regardless of the presence of Dark-type Pokémon")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_CAPTIVATE].target == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_UMBREON);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CAPTIVATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CAPTIVATE, playerLeft);
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves can still be bounced back by Dark-types using Magic Coat")
{
    KNOWN_FAILING;
    GIVEN {
        PLAYER(SPECIES_UMBREON);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("Foe Volbeat became confused!");
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves can still be bounced back by a Dark-type with Magic Bounce")
{
    GIVEN {
        PLAYER(SPECIES_ABSOL) { Item(ITEM_ABSOLITE); }
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        MESSAGE("Foe Volbeat's Confuse Ray was bounced back by Absol's Magic Bounce!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves that are bounced back by Magic Bounce can affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_ABSOL) { Item(ITEM_ABSOLITE); }
        OPPONENT(SPECIES_MURKROW) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        MESSAGE("Foe Murkrow's Confuse Ray was bounced back by Absol's Magic Bounce!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        MESSAGE("Foe Murkrow became confused!");
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves that are bounced back by Magic Coat from a Pokémon with Prankster can't affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_UMBREON);
        OPPONENT(SPECIES_MURKROW) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_MAGIC_COAT); MOVE(player, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        MESSAGE("It doesn't affect Umbreon…");
    }
}

TO_DO_BATTLE_TEST("Prankster-affected moves which are reflected by Magic Coat can affect Dark-type Pokémon, unless the Pokémon that bounced the move also has Prankster");
TO_DO_BATTLE_TEST("Prankster-affected moves called via Nature Power don't affect Dark-type Pokémon");
TO_DO_BATTLE_TEST("Prankster increases the priority of status Z-Moves by 1");
TO_DO_BATTLE_TEST("Prankster increases the priority of Extreme Evoboost by 1");
