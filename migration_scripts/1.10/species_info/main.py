import re
import glob
import os

main_dir = "./src/data/pokemon/species_info"

label_renames = [
    ["Alolan", "Alola", "ALOLAN", "ALOLA"],
    ["Galarian", "Galar", "GALARIAN", "GALAR"],
    ["Hisuian", "Hisui", "HISUIAN", "HISUI"],
    ["PaldeanCombatBreed", "PaldeaCombat", "PALDEAN_COMBAT_BREED", "PALDEA_COMBAT"],
    ["PaldeanBlazeBreed", "PaldeaBlaze", "PALDEAN_BLAZE_BREED", "PALDEA_BLAZE"],
    ["PaldeanAquaBreed", "PaldeaAqua", "PALDEAN_AQUA_BREED", "PALDEA_AQUA"],
    ["Paldean", "Paldea", "PALDEAN", "PALDEA"],
    ["Gigantamax", "Gmax", "GIGANTAMAX", "GMAX"],
    ["OriginalCap", "Original", "ORIGINAL_CAP", "ORIGINAL"],
    ["HoennCap", "Hoenn", "HOENN_CAP", "HOENN"],
    ["SinnohCap", "Sinnoh", "SINNOH_CAP", "SINNOH"],
    ["UnovaCap", "Unova", "UNOVA_CAP", "UNOVA"],
    ["KalosCap", "Kalos", "KALOS_CAP", "KALOS"],
    ["AlolaCap", "Alola", "ALOLA_CAP", "ALOLA"],
    ["WorldCap", "World", "WORLD_CAP", "WORLD"],
    ["Partner", "Starter", r"PARTNER\] =\n    \{\n {8}\.baseHP * = 45,", r"STARTER] =\n    {\n        .baseHP        = 45,"],        # Hacky way of avoiding conflict between Partner and Partner Cap Pikachu
    ["PartnerCap", "Partner", r"PARTNER_CAP\] =\n    \{\n {8}\.baseHP * = 35,", r"PARTNER] =\n    {\n        .baseHP        = 35,"], # Hacky way of avoiding conflict between Partner and Partner Cap Pikachu
    ["CombatBreed", "Combat", "COMBAT_BREED", "COMBAT"],
    ["BlazeBreed", "Blaze", "BLAZE_BREED", "BLAZE"],
    ["AquaBreed", "Aqua", "AQUA_BREED", "AQUA"],
    ["PlantCloak", "PlantCloak", "PLANT_CLOAK", "PLANT"],
    ["SandyCloak", "Sandy", "SANDY_CLOAK", "SANDY"],
    ["TrashCloak", "Trash", "TRASH_CLOAK", "TRASH"],
    ["WestSea", "WestSea", "WEST_SEA", "WEST"],
    ["EastSea", "East", "EAST_SEA", "EAST"],
    ["OriginalColor", "Original", "ORIGINAL_COLOR", "ORIGINAL"],
    ["StandardMode", "Standard", "STANDARD_MODE", "STANDARD"],
    ["ZenMode", "Zen", "ZEN_MODE", "ZEN"],
    ["Male", "M", "MALE", "M"],
    ["Female", "F", "FEMALE", "F"],
    ["FamilyOfFour", "Four", "FAMILY_OF_FOUR", "FOUR"],
    ["FamilyOfThree", "Three", "FAMILY_OF_THREE", "THREE"],
    ["PhD", "PhD", "PH_D", "PHD"],
    ["BustedTotem", "BustedTotem", "TOTEM_BUSTED", "BUSTED_TOTEM"],
    ["IceFace", "Ice", "ICE_FACE", "ICE"],
    ["NoiceFace", "Noice", "NOICE_FACE", "NOICE"],
    ["HeroOfManyBattles", "Hero", "HERO_OF_MANY_BATTLES", "HERO"],
    ["CrownedSword", "Crowned", "CROWNED_SWORD", "CROWNED"],
    ["CrownedShield", "Crowned", "CROWNED_SHIELD", "CROWNED"],
    ["SingleStrikeStyle", "SingleStrike", "SINGLE_STRIKE_STYLE", "SINGLE_STRIKE"],
    ["RapidStrikeStyle", "RapidStrike", "RAPID_STRIKE_STYLE", "RAPID_STRIKE"],
    ["IceRider", "Ice", "ICE_RIDER", "ICE"],
    ["ShadowRider", "Shadow", "SHADOW_RIDER", "SHADOW"],
    ["GreenPlumage", "Green", "GREEN_PLUMAGE", "GREEN"],
    ["BluePlumage", "Blue", "BLUE_PLUMAGE", "BLUE"],
    ["YellowPlumage", "Yellow", "YELLOW_PLUMAGE", "YELLOW"],
    ["WhitePlumage", "White", "WHITE_PLUMAGE", "WHITE"],
    ["RedFlower", "Red", "RED_FLOWER", "RED"],
    ["BlueFlower", "Blue", "BLUE_FLOWER", "BLUE"],
    ["OrangeFlower", "Orange", "ORANGE_FLOWER", "ORANGE"],
    ["YellowFlower", "Yellow", "YELLOW_FLOWER", "YELLOW"],
    ["WhiteFlower", "White", "WHITE_FLOWER", "WHITE"],
    ["EternalFlower", "Eternal", "ETERNAL_FLOWER", "ETERNAL"],
    ["ygarde50", "ygarde50", "50_AURA_BREAK", "50"],
]

