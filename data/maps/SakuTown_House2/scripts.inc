SakuTown_House2_MapScripts::
	.byte 0


SakuTown_House2_EventScript_EspeonsMaster::
# 10 "data/maps/SakuTown_House2/scripts.pory"
	lock
# 11 "data/maps/SakuTown_House2/scripts.pory"
	faceplayer
# 14 "data/maps/SakuTown_House2/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 0
	goto_if_eq SakuTown_House2_EventScript_EspeonsMaster_2
# 22 "data/maps/SakuTown_House2/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 1
	goto_if_eq SakuTown_House2_EventScript_EspeonsMaster_3
# 32 "data/maps/SakuTown_House2/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 2
	goto_if_eq SakuTown_House2_EventScript_EspeonsMaster_4
# 40 "data/maps/SakuTown_House2/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 3
	goto_if_eq SakuTown_House2_EventScript_EspeonsMaster_5
# 48 "data/maps/SakuTown_House2/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 4
	goto_if_eq SakuTown_House2_EventScript_EspeonsMaster_6
# 52 "data/maps/SakuTown_House2/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 5
	goto_if_eq SakuTown_House2_EventScript_EspeonsMaster_7
SakuTown_House2_EventScript_EspeonsMaster_1:
# 72 "data/maps/SakuTown_House2/scripts.pory"
	release
	return

SakuTown_House2_EventScript_EspeonsMaster_2:
# 15 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 16 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_EspeonsMaster_Text_1
# 19 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 21 "data/maps/SakuTown_House2/scripts.pory"
	setvar VAR_SAKU_KURA_QUEST_ESPEON_STATE, 2
	goto SakuTown_House2_EventScript_EspeonsMaster_1

SakuTown_House2_EventScript_EspeonsMaster_3:
# 23 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 24 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_EspeonsMaster_Text_2
# 28 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 31 "data/maps/SakuTown_House2/scripts.pory"
	setvar VAR_SAKU_KURA_QUEST_ESPEON_STATE, 3
	goto SakuTown_House2_EventScript_EspeonsMaster_1

SakuTown_House2_EventScript_EspeonsMaster_4:
# 33 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 34 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_EspeonsMaster_Text_3
# 37 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
	goto SakuTown_House2_EventScript_EspeonsMaster_1

SakuTown_House2_EventScript_EspeonsMaster_5:
# 41 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 42 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_EspeonsMaster_Text_4
# 45 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
	goto SakuTown_House2_EventScript_EspeonsMaster_1

SakuTown_House2_EventScript_EspeonsMaster_6:
# 49 "data/maps/SakuTown_House2/scripts.pory"
	call SakuTown_House2_EventScript_Reunited
	goto SakuTown_House2_EventScript_EspeonsMaster_1

SakuTown_House2_EventScript_EspeonsMaster_7:
# 53 "data/maps/SakuTown_House2/scripts.pory"
	goto_if_set FLAG_TEMP_1, SakuTown_House2_EventScript_EspeonsMaster_14
# 60 "data/maps/SakuTown_House2/scripts.pory"
	goto_if_set FLAG_SAKU_ESPEON_QUEST_RECEIVED_EVO_STONE, SakuTown_House2_EventScript_EspeonsMaster_17
# 67 "data/maps/SakuTown_House2/scripts.pory"
	call SakuTown_House2_EventScript_GiveEvoStone
	goto SakuTown_House2_EventScript_EspeonsMaster_1

SakuTown_House2_EventScript_EspeonsMaster_14:
# 54 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 55 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_EspeonsMaster_Text_5
# 58 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
	goto SakuTown_House2_EventScript_EspeonsMaster_1

SakuTown_House2_EventScript_EspeonsMaster_17:
# 61 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 62 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_EspeonsMaster_Text_6
# 65 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
	goto SakuTown_House2_EventScript_EspeonsMaster_1


SakuTown_House2_EventScript_Reunited::
# 77 "data/maps/SakuTown_House2/scripts.pory"
	setvar VAR_SAKU_KURA_QUEST_ESPEON_STATE, 5
# 78 "data/maps/SakuTown_House2/scripts.pory"
	clearflag FLAG_SAKU_KURA_HIDE_ESPEON_MASTERS_HOME
# 79 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 80 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_EspeonsMaster_Text_4
# 83 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 85 "data/maps/SakuTown_House2/scripts.pory"
	delay 30
# 87 "data/maps/SakuTown_House2/scripts.pory"
	playse SE_DOOR
