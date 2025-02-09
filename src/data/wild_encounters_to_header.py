import json
import enum

#todo: add hidden mons!
#todo: test with origin/upcoming

#C string vars
define                = "#define"
ENCOUNTER_CHANCE      = "ENCOUNTER_CHANCE"
SLOT                  = "SLOT"
TOTAL                 = "TOTAL"
NULL                  = "NULL"

#encounter group header types
WILD_MON                 = "gWildMon"
wildMonCount             = 0
BATTLE_PIKE_MON          = "gBattlePikeWildMon"
battlePikeMonCount       = 0
BATTLE_PYRAMID_MON       = "gBattlePyramidWildMon"
battlePyramidMonCount    = 0

#mon encounter group types
LAND_MONS             = "land_mons"
LAND_MONS_LABEL       = "LandMons"
WATER_MONS            = "water_mons"
WATER_MONS_LABEL      = "WaterMons"
ROCK_SMASH_MONS       = "rock_smash_mons"
ROCK_SMASH_MONS_LABEL = "RockSmashMons"
FISHING_MONS          = "fishing_mons"
FISHING_MONS_LABEL    = "FishingMons"

#fishing encounter data
GOOD_ROD              = "good_rod"
GOOD_ROD_FIRST_INDEX  = 2
GOOD_ROD_LAST_INDEX   = 4
OLD_ROD               = "old_rod"
OLD_ROD_FIRST_INDEX   = 0
OLD_ROD_LAST_INDEX    = 1
SUPER_ROD             = "super_rod"
SUPER_ROD_FIRST_INDEX = 5
SUPER_ROD_LAST_INDEX  = 9

TIME_MORNING       = "time_morning"
TIME_MORNING_LABEL = "Morning"
TIME_MORNING_INDEX = 0
TIME_DAY           = "time_day"
TIME_DAY_LABEL     = "Day"
TIME_DAY_INDEX     = 1
TIME_EVENING       = "time_evening"
TIME_EVENING_LABEL = "Evening"
TIME_EVENING_INDEX = 2
TIME_NIGHT         = "time_night"
TIME_NIGHT_LABEL   = "Night"
TIME_NIGHT_INDEX   = 3

#struct building blocks
baseStruct    = "const struct WildPokemon"
structLabel   = ""
structMonType = ""
structTime    = ""
structMap     = ""

structInfo    = "Info"
structHeader  = "Header"
structArrayAssign   = "[] ="

baseStructLabel     = ""
baseStructContent   = []
infoStructString     = ""
infoStructRate      = 0
infoStructContent   = []
headerStructLabel   = ""
headerStructContent = {}
headerStructTable   = {}

headerIndex = 0

#map header data variables
hLabel = ""
hForMaps = True
headersArray = [headerIndex]

#headersArrayItems
landMonsInfo      = ""
waterMonsInfo     = ""
rockSmashMonsInfo = ""
fishingMonsInfo   = ""

#encounter rate variables
eLandMons      = []
eWaterMons     = []
eRockSmashMons = []
eFishingMons   = []


#debug output control
printEncounterHeaders = True
printEncounterRateMacros = False
printEncounterStructsInfoString = False
printEncounterStructs = False