species_macros = [
    "Mothim",
    "Arceus",
    "Genesect",
    "Flabebe",
    "Floette",
    "Florges",
    "Spewpa",
    "Vivillon",
    "Furfrou",
]

if not os.path.exists("Makefile"):
    print("Please run this script from your root folder.")
    quit()

# Read front_pic_anims.h
for file in glob.glob('./src/data/pokemon_graphics/front_pic_anims.h'):
    with open(file, 'r') as f:
        anim_table_content = f.read()

# Read GBA front pic coordinates
for file in glob.glob('./migration_scripts/1.10/species_info/front_pic_coordinates.h'):
    with open(file, 'r') as f:
        gba_content = f.read()
gba_pattern = re.compile(r'\[SPECIES_(\w+)\] *= *\{ *\.size *= *MON_COORDS_SIZE\( *(\w+) *, *(\w+) *\) *, \.y_offset = *(\w+) \},', re.MULTILINE)
gba_data_front_pic_coords = {}
for match in gba_pattern.findall(gba_content):
    if len(match) == 4:
        species_define, width, height, yOffset = match
        gba_data_front_pic_coords[species_define] = (width, height, yOffset)

# Read GBA front pic coordinates
for file in glob.glob('./migration_scripts/1.10/species_info/back_pic_coordinates.h'):
    with open(file, 'r') as f:
        gba_content = f.read()
gba_pattern = re.compile(r'\[SPECIES_(\w+)\] *= *\{ *\.size *= *MON_COORDS_SIZE\( *(\w+) *, *(\w+) *\) *, \.y_offset = *(\w+) \},', re.MULTILINE)
gba_data_back_pic_coords = {}
for match in gba_pattern.findall(gba_content):
    if len(match) == 4:
        species_define, width, height, yOffset = match
        gba_data_back_pic_coords[species_define] = (width, height, yOffset)

# Read GBA icon pal indexes
for file in glob.glob('./migration_scripts/1.10/species_info/pokemon_icon.c'):
    with open(file, 'r') as f:
        gba_content = f.read()
gba_pattern = re.compile(r'\[SPECIES_(\w+)\] *= *(\w+),', re.MULTILINE)
gba_data_pal_indexes = {}
for match in gba_pattern.findall(gba_content):
    if len(match) == 2:
        species_define, palIdx = match
        gba_data_pal_indexes[species_define] = palIdx