# 88 "data/maps/SakuTown_House2/scripts.pory"
	waitse
# 89 "data/maps/SakuTown_House2/scripts.pory"
	addobject 2
# 90 "data/maps/SakuTown_House2/scripts.pory"
	setobjectxy 2, 5, 7
# 91 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 2, DIR_NORTH
# 94 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 95 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 96 "data/maps/SakuTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 97 "data/maps/SakuTown_House2/scripts.pory"
	playse SE_PIN
# 98 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 99 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 100 "data/maps/SakuTown_House2/scripts.pory"
	waitmovement 0
# 101 "data/maps/SakuTown_House2/scripts.pory"
	delay 48
# 103 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_Reunited_Text_0
# 106 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 109 "data/maps/SakuTown_House2/scripts.pory"
	switch VAR_FACING
# 110 "data/maps/SakuTown_House2/scripts.pory"
	case DIR_WEST, SakuTown_House2_EventScript_Reunited_3
# 112 "data/maps/SakuTown_House2/scripts.pory"
	case DIR_NORTH, SakuTown_House2_EventScript_Reunited_4
# 117 "data/maps/SakuTown_House2/scripts.pory"
	case DIR_SOUTH, SakuTown_House2_EventScript_Reunited_5
SakuTown_House2_EventScript_Reunited_1:
# 124 "data/maps/SakuTown_House2/scripts.pory"
	delay 40
# 126 "data/maps/SakuTown_House2/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
# 127 "data/maps/SakuTown_House2/scripts.pory"
	waitmoncry
# 129 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 130 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_Reunited_Text_1
# 135 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 137 "data/maps/SakuTown_House2/scripts.pory"
	switch VAR_FACING
# 138 "data/maps/SakuTown_House2/scripts.pory"
	case DIR_WEST, SakuTown_House2_EventScript_Reunited_8
# 141 "data/maps/SakuTown_House2/scripts.pory"
	case DIR_NORTH, SakuTown_House2_EventScript_Reunited_9
# 144 "data/maps/SakuTown_House2/scripts.pory"
	case DIR_SOUTH, SakuTown_House2_EventScript_Reunited_10
SakuTown_House2_EventScript_Reunited_6:
# 148 "data/maps/SakuTown_House2/scripts.pory"
	delay 30
# 150 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 151 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_Reunited_Text_2
# 161 "data/maps/SakuTown_House2/scripts.pory"
	call SakuTown_House2_EventScript_GiveEvoStone
	return

SakuTown_House2_EventScript_Reunited_3:
# 111 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 2, SakuTown_House2_Movement_EspeonWalksUpSouth
	goto SakuTown_House2_EventScript_Reunited_1

SakuTown_House2_EventScript_Reunited_4:
# 113 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 2, SakuTown_House2_Movement_EspeonWalksUpEast
# 114 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 1, DIR_EAST
# 115 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 3, DIR_WEST
# 116 "data/maps/SakuTown_House2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto SakuTown_House2_EventScript_Reunited_1

SakuTown_House2_EventScript_Reunited_5:
# 118 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 2, SakuTown_House2_Movement_EspeonWalksUpEast
# 119 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 1, DIR_EAST
# 120 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 3, DIR_WEST
# 121 "data/maps/SakuTown_House2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto SakuTown_House2_EventScript_Reunited_1

SakuTown_House2_EventScript_Reunited_8:
# 139 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 1, DIR_EAST
# 140 "data/maps/SakuTown_House2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto SakuTown_House2_EventScript_Reunited_6

SakuTown_House2_EventScript_Reunited_9:
# 142 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 1, DIR_SOUTH
# 143 "data/maps/SakuTown_House2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto SakuTown_House2_EventScript_Reunited_6

SakuTown_House2_EventScript_Reunited_10:
# 145 "data/maps/SakuTown_House2/scripts.pory"
	turnobject 1, DIR_NORTH
# 146 "data/maps/SakuTown_House2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto SakuTown_House2_EventScript_Reunited_6


SakuTown_House2_EventScript_GiveEvoStone::
# 165 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_GiveEvoStone_Text_0
# 166 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 168 "data/maps/SakuTown_House2/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SakuTown_House2_EventScript_GiveEvoStone_Text_1, SakuTown_House2_EventScript_GiveEvoStone_Text_2, SakuTown_House2_EventScript_GiveEvoStone_Text_3
# 180 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_EspeonsMaster_Text_0
# 181 "data/maps/SakuTown_House2/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/SakuTown_House2/scripts.pory"
	case 0, SakuTown_House2_EventScript_GiveEvoStone_3
