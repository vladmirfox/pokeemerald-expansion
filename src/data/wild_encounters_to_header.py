import json
import enum

#todo: don't forget to add hidden mons!

#C string vars
define                = "#define"
ENCOUNTER_CHANCE      = "ENCOUNTER_CHANCE"
SLOT                  = "SLOT"
TOTAL                 = "TOTAL"

LAND_MONS             = "land_mons"
WATER_MONS            = "water_mons"
ROCK_SMASH_MONS       = "rock_smash_mons"
FISHING_MONS          = "fishing_mons"
LAND_MONS_LABEL       = "LandMons"
WATER_MONS_LABEL      = "WaterMons"
ROCK_SMASH_MONS_LABEL = "RockSmashMons"
FISHING_MONS_LABEL    = "FishingMons"

GOOD_ROD              = "good_rod"
GOOD_ROD_FIRST_INDEX  = 2
GOOD_ROD_LAST_INDEX   = 4
OLD_ROD               = "old_rod"
OLD_ROD_FIRST_INDEX   = 0
OLD_ROD_LAST_INDEX    = 1
SUPER_ROD             = "super_rod"
SUPER_ROD_FIRST_INDEX = 5
SUPER_ROD_LAST_INDEX  = 9

TIME_MORNING_LABEL = "Morning"
TIME_MORNING_GROUP = "time_morning"
TIME_MORNING_INDEX = 0
TIME_DAY_LABEL     = "Day"
TIME_DAY_GROUP     = "time_day"
TIME_DAY_INDEX     = 1
TIME_EVENING_LABEL = "Evening"
TIME_EVENING_GROUP = "time_evening"
TIME_EVENING_INDEX = 2
TIME_NIGHT_LABEL   = "Night"
TIME_NIGHT_GROUP   = "time_night"
TIME_NIGHT_INDEX   = 3

#struct building blocks
baseStruct   = "const struct WildPokemon"
structName   = ""
structTime   = ""
structInfo   = "Info"
structHeader = "Header"
structAssign = "[] ="

baseStructString = ""
baseStructName   = ""

#map header data variables
hLabel = ""
hForMaps = True

#encounter rate variables
eLandMons      = []
eWaterMons     = []
eRockSmashMons = []
eFishingMons   = []

