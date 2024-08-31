# 1 "data/maps/luxurakitchen/scripts.pory"

# 2 "data/maps/luxurakitchen/scripts.pory"
luxurakitchen_MapScripts::
# 3 "data/maps/luxurakitchen/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/luxurakitchen/scripts.pory"
	.byte 0

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD::
# 7 "data/maps/luxurakitchen/scripts.pory"
	compare VAR_ROUTE102_STATE, 6
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 19 "data/maps/luxurakitchen/scripts.pory"
	compare VAR_ROUTE102_STATE, 5
	goto_if_lt luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 31 "data/maps/luxurakitchen/scripts.pory"
	compare VAR_ROUTE102_STATE, 9
	goto_if_gt luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 43 "data/maps/luxurakitchen/scripts.pory"
	compare VAR_ROUTE102_STATE, 7
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 51 "data/maps/luxurakitchen/scripts.pory"
	compare VAR_ROUTE102_STATE, 8
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 58 "data/maps/luxurakitchen/scripts.pory"
	compare VAR_ROUTE102_STATE, 9
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/luxurakitchen/scripts.pory"
	addobject 7
# 9 "data/maps/luxurakitchen/scripts.pory"
	addobject 8
# 10 "data/maps/luxurakitchen/scripts.pory"
	removeobject 9
# 11 "data/maps/luxurakitchen/scripts.pory"
	removeobject 10
# 12 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 13 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 14 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 15 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 16 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x49B
# 17 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x49C
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 20 "data/maps/luxurakitchen/scripts.pory"
	removeobject 7
# 21 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 22 "data/maps/luxurakitchen/scripts.pory"
	removeobject 9
# 23 "data/maps/luxurakitchen/scripts.pory"
	removeobject 10
# 24 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 25 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 26 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 27 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 28 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 29 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 32 "data/maps/luxurakitchen/scripts.pory"
	removeobject 7
# 33 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 34 "data/maps/luxurakitchen/scripts.pory"
	removeobject 9
# 35 "data/maps/luxurakitchen/scripts.pory"
	removeobject 10
# 36 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 37 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 38 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 39 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 40 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 41 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 44 "data/maps/luxurakitchen/scripts.pory"
	removeobject 7
# 45 "data/maps/luxurakitchen/scripts.pory"
	addobject 9
# 46 "data/maps/luxurakitchen/scripts.pory"
	addobject 10
# 47 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 48 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x4A0
# 49 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x4A1
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 52 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 53 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
# 54 "data/maps/luxurakitchen/scripts.pory"
	addobject 11
# 55 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x4A3
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 59 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 60 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 61 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 62 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
	return


momm::
# 67 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, momm_1
# 81 "data/maps/luxurakitchen/scripts.pory"
	goto_if_set FLAG_UNUSED_0x49D, momm_2
	return

momm_1:
# 68 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 69 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 70 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 71 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_0
# 72 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 73 "data/maps/luxurakitchen/scripts.pory"
	namebox Xylar
# 74 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_1
# 75 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 76 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 77 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_2
# 78 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 79 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return

momm_2:
# 82 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 83 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 84 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 85 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_3
# 86 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 87 "data/maps/luxurakitchen/scripts.pory"
	releaseall
# 88 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49E
	return


mommafter::
# 93 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 94 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 95 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 96 "data/maps/luxurakitchen/scripts.pory"
	msgbox mommafter_Text_0
# 97 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 98 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return


feliciaafter::
# 101 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 102 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 103 "data/maps/luxurakitchen/scripts.pory"
	namebox felicia
# 104 "data/maps/luxurakitchen/scripts.pory"
	msgbox feliciaafter_Text_0
# 105 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 106 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return


mirakitchen::
# 110 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49F, mirakitchen_6
mirakitchen_4:
# 118 "data/maps/luxurakitchen/scripts.pory"
	goto_if_set FLAG_UNUSED_0x49F, mirakitchen_2
# 118 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, mirakitchen_2
	return

mirakitchen_1:
# 111 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 112 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 113 "data/maps/luxurakitchen/scripts.pory"
	namebox name4
# 114 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_0
# 115 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 116 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return

mirakitchen_2:
# 119 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 120 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 121 "data/maps/luxurakitchen/scripts.pory"
	namebox Xylar
# 122 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_1
# 123 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 124 "data/maps/luxurakitchen/scripts.pory"
	namebox name4
# 125 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_2
# 126 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 127 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_3
# 128 "data/maps/luxurakitchen/scripts.pory"
	releaseall
# 129 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A2
	return

mirakitchen_6:
# 110 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, mirakitchen_1
	goto mirakitchen_4


mirastrol::
# 134 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 135 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 136 "data/maps/luxurakitchen/scripts.pory"
	namebox name4
# 137 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirastrol_Text_0
# 138 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 139 "data/maps/luxurakitchen/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 141 "data/maps/luxurakitchen/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 142 "data/maps/luxurakitchen/scripts.pory"
	releaseall
# 143 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 144 "data/maps/luxurakitchen/scripts.pory"
	setvar VAR_ROUTE102_STATE, 9
# 145 "data/maps/luxurakitchen/scripts.pory"
	setvar VAR_ROUTE103_STATE, 2
	return


momm_Text_0:
# 71 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar, your Father wanted to have a\n"
	.string "talk with you.\p"
	.string "He's in his workroom busy as usual.\p"
	.string "You should go see him.$"

momm_Text_1:
# 74 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Mom.\p"
	.string "I'll head there now.$"

momm_Text_2:
# 77 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry, I'm sure it's nothing\n"
	.string "serious.$"

momm_Text_3:
# 85 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar,Can you call Felicia for me?\p"
	.string "She must be in the Library.$"

mommafter_Text_0:
# 96 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, dear.$"

feliciaafter_Text_0:
# 104 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'd do anything for her.$"

mirakitchen_Text_0:
# 114 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, I'm a little busy right\n"
	.string "now.\p"
	.string "Why don't you find something else to do\n"
	.string "for a while.$"

mirakitchen_Text_1:
# 122 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira, It's time for our walk.\p"
	.string "Ready to go.$"

mirakitchen_Text_2:
# 125 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Already?\p"
	.string "Alright,Master Xylar.Just give me a\n"
	.string "moment and we can head out.$"

mirakitchen_Text_3:
# 127 "data/maps/luxurakitchen/scripts.pory"
	.string "I should go grab my shoes.\p"
	.string "The maid upstairs should have it.$"

mirastrol_Text_0:
# 137 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, I'll be waiting for you\n"
	.string "outside.$"