# Read GBA enemy mon elevation
for file in glob.glob('./migration_scripts/1.10/species_info/enemy_mon_elevation.h'):
    with open(file, 'r') as f:
        gba_content = f.read()
gba_pattern = re.compile(r'\[SPECIES_(\w+)\] *= *(\w+),', re.MULTILINE)
gba_data_enemy_mon_elevation = {}
for match in gba_pattern.findall(gba_content):
    if len(match) == 2:
        species_define, elevation = match
        gba_data_enemy_mon_elevation[species_define] = elevation

# Read GBA front pic anim ID
for file in glob.glob('./migration_scripts/1.10/species_info/front_pic_anim_ids.h'):
    with open(file, 'r') as f:
        gba_content = f.read()
gba_pattern = re.compile(r'\[SPECIES_(\w+) - 1\] *= *(\w+),', re.MULTILINE)
gba_data_front_pic_anim_ids = {}
for match in gba_pattern.findall(gba_content):
    if len(match) == 2:
        species_define, id = match
        gba_data_front_pic_anim_ids[species_define] = id

# Read GBA anim delays
for file in glob.glob('./migration_scripts/1.10/species_info/animation_delay.h'):
    with open(file, 'r') as f:
        gba_content = f.read()
gba_pattern = re.compile(r'\[SPECIES_(\w+) - 1\] *= *(\w+),', re.MULTILINE)
gba_data_anim_delays = {}
for match in gba_pattern.findall(gba_content):
    if len(match) == 2:
        species_define, delay = match
        gba_data_anim_delays[species_define] = delay

# Read 1.10 female follower data
for file in glob.glob('./migration_scripts/1.10/species_info/female_followers.h'):
    with open(file, 'r') as f:
        gba_content = f.read()
female_pattern = re.compile(r'\[SPECIES_(\w+)\] *= *OVERWORLD_FEMALE\(gObjectEventPic_(\w+), SIZE_(\w+), SHADOW_SIZE_(\w+), TRACKS_(\w+), sAnimTable_Following(, gOverworldPalette_(\w+), gShinyOverworldPalette_(\w+)|)\)', re.MULTILINE)
female_follow_data = {}
for match in female_pattern.findall(gba_content):
    if len(match) == 8:
        species_define, pic, size, shadow, tracks, palettes, normalPal, shinyPal = match
        female_follow_data[species_define] = (pic, size, shadow, tracks, palettes, normalPal, shinyPal)

# Read 1.10 shadow data
for file in glob.glob('./migration_scripts/1.10/species_info/shadows.h'):
    with open(file, 'r') as f:
        gba_content = f.read()
shadow_pattern = re.compile(r'\[SPECIES_(\w+)\] *= *(SHADOW\(.*\)|NO_SHADOW)(,|)\n', re.MULTILINE)
shadow_data = {}
for match in shadow_pattern.findall(gba_content):
    if len(match) == 3:
        species_define, data, unused = match
        shadow_data[species_define] = data

# Read existing animations present to avoid removing shared animations
anim_table_data = {}
shared_anim_table_data = {}
species_data = {}
pattern = re.compile(r'\.frontAnimFrames = sAnims_(\w+),', re.DOTALL)
species_pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n((.*\n){1,}?) {8}\.frontPicSize = MON_COORDS_SIZE\((\w+), (\w+)\),\n {8}\.frontPicYOffset = (.*),\n', re.MULTILINE)
for root, dirs, files in os.walk(main_dir):
    files.sort()
    for fileName in files:
        for file in glob.glob(main_dir + "/" + fileName):
            with open(file, 'r') as f:
                species_content = f.read()
            # Find animation label pattern
            for match in pattern.findall(species_content):
                if match in anim_table_data or match in species_macros:
                    if match not in shared_anim_table_data:
                        shared_anim_table_data[match] = match
                else:
                    anim_table_data[match] = match
            # Find sprite data
            for match in species_pattern.findall(species_content):
                if len(match) == 6:
                    species_define, fillerLines, unused1, frontPicWidth, frontPicHeight, frontPicYOffset = match
                    species_data[species_define] = (frontPicWidth, frontPicHeight, frontPicYOffset)

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

