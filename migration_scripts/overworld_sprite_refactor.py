import glob
import re
import os

if not os.path.exists("Makefile"):
    print("Please run this script from your root folder.")
    quit()

# Read object_event_pic_tables.h and extract the frame information
for file in glob.glob('./src/data/object_events/object_event_pic_tables.h'):
    with open(file, 'r') as f:
        object_event_pic_table_content = f.read()

# Extract table data from object_event_pic_tables.h
# Might need more () around 2. Up len to 3 and ignore 2
object_event_pic_table_pattern = re.compile(r'sPicTable_([A-Za-z0-9]*)\[\]\s*=\s*\{\n((\s*o[a-z_]+\(.*\),\n)+\});')
object_event_pic_table_data = {}
for match in object_event_pic_table_pattern.findall(object_event_pic_table_content):
    if len(match) == 3:
        pic_name, frames, frameSingle = match
        #print(f"Found {pic_name}")
        object_event_pic_table_data[pic_name] = (frames)

# Read object_event_graphics_info.h content
for file in glob.glob('./src/data/object_events/object_event_graphics_info.h'):
    with open(file, 'r') as f:
        object_event_pic_table_content = f.read()

# Modify object_event_graphics_info.h content
def add_graphic_tables(match):
    pic_name = match.group(1)
    if pic_name in object_event_pic_table_data:
        frames = "    " + object_event_pic_table_data[pic_name].replace("\n", "\n    ")
        print(f"Updating gObjectEventGraphicsInfo_{pic_name}")
        return f'.images = (const struct SpriteFrameImage[]){{\n{frames},'
    else:
        return match.group(0)

item_pattern = re.compile(r'.images = sPicTable_([A-Za-z0-9]*),', re.DOTALL)
modified_object_event_pic_table_content = item_pattern.sub(add_graphic_tables, object_event_pic_table_content)

# Write the modified content back to object_event_graphics_info.h
for file in glob.glob('./src/data/object_events/object_event_graphics_info.h'):
    with open(file, 'w') as f:
        f.write(modified_object_event_pic_table_content)
        print("object_event_graphics_info.h has been updated")
