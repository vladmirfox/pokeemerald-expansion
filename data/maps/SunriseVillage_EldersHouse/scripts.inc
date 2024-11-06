SunriseVillage_EldersHouse_MapScripts::
# 11 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 14 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script_2 VAR_SUNRISE_VILLAGE_INTRO_STATE, 4, SunriseVillage_EldersHouse_EventScript_DistributionCutscene
	.2byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 17 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 18 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 19 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 20 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	clearflag FLAG_RECEIVED_STARTER
	return


SunriseVillage_EldersHouse_EventScript_DistributionCutscene::
# 26 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 28 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder
# 29 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 30 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 33 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 34 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1
# 42 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 43 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderTurnsToThink
# 44 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 45 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 46 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2
# 54 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 56 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensFirstBall
# 57 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 58 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 59 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 60 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 61 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 6
# 62 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 63 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 65 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensSecondBall
# 66 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 67 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 68 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 69 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 70 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 7
# 71 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 74 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensThirdBall
# 75 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 76 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 77 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 78 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 79 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 8
# 80 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 81 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 83 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	clearflag FLAG_RECEIVED_STARTER
# 85 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderReturnsToInitialPos
# 86 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 88 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_LEDGE
# 89 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalIsDeslighted
# 90 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 91 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 92 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 96 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 97 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 98 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 99 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_5
# 103 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 104 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 5
# 107 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 110 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderOpensFirstBall:
# 111 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 112 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 113 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
	step_end

# 116 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderOpensSecondBall:
# 117 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 118 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 119 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
	step_end

# 122 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderOpensThirdBall:
# 123 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 124 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
	step_end

# 128 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderReturnsToInitialPos:
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 130 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
	step_end

# 133 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalIsDeslighted:
# 134 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	jump_in_place_up
	step_end

SunriseVillage_EldersHouse_Event_Rival::
# 138 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 139 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 140 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 141 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Rival_2
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_1
# 151 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 152 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 153 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
SunriseVillage_EldersHouse_Event_Rival_1:
# 155 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Rival_2:
# 142 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_0
# 146 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 148 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	goto SunriseVillage_EldersHouse_Event_Rival_1


SunriseVillage_EldersHouse_Event_Elder::
# 159 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 160 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 161 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 162 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_EldersHouse_Event_Elder_2
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Elder_5
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_2
# 174 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
SunriseVillage_EldersHouse_Event_Elder_1:
# 177 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Elder_2:
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0
# 165 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Elder_1

SunriseVillage_EldersHouse_Event_Elder_5:
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_1
# 170 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Elder_1


SunriseVillage_EldersHouse_EventScript_TryToLeave::
# 181 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 183 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 184 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 188 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 189 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 190 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_EventScript_TryToEnterOtherRoom::
# 194 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 195 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_NORTH
# 196 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0
# 200 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 201 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 202 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 206 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit:
# 207 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 208 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 211 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 213 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 216 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 217 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 219 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 220 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 224 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 225 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 226 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 231 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 233 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 234 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 238 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 239 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 241 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 245 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 252 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry VAR_TEMP_1, CRY_MODE_NORMAL
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 254 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 255 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 256 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 260 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 269 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 305 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 307 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 308 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 310 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 313 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 314 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 321 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 330 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 341 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 345 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 348 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6
# 350 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 352 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 353 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 360 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 367 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 377 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 378 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7
# 384 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 389 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 390 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8
# 391 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 392 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 394 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 397 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 399 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 400 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9
# 403 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 407 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 408 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10
# 416 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 418 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11
# 421 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 422 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 424 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 425 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12
# 426 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 428 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 429 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 430 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 432 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 433 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13
# 434 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15
# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 451 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 454 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 455 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 460 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 464 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 466 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 469 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 470 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 476 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalPreBattlePose
# 477 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 479 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 482 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
# 249 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 259 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 261 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 264 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 265 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 266 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
# 267 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 271 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 273 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 275 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 278 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 280 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 281 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 283 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 284 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 288 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 298 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 299 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 303 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 315 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 316 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 318 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 323 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 325 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 327 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 331 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 332 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 334 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_FLIPPER_SPLASH, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 274 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 276 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 354 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 355 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 357 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 358 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 359 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 361 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 362 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 363 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 364 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 365 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 366 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 368 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 369 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 370 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 371 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 372 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 373 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 317 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 319 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 324 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 326 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 328 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 333 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 337 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 285 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 286 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 287 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 289 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 290 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 291 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 293 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 294 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 295 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 446 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16
# 449 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 300 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 301 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 456 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


