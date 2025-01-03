#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Flash Fire boosts fire type moves by 50% but no subsequent increase is applied")
{
    s16 normalDamage;
    s16 boostedDamage;

    GIVEN {
        PLAYER(SPECIES_HEATRAN) { Ability(ABILITY_FLASH_FIRE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); MOVE(opponent, MOVE_EMBER); }
        TURN { MOVE(player, MOVE_EMBER); MOVE(opponent, MOVE_EMBER); }
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, player);
        HP_BAR(opponent, captureDamage: &normalDamage);
        ABILITY_POPUP(player, ABILITY_FLASH_FIRE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, player);
        HP_BAR(opponent, captureDamage: &boostedDamage);
        ABILITY_POPUP(player, ABILITY_FLASH_FIRE);
    } THEN {
        EXPECT_MUL_EQ(normalDamage, UQ_4_12(1.5), boostedDamage);
    }
}