# Read pokemon_jump.c
for file in glob.glob('./migration_scripts/1.10/species_info/pokemon_jump.c'):
    with open(file, 'r') as f:
        pokemon_jump_content = f.read()
pokemon_jump_pattern = re.compile(r'\{ \.species = SPECIES_(\w+), *\.jumpType = JUMP_TYPE_(\w+), \},', re.MULTILINE)
pokemon_jump_data = {}
for match in pokemon_jump_pattern.findall(pokemon_jump_content):
    if len(match) == 2:
        mon_name, jump_type = match
        pokemon_jump_data[mon_name] = (jump_type)

# Trackers
updated = False
issuesCounter = 0

# Modify gen_X_families.h's animation content
def add_anim_data(match):
    global updated
    global issuesCounter
    mon_name = match.group(1)
    if mon_name in anim_table_data and mon_name not in shared_anim_table_data:
        anim_frames = anim_table_data[mon_name]
        anim_frames = re.sub('    ANIMCMD_FRAME\(', '            ANIMCMD_FRAME(', anim_frames)
        anim_frames = re.sub('    ANIMCMD_LOOP\(', '            ANIMCMD_LOOP(', anim_frames)
        updated = True
        return f'.frontAnimFrames = ANIM_FRAMES(\n{anim_frames}        ),'
    elif mon_name in single_placeholder_data:
        updated = True
        return f'.frontAnimFrames = sAnims_SingleFramePlaceHolder,'
    elif mon_name in double_placeholder_data:
        updated = True
        return f'.frontAnimFrames = sAnims_TwoFramePlaceHolder,'
    else:
        if mon_name != 'SingleFramePlaceHolder' and mon_name != 'TwoFramePlaceHolder' and mon_name not in shared_anim_table_data:
            print(f"\n - {mon_name} animations were NOT updated.", end="")
            issuesCounter = issuesCounter + 1
        return f'.frontAnimFrames = sAnims_{mon_name},'

def update_basic_follower_data(match):
    global updated
    global issuesCounter

    # Alignment spaces
    sp1 = "        "
    sp = "            "
    mon_name1 = match.group(1)
    size = match.group(2)
    shadow = match.group(3)
    footprint = match.group(4)
    mon_name2 = match.group(5)
    mon_name3 = match.group(6)

    return f'{sp1}OVERWORLD(\n{sp}gObjectEventPic_{mon_name1},\n{sp}SIZE_{size},\n{sp}SHADOW_SIZE_{shadow},\n{sp}TRACKS_{footprint},\n{sp}sAnimTable_Following,\n{sp}gOverworldPalette_{mon_name2},\n{sp}gShinyOverworldPalette_{mon_name3}\n{sp1})'

def update_set_anim_follower_data(match):
    global updated
    global issuesCounter

    # Alignment spaces
    sp1 = "        "
    sp = "            "
    mon_name1 = match.group(1)
    size = match.group(2)
    shadow = match.group(3)
    footprint = match.group(4)
    setAnim = match.group(5)
    mon_name2 = match.group(6)
    mon_name3 = match.group(7)

    return f'{sp1}OVERWORLD(\n{sp}gObjectEventPic_{mon_name1},\n{sp}SIZE_{size},\n{sp}SHADOW_SIZE_{shadow},\n{sp}TRACKS_{footprint},\n{sp}{setAnim},\n{sp}gOverworldPalette_{mon_name2},\n{sp}gShinyOverworldPalette_{mon_name3}\n{sp1})'

