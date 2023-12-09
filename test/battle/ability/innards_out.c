#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Innards Out deals the same amount of damage back if the pokemon with this ability is knocked out")
{
    s16 playerDamage, opponentDamage;

    GIVEN {
        PLAYER(SPECIES_PYUKUMUKU) { HP(40); Ability(ABILITY_INNARDS_OUT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_RAGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, opponent);
        HP_BAR(player, captureDamage: &playerDamage);
        ABILITY_POPUP(player, ABILITY_INNARDS_OUT);
        HP_BAR(opponent, captureDamage: &opponentDamage);
        MESSAGE("Foe Wobbuffet is hurt!");
    }  THEN {
        EXPECT_EQ(playerDamage, opponentDamage);
    }
}

SINGLE_BATTLE_TEST("xx")
{
    GIVEN {
        PLAYER(SPECIES_PYUKUMUKU) { HP(40); Ability(ABILITY_INNARDS_OUT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_GASTRO_ACID); }
        TURN { MOVE(opponent, MOVE_DRAGON_RAGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GASTRO_ACID, opponent);
        MESSAGE("Pyukumuku's ability was suppressed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, opponent);
        HP_BAR(player);
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_INNARDS_OUT);
            HP_BAR(opponent);
            MESSAGE("Foe Wobbuffet is hurt!");
        }
    }
}
