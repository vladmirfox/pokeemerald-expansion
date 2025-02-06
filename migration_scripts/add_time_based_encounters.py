import json


def GetWildEncounterFile():
    print("hello")
    print("finding wild_encounter.json...")

    wFile = open("../src/data/wild_encounters_long.json")
    wData = json.load(wFile)
    
    j = 0
    for group in wData["wild_encounter_groups"]:
        wEncounters = wData["wild_encounter_groups"][j]["encounters"]

        i = 0
        for map in wEncounters:
            if j == 0:
                print(map["map"])
            else:
                print(map["base_label"])
            map["encounter_times"] = [
                [],
                GetMonTable(wEncounters[i]),
                [],
                []
            ]
            i += 1

            for monTable in map.copy():
                if IsMonTable(monTable):
                    map.pop(monTable)
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
        or monTable == "water_mons" 
        or monTable =="rock_smash_mons"
        or monTable == "fishing_mons")


GetWildEncounterFile()