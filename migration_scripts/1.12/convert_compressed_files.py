import glob
import re
import os
from pathlib import Path

if not os.path.exists("Makefile"):
    print("Please run this script from your root folder.")
    quit()

def convert_to_smol(lineInput):
    return 0

def convert_to_fastSmol(lineInput):
    return 0

def convert_to_smolTM(lineInput):
    return 0

def handle_file(fileInput):
    fileTest = Path(fileInput)
    if not fileTest.is_file():
        return False
    allLines = list()
    total = 0
    with open(fileInput, 'r', encoding='UTF-8') as file:
        while line:=file.readline():
            if "data/tilesets/secondary" in line and ".4bpp.lz" in line:
                line = line.replace(".4bpp.lz", ".4bpp.fastSmol")
                allLines.append(line)
            elif "data/tilesets/primary" in line and ".4bpp.lz" in line:
                line = line.replace(".4bpp.lz", ".4bpp.smol")
                allLines.append(line)
            elif "Tilemap" in line and ".bin.lz" in line:
                line = line.replace(".bin.lz", ".bin.smolTM")
                allLines.append(line)
            elif ".4bpp.lz" in line:
                line = line.replace(".4bpp.lz", ".4bpp.smol")
                allLines.append(line)
            elif ".8bpp.lz" in line:
                line = line.replace(".8bpp.lz", ".8bpp.smol")
                allLines.append(line)
            else:
                allLines.append(line)

    with open(fileInput, 'w', encoding='UTF-8') as file:
        for line in allLines:
            file.write(line)
    return True

fileList = [
        "src/graphics.c",
        "src/data/graphics/battle_terrain.h",
        "src/data/graphics/decorations.h",
        "src/data/graphics/intro_scene.h",
        "src/data/graphics/mail.h",
        "src/data/graphics/pokeballs.h",
        "src/data/graphics/rayquaza_scene.h",
        "src/data/graphics/pokemon.h",
        "src/data/graphics/trainers.h",
        "src/data/graphics/berries.h",
        "src/data/graphics/berry_fix.h",
        "src/data/graphics/slot_machine.h",
        "src/data/tilesets/graphics.h",
        "src/data/wallpapers.h",
        "src/data/trade.h",
        "src/trainer_card.c",
        "src/hall_of_fame.c",
        "src/pokedex_cry_screen.c",
        "src/pokenav_menu_handler.c",
        "src/credits.c",
        "src/match_call.c",
        "src/pokedex_plus_hgss.c",
        "src/union_room.c",
        "src/easy_chat.c",
        "src/data.c",
        "src/frontier_pass.c",
        "src/pokenav_ribbons_summary.c",
        "src/fldeff_flash.c",
        "src/pokedex_area_screen.c",
        "src/dodrio_berry_picking.c",
        "src/pokenav_menu_handler.c",
        "src/union_room_chat.c",
        "src/save_failed_screen.c",
        "src/mystery_gift_menu.c",
        "src/wallclock.c",
        "src/list_menu.c",
        "src/intro_credits_graphics.c",
        "src/pokenav_match_call_gfx.c",
        "src/pokenav_menu_handler_gfx.c",
        "src/mystery_gift_view.c",
        "src/starter_choose.c",
        "src/roulette.c",
        "src/pokenav_conditions_search_results.c",
        "src/battle_transition_frontier.c",
        "src/wireless_communication_status_screen.c",
        "src/main_menu.c",
        "src/pokemon_jump.c",
        "src/dexnav.c",
        "src/berry_crush.c",
        "src/battle_transition.c",
        "src/intro.c",
        "src/expansion_intro.c",
        "src/region_map.c",
        "src/minigame_countdown.c",
        "src/pokenav_region_map.c",
        "src/pokenav_main_menu.c",
        "src/title_screen.c",
        "src/link.c",
        "src/diploma.c",
        "src/evolution_scene.c",
        "src/pokenav_ribbons_list.c",
        "src/pokemon_storage_system.c",
        "src/title_screen.c",
        "src/slot_machine.c",
        "src/link_rfu_3.c",
        "src/evolution_graphics.c",
        "src/pokenav_conditions_gfx.c",
        "src/battle_script_commands.c",
        "src/pokenav_list.c",
        "src/use_pokeblock.c",
        "src/cable_car.c",
        "src/data/graphics/items.h"]

for thing in fileList:
    result = handle_file(thing)
    if not result:
        print("Failed to open " + thing)


# Read files in list of files
# Read lines into buffer
# If line contains thing to change, change .lz to .smol/.fastSmol/.smolTM
# Write lines to file