def add_female_follower_data(match):
    global updated
    global issuesCounter

    # Alignment spaces
    br = "{"
    sp1 = "        "
    sp2 = "            "
    mon_define = match.group(1)
    rows = match.group(2)
    owmale = match.group(4)

    string = f"    [SPECIES_{mon_define}] =\n    {br}\n" + rows + owmale
    if mon_define in female_follow_data:
        pic = female_follow_data[mon_define][0]
        size = female_follow_data[mon_define][1]
        shad = female_follow_data[mon_define][2]
        tra = female_follow_data[mon_define][3]
        pals = female_follow_data[mon_define][4]
        normPal = female_follow_data[mon_define][5]
        shinPal = female_follow_data[mon_define][5]
        string = string + f"\n{sp1}OVERWORLD_FEMALE(\n{sp2}gObjectEventPic_{pic},\n{sp2}SIZE_{size},\n{sp2}SHADOW_SIZE_{shad},\n{sp2}TRACKS_{tra},\n{sp2}sAnimTable_Following"
        if (pals != ""):
            string = string + f",\n{sp2}gOverworldPalette_{normPal},\n{sp2}gShinyOverworldPalette_{shinPal}"
        string = string + f"\n{sp1})"
    return string

def add_jump_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    iconPalIndex = match.group(4)
    if mon_name in pokemon_jump_data:
        updated = True
        return f'    [SPECIES_{mon_name}] =\n    {brace}\n{in_bewteen_rows}{iconPalIndex}\n        .pokemonJumpType = PKMN_JUMP_TYPE_' + pokemon_jump_data[mon_name] + f',\n        FOOTPRINT'
    else:
        return f'    [SPECIES_{mon_name}] =\n    {brace}\n{in_bewteen_rows}{iconPalIndex}\n        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,\n        FOOTPRINT'

def add_gba_frontPicSize_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    width = match.group(4)
    height = match.group(5)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in gba_data_front_pic_coords and (gba_data_front_pic_coords[mon_name][0] != width or gba_data_front_pic_coords[mon_name][1] != height):
        updated = True
        str = str + f'        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE({gba_data_front_pic_coords[mon_name][0]}, {gba_data_front_pic_coords[mon_name][1]}) : MON_COORDS_SIZE({width}, {height}),\n'
    else:
        str = str + f'        .frontPicSize = MON_COORDS_SIZE({width}, {height}),\n'
    return str

def add_gba_frontPicYOffset_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    frontPicYOffset = match.group(4)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in gba_data_front_pic_coords and (gba_data_front_pic_coords[mon_name][2] != frontPicYOffset):
        updated = True
        str = str + f'        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? {gba_data_front_pic_coords[mon_name][2]} : {frontPicYOffset},\n'
    else:
        str = str + f'        .frontPicYOffset = {frontPicYOffset},\n'
    return str

def add_gba_backPicSize_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    width = match.group(4)
    height = match.group(5)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in gba_data_back_pic_coords and (gba_data_back_pic_coords[mon_name][0] != width or gba_data_back_pic_coords[mon_name][1] != height):
        updated = True
        str = str + f'        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE({gba_data_back_pic_coords[mon_name][0]}, {gba_data_back_pic_coords[mon_name][1]}) : MON_COORDS_SIZE({width}, {height}),\n'
    else:
        str = str + f'        .backPicSize = MON_COORDS_SIZE({width}, {height}),\n'
    return str

def add_gba_backPicYOffset_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    backPicYOffset = match.group(4)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in gba_data_back_pic_coords and (gba_data_back_pic_coords[mon_name][2] != backPicYOffset):
        updated = True
        str = str + f'        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? {gba_data_back_pic_coords[mon_name][2]} : {backPicYOffset},\n'
    else:
        str = str + f'        .backPicYOffset = {backPicYOffset},\n'
    return str

def add_gba_iconPalIndex_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    iconPalIndex = match.group(4)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in gba_data_pal_indexes and (gba_data_pal_indexes[mon_name] != iconPalIndex):
        updated = True
        str = str + f'        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? {gba_data_pal_indexes[mon_name]} : {iconPalIndex},\n'
    else:
        str = str + f'        .iconPalIndex = {iconPalIndex},\n'
    return str

