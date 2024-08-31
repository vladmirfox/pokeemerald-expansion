# 1 "data/maps/Luxurawork/scripts.pory"

# 2 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts::
# 3 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/Luxurawork/scripts.pory"
	.byte 0

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 7 "data/maps/Luxurawork/scripts.pory"
	compare VAR_ROUTE102_STATE, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 13 "data/maps/Luxurawork/scripts.pory"
	compare VAR_ROUTE102_STATE, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 19 "data/maps/Luxurawork/scripts.pory"
	compare VAR_ROUTE102_STATE, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 9 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 10 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 11 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 12 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 14 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 15 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 16 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 17 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 18 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 20 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 21 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 22 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 23 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 24 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 25 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 26 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 27 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 28 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 29 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 13 "data/maps/Luxurawork/scripts.pory"
	compare VAR_ROUTE102_STATE, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 35 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 73 "data/maps/Luxurawork/scripts.pory"
	lockall
# 74 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 75 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 76 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 77 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 78 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 36 "data/maps/Luxurawork/scripts.pory"
	lockall
# 37 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 38 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 39 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 40 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 41 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 42 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 43 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 44 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 45 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 46 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 47 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 48 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 49 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 50 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 51 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 52 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 53 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 54 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 55 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 56 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 57 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 58 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 59 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 60 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 61 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 62 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 63 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 64 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 65 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 66 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 67 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 68 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 69 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 70 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 71 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 81 "data/maps/Luxurawork/scripts.pory"
exclam:
# 82 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

dad_Text_0:
# 39 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar,all set for the academy?$"

dad_Text_1:
# 42 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah,Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 45 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 48 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad,I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 51 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all i ask,son.$"

dad_Text_5:
# 56 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in\n"
	.string "two days.$"

dad_Text_6:
# 59 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy,You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 62 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 65 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright,I guess I'd better be on my best\n"
	.string "behaviour,then.$"

dad_Text_9:
# 68 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself,son.That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 76 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"
