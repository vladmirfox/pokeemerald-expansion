# Pokemon Bugmerald Version

## What is?

Bugmerald Version is a decomp hack project based off RHH's [pokeemerald](https://github.com/rh-hideout/pokeemerald-expansion) decompilation project.
Current pokeemerald-expansion version 1.71: 

Have you always been annoyed that your precious first route bug types get outclassed before you're even halfway through the game? That bug types routinely get the short end of the stick in stats and abilities? Does it bother you that Bug type is considered the worst competitive type in the entire game? Do you want to be the Bug Catcher that takes on the Elite Four instead of wandering aimlessly in Viridian Forest? Good news! This is the hack for you.

Bugmerald Version tasks you with becoming the new Champion in a Hoenn region where only Bug Types are available in the wild. Not to worry, improvements have been made across the board to your favorite Bug Types and the matchup chart and every Bug Type through Gen 9 is available to catch! But at the same time, be careful! The Gym Leaders and E4 have caught wind of the rising Bug Type and they have powerful new teams prepared to take them down. And there may be an even bigger threat brewing behind the mischief of Team Aqua and Magma...
:
```
Based off RHH's pokeemerald-expansion v1.7.2 https://github.com/rh-hideout/pokeemerald-expansion/
```

## What features are included?
- ***Pokemon Changes***
    - Base Stat updates to nearly every Bug Type.
    - New Abilities and Movesets for many Bug Types.
	- Only Bug Types are available to catch and train in the wild.
	- Every Bug Type has been given its own niche and identity in battle.
	- All Pokemon based on real-life arthropods now have Bug typing.
    - Changes to Type Matchup Chart for Bug and Ice Types based on theorycrafting from WolfeyVGC.
	- New custom Abilities

- ***Trainer Changes***
	- Trainer battles are now Double Battles.
	- All trainers now have four Pokemon at minimum. Admins, Gym Leaders, and E4 have a full team of Six.
    - Many signature Pokemon for Gym Leaders, E4, and Team Aqua/Magma have been substantially buffed.
	- Gym Leaders and E4 members now balanced around Double Battles and use Hold Items such as Life Orb.
	- New Pokemon from Gen 1 - Gen 9 show up in Trainer parties.

- ***Planned Changes***
	- HMs can be used in the field without teaching them to a Pokemon
	- HM moves can be forgotten without having to use the Move Deleter