def add_gba_enemyMonElevation_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    frontAnimId = match.group(4)
    enemyMonElevation = match.group(5)
    ele = match.group(6)
    delay = match.group(7)
    backPic = match.group(9)

    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    str = str + f'        .frontAnimId = {frontAnimId},'

    if mon_name in gba_data_enemy_mon_elevation:
        if enemyMonElevation != "":
            if gba_data_enemy_mon_elevation[mon_name] != ele:
                str = str + f'\n        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? {gba_data_enemy_mon_elevation[mon_name]} : {ele},'
            else:
                str = str + f'\n        .enemyMonElevation = {gba_data_enemy_mon_elevation[mon_name]},'
        else:
            str = str + f'\n        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? {gba_data_enemy_mon_elevation[mon_name]} : 0,'
    elif enemyMonElevation != "":
        str = str + enemyMonElevation
    str = str + f'{delay}\n        .backPic = gMonBackPic_{backPic},'
    return str

def add_gba_frontAnimId_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    frontAnimId = match.group(4)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in gba_data_front_pic_anim_ids and (gba_data_front_pic_anim_ids[mon_name] != frontAnimId):
        updated = True
        str = str + f'        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? {gba_data_front_pic_anim_ids[mon_name]} : {frontAnimId},\n'
    else:
        str = str + f'        .frontAnimId = {frontAnimId},\n'
    return str

def add_gba_frontAnimDelay_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    frontAnimDelay = match.group(4)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in gba_data_anim_delays and (gba_data_anim_delays[mon_name] != frontAnimDelay):
        updated = True
        str = str + f'        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? {gba_data_anim_delays[mon_name]} : {frontAnimDelay},\n'
    else:
        str = str + f'        .frontAnimDelay = {frontAnimDelay},\n'
    return str

def add_shadow_data(match):
    global updated
    global issuesCounter
    brace = "{"
    mon_name = match.group(1)
    in_bewteen_rows = match.group(2)
    jump_type = match.group(4)
    footprint = match.group(5)
    str = f'    [SPECIES_{mon_name}] =\n'
    str = str + f'    {brace}\n{in_bewteen_rows}'
    if mon_name in shadow_data:
        updated = True
        str = str + f'        .pokemonJumpType = {jump_type},\n        {shadow_data[mon_name]}\n        FOOTPRINT({footprint})\n'
    else:
        str = str + f'        .pokemonJumpType = {jump_type},\n        FOOTPRINT({footprint})\n'
    return str