# 184 "data/maps/SakuTown_House2/scripts.pory"
	case 1, SakuTown_House2_EventScript_GiveEvoStone_4
# 186 "data/maps/SakuTown_House2/scripts.pory"
	case 2, SakuTown_House2_EventScript_GiveEvoStone_5
SakuTown_House2_EventScript_GiveEvoStone_1:
# 189 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 191 "data/maps/SakuTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 193 "data/maps/SakuTown_House2/scripts.pory"
	setflag FLAG_SAKU_ESPEON_QUEST_RECEIVED_EVO_STONE
# 194 "data/maps/SakuTown_House2/scripts.pory"
	release
	return

SakuTown_House2_EventScript_GiveEvoStone_3:
# 183 "data/maps/SakuTown_House2/scripts.pory"
	giveitem ITEM_FIRE_STONE
	goto SakuTown_House2_EventScript_GiveEvoStone_1

SakuTown_House2_EventScript_GiveEvoStone_4:
# 185 "data/maps/SakuTown_House2/scripts.pory"
	giveitem ITEM_WATER_STONE
	goto SakuTown_House2_EventScript_GiveEvoStone_1

SakuTown_House2_EventScript_GiveEvoStone_5:
# 187 "data/maps/SakuTown_House2/scripts.pory"
	giveitem ITEM_THUNDER_STONE
	goto SakuTown_House2_EventScript_GiveEvoStone_1


SakuTown_House2_EventScript_Espeon::
# 199 "data/maps/SakuTown_House2/scripts.pory"
	lock
# 200 "data/maps/SakuTown_House2/scripts.pory"
	faceplayer
# 201 "data/maps/SakuTown_House2/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
# 202 "data/maps/SakuTown_House2/scripts.pory"
	ismonseen SPECIES_ESPEON
# 203 "data/maps/SakuTown_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SakuTown_House2_EventScript_Espeon_2
# 206 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_Espeon_Text_1
SakuTown_House2_EventScript_Espeon_1:
# 208 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_Espeon_Text_2
# 211 "data/maps/SakuTown_House2/scripts.pory"
	waitmoncry
# 212 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 213 "data/maps/SakuTown_House2/scripts.pory"
	release
	return

SakuTown_House2_EventScript_Espeon_2:
# 204 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_Espeon_Text_0
	goto SakuTown_House2_EventScript_Espeon_1


SakuTown_House2_EventScript_Sister::
# 218 "data/maps/SakuTown_House2/scripts.pory"
	lock
# 219 "data/maps/SakuTown_House2/scripts.pory"
	faceplayer
# 220 "data/maps/SakuTown_House2/scripts.pory"
	speakername SakuTown_House2_EventScript_Sister_Text_0
# 221 "data/maps/SakuTown_House2/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_HIDE_ESPEON_MASTERS_HOME, SakuTown_House2_EventScript_Sister_2
# 229 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_Sister_Text_2
# 233 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
SakuTown_House2_EventScript_Sister_1:
# 235 "data/maps/SakuTown_House2/scripts.pory"
	release
	return

SakuTown_House2_EventScript_Sister_2:
# 222 "data/maps/SakuTown_House2/scripts.pory"
	msgbox SakuTown_House2_EventScript_Sister_Text_1
# 226 "data/maps/SakuTown_House2/scripts.pory"
	closemessage
# 227 "data/maps/SakuTown_House2/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
	goto SakuTown_House2_EventScript_Sister_1


# 239 "data/maps/SakuTown_House2/scripts.pory"
SakuTown_House2_Movement_EspeonWalksUpEast:
# 240 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_up
# 241 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_right
# 241 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_right
# 242 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_up
# 242 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_up
# 243 "data/maps/SakuTown_House2/scripts.pory"
	face_left
# 244 "data/maps/SakuTown_House2/scripts.pory"
	jump_in_place_left
# 244 "data/maps/SakuTown_House2/scripts.pory"
	jump_in_place_left
	step_end

# 248 "data/maps/SakuTown_House2/scripts.pory"
SakuTown_House2_Movement_EspeonWalksUpSouth:
# 249 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_up
# 250 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_right
# 251 "data/maps/SakuTown_House2/scripts.pory"
	walk_fast_up
# 252 "data/maps/SakuTown_House2/scripts.pory"
	jump_in_place_up
# 252 "data/maps/SakuTown_House2/scripts.pory"
	jump_in_place_up
	step_end