## pokeemerald-expansion features (taken from the pokeemerald-expansion github:
- ***Upgraded battle engine.***
    - Gen5+ damage calculation.
    - 2v2 Wild battles support.
    - 1v2/2v1 battles support.
    - Fairy Type.
    - Physical/Special/Status Category Split.
    - New moves and abilities up to Scarlet and Violet.
        - Custom Contest data up to SwSh, newer moves are WIP. ([source](https://pokemonurpg.com/info/contests/rse-move-list/))
    - Mega Evolution
    - Initial battle parameters
        - Queueing stat boosts (aka, Totem Boosts)
        - Setting Terrains.
    - Mid-turn speed recalculation.
    - Quick Poké Ball selection in Wild Battles
        - Press `R` to use last selected Poké Ball.
        - Hold `R` to change selection with the D-Pad.
    - Run option shortcut
    - Faster battle intro
        - Message and animation/cry happens at the same time.
    - Faster HP drain.
    - FRLG/Gen4+ whiteout money calculation.
    - Configurable experience settings
        - Experience on catch.
        - Splitting experience.
        - Trainer experience.
        - Scaled experience.
        - Unevolved experience boost.
    - Frostbite replaces Freezing
    - Critical capture.
    - Removed badge boosts.
    - Level 100 Pokémon can earn EVs.
    - Inverse battle support.
    - TONS of other features
- ***Full Trainer customization***
    - Nickname, EVs, IVs, moves, ability, ball, friendship, nature, gender, shininess.
    - Custom tag battle support (teaming up an NPC in a double battle).
    - Sliding trainer messages.
    - Upgraded Trainer AI
        - Considers newer move effects.
        - Faster calculations.
- ***Pokémon Species from Generations 1-9.***
    - Updated sprites to DS style.
    - Updated stats, types, abilities and egg groups (configurable).
    - Updated Hoenn's Regional Dex to match ORAS' (configurable).
    - Updated National Dex incorporating the new species.
    - Sprite and animation visualizer.
        - Accesible by pressing `Select` on a Pokémon's Summary screen.
    - Gen4+ evolution methods, with some changes:
        - Mossy Rock, Icy Rock and Magnetic Field locations match ORAS'.
            - Leaf, Ice and Thunder Stones may also be used.
        - Inkay just needs level 30 to evolve.
            - You can't physically have both the RTC and gyroscope, so we skip this requirement.
        - Sylveon uses Gen8+'s evolution method (friendship + Fairy Move).
        - Option to use hold evolution items directly like stones.
    - Hidden Abilities.
        - Available via Ability Patch.
        - Compatible with Ghoul's DexNav branch.
    - All gender differences.
        - Custom female icons for female Hippopotas Hippowdon, Pikachu and Wobbufett
    - 3 Perfect IVs on Legendaries, Mythicals and Ultra Beasts.
- ***Customizable form change tables. Full list of methods [here](/include/constants/form_change_types.h).***
    - Item holding (eg. Giratina/Arceus)
    - Item using (eg. Oricorio)
        - Time of day option for Shaymin
    - Fainting
    - Battle begin and end (eg. Xerneas)
        - Move change option for Zacian/Zamazenta
    - Battle end in terrains (eg. Burmy)
    - Switched in battle (eg. Palafin)
    - HP Threshold (eg. Darmanitan)
    - Weather (eg. Castform)
    - End of turn (eg. Morpeko)
    - Time of day (Shaymin)
- ***Breeding Improvements***
    - Incense Baby Pokémon now happen automatically (configurable).
    - Level 1 eggs (configurable).
    - Poké Ball inheriting (configurable).
    - Egg Move Transfer, including Mirror Herb (configurable).
    - Nature inheriting 100% of the time with Everstone (configurable)
    - Gen6+ Ability inheriting (configurable).
- ***Items from newer Generations.***
    - Berserk Gene
    - Most battle items from Gen 4+
    - Existing item data but missing effects:
        - Mints
        - Dynamax Candy
        - Mulches
        - Gimmighoul Coin
        - Booster Energy
        - Tera Shards
        - Tera Orb
- ***Feature branches incorporated (with permission):***
    - [RHH intro credits](https://github.com/Xhyzi/pokeemerald/tree/rhh-intro-credits) by @Xhyzi.
        - A small signature from all of us to show the collective effort in the project :)
    - [Overworld debug](https://github.com/TheXaman/pokeemerald/tree/tx_debug_system) by @TheXaman
        - May be disabled.
        - Accesible by pressing `R + Start` in the overworld by default.
        - **Additional features**:
            - *Clear Boxes*: cleans every Pokémon from the Boxes.
            - *Hatch an Egg*: lets you choose an Egg in your party and immediatly hatch it.
    - [HGSS Pokédex](https://github.com/TheXaman/pokeemerald/tree/tx_pokedexPlus_hgss) by @TheXaman
        - May be disabled.
        - **Additional features**:
            - *Support for new evolution methods*.
            - *Dark Mode*.
    - [Nature Colors](https://github.com/DizzyEggg/pokeemerald/tree/nature_color) in summary screen by @DizzyEggg
- ***Other features***
    - Pressing B while holding a Pokémon drops them like in modern games (configurable).
    - Running indoors (configurable).
    - Configurable overworld poison damage.
    - Configurable flags for disabling Wild encounters and Trainer battles.
    - Configurable flags for forcing or disabling Shinies.
    - Reusable TM.
    - B2W2+ Repel system that also supports LGPE's Lures
    - Gen6+'s EV cap.
    - All bugfixes from pret included.
    - Fixed overworld snow effect.

There are some mechanics, moves and abilities that are missing and being developed. Check [the project's milestones](https://github.com/rh-hideout/pokeemerald-expansion/milestones) to see which ones.

### Credit to all the awesome people at pokeemerald-expansion! (https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) 