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