def ImportWildEncounterFile():
    global landMonsInfo
    global waterMonsInfo 
    global rockSmashMonsInfo 
    global fishingMonsInfo
    global structLabel 
    global structMonType 
    global structTime
    global structMap 
    global baseStructLabel 
    global baseStructContent 
    global infoStructString 
    global infoStructRate
    global headerStructLabel
    global headerStructContent
    global hLabel
    global headersArray
    global eLandMons
    global eWaterMons
    global eRockSmashMons
    global eFishingMons
    global encounterCount
    global headerIndex

    wFile = open("wild_encounters.json")
    wData = json.load(wFile)

    encounterCount = []
    groupCount = 0
    while groupCount < len(wData["wild_encounter_groups"]):
        encounterCount.append(0)
        groupCount += 1
    
    #print(len(encounterCount))

    for data in wData["wild_encounter_groups"]:
        #print(data)

        wEncounters = wData["wild_encounter_groups"][headerIndex]["encounters"]

        if data == "label":
            hLabel = wData["wild_encounter_groups"][headerIndex]["label"]
        if data == "for_maps":
            hForMaps = wData["wild_encounter_groups"][headerIndex]["for_maps"]
    
        if headerIndex == 0:
            wFields = wData["wild_encounter_groups"][headerIndex]["fields"]
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

            PrintEncounterRateMacros()
        
        for encounter in wEncounters:
            if "map" in encounter:
                structMap = encounter["map"]
            else:
                structMap = encounter["base_label"]

            structLabel = encounter["base_label"]
            #print(headerIndex)
            encounterCount[headerIndex] += 1

            headersArray = []
            for time in encounter["encounter_times"]:
                if TIME_MORNING in time:
                    structTime = TIME_MORNING_LABEL
                elif TIME_DAY in time:
                    structTime = TIME_DAY_LABEL
                elif TIME_EVENING in time:
                    structTime = TIME_EVENING_LABEL
                elif TIME_NIGHT in time:
                    structTime = TIME_NIGHT_LABEL
                else:
                    structTime = ""

                landMonsInfo      = ""
                waterMonsInfo     = ""
                rockSmashMonsInfo = ""
                fishingMonsInfo   = ""
                for encounterTable in time:
                    for areaTable in time[encounterTable]:
                        if LAND_MONS in areaTable:
                            structMonType = LAND_MONS_LABEL
                            landMonsInfo = f"{structLabel}_{structMonType}{structInfo}_{structTime}"
                        elif WATER_MONS in areaTable:
                            structMonType = WATER_MONS_LABEL
                            waterMonsInfo = f"{structLabel}_{structMonType}{structInfo}_{structTime}"
                        elif ROCK_SMASH_MONS in areaTable:
                            structMonType = ROCK_SMASH_MONS_LABEL
                            rockSmashMonsInfo = f"{structLabel}_{structMonType}{structInfo}_{structTime}"
                        elif FISHING_MONS in areaTable:
                            structMonType = FISHING_MONS_LABEL
                            fishingMonsInfo = f"{structLabel}_{structMonType}{structInfo}_{structTime}"
                        else:
                            structMonType = ""
                        
                        baseStructContent = []
                        for monTable in areaTable:
                            for group in areaTable[monTable]:
                                if "mons" in group:
                                    for mon in areaTable[monTable][group]:
                                        baseStructContent.append(list(mon.values()))
                                if "encounter_rate" in group:
                                    infoStructRate = areaTable[monTable][group]
                        
                        baseStructLabel = f"{baseStruct} {structLabel}_{structMonType}_{structTime}{structArrayAssign}"
                        if printEncounterStructs:
                            print("\n")
                            print(baseStructLabel)
                            print("{")
                            PrintStructContent(baseStructContent)
                            print("}")
                        if printEncounterStructsInfoString:
                            infoStructString = f"{baseStruct}{structInfo} {structLabel}_{structMonType}{structInfo}_{structTime} = {{ {infoStructRate}, {structLabel}_{structMonType}_{structTime} }};"
                            print(infoStructString)

                    AssembleMonHeaderContent()
                
        headerIndex += 1
    PrintWildMonHeadersContent()


def PrintStructContent(contentList):
    for monList in contentList:
        print(f"    {{ {monList[0]}, {monList[1]}, {monList[2]} }},")
    return


def AssembleMonHeaderContent():
    SetupMonInfoVars()
    tempHeaderLabel = GetWildMonHeadersLabel()
    
    if tempHeaderLabel not in headerStructTable:
        headerStructTable[tempHeaderLabel] = {}
        headerStructTable[tempHeaderLabel]["groupNum"] = headerIndex

    if structLabel not in headerStructTable[tempHeaderLabel]:
        #print(structLabel)
        headerStructTable[tempHeaderLabel][structLabel] = {}
        headerStructTable[tempHeaderLabel][structLabel]["headerType"] = GetWildMonHeadersLabel()
        headerStructTable[tempHeaderLabel][structLabel]["mapGroup"] = structMap
        headerStructTable[tempHeaderLabel][structLabel]["mapNum"] = structMap
        headerStructTable[tempHeaderLabel][structLabel]["encounterCount"] = encounterCount[headerIndex]
        headerStructTable[tempHeaderLabel][structLabel]["encounter_types"] = []

    headerStructTable[tempHeaderLabel][structLabel]["encounter_types"].append(landMonsInfo)
    headerStructTable[tempHeaderLabel][structLabel]["encounter_types"].append(waterMonsInfo)
    headerStructTable[tempHeaderLabel][structLabel]["encounter_types"].append(rockSmashMonsInfo)
    headerStructTable[tempHeaderLabel][structLabel]["encounter_types"].append(fishingMonsInfo)

    #headerStructTable[tempHeaderLabel].update(headerStructContent[structLabel])


