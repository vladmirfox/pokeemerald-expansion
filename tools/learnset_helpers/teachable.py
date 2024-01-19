import glob
import re
import json

def parse_mon_name(name):
    return re.sub('(?!^)([A-Z]+)', r'_\1', name).upper()
    
tm_moves = []
tutor_moves = []

# scan incs
incs_to_check =  glob.glob('./data/scripts/*.inc') # all .incs in the script folder
incs_to_check += glob.glob('./data/maps/*/scripts.inc') # all map scripts
for file in incs_to_check:
    with open(file, 'r') as f2:
        raw = f2.read()
    if 'special ChooseMonForMoveTutor' in raw:
        for x in re.findall('setvar VAR_0x8005, (MOVE_.*)', raw):
            if not x in tutor_moves:
                tutor_moves.append(x)

# scan TMs and HMs
with open("./include/constants/tms_hms.h", 'r') as file:
    for x in re.findall('F\((.*)\)', file.read()):
        if not 'MOVE_' + x in tm_moves:
            tm_moves.append('MOVE_' + x)

# get compatibility from jsons
compatibility_dict = {}

for pth in glob.glob('./tools/learnset_helpers/porymoves_files/*.json'):
    f = open(pth, 'r')
    data = json.load(f)
    for mon in data.keys():
        if not mon in compatibility_dict:
            compatibility_dict[mon] = []
        for move in data[mon]['LevelMoves']:
            if not move['Move'] in compatibility_dict[mon]:
                compatibility_dict[mon].append(move['Move'])
        #for move in data[mon]['PreEvoMoves']:
        #    if not move in compatibility_dict[mon]:
        #        compatibility_dict[mon].append(move)
        for move in data[mon]['TMMoves']:
            if not move in compatibility_dict[mon]:
                compatibility_dict[mon].append(move)
        for move in data[mon]['EggMoves']:
            if not move in compatibility_dict[mon]:
                compatibility_dict[mon].append(move)
        for move in data[mon]['TutorMoves']:
            if not move in compatibility_dict[mon]:
                compatibility_dict[mon].append(move)

# if the file was not previously generated, check if there is custom data there that needs to be preserved
with open("./src/data/pokemon/teachable_learnsets.h", 'r') as file:
    raw = file.read()
    if not "// DO NOT MODIFY THIS FILE! It is auto-generated" in raw:
        custom_teachable_compatibilities = {}
        for entry in re.findall("static const u16 s(.*)TeachableLearnset\[\] = {\n((.|\n)*?)\n};", raw):
            monname = parse_mon_name(entry[0])
            if monname == "NONE":
                continue
            compatibility = entry[1].split("\n")
            if not monname in custom_teachable_compatibilities:
                custom_teachable_compatibilities[monname] = []
            if not monname in compatibility_dict:
                # this mon is unknown, so all data needs to be preserved
                for move in compatibility:
                    move = move.replace(",", "").strip()
                    if move == "" or move == "MOVE_UNAVAILABLE":
                        continue
                    custom_teachable_compatibilities[monname].append(move)
            else:
                # this mon is known, so check if the moves in the old teachable_learnsets.h are not in the jsons
                for move in compatibility:
                    move = move.replace(",", "").strip()
                    if move == "" or move == "MOVE_UNAVAILABLE":
                        continue
                    if not move in compatibility_dict[monname]:
                        custom_teachable_compatibilities[monname].append(move)

print(custom_teachable_compatibilities)
# debug thingy
for x in custom_teachable_compatibilities:
    if len(custom_teachable_compatibilities[x]) > 0:
        print(x)
        print(custom_teachable_compatibilities[x])
quit()

# actually prepare the file
with open("./src/data/pokemon/teachable_learnsets.h", 'r') as file:
    out = file.read()
    list_of_mons = re.findall('static const u16 s(.*)TeachableLearnset', out)
for mon in list_of_mons:
    mon_parsed = parse_mon_name(mon)
    tm_learnset = []
    tutor_learnset = []
    if not mon_parsed in compatibility_dict:
        print("Unable to find %s in json" % mon)
        continue
    for move in tm_moves:
        if move in tm_learnset:
            continue
        if move in compatibility_dict[mon_parsed]:
            tm_learnset.append(move)
            continue
    for move in tutor_moves:
        if move in tutor_learnset:
            continue
        if move in compatibility_dict[mon_parsed]:
            tutor_learnset.append(move)
            continue
    tm_learnset.sort()
    tutor_learnset.sort()
    tm_learnset += tutor_learnset
    repl = "static const u16 s%sTeachableLearnset[] = {\n    " % mon
    if len(tm_learnset) > 0:
        repl += ",\n    ".join(tm_learnset) + ",\n    "
    repl += "MOVE_UNAVAILABLE,\n};"
    newout = re.sub('static const u16 s%sTeachableLearnset\[\] = {[\s\S]*?};' % mon, repl, out)
    if newout != out:
        out = newout
        print("Updated %s" % mon)

with open("./src/data/pokemon/teachable_learnsets.h", 'w') as file:
    file.write(out)
