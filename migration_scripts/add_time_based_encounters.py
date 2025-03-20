import json
import sys

# you can change these if you're adding seasons/days of the week, etc
ENCOUNTER_GROUP_SUFFIX = [
    "Morning",
    "Day",
    "Evening",
    "Night"
]


ARGS = [
    "--copy",
    "--update"
]


def GetWildEncounterFile():
    wFile = open("../src/data/wild_encounters.json")
    wData = json.load(wFile)

    wBackupData = json.dumps(wData, indent=2)
    wBackupFile = open("../src/data/wild_encounters.json.bak", mode="w", encoding="utf-8")

    wBackupFile.write(wBackupData)

    global COPY_FULL_ENCOUNTER
    global UPDATE_ONLY
    COPY_FULL_ENCOUNTER = False
    UPDATE_ONLY = False

    for arg in ARGS:
        if len(sys.argv) > 1:
            if arg in sys.argv[1:3]:
                if arg == ARGS[0]:
                    COPY_FULL_ENCOUNTER = True
                elif arg == ARGS[1]:
                    UPDATE_ONLY = True
            
    
    print(COPY_FULL_ENCOUNTER)
    print(UPDATE_ONLY)
    

    j = 0
    for group in wData["wild_encounter_groups"]:
        wEncounters = wData["wild_encounter_groups"][j]["encounters"]
        editMap = True

        wEncounters_New = list()
        for map in wEncounters:
            for suffix in ENCOUNTER_GROUP_SUFFIX:
                tempSuffix = "_" + suffix
                if tempSuffix in map["base_label"] or UPDATE_ONLY:
                    editMap = False
                    break
                else: 
                    editMap = True

            if editMap:
                k = 0
                for suffix in ENCOUNTER_GROUP_SUFFIX:
                    tempLabel = map["base_label"] + "_" + suffix
                    tempMapLabel = ""
                    if k == 1 or COPY_FULL_ENCOUNTER:
                        tempDict = map.copy()
                    else:
                        tempDict = dict()
                    
                    if "map" in map:
                        tempMapLabel = map["map"]
                        tempDict["map"] = tempMapLabel

                    tempDict["base_label"] = tempLabel
                    wEncounters_New.append(tempDict)
                    print(tempLabel + " added")
                    k += 1
            else:
                wEncounters_New.append(map.copy())

        wData["wild_encounter_groups"][j]["encounters"] = wEncounters_New
        j += 1

    wNewData = json.dumps(wData, indent=2)
    wNewFile = open("../src/data/wild_encounters.json", mode="w", encoding="utf-8")

    wNewFile.write(wNewData)
    

def GetMonTable(mons):
    tempArr = []
    i = 0

    for monTable in mons:
        if IsMonTable(monTable):
            tempArr.append({ monTable: mons[monTable] })
        i += 1
    
    return tempArr


def IsMonTable(monTable):
    return (monTable == "land_mons" 
        or monTable ==  "water_mons" 
        or monTable ==  "rock_smash_mons"
        or monTable ==  "fishing_mons")


GetWildEncounterFile()
""" !!! EXAMPLE TEXT !!!
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