def SetupMonInfoVars():
    global landMonsInfo
    global waterMonsInfo 
    global rockSmashMonsInfo 
    global fishingMonsInfo

    if landMonsInfo == "":
        landMonsInfo = NULL
    else:
        landMonsInfo = f"&{landMonsInfo}"
    if waterMonsInfo == "":
        waterMonsInfo = NULL
    else:
        waterMonsInfo = f"&{waterMonsInfo}"
    if rockSmashMonsInfo == "":
        rockSmashMonsInfo = NULL
    else:
        rockSmashMonsInfo = f"&{rockSmashMonsInfo}"
    if fishingMonsInfo == "":
        fishingMonsInfo = NULL
    else:
        fishingMonsInfo = f"&{fishingMonsInfo}"
    

def PrintWildMonHeadersContent():
    tabStr = "    "

    groupCount = 0
    for group in headerStructTable:
        labelCount = 0
        for label in headerStructTable[group]:
            if label != "groupNum":
                if labelCount == 0:
                    PrintEncounterHeaders("\n")
                    PrintEncounterHeaders(headerStructTable[group][label]["headerType"])

                PrintEncounterHeaders(tabStr + "{")
                for stat in headerStructTable[group][label]:
                    mapData = headerStructTable[group][label][stat]

                    if stat == "mapGroup":
                        PrintEncounterHeaders(f"{tabStr}{tabStr}.mapGroup = {mapData},")
                    elif stat == "mapNum":
                        PrintEncounterHeaders(f"{tabStr}{tabStr}.mapNum = {mapData},")

                    if type(headerStructTable[group][label][stat]) == list:
                        PrintEncounterHeaders(f"{tabStr}{tabStr}.encounterTypes =")
                        PrintEncounterHeaders(tabStr + tabStr + "{")

                        infoCount = 0
                        infoIndex = 0
                        for monInfo in headerStructTable[group][label][stat]:
                            timeStr = GetTimeStrFromIndex(infoIndex)

                            if infoCount in [0, 4, 8, 12]:
                                PrintEncounterHeaders(f"{tabStr}{tabStr}{tabStr}[{timeStr}] = ")
                                infoIndex += 1

                                PrintEncounterHeaders(tabStr + tabStr + tabStr + "{")
                                PrintEncounterHeaders(f"{tabStr}{tabStr}{tabStr}{tabStr}landMonsInfo = {monInfo},")
                            elif infoCount in [1, 5, 9, 13]:
                                PrintEncounterHeaders(f"{tabStr}{tabStr}{tabStr}{tabStr}.waterMonsInfo = {monInfo},")
                            elif infoCount in [2, 6, 10, 14]:
                                PrintEncounterHeaders(f"{tabStr}{tabStr}{tabStr}{tabStr}.rockSmashMonsInfo = {monInfo},")
                            elif infoCount in [3, 7, 11, 15]:
                                PrintEncounterHeaders(f"{tabStr}{tabStr}{tabStr}{tabStr}.fishMonsInfo = {monInfo},")
                                PrintEncounterHeaders(tabStr + tabStr + tabStr + "},")

                            infoCount += 1

                        PrintEncounterHeaders(tabStr + tabStr + "},")
                PrintEncounterHeaders(tabStr + "},")
                labelCount += 1
        groupCount += 1
        PrintEncounterHeaders("};")


def GetWildMonHeadersLabel():
    if headerIndex == 0:
        return f"{baseStruct}{structHeader} {WILD_MON}{structHeader}s{structArrayAssign}" + "\n{"
    elif headerIndex == 1:
        return f"{baseStruct}{structHeader} {BATTLE_PYRAMID_MON}{structHeader}s{structArrayAssign}" + "\n{"
    elif headerIndex == 2:
        return f"{baseStruct}{structHeader} {BATTLE_PIKE_MON}{structHeader}s{structArrayAssign}" + "\n{"
    

def PrintEncounterHeaders(content):
    if printEncounterHeaders:
        print(content)


def PrintEncounterRateMacros():
    if printEncounterRateMacros:
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


def GetTimeStrFromIndex(index):
    if index == TIME_MORNING_INDEX:
        return TIME_MORNING.upper()
    elif index == TIME_DAY_INDEX:
        return TIME_DAY.upper()
    elif index == TIME_EVENING_INDEX:
        return TIME_EVENING.upper()
    elif index == TIME_NIGHT_INDEX:
        return TIME_NIGHT.upper()
    else:
        return index


ImportWildEncounterFile()


""" !!!! EXAMPLE TEXT !!!!
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

const struct WildPokemonInfo gRoute101_LandMonsInfo_Day= { 20, gRoute101_LandMons_Day };
const struct WildPokemonHeader gWildMonHeaders[] =
{
    {
        .mapGroup = MAP(ROUTE101),
        .mapNum = MAP_NUM(ROUTE101),
        .encounterTypes = 
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute101_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            }
    },
}
"""