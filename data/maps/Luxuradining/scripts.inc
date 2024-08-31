# 1 "data/maps/Luxuradining/scripts.pory"

# 2 "data/maps/Luxuradining/scripts.pory"
Luxuradining_MapScripts::
# 3 "data/maps/Luxuradining/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxuradining_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Luxuradining/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/Luxuradining/scripts.pory"
	.byte 0
# 6 "data/maps/Luxuradining/scripts.pory"
Luxuradining_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Luxuradining/scripts.pory"
	map_script_2 VAR_ROUTE102_STATE, 3, Youwake
# 8 "data/maps/Luxuradining/scripts.pory"
	.2byte 0

Youwake::
# 11 "data/maps/Luxuradining/scripts.pory"
	lockall
# 12 "data/maps/Luxuradining/scripts.pory"
	special SpawnCameraObject
# 13 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera2
# 14 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 15 "data/maps/Luxuradining/scripts.pory"
	applymovement 2, mom
# 16 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 17 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_0
# 18 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 19 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 20 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_1
# 21 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 22 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera3
# 23 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 24 "data/maps/Luxuradining/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dining
# 26 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 27 "data/maps/Luxuradining/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 29 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 30 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 31 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_2
# 32 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 33 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 34 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_3
# 35 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 36 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mlq
# 37 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 38 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_4
# 39 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 40 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mlo
# 41 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 42 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_5
# 43 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 44 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mol
# 45 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 46 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 47 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_6
# 48 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 49 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 50 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_7
# 51 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 52 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 53 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_8
# 54 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 55 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, upset
# 56 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 57 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 58 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_9
# 59 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 60 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 63 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_10
# 64 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 65 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 66 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_11
# 67 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 68 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 69 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 70 "data/maps/Luxuradining/scripts.pory"
	special RemoveCameraObject
# 71 "data/maps/Luxuradining/scripts.pory"
	releaseall
# 72 "data/maps/Luxuradining/scripts.pory"
	setvar VAR_ROUTE102_STATE, 4
	return


# 74 "data/maps/Luxuradining/scripts.pory"
camera5:
# 75 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 75 "data/maps/Luxuradining/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/Luxuradining/scripts.pory"
camera2:
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 78 "data/maps/Luxuradining/scripts.pory"
	walk_left
	step_end

# 80 "data/maps/Luxuradining/scripts.pory"
camera4:
# 81 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 81 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/Luxuradining/scripts.pory"
camera3:
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 84 "data/maps/Luxuradining/scripts.pory"
	walk_right
	step_end

# 86 "data/maps/Luxuradining/scripts.pory"
mom:
# 87 "data/maps/Luxuradining/scripts.pory"
	face_right
# 88 "data/maps/Luxuradining/scripts.pory"
	emote_heart
# 89 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 91 "data/maps/Luxuradining/scripts.pory"
dining:
# 92 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 92 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 92 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 94 "data/maps/Luxuradining/scripts.pory"
	face_up
	step_end

# 96 "data/maps/Luxuradining/scripts.pory"
mlq:
# 97 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
	step_end

# 99 "data/maps/Luxuradining/scripts.pory"
mlo:
# 100 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
# 101 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 103 "data/maps/Luxuradining/scripts.pory"
mol:
# 104 "data/maps/Luxuradining/scripts.pory"
	face_right
	step_end

# 106 "data/maps/Luxuradining/scripts.pory"
upset:
# 107 "data/maps/Luxuradining/scripts.pory"
	emote_x
	step_end

Mom::
# 110 "data/maps/Luxuradining/scripts.pory"
	lockall
# 111 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 112 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 113 "data/maps/Luxuradining/scripts.pory"
	msgbox Mom_Text_0
# 114 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 115 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


Dad::
# 118 "data/maps/Luxuradining/scripts.pory"
	lockall
# 119 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 120 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 121 "data/maps/Luxuradining/scripts.pory"
	msgbox Dad_Text_0
# 122 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 123 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


waiting::
# 126 "data/maps/Luxuradining/scripts.pory"
	lockall
# 127 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 128 "data/maps/Luxuradining/scripts.pory"
	msgbox waiting_Text_0
# 129 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD::
# 133 "data/maps/Luxuradining/scripts.pory"
	compare VAR_ROUTE102_STATE, 4
	goto_if_gt Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 134 "data/maps/Luxuradining/scripts.pory"
	removeobject 1
# 135 "data/maps/Luxuradining/scripts.pory"
	removeobject 2
# 136 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x498
# 137 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x499
	return


garden::
# 143 "data/maps/Luxuradining/scripts.pory"
	lock
# 144 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 145 "data/maps/Luxuradining/scripts.pory"
	namebox gardener
# 146 "data/maps/Luxuradining/scripts.pory"
	msgbox garden_Text_0
# 147 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 148 "data/maps/Luxuradining/scripts.pory"
	release
	return


rest::
# 151 "data/maps/Luxuradining/scripts.pory"
	lock
# 152 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 153 "data/maps/Luxuradining/scripts.pory"
	namebox rest_Text_0
# 154 "data/maps/Luxuradining/scripts.pory"
	msgbox rest_Text_1
# 155 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 156 "data/maps/Luxuradining/scripts.pory"
	release
	return


nurse::
# 159 "data/maps/Luxuradining/scripts.pory"
	lockall
# 160 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 161 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_0
# 162 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


Youwake_Text_0:
# 17 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good Morning, Mom,Dad.\p"
	.string "Sorry to keep you waiting.$"

Youwake_Text_1:
# 20 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No need to apologize.We were just\n"
	.string "discussing today's plans.\p"
	.string "Come sit next to me.$"

Youwake_Text_2:
# 31 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How did you sleep dear?$"

Youwake_Text_3:
# 34 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I slept well.$"

Youwake_Text_4:
# 38 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Ramen?$"

Youwake_Text_5:
# 42 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ramen? I thought I forbade it.$"

Youwake_Text_6:
# 47 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But Mira told me you allowed it for\n"
	.string "today.$"

Youwake_Text_7:
# 50 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You have been tricked my dear.$"

Youwake_Text_8:
# 53 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ok, now lets eat before the food gets\n"
	.string "cold.$"

Youwake_Text_9:
# 58 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Sure\p"
	.string "Maids$"

Youwake_Text_10:
# 63 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira?\p"
	.string "I need to ask her something.$"

Youwake_Text_11:
# 66 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}She's out helping the gardener.$"

Mom_Text_0:
# 113 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}She's always successful in tricking you$"

Dad_Text_0:
# 121 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess you guys are really close.\p"
	.string "She always knows how to trick you.$"

waiting_Text_0:
# 128 "data/maps/Luxuradining/scripts.pory"
	.string "I should hurry, I don't want to make Mom\n"
	.string "and Dad wait!$"

garden_Text_0:
# 146 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This garden has never looked better,\n"
	.string "thanks to Lady Mira.$"

rest_Text_0:
# 153 "data/maps/Luxuradining/scripts.pory"
	.string "Maid$"

rest_Text_1:
# 154 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day, Young Master! It's my rest\n"
	.string "day so I'm taking it easy.\p"
	.string "But if you need anything, just let me\n"
	.string "know.$"

nurse_Text_0:
# 161 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day,Master Xylar.$"