# 485 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalPreBattlePose:
# 488 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_player
	step_end

SunriseVillage_EldersHouse_EventScript_PostBattle::
# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	special HealPlayerParty
# 493 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 494 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunriseVillage_EldersHouse_EventScript_PostBattle_2
# 505 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 506 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_PostBattle_Text_1
# 513 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
SunriseVillage_EldersHouse_EventScript_PostBattle_1:
# 518 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 519 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq SunriseVillage_EldersHouse_EventScript_PostBattle_8
SunriseVillage_EldersHouse_EventScript_PostBattle_7:
# 522 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeaves
SunriseVillage_EldersHouse_EventScript_PostBattle_5:
# 525 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 526 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 527 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 528 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_EXIT
# 529 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 530 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 16
# 532 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 534 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_EventScript_PostBattle_2:
# 495 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 496 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_PostBattle_Text_0
# 503 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_EventScript_PostBattle_1

SunriseVillage_EldersHouse_EventScript_PostBattle_6:
# 520 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_PostBattle_5

SunriseVillage_EldersHouse_EventScript_PostBattle_8:
# 519 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq SunriseVillage_EldersHouse_EventScript_PostBattle_6
	goto SunriseVillage_EldersHouse_EventScript_PostBattle_7


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 538 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 539 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_2
# 541 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 543 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_2:
# 540 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro_no_whiteout_continue_script TRAINER_RIVAL_FIRST_BATTLE_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0, SunriseVillage_EldersHouse_EventScript_PostBattle
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 542 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro_no_whiteout_continue_script TRAINER_RIVAL_FIRST_BATTLE_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0, SunriseVillage_EldersHouse_EventScript_PostBattle
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 544 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro_no_whiteout_continue_script TRAINER_RIVAL_FIRST_BATTLE_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0, SunriseVillage_EldersHouse_EventScript_PostBattle
	return


SunriseVillage_EldersHouse_EventScript_Joltik::
# 549 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 550 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 551 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 552 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_NORMAL
# 553 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_Joltik_Text_0
# 556 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmoncry
# 557 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	end


# 561 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 562 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 563 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 564 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 567 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 568 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 569 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 570 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 571 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 574 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 575 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 576 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 577 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 578 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 579 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 582 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 583 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 584 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 585 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 586 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 587 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 591 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 592 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 593 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 594 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 595 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 596 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 599 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 600 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 601 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 602 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 603 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 604 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 607 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 608 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 608 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 609 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 610 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 611 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 612 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 613 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 614 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 617 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeaves:
# 618 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 618 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 619 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 623 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 624 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 625 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 625 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 626 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 629 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 630 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 630 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 631 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 632 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 633 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 634 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 637 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 638 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 639 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 640 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 641 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 644 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 645 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 645 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 645 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 646 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 647 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 650 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom:
# 651 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 652 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 653 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 656 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft:
# 657 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 658 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 658 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 659 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 659 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 660 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 661 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 664 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop:
# 665 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 666 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 666 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 667 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 667 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 668 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 669 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 670 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 673 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom:
# 674 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 674 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 675 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 676 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 677 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 680 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight:
# 681 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 682 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 682 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 683 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 684 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 685 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0:
# 33 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1:
# 35 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, Natsuki.\nYou are late. Why am I surprised?\p"
	.string "I always have to run after you two!\nNow stay still for a minute and\llisten closely!\p"
	.string "As you have heard, the woods, and even\nthe roads, are no longer safe.\p"
	.string "We don't yet know why, but the wild\nPokémon that usually hide in the\ltall grass and live peacefully\lalongside men have started behaving\laggressively.\p"
	.string "There are reports of travelers being\nattacked from several nearby villages.\p"
	.string "This is all very worrying…$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2:
