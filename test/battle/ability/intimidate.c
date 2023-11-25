#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_TACKLE].split == SPLIT_PHYSICAL);
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after switch out", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARBOK) { Ability(ability); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_ARBOK) "'s Intimidate cuts Wobbuffet's attack!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after KO", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); Speed(1); }
        OPPONENT(SPECIES_ARBOK) { Ability(ability); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent);
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_ARBOK) "'s Intimidate cuts Wobbuffet's attack!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Intimidate doesn't activate on an empty field in a double battle")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); SEND_OUT(playerRight, 3); SEND_OUT(opponentRight, 3); }
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        // Everyone faints.

        MESSAGE("Go! " SPECIES_NAME(SPECIES_EKANS) "!");
        MESSAGE("2 sent out " SPECIES_NAME(SPECIES_ARBOK) "!");
        MESSAGE("Go! " SPECIES_NAME(SPECIES_ABRA) "!");
        MESSAGE("2 sent out " SPECIES_NAME(SPECIES_WYNAUT) "!");

        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE(SPECIES_NAME(SPECIES_EKANS) "'s Intimidate cuts Foe Arbok's attack!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE(SPECIES_NAME(SPECIES_EKANS) "'s Intimidate cuts Foe Wynaut's attack!");

        ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_ARBOK) "'s Intimidate cuts Ekans's attack!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_ARBOK) "'s Intimidate cuts Abra's attack!");
    }
}

SINGLE_BATTLE_TEST("Intimidate and Eject Button force the opponent to Attack")
{
    GIVEN {
        ASSUME(gItems[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_HITMONTOP) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN {
               MOVE(player, MOVE_QUICK_ATTACK);
               MOVE(opponent, MOVE_TACKLE);
               SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " is switched out with the Eject Button!");
        MESSAGE("2 sent out " SPECIES_NAME(SPECIES_HITMONTOP) "!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_HITMONTOP) "'s Intimidate cuts Wobbuffet's attack!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_HITMONTOP) " used " MOVE_NAME(MOVE_TACKLE) "!");
        }
    }
}

DOUBLE_BATTLE_TEST("Intimidate activates on an empty slot")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_CROAGUNK);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_HITMONTOP) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_RALTS);
        OPPONENT(SPECIES_AZURILL);
    } WHEN {
        TURN {
            SWITCH(playerLeft, 2);
            MOVE(playerRight, MOVE_GUNK_SHOT, target: opponentLeft);
            MOVE(opponentRight, MOVE_SPLASH);
        }
        TURN {
            SWITCH(playerLeft, 3);
            MOVE(playerRight, MOVE_SPLASH);
            }


    } SCENE {
        MESSAGE("Wobbuffet, that's enough! Come back!");
        MESSAGE("Go! " SPECIES_NAME(SPECIES_WYNAUT) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUNK_SHOT, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponentRight);
        MESSAGE("Wynaut, that's enough! Come back!");
        MESSAGE("Go! " SPECIES_NAME(SPECIES_HITMONTOP) "!");
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        NONE_OF {
            MESSAGE(SPECIES_NAME(SPECIES_HITMONTOP) "'s Intimidate cuts Foe Ralts's attack!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE(SPECIES_NAME(SPECIES_HITMONTOP) "'s Intimidate cuts Foe Azurill's attack!");
    }
}
