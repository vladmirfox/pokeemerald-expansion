# 1 "data/maps/Playerroom/scripts.pory"

# 2 "data/maps/Playerroom/scripts.pory"
Playerroom_MapScripts::
# 3 "data/maps/Playerroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Playerroom/scripts.pory"
	.byte 0
# 5 "data/maps/Playerroom/scripts.pory"
	Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Playerroom/scripts.pory"
     map_script_2 VAR_ROUTE102_STATE, 1, mira
# 7 "data/maps/Playerroom/scripts.pory"
	.2byte 0

mira::
# 10 "data/maps/Playerroom/scripts.pory"
	lockall
# 11 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_0
# 12 "data/maps/Playerroom/scripts.pory"
	special SpawnCameraObject
# 13 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera1
# 14 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove
# 15 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 16 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 17 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_1
# 18 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 19 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera
# 20 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove1
# 21 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 22 "data/maps/Playerroom/scripts.pory"
	special RemoveCameraObject
# 23 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 24 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_2
# 25 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 26 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar1
# 27 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 28 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_3
# 29 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 30 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 31 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_4
# 32 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 33 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 34 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_5
# 35 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 36 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar
# 37 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 38 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_6
# 39 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 40 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 41 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_7
# 42 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 43 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 44 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_8
# 45 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 46 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove2
# 47 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 48 "data/maps/Playerroom/scripts.pory"
	removeobject 1
# 49 "data/maps/Playerroom/scripts.pory"
	releaseall
# 50 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
# 51 "data/maps/Playerroom/scripts.pory"
	setvar VAR_ROUTE102_STATE, 2
	return


# 54 "data/maps/Playerroom/scripts.pory"
miramove:
# 55 "data/maps/Playerroom/scripts.pory"
	face_up
# 56 "data/maps/Playerroom/scripts.pory"
	set_visible
	step_end

# 59 "data/maps/Playerroom/scripts.pory"
miramove2:
# 60 "data/maps/Playerroom/scripts.pory"
	emote_double_exclamation_mark
# 61 "data/maps/Playerroom/scripts.pory"
	walk_right
# 61 "data/maps/Playerroom/scripts.pory"
	walk_right
# 62 "data/maps/Playerroom/scripts.pory"
	walk_down
# 62 "data/maps/Playerroom/scripts.pory"
	walk_down
# 62 "data/maps/Playerroom/scripts.pory"
	walk_down
# 62 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/Playerroom/scripts.pory"
miramove1:
# 66 "data/maps/Playerroom/scripts.pory"
	walk_up
# 66 "data/maps/Playerroom/scripts.pory"
	walk_up
# 66 "data/maps/Playerroom/scripts.pory"
	walk_up
# 66 "data/maps/Playerroom/scripts.pory"
	walk_up
# 67 "data/maps/Playerroom/scripts.pory"
	walk_left
# 67 "data/maps/Playerroom/scripts.pory"
	walk_left
# 68 "data/maps/Playerroom/scripts.pory"
	emote_x
	step_end

# 70 "data/maps/Playerroom/scripts.pory"
xylar:
# 71 "data/maps/Playerroom/scripts.pory"
	emote_exclamation_mark
# 72 "data/maps/Playerroom/scripts.pory"
	face_right
	step_end

# 74 "data/maps/Playerroom/scripts.pory"
xylar1:
# 75 "data/maps/Playerroom/scripts.pory"
	delay_1
# 76 "data/maps/Playerroom/scripts.pory"
	face_left
	step_end

# 82 "data/maps/Playerroom/scripts.pory"
camera1:
# 83 "data/maps/Playerroom/scripts.pory"
	delay_2
# 84 "data/maps/Playerroom/scripts.pory"
	walk_down
# 84 "data/maps/Playerroom/scripts.pory"
	walk_down
# 84 "data/maps/Playerroom/scripts.pory"
	walk_down
# 84 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 86 "data/maps/Playerroom/scripts.pory"
camera:
# 87 "data/maps/Playerroom/scripts.pory"
	walk_up
# 87 "data/maps/Playerroom/scripts.pory"
	walk_up
# 87 "data/maps/Playerroom/scripts.pory"
	walk_up
# 87 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

clock::
# 91 "data/maps/Playerroom/scripts.pory"
	lockall
# 92 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 93 "data/maps/Playerroom/scripts.pory"
	msgbox clock_Text_0
# 94 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 95 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 97 "data/maps/Playerroom/scripts.pory"
notp:
# 98 "data/maps/Playerroom/scripts.pory"
	walk_up
# 98 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

guest::
# 102 "data/maps/Playerroom/scripts.pory"
	lockall
# 103 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 104 "data/maps/Playerroom/scripts.pory"
	msgbox guest_Text_0
# 105 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 107 "data/maps/Playerroom/scripts.pory"
not:
# 108 "data/maps/Playerroom/scripts.pory"
	walk_right
	step_end

parent::
# 112 "data/maps/Playerroom/scripts.pory"
	lockall
# 113 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 114 "data/maps/Playerroom/scripts.pory"
	msgbox parent_Text_0
# 115 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


mira_Text_0:
# 11 "data/maps/Playerroom/scripts.pory"
	.string "KNOCK..KNOCK$"

mira_Text_1:
# 17 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, good morning. It's time\n"
	.string "for breakfast. Lord Aurther and Lady\l"
	.string "Elysia are waiting for you at the table.$"

mira_Text_2:
# 24 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Still in bed, I see? You know you can't\n"
	.string "stay there all day, young master. Come\l"
	.string "now, you wouldn't want to keep Lord\l"
	.string "Aurther and Lady Elysia waiting, would\l"
	.string "you?$"

mira_Text_3:
# 28 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Umm..$"

mira_Text_4:
# 31 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Up with you, Master Xylar. If you don't\n"
	.string "hurry, I'll have to pull the covers off\l"
	.string "myself. Don't make me do it.$"

mira_Text_5:
# 34 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Besides, I made your favorite Ramen\n"
	.string "this morning. You wouldn't want it to\l"
	.string "get cold, would you?$"

mira_Text_6:
# 38 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ramen? But didn't Dad say I shouldn't\n"
	.string "have it? He always forbids it.$"

mira_Text_7:
# 41 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ah, yes, Lord Aurther did mention that.\n"
	.string "But Lady Elysia insisted it was alright\l"
	.string "this morning. She thought it might be\l"
	.string "just the thing to brighten your day.$"

mira_Text_8:
# 44 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'll be there in a sec.$"

clock_Text_0:
# 93 "data/maps/Playerroom/scripts.pory"
	.string "The clock isn't working, i should fix it\n"
	.string "before going.$"

guest_Text_0:
# 104 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for\n"
	.string "guests not for me.$"

parent_Text_0:
# 114 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for Mom\n"
	.string "and Dad,not me$"

Xylar::
# 78 "data/maps/Playerroom/scripts.pory"
	.string "Xylar$"
