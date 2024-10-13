SunriseVillage_EldersHouse_MapScripts::
# 11 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 17 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script_2 VAR_SUNRISE_VILLAGE_INTRO_STATE, 4, SunriseVillage_EldersHouse_EventScript_DistributionCutscene
	.2byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 18 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 20 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 21 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 22 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 23 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	clearflag FLAG_RECEIVED_STARTER
	return


SunriseVillage_EldersHouse_EventScript_DistributionCutscene::
# 29 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 31 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder
# 32 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 36 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 37 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1
# 45 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 46 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderTurnsToThink
# 47 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 48 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 49 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2
# 57 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 59 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensFirstBall
# 60 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 61 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 62 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 63 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 64 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 6
# 65 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 66 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 68 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensSecondBall
# 69 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 71 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 73 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 7
# 74 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 75 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 77 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensThirdBall
# 78 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 79 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 80 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 81 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 82 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 8
# 83 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 84 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 86 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	clearflag FLAG_RECEIVED_STARTER
# 88 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderReturnsToInitialPos
# 89 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 91 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_LEDGE
# 92 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalIsDeslighted
# 93 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 94 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4
# 98 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 99 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 101 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 102 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
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
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
SunriseVillage_EldersHouse_Event_Rival_1:
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
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
# 158 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 159 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 160 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 161 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_EldersHouse_Event_Elder_2
# 167 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Elder_5
# 172 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_2
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
SunriseVillage_EldersHouse_Event_Elder_1:
# 176 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Elder_2:
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Elder_1

SunriseVillage_EldersHouse_Event_Elder_5:
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_1
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Elder_1


SunriseVillage_EldersHouse_EventScript_TryToLeave::
# 180 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 181 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 183 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0
# 186 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 188 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 189 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 192 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit:
# 193 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 194 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 199 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 202 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 205 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 206 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 206 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 207 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 211 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 213 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 214 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 219 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 220 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 221 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 225 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 226 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 228 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 239 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry VAR_TEMP_1, CRY_MODE_NORMAL
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 241 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 242 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 243 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 245 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 247 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 250 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 250 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 256 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 294 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 295 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 297 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 300 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 301 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 308 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 317 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 328 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 330 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 332 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6
# 337 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 339 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 340 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 347 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 354 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 364 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 365 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7
# 371 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 373 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 374 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 376 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 377 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8
# 378 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 379 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 381 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 382 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 384 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9
# 390 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 392 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 394 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10
# 403 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 407 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11
# 408 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 409 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 411 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12
# 413 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 415 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 416 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 417 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 419 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13
# 421 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15
# 432 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 438 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 440 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 441 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 442 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 447 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 451 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 456 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 457 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 463 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 466 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 233 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
# 236 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 244 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 248 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 251 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 252 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
# 254 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 260 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 262 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 265 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 266 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 267 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 268 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 271 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 275 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 279 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 285 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 286 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 290 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 302 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 303 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 305 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 309 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 310 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 312 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 314 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 318 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 319 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 321 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 323 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 259 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_FLIPPER_SPLASH, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 261 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 341 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 342 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 344 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 345 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 346 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 348 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 350 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 351 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 352 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 353 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 355 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 357 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 358 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 359 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 360 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 304 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 306 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 311 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 313 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 315 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 320 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 324 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 273 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 274 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 276 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 277 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 278 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 280 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 281 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 282 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 433 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16
# 436 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 287 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 288 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 443 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 470 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 471 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 473 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
# 475 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_5
SunriseVillage_EldersHouse_EventScript_RivalBattle_1:
# 479 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 480 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1
# 487 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 490 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 491 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq SunriseVillage_EldersHouse_EventScript_RivalBattle_9
SunriseVillage_EldersHouse_EventScript_RivalBattle_8:
# 494 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeaves
SunriseVillage_EldersHouse_EventScript_RivalBattle_6:
# 497 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 498 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 499 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 500 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_EXIT
# 501 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 502 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay16
# 504 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 506 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 472 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_5:
# 476 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_7:
# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_9:
# 491 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq SunriseVillage_EldersHouse_EventScript_RivalBattle_7
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_8