# 47 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Which is why!\p"
	.string "The Toku council has decided that,\n"
	.string "for the time being, the best way to\l"
	.string "handle this is to use the Pokémon\l"
	.string "themselves as a means of protection!\p"
	.string "There were very few experienced\n"
	.string "Pokémon wielders in Toku until now.\l"
	.string "This is about change.\p"
	.string "With a trained Pokémon by your side,\n"
	.string "you'll be able to defend yourselves\l"
	.string "on your own.\p"
	.string "Without further ado, please carefully\n"
	.string "choose your new companion!$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3:
# 91 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Natsuki$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4:
# 92 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Woah! Cool.$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_5:
# 100 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, choose yours first!\n"
	.string "I don't mind being second pick.$"

SunriseVillage_EldersHouse_Event_Rival_Text_0:
# 143 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You alright?\p"
	.string "C'mon, let's fight again, and give it\n"
	.string "your all this time!$"

SunriseVillage_EldersHouse_Event_Rival_Text_1:
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't ask me to pick for you!$"

SunriseVillage_EldersHouse_Event_Elder_Text_0:
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "How is your Pokémon adventure going?$"

SunriseVillage_EldersHouse_Event_Elder_Text_1:
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Choose your new partner wisely.\n"
	.string "No takebacks.$"

SunriseVillage_EldersHouse_Event_Elder_Text_2:
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You're free to battle here, but please\n"
	.string "don't break anything…$"

SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0:
# 185 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Where do you think you're going?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 247 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon.\n"
	.string "Better leave this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 259 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 261 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 266 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 279 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Alright. I'm taking this one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 379 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Now that you have your own Pokémon,\n"
	.string "you two are officially\l"
	.string "Pokémon wielders!\p"
	.string "The more wielders there are,\n"
	.string "the deeper our understanding\l"
	.string "of Pokémon will be.\p"
	.string "We need to study these creatures\n"
	.string "from up close to find the root of\l"
	.string "this issue.\p"
	.string "Actually, there's something\n"
	.string "I wanted to ask you.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8:
# 390 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 401 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 409 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I call this the “Pokédex”.\n"
	.string "It is an encyclopedia containing\l"
	.string "vital information about Pokémon\l"
	.string "from the whole region!\p"
	.string "Except it's, well, empty.\n"
	.string "That's where you come in!\p"
	.string "Explore Toku and fill its pages with\n"
	.string "your findings!\p"
	.string "You can start by going all the way to\n"
	.string "Silveridge, north of here in the\l"
	.string "mountains.\p"
	.string "Another Elder lives there and,\n"
	.string "hopefully, has more information\l"
	.string "as to why the Pokémon are lashing\l"
	.string "out.\p"
	.string "Could you deliver him this letter?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11:
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 425 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Understood, Grandma Kaba.\n"
	.string "We're going adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 433 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}… Are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 441 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Totally!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 442 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Absolutely not!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16:
# 447 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17:
# 457 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18:
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19:
# 471 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Let's see what our brand-new Pokémon\l"
	.string "are capable of!\p"
	.string "I request an official Pokémon\n"
	.string "wielder battle!$"

SunriseVillage_EldersHouse_EventScript_PostBattle_Text_0:
# 497 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Oh, man!\n"
	.string "That was the most fun I've ever had!\p"
	.string "{PLAYER}!\n"
	.string "We're now officially rivals! I went\l"
	.string "easy on you this time, but\n"
	.string "next time… You'll see!\p"
	.string "I'm going home to pack some things.\p"
	.string "See ya later, Feraligatr.$"

SunriseVillage_EldersHouse_EventScript_PostBattle_Text_1:
# 507 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Oh, man!\n"
	.string "That was the most fun I've ever had!\p"
	.string "{PLAYER}!\n"
	.string "We're now officially rivals! You\l"
	.string "better work hard to keep up!\p"
	.string "I'm going home to pack some things.\p"
	.string "See ya later, Feraligatr.$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 540 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Looks like I lost!$"

SunriseVillage_EldersHouse_EventScript_Joltik_Text_0:
# 554 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Fss!$"