SakuTown_House2_EventScript_EspeonsMaster_Text_0:
# 15 "data/maps/SakuTown_House2/scripts.pory"
	.string "Boy$"

SakuTown_House2_EventScript_EspeonsMaster_Text_1:
# 17 "data/maps/SakuTown_House2/scripts.pory"
	.string "I hope Eevee comes home soon…$"

SakuTown_House2_EventScript_EspeonsMaster_Text_2:
# 25 "data/maps/SakuTown_House2/scripts.pory"
	.string "I hope Eevee comes home soon…\p"
	.string "What? Someone found my Eevee? Oh,\n"
	.string "please, can you tell them to bring it\l"
	.string "back?$"

SakuTown_House2_EventScript_EspeonsMaster_Text_3:
# 35 "data/maps/SakuTown_House2/scripts.pory"
	.string "… …$"

SakuTown_House2_EventScript_EspeonsMaster_Text_4:
# 43 "data/maps/SakuTown_House2/scripts.pory"
	.string "Where's my Eevee?$"

SakuTown_House2_EventScript_EspeonsMaster_Text_5:
# 56 "data/maps/SakuTown_House2/scripts.pory"
	.string "Thanks again!$"

SakuTown_House2_EventScript_EspeonsMaster_Text_6:
# 63 "data/maps/SakuTown_House2/scripts.pory"
	.string "How are you doing? Espeon looks\n"
	.string "happy to see you!$"

SakuTown_House2_EventScript_Reunited_Text_0:
# 104 "data/maps/SakuTown_House2/scripts.pory"
	.string "Is… Is that Eevee?$"

SakuTown_House2_EventScript_Reunited_Text_1:
# 131 "data/maps/SakuTown_House2/scripts.pory"
	.string "It's you! It's really you! Oh, Eevee,\n"
	.string "I've missed you so much!\p"
	.string "… …\p"
	.string "Wait, you look a little different…$"

SakuTown_House2_EventScript_Reunited_Text_2:
# 152 "data/maps/SakuTown_House2/scripts.pory"
	.string "You say it was a woman from Kura\n"
	.string "Village that found him?\p"
	.string "She took such good care of him!\p"
	.string "His fur is so shiny and well-groomed,\n"
	.string "too…\p"
	.string "… …\p"
	.string "Looks like there are actually some\n"
	.string "nice people too in Kura Village…\p"
	.string "… …\p"
	.string "Anyway, thank you so much for helping\n"
	.string "me out. I'm so grateful.\p"
	.string "As a thanks, you can have your pick\n"
	.string "from my cool rock collection!$"

SakuTown_House2_EventScript_GiveEvoStone_Text_0:
# 165 "data/maps/SakuTown_House2/scripts.pory"
	.string "Which rock would you like?$"

SakuTown_House2_EventScript_GiveEvoStone_Text_1:
# 175 "data/maps/SakuTown_House2/scripts.pory"
	.string "The red rock$"

SakuTown_House2_EventScript_GiveEvoStone_Text_2:
# 176 "data/maps/SakuTown_House2/scripts.pory"
	.string "The blue rock$"

SakuTown_House2_EventScript_GiveEvoStone_Text_3:
# 177 "data/maps/SakuTown_House2/scripts.pory"
	.string "The yellow rock$"

SakuTown_House2_EventScript_Espeon_Text_0:
# 204 "data/maps/SakuTown_House2/scripts.pory"
	.string "Espeon$"

SakuTown_House2_EventScript_Espeon_Text_1:
# 206 "data/maps/SakuTown_House2/scripts.pory"
	.string "Purple fox$"

SakuTown_House2_EventScript_Espeon_Text_2:
# 209 "data/maps/SakuTown_House2/scripts.pory"
	.string "Eeeoon!$"

SakuTown_House2_EventScript_Sister_Text_0:
# 220 "data/maps/SakuTown_House2/scripts.pory"
	.string "Girl$"

SakuTown_House2_EventScript_Sister_Text_1:
# 223 "data/maps/SakuTown_House2/scripts.pory"
	.string "My brother's been feeling really down\n"
	.string "lately.\p"
	.string "His precious Pokémon disappeared\n"
	.string "during the big storm we had a while\l"
	.string "ago.$"

SakuTown_House2_EventScript_Sister_Text_2:
# 230 "data/maps/SakuTown_House2/scripts.pory"
	.string "Thank you for your kindness! It's\n"
	.string "nice to see my brother smiling again.\p"
	.string "I wish I could thank whoever took\n"
	.string "such good care of Eevee, too!$"
