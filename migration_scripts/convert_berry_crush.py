import glob
import re
import os

if not os.path.exists("Makefile"):
    print("Please run this script from your root folder.")
    quit()

# Read berry.c and extract the icon and palette information
for file in glob.glob('./src/berry.c'):
    with open(file, 'r') as f:
        icon_table_content = f.read()

# Extract item icon and palette data from berry.c
icon_table_pattern = re.compile(r'\[(ITEM_[A-Z_0-9]+) - FIRST_BERRY_INDEX\]\s*=\s*\{.difficulty =\s*([^,]+),\s*.powder =\s*([^}]+)\}')
icon_table_data = {}
for match in icon_table_pattern.findall(icon_table_content):
    if len(match) == 3:
        item_name, difficulty, powder = match
        icon_table_data[item_name] = (difficulty, powder)

# Read berry.c content
for file in glob.glob('./src/berry.c'):
    with open(file, 'r') as f:
        items_content = f.read()

# Modify berry.c content
def add_natural_gift_data(match):
    item_name = match.group(1)
    item_content = match.group(2)
    if item_name in icon_table_data:
        difficulty, powder = icon_table_data[item_name]
        print(f"Updating {item_name}: adding berryCrushDifficulty = {difficulty}, berryCrushPowder = {powder}")
        return f'[{item_name} - FIRST_BERRY_INDEX] =\n    {{{item_content}    .berryCrushDifficulty = {difficulty},\n        .berryCrushPowder = {powder},\n    }},'
    else:
        return match.group(0)

item_pattern = re.compile(r'\[(ITEM_[A-Z_0-9]+) - FIRST_BERRY_INDEX\]\s*=\s*\{([\s\S]*?)\},', re.DOTALL)
modified_items_content = item_pattern.sub(add_natural_gift_data, items_content)

# Write the modified content back to berry.c
for file in glob.glob('./src/berry.c'):
    with open(file, 'w') as f:
        f.write(modified_items_content)
        print("berry.c has been updated")