for root, dirs, files in os.walk(main_dir):
    files.sort()
    for fileName in files:
        updated = False
        issuesCounter = 0
        print("\n" + fileName, end =" ")
        # Read gen_X_families.h content
        for file in glob.glob(main_dir + '/' + fileName):
            with open(file, 'r') as f:
                species_content = f.read()

        original_species_content = species_content

        # Rename form labels and defines
        for form_labels in label_renames:
            species_content = re.sub(r"(gMonFrontPic_|gMonBackPic_|gMonPalette_|gMonShinyPalette_|gMonIcon_)(\w+)" + form_labels[0], r"\1\2" + form_labels[1], species_content)
            species_content = re.sub(r"(sPicTable_|gObjectEventPic_|gOverworldPalette_|gShinyOverworldPalette_)(\w+)" + form_labels[0], r"\1\2" + form_labels[1], species_content)
            species_content = re.sub(r"s(\w+)" + form_labels[0] + r"(LevelUpLearnset|TeachableLearnset|EggMoveLearnset|FormChangeTable)", r"s\1" + form_labels[1] + r"\2", species_content)
            species_content = re.sub(r"g(\w+)" + form_labels[0] + r"PokedexText", r"g\1" + form_labels[1] + r"PokedexText", species_content)
            species_content = re.sub(r"SPECIES_(\w+)_" + form_labels[2] + r"", r"SPECIES_\1_" + form_labels[3] + r"", species_content)
            species_content = re.sub(r"CRY_(\w+)_" + form_labels[2] + r"", r"CRY_\1_" + form_labels[3] + r"", species_content)

        # Reorder Female fields
        species_content = re.sub(r" {8}\.frontPic = (.*),(\n {8}\.frontPicFemale = .*,|)"
                               + r"\n {8}\.frontPicSize = (.*),(\n {8}\.frontPicSizeFemale = MON_COORDS_SIZE\(\w+, \w+\),|)"
                               + r"(\n {8}\.frontPicYOffset = .*,|)"
                               + r"\n {8}\.frontAnimFrames = (.*),"
                               + r"\n {8}(//|)\.frontAnimId = (.*),"
                               + r"(\n {8}\.enemyMonElevation = .*,|)"
                               + r"(\n {8}\.frontAnimDelay = .*,|)"
                               + r"\n {8}\.backPic = (.*),(\n {8}\.backPicFemale = .*,|)"
                               + r"\n {8}\.backPicSize = (.*),(\n {8}\.backPicSizeFemale = MON_COORDS_SIZE\(\w+, \w+\),|)"
                               + r"(\n {8}\.backPicYOffset = .*,|)"
                               + r"(\n {8}(//|)\.backAnimId = .*,|)"
                               + r"\n {8}\.palette = (.*),(\n {8}\.paletteFemale = .*,|)"
                               + r"\n {8}\.shinyPalette = (.*),(\n {8}\.shinyPaletteFemale = .*,|)"
                               + r"\n {8}\.iconSprite = (.*),(\n {8}\.iconSpriteFemale = .*,|)"
                               + r"\n {8}\.iconPalIndex = (.*),(\n {8}\.iconPalIndexFemale = .*,|)"
                               + r"(\n {4}#if P_CUSTOM_GENDER_DIFF_ICONS == TRUE\n {8}\.iconSpriteFemale = gMonIcon_(.*),\n {8}\.iconPalIndexFemale = (.*),\n {4}#endif|)"
                            , r"        .frontPic = \1,"
                            + r"\n        .frontPicSize = \3,"
                            + r"\5"       #frontPicYOffset
                            + r"\n        .frontAnimFrames = \6,"
                            + r"\n        \7.frontAnimId = \8,"
                            + r"\9"       #enemyMonElevation
                            + r"\10"      #frontAnimDelay
                            + r"\n        .backPic = \11,"
                            + r"\n        .backPicSize = \13,"
                            + r"\15"      #backPicYOffset
                            + r"\16"      #backAnimId
                            + r"\n        .palette = \18,"
                            + r"\n        .shinyPalette = \20,"
                            + r"\n        .iconSprite = \22,"
                            + r"\n        .iconPalIndex = \24,"
                            + r"\n#if P_GENDER_DIFFERENCES"
                            + r"\2\4\12\14\19\21\23\25\26"
                            + r"\n#endif //P_GENDER_DIFFERENCES"
                            , species_content
        )
        species_content = re.sub(r"#if P_GENDER_DIFFERENCES\n#endif //P_GENDER_DIFFERENCES\n", r"", species_content)

        # Add perfectIVCount for Legendaries and Mythicals
        species_content = re.sub(r"\.(isLegendary|isMythical|isTotem|isUltraBeast) = TRUE,((\n(?! {8}\.perfectIVCount).*){0,}?|)\n {8}\.levelUpLearnset ="
                            , r".\1 = TRUE,\2\n        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,\n        .levelUpLearnset ="
                            , species_content)
        species_content = re.sub(r"\.allPerfectIVs = TRUE,", r".perfectIVCount = NUM_STATS,", species_content)

        # Remove HANDLE_EXPANDED_SPECIES_NAME
        species_content = re.sub(r'\.speciesName = HANDLE_EXPANDED_SPECIES_NAME\("(.*)", "(.*)"\),', r'.speciesName = _("\2"),', species_content)

        # Alter front animations
        pattern = re.compile(r'\.frontAnimFrames = sAnims_(\w+),', re.DOTALL)
        species_content = pattern.sub(add_anim_data, species_content)
        
        # Alter follower data
        pattern = re.compile(r' {8}OVERWORLD\(\n {12}sPicTable_(\w+),\n {12}SIZE_(\w+),\n {12}SHADOW_SIZE_(\w+),\n {12}TRACKS_(\w+),\n {12}gOverworldPalette_(\w+),\n {12}gShinyOverworldPalette_(\w+)\n {8}\)', re.MULTILINE)
        species_content = pattern.sub(update_basic_follower_data, species_content)
        pattern = re.compile(r' {8}OVERWORLD_SET_ANIM\(\n {12}sPicTable_(\w+),\n {12}SIZE_(\w+),\n {12}SHADOW_SIZE_(\w+),\n {12}TRACKS_(\w+),\n {12}(\w+),\n {12}gOverworldPalette_(\w+),\n {12}gShinyOverworldPalette_(\w+)\n {8}\)', re.MULTILINE)
        species_content = pattern.sub(update_set_anim_follower_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?)( {8}OVERWORLD\(\n {12}gObjectEventPic_\w+,\n {12}SIZE_\w+,\n {12}SHADOW_SIZE_\w+,\n {12}TRACKS_\w+,\n {12}sAnimTable_Following(_Asym|),\n {12}gOverworldPalette_\w+,\n {12}gShinyOverworldPalette_\w+\n {8}\))(?!\n {8}OVERWORLD_FEMALE)', re.MULTILINE)
        species_content = pattern.sub(add_female_follower_data, species_content)

        # Alter Pokémon Jump data
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?)( {8}\.iconPalIndex = .*,|#endif //P_GENDER_DIFFERENCES)\n {8}FOOTPRINT', re.MULTILINE)
        species_content = pattern.sub(add_jump_data, species_content)

        # Alter GBA data
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.frontPicSize = MON_COORDS_SIZE\((\w+), (\w+)\),\n', re.MULTILINE)
        species_content = pattern.sub(add_gba_frontPicSize_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.frontPicYOffset = (\w+),\n', re.MULTILINE)
        species_content = pattern.sub(add_gba_frontPicYOffset_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.frontAnimId = (\w+),\n', re.MULTILINE)
        species_content = pattern.sub(add_gba_frontAnimId_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.frontAnimDelay = (\w+),\n', re.MULTILINE)
        species_content = pattern.sub(add_gba_frontAnimDelay_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.backPicSize = MON_COORDS_SIZE\((\w+), (\w+)\),\n', re.MULTILINE)
        species_content = pattern.sub(add_gba_backPicSize_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.backPicYOffset = (\w+),\n', re.MULTILINE)
        species_content = pattern.sub(add_gba_backPicYOffset_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.iconPalIndex = (\w+),\n', re.MULTILINE)
        species_content = pattern.sub(add_gba_iconPalIndex_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.frontAnimId = (.*),(\n {8}\.enemyMonElevation = (\w+),|)(\n {8}\.frontAnimDelay = (.*),|)\n {8}\.backPic = gMonBackPic_(\w+),', re.MULTILINE)
        species_content = pattern.sub(add_gba_enemyMonElevation_data, species_content)
        pattern = re.compile(r'    \[SPECIES_(\w+)\] =\n    \{\n(((?!    \[SPECIES_).*\n){1,}?) {8}\.pokemonJumpType = (\w+),\n {8}FOOTPRINT\((\w+)\)\n', re.MULTILINE)
        species_content = pattern.sub(add_shadow_data, species_content)

        if (species_content != original_species_content):
            updated = True

        if updated:
            # Write the modified content back to gen_X_families.h
            for file in glob.glob(main_dir + '/' + fileName):
                with open(file, 'w') as f:
                    f.write(species_content)
            print("was updated.", end="")
        elif issuesCounter == 0:
            print("was NOT updated.", end="")

print("")
