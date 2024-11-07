import re
import glob
import os

if not os.path.exists("Makefile"):
    print("Please run this script from your root folder.")
    quit()

animationSpecies = []

# Read front_pic_anims.h
for file in glob.glob('./src/data/pokemon_graphics/front_pic_anims.h'):
    with open(file, 'r') as f:
        anim_table_content = f.read()

# Extract animation data from front_pic_anims.h
anim_table_pattern = re.compile(r'static const union AnimCmd sAnim_(\w+)_1\[\] =\n\{\n((    (ANIMCMD_FRAME\(\d+ *, \d+ *\)|ANIMCMD_LOOP\(\d+\)),\n){1,})    ANIMCMD_END,\n\};', re.MULTILINE)
anim_table_data = {}
for match in anim_table_pattern.findall(anim_table_content):
    if len(match) == 4:
        anim_name, anim_frames, unused1, unused2, = match
        anim_table_data[anim_name] = (anim_frames)

# Extract single-frame placeholder animations from front_pic_anims.h
single_placeholder_pattern = re.compile(r'PLACEHOLDER_ANIM_SINGLE_FRAME\((\w+)\);', re.MULTILINE)
single_placeholder_data = {}
for match in single_placeholder_pattern.findall(anim_table_content):
    anim_name = match
    single_placeholder_data[anim_name] = (anim_name)

# Extract 2-frame placeholder animations from front_pic_anims.h
double_placeholder_pattern = re.compile(r'PLACEHOLDER_ANIM_TWO_FRAMES\((\w+)\);', re.MULTILINE)
double_placeholder_data = {}
for match in double_placeholder_pattern.findall(anim_table_content):
    anim_name = match
    double_placeholder_data[anim_name] = (anim_name)

# Trackers
updated = False
issuesCounter = 0

# Modify gen_X_families.h content
def add_anim_data(match):
    global updated
    global issuesCounter
    mon_name = match.group(1)
    #print(match.group(0))
    if mon_name in anim_table_data:
        anim_frames = anim_table_data[mon_name]
        anim_frames = re.sub('    ANIMCMD_FRAME\(', '            ANIMCMD_FRAME(', anim_frames)
        updated = True
        return f'.frontAnimFrames = ANIM_FRAMES(\n{anim_frames}        ),'
    elif mon_name in single_placeholder_data:
        updated = True
        return f'.frontAnimFrames = sAnims_SingleFramePlaceHolder,'
    elif mon_name in double_placeholder_data:
        updated = True
        return f'.frontAnimFrames = sAnims_TwoFramePlaceHolder,'
    else:
        if mon_name != 'SingleFramePlaceHolder' and mon_name != 'TwoFramePlaceHolder':
            print(f"\n - {mon_name} animations were NOT updated.", end="")
            issuesCounter = issuesCounter + 1
        return f'.frontAnimFrames = sAnims_{mon_name},),'


for gen in range(1,10):
    updated = False
    issuesCounter = 0
    print("\ngen_%d_families.h" % gen, end =" ")
    # Read gen_X_families.h content
    for file in glob.glob('./src/data/pokemon/species_info/gen_%d_families.h' % gen):
        with open(file, 'r') as f:
            species_content = f.read()

    item_pattern = re.compile(r'\.frontAnimFrames = sAnims_(\w+),', re.DOTALL)
    modified_species_content = item_pattern.sub(add_anim_data, species_content)

    if updated:
        # Write the modified content back to gen_X_families.h
        for file in glob.glob('./src/data/pokemon/species_info/gen_%d_families.h' % gen):
            with open(file, 'w') as f:
                f.write(modified_species_content)
        print("was updated.", end="")
    elif issuesCounter == 0:
        print("was NOT updated.", end="")

print("")
