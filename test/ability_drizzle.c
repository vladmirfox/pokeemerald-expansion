#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("Drizzle summons rain", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_DRIZZLE; }
    PARAMETRIZE { ability = ABILITY_DAMP; }

    GIVEN {
        PLAYER(SPECIES_POLITOED) { Ability(ability); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BUBBLE); }
    } SCENE {
        if (ability == ABILITY_DRIZZLE) {
            ABILITY_POPUP(player, ABILITY_DRIZZLE);
            MESSAGE("Politoed's Drizzle made it rain!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.5), results[0].damage);
    }
}

SINGLE_BATTLE_TEST("Drizzle is prevented by primal weather")
{
    u32 species, item;
    PARAMETRIZE { species = SPECIES_KYOGRE; item = ITEM_BLUE_ORB; }
    PARAMETRIZE { species = SPECIES_GROUDON; item = ITEM_RED_ORB; }

    GIVEN {
        PLAYER(SPECIES_POLITOED) { Ability(ABILITY_DRIZZLE); }
        OPPONENT(species) { Item(item); }
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player);
        if (species == SPECIES_KYOGRE)
            MESSAGE("There is no relief from this heavy rain!");
        else
            MESSAGE("The extremely harsh sunlight was not lessened at all!");
    }
}
