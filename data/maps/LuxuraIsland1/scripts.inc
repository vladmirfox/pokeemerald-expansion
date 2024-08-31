# 1 "data/maps/LuxuraIsland1/scripts.pory"

# 2 "data/maps/LuxuraIsland1/scripts.pory"
LuxuraIsland1_MapScripts::
# 3 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION, musicchange
# 4 "data/maps/LuxuraIsland1/scripts.pory"
	.byte 0

luxuraisland::
# 6 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 7 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 8 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox luxuraisland_Text_0
# 9 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 12 "data/maps/LuxuraIsland1/scripts.pory"
notal:
# 13 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
# 13 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
	step_end

officer::
# 16 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 17 "data/maps/LuxuraIsland1/scripts.pory"
	faceplayer
# 18 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox officer_Text_0
# 19 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


forest::
# 23 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 24 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 5, exclam
# 25 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 26 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 27 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 28 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_0
# 29 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 30 "data/maps/LuxuraIsland1/scripts.pory"
	delay 60
# 31 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8004, 4
# 32 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8005, 6
# 33 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8006, 7
# 34 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8007, 7
# 35 "data/maps/LuxuraIsland1/scripts.pory"
	special ShakeCamera
# 36 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_THUNDERBOLT
# 37 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 38 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 39 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 40 "data/maps/LuxuraIsland1/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 41 "data/maps/LuxuraIsland1/scripts.pory"
	doweather
# 42 "data/maps/LuxuraIsland1/scripts.pory"
	playse MUS_DUMMY
# 43 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AA
# 44 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 45 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, exclam
# 46 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 47 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_1
# 48 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 49 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 50 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_2
# 51 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 52 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 53 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 54 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_3
# 55 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 56 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 57 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_AFTERTRAGEDY_MUSIC
# 58 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_ROUTE102_STATE, 11
# 59 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_ROUTE103_STATE, 3
	return


hurry::
# 64 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 65 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 66 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox hurry_Text_0
# 67 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


luxuraisland_Text_0:
# 8 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I'm not allowed to go there alone.$"

officer_Text_0:
# 18 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, Young Master.$"

forest_Text_0:
# 28 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Young Master, you're not allowed to go\n"
	.string "the forest.\p"
	.string "It's filled with wild and dangerous\n"
	.string "Pokemon.$"

forest_Text_1:
# 47 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What was that?$"

forest_Text_2:
# 50 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, did you hear that? It\n"
	.string "sounded like a voice coming from the\l"
	.string "direction of the mansion.\p"
	.string "We should go check it out!$"

forest_Text_3:
# 54 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom and Dad are in the Mansion.$"

hurry_Text_0:
# 66 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry.$"
