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
object_event_pic_table_pattern = re.compile(r'sPicTable_([A-Za-z0-9]*)\[\]\s*=\s*\{\n((\s*o[a-z_]+\(.*\),\n)+\});')
object_event_pic_table_data = {}
for match in object_event_pic_table_pattern.findall(object_event_pic_table_content):
    if len(match) == 3:
        pic_name, frames, frameSingle = match
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



# Read file being replaced and extract the frame information
for file in glob.glob('./src/data/object_events/object_event_graphics_info.h'):
    with open(file, 'r') as f:
        content = f.read()

# Extract data from file being replaced
find_pattern = re.compile(r'const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_([A-Za-z0-9]*)\s*=\s*\{\n((\s*[\.o\}][A-Za-z]*.*[,\{]\n)*\});')
find_data = {}
for match in find_pattern.findall(content):
    if len(match) == 3:
        pic_name, pic_info, pic_info_single = match
        find_data[pic_name] = (pic_info)

# Read file being migrated to content
for file in glob.glob('./src/data/object_events/object_event_graphics_info_pointers.h'):
    with open(file, 'r') as f:
        content = f.read()

# Modify file being migrated to content
def add_new_data(match):
    pic_name = match.group(1)
    if pic_name in find_data:
        pic_info = "    " + find_data[pic_name].replace("\n", "\n    ")
        print(f"Updating gObjectEventGraphicsInfo_{pic_name}")
        return f' = &(const struct ObjectEventGraphicsInfo) {{\n{pic_info},\n'
    else:
        return match.group(0)

item_pattern = re.compile(r' *= *&gObjectEventGraphicsInfo_([A-Za-z0-9]*),')
modified_content = item_pattern.sub(add_new_data, content)

# Write the modified content back to file being migrated to
for file in glob.glob('./src/data/object_events/object_event_graphics_info_pointers.h'):
    with open(file, 'w') as f:
        f.write(modified_content)
        print("object_event_graphics_info_pointers.h has been updated")



# Move new object_event_graphics_info_pointers.h text to object_event_graphics_info.h
for file in glob.glob('./src/data/object_events/object_event_graphics_info_pointers.h'):
    with open(file, 'r') as f:
        content = f.read()

find_pattern = re.compile(r'(const struct ObjectEventGraphicsInfo \*const gObjectEventGraphicsInfoPointers.*)', re.DOTALL)
graphic_info = ""
for match in find_pattern.findall(content):
    graphic_info = match

for file in glob.glob('./src/data/object_events/object_event_graphics_info.h'):
    with open(file, 'w') as f:
        f.write(graphic_info)
        print("object_event_graphics_info.h has been updated")