# 509 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 510 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 511 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 512 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 515 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 516 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 517 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 518 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 519 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 522 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 523 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 524 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 525 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 526 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 527 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 530 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 531 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 532 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 533 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 534 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 535 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 539 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 540 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 541 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 542 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 543 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 544 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 547 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 548 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 549 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 550 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 551 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 552 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 555 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 556 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 556 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 557 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 558 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 559 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 560 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 561 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 562 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 565 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeaves:
# 566 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 566 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 567 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 571 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 572 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 573 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 573 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 574 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 577 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 578 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 578 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 579 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 580 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 581 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 582 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 585 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 586 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 587 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 588 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 589 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 592 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 593 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 593 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 593 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 594 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 595 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 598 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom:
# 599 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 600 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 601 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 604 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft:
# 605 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 606 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 606 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 607 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 607 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 608 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 609 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 612 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop:
# 613 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 614 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 614 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 615 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 615 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 616 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 617 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 618 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 621 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom:
# 622 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 622 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 623 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 624 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 625 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 628 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight:
# 629 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 630 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 630 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 631 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 632 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 633 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0:
# 36 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1:
# 38 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, {RIVAL}.\n"
	.string "You are late. Why am I surprised?\p"
	.string "I always have to run after you two!\n"
	.string "Now stay still for a minute and listen\l"
	.string "closely!\p"
	.string "As you have heard, the woods, and\n"
	.string "even the roads, are no longer safe.\p"
	.string "We don't yet know the reason, but the\n"
	.string "wild Pokémon that usually hide in the\l"
	.string "tall grass and live peacefully\l"
	.string "alongside men have started behaving\l"
	.string "aggressively.\p"
	.string "There are reports of travelers being\n"
	.string "attacked from several nearby\l"
	.string "villages.\p"
	.string "This is all very worrying…$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2:
# 50 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Which is why the Toku council has\n"
	.string "decided that, for the time being, the\l"
	.string "best way to handle this is to use the\l"
	.string "Pokémon themselves as a means of\l"
	.string "protection!\p"
	.string "There were very few experienced\n"
	.string "Pokémon wielders in Toku until now.\p"
	.string "This is about to change.\p"
	.string "More and more, people will be fighting\n"
	.string "alongside their own companion.\p"
	.string "With a domesticated Pokémon by your\n"
	.string "side, you'll be able to defend\l"
	.string "yourselves even when you're on your\l"
	.string "own.\p"
	.string "Without further ado, please carefully\n"
	.string "choose your new companion!$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3:
# 94 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4:
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Woah, this is so cool!!$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_5:
# 102 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "C'mon {PLAYER}, pick yours, quick\n"
	.string "quick!$"

SunriseVillage_EldersHouse_Event_Rival_Text_0:
# 143 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You alright?\p"
	.string "C'mon, let's fight again, and give it\n"
	.string "your all this time!$"

SunriseVillage_EldersHouse_Event_Rival_Text_1:
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What are you waiting for? Choose one\n"
	.string "already!$"

SunriseVillage_EldersHouse_Event_Elder_Text_0:
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "How is your Pokémon research going?$"

SunriseVillage_EldersHouse_Event_Elder_Text_1:
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Choose your new partner wisely. No\n"
	.string "takebacks.$"

SunriseVillage_EldersHouse_Event_Elder_Text_2:
# 172 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You're free to battle here, but please\n"
	.string "don't break anything…$"

SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0:
# 184 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Where do you think you're going?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 234 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon. Better\n"
	.string "leave this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 244 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 248 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 266 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Alright, I'm taking this one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 366 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Now that you have your own Pokémon,\n"
	.string "you two are officially Pokémon\l"
	.string "wielders!\p"
	.string "The more wielders there are, the\n"
	.string "deeper our understanding of Pokémon\l"
	.string "will be.\p"
	.string "We need to study these creatures\n"
	.string "from up close to find the root of this\l"
	.string "issue.\p"
	.string "Actually, there's something I wanted\n"
	.string "to ask you.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8:
# 377 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 388 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 396 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I call this the “Pokédex”. It is an\n"
	.string "encyclopedia containing vital\l"
	.string "information about Pokémon from the\l"
	.string "whole region!\p"
	.string "Except it's, well, empty. That's where\n"
	.string "you come in!\p"
	.string "Explore Toku and fill its pages with\n"
	.string "your findings!\p"
	.string "You can start by going all the way to\n"
	.string "Silveridge, north of here in the\l"
	.string "mountains.\p"
	.string "Another Elder lives there and,\n"
	.string "hopefully, has more information as to\l"
	.string "why the Pokémon are lashing out.\p"
	.string "Could you deliver him this letter?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11:
# 407 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Understood, Grandma Kaba! We're going\n"
	.string "adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 428 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Totally!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 429 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Absolutely not!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16:
# 434 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!\p"
	.string "$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17:
# 444 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18:
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19:
# 458 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}! Let's see what our\n"
	.string "brand-new Pokémon are capable of!\p"
	.string "I request an official Pokémon wielder\n"
	.string "battle!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 472 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I lost!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1:
# 481 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Whew! That was so stressful!\p"
	.string "I went easy on you this time, but next\n"
	.string "time… You'll see!\p"
	.string "Well, I'm going off now.\p"
	.string "Don't dilly-dally, or you'll never\n"
	.string "catch up!\p"
	.string "See ya, {PLAYER}.$"