def ImportWildEncounterFile():
    print("hello")
    print("finding wild_encounter.json...")

    wFile = open("wild_encounters.json")
    wData = json.load(wFile)

    i = 0
    for data in wData["wild_encounter_groups"]:
        #print(data)
        wEncounters = wData["wild_encounter_groups"][i]["encounters"]

        if data == "label":
            hLabel = wData["wild_encounter_groups"][i]["label"]
        if data == "for_maps":
            hForMaps = wData["wild_encounter_groups"][i]["for_maps"]
    
        if i == 0:
            wFields = wData["wild_encounter_groups"][i]["fields"]
            for field in wFields:
                if field["type"] == LAND_MONS:
                    eLandMons = field["encounter_rates"]
                elif field["type"] == WATER_MONS:
                    eWaterMons = field["encounter_rates"]
                elif field["type"] == ROCK_SMASH_MONS:
                    eRockSmashMons = field["encounter_rates"]
                elif field["type"] == FISHING_MONS:
                    eFishingMons = field["encounter_rates"]
                    eFishingMons.append(field["groups"])
        """
            rateCount = 0
            for percent in eLandMons:
                if rateCount == 0:
                    print(f"{define} {ENCOUNTER_CHANCE}_{LAND_MONS.upper()}_{SLOT}_{rateCount} {percent}")
                else:
                    print(
                        f"{define} {ENCOUNTER_CHANCE}_{LAND_MONS.upper()}_{SLOT}_{rateCount} {ENCOUNTER_CHANCE}_{LAND_MONS.upper()}_{SLOT}_{rateCount - 1} + {percent}"
                    )

                if rateCount + 1 == len(eLandMons):
                    print(
                        f"{define} {ENCOUNTER_CHANCE}_{LAND_MONS.upper()}_{TOTAL} ({ENCOUNTER_CHANCE}_{LAND_MONS.upper()}_{SLOT}_{rateCount})"
                    )
                rateCount += 1
            
            rateCount = 0
            for percent in eWaterMons:
                if rateCount == 0:
                    print(f"{define} {ENCOUNTER_CHANCE}_{WATER_MONS.upper()}_{SLOT}_{rateCount} {percent}")
                else:
                    print(
                        f"{define} {ENCOUNTER_CHANCE}_{WATER_MONS.upper()}_{SLOT}_{rateCount} {ENCOUNTER_CHANCE}_{WATER_MONS.upper()}_{SLOT}_{rateCount - 1} + {percent}"
                    )

                if rateCount + 1 == len(eWaterMons):
                    print(
                        f"{define} {ENCOUNTER_CHANCE}_{WATER_MONS.upper()}_{TOTAL} ({ENCOUNTER_CHANCE}_{WATER_MONS.upper()}_{SLOT}_{rateCount})"
                    )
                rateCount += 1

            rateCount = 0
            for percent in eRockSmashMons:
                if rateCount == 0:
                    print(f"{define} {ENCOUNTER_CHANCE}_{ROCK_SMASH_MONS.upper()}_{SLOT}_{rateCount} {percent}")
                else:
                    print(
                        f"{define} {ENCOUNTER_CHANCE}_{ROCK_SMASH_MONS.upper()}_{SLOT}_{rateCount} {ENCOUNTER_CHANCE}_{ROCK_SMASH_MONS.upper()}_{SLOT}_{rateCount - 1} + {percent}"
                    )
                
                if rateCount + 1 == len(eRockSmashMons):
                    print(
                        f"{define} {ENCOUNTER_CHANCE}_{ROCK_SMASH_MONS.upper()}_{TOTAL} ({ENCOUNTER_CHANCE}_{ROCK_SMASH_MONS.upper()}_{SLOT}_{rateCount})"
                    )
                rateCount += 1

            for rodRate in eFishingMons[-1]:
                for rodPercentIndex in eFishingMons[-1][rodRate]:
                    if rodPercentIndex == OLD_ROD_FIRST_INDEX or rodPercentIndex == GOOD_ROD_FIRST_INDEX or rodPercentIndex == SUPER_ROD_FIRST_INDEX:
                        print(
                            f"{define} {ENCOUNTER_CHANCE}_{FISHING_MONS.upper()}_{rodRate.upper()}_{SLOT}_{rodPercentIndex} {eFishingMons[rodPercentIndex]}"
                        )
                    else:
                        print(
                            f"{define} {ENCOUNTER_CHANCE}_{FISHING_MONS.upper()}_{rodRate.upper()}_{SLOT}_{rodPercentIndex} {ENCOUNTER_CHANCE}_{FISHING_MONS.upper()}_{rodRate.upper()}_{SLOT}_{rodPercentIndex - 1} + {eFishingMons[rodPercentIndex]}"
                        )
                    
                    if rodPercentIndex == OLD_ROD_LAST_INDEX or rodPercentIndex == GOOD_ROD_LAST_INDEX or rodPercentIndex == SUPER_ROD_LAST_INDEX:
                        print(
                            f"{define} {ENCOUNTER_CHANCE}_{FISHING_MONS.upper()}_{rodRate.upper()}_{TOTAL} ({ENCOUNTER_CHANCE}_{FISHING_MONS.upper()}_{rodRate.upper()}_{SLOT}_{rodPercentIndex})"
                        )
        """

        for encounter in wEncounters:
            print(encounter)
        i += 1

ImportWildEncounterFile()


"""
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 20 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 + 20
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_11 ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_TOTAL (ENCOUNTER_CHANCE_LAND_MONS_SLOT_11)
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 60 
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_4 ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_WATER_MONS_TOTAL (ENCOUNTER_CHANCE_WATER_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 60 
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_TOTAL (ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 60 
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 70 
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1 ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 + 30
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1)
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 40 
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 + 40
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 + 15
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 + 4
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 + 1
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9)

const struct WildPokemon gRoute101_LandMons_Day[] =
{
    { 2, 2, SPECIES_WURMPLE },
    { 2, 2, SPECIES_POOCHYENA },
    { 2, 2, SPECIES_WURMPLE },
    { 3, 3, SPECIES_WURMPLE },
    { 3, 3, SPECIES_POOCHYENA },
    { 3, 3, SPECIES_POOCHYENA },
    { 3, 3, SPECIES_WURMPLE },
    { 3, 3, SPECIES_POOCHYENA },
    { 2, 2, SPECIES_ZIGZAGOON },
    { 2, 2, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_ZIGZAGOON },
};

const struct WildPokemonInfo gRoute101_LandMonsInfo_Day= { 20, gRoute101_LandMons_Day};
const struct WildPokemonHeader gWildMonHeaders[] =
{
    {
        .mapGroup = MAP_GROUP(ROUTE101),
        .mapNum = MAP_NUM(ROUTE101),
        .encounterTypes[0] = 
            .landMonsInfo = &gRoute101_LandMonsInfo_Day,
            .waterMonsInfo = NULL,
            .rockSmashMonsInfo = NULL,
            .fishingMonsInfo = NULL,
            .hiddenMonsInfo = NULL,
    },
}
"""