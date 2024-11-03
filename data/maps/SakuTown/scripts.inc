SakuTown_MapScripts::
# 6 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/SakuTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SakuTown/scripts.pory"
	setmetatile 19, 2, METATILE_SakuKura_BoardGame, TRUE
# 12 "data/maps/SakuTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
	return


SakuTown_EventScript_RivalAtSakuWall::
# 19 "data/maps/SakuTown/scripts.pory"
	lock
# 20 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_RivalAtSakuWall_Text_0
# 21 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_1
# 22 "data/maps/SakuTown/scripts.pory"
	closemessage
# 24 "data/maps/SakuTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 25 "data/maps/SakuTown/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 27 "data/maps/SakuTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SAKU
# 28 "data/maps/SakuTown/scripts.pory"
	addobject 10
# 29 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_2
# 32 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 17, 10
SakuTown_EventScript_RivalAtSakuWall_1:
# 34 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_WalkUp
# 35 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_RivalAtSakuWall_Text_2
# 38 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_3
# 45 "data/maps/SakuTown/scripts.pory"
	switch VAR_STARTER_MON
# 46 "data/maps/SakuTown/scripts.pory"
	case SPECIES_ARON, SakuTown_EventScript_RivalAtSakuWall_7
# 48 "data/maps/SakuTown/scripts.pory"
	case SPECIES_SPHEAL, SakuTown_EventScript_RivalAtSakuWall_8
# 50 "data/maps/SakuTown/scripts.pory"
	case SPECIES_TRAPINCH, SakuTown_EventScript_RivalAtSakuWall_9
SakuTown_EventScript_RivalAtSakuWall_5:
# 54 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_RivalAtSakuWall_Text_2
# 55 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_4
# 67 "data/maps/SakuTown/scripts.pory"
	closemessage
# 70 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_11
# 74 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromLeft
SakuTown_EventScript_RivalAtSakuWall_10:
# 76 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/SakuTown/scripts.pory"
	removeobject 10
# 79 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_SAKU
# 81 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 1
# 83 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_RivalAtSakuWall_2:
# 30 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 16, 10
	goto SakuTown_EventScript_RivalAtSakuWall_1

SakuTown_EventScript_RivalAtSakuWall_7:
# 47 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_ARON, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_8:
# 49 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_SPHEAL, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_9:
# 51 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_TRAPINCH, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_11:
# 71 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromRight
	goto SakuTown_EventScript_RivalAtSakuWall_10


blabla::
# 88 "data/maps/SakuTown/scripts.pory"
	lock
# 89 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 0
# 90 "data/maps/SakuTown/scripts.pory"
	gettime
# 91 "data/maps/SakuTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 92 "data/maps/SakuTown/scripts.pory"
	msgbox blabla_Text_0
# 93 "data/maps/SakuTown/scripts.pory"
	release
	return


# 100 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromLeft:
# 101 "data/maps/SakuTown/scripts.pory"
	walk_faster_left
# 102 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 102 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 102 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 102 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 102 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
	step_end

# 105 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromRight:
# 106 "data/maps/SakuTown/scripts.pory"
	walk_faster_right
# 107 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 107 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 107 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 107 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 107 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
	step_end

# 110 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkUp:
# 111 "data/maps/SakuTown/scripts.pory"
	walk_up
# 111 "data/maps/SakuTown/scripts.pory"
	walk_up
# 111 "data/maps/SakuTown/scripts.pory"
	walk_up
# 111 "data/maps/SakuTown/scripts.pory"
	walk_up
# 111 "data/maps/SakuTown/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkFastUp:
# 115 "data/maps/SakuTown/scripts.pory"
	walk_fast_up
	step_end

# 118 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkAway:
# 119 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 119 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 119 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 119 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 119 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 119 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
	step_end

SakuTown_EventScript_Farmer::
# 123 "data/maps/SakuTown/scripts.pory"
	lock
# 124 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 125 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Farmer_Text_0
# 126 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer_Text_1
# 129 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer2::
# 133 "data/maps/SakuTown/scripts.pory"
	lock
# 134 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Farmer_Text_0
# 135 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer2_Text_0
# 139 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Woman::
# 143 "data/maps/SakuTown/scripts.pory"
	lock
# 144 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 145 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Woman_Text_0
# 146 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_1
# 150 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Karateka::
# 154 "data/maps/SakuTown/scripts.pory"
	lock
# 155 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 156 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Karateka_Text_0
# 157 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_1
# 160 "data/maps/SakuTown/scripts.pory"
	closemessage
# 161 "data/maps/SakuTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 162 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Karateka_Text_0
# 164 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_2
# 167 "data/maps/SakuTown/scripts.pory"
	closemessage
# 168 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Guard::
# 172 "data/maps/SakuTown/scripts.pory"
	lock
# 173 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_Guard_2
# 180 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 181 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 182 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_2
# 186 "data/maps/SakuTown/scripts.pory"
	closemessage
# 187 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 188 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
SakuTown_EventScript_Guard_1:
# 190 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_Guard_2:
# 174 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 175 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_1
# 178 "data/maps/SakuTown/scripts.pory"
	closemessage
	goto SakuTown_EventScript_Guard_1


SakuTown_EventScript_KuraGuard::
# 194 "data/maps/SakuTown/scripts.pory"
	lock
# 195 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 196 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_KuraGuard_Text_0
# 199 "data/maps/SakuTown/scripts.pory"
	closemessage
# 200 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_GuardSeesYou::
# 204 "data/maps/SakuTown/scripts.pory"
	lock
# 206 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 209 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 0
	goto_if_eq SakuTown_EventScript_GuardSeesYou_2
# 212 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 2
	goto_if_eq SakuTown_EventScript_GuardSeesYou_4
SakuTown_EventScript_GuardSeesYou_1:
# 216 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_GuardSeesYou_2:
# 210 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_3:
# 213 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_4:
# 212 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardSeesYou_3
	goto SakuTown_EventScript_GuardSeesYou_1


SakuTown_EventScript_GuardStopsYou::
# 220 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 221 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 222 "data/maps/SakuTown/scripts.pory"
	waitmovement 8
# 223 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 224 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_0
# 225 "data/maps/SakuTown/scripts.pory"
	closemessage
# 226 "data/maps/SakuTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 227 "data/maps/SakuTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 228 "data/maps/SakuTown/scripts.pory"
	delay 20
# 230 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardStopsYou_2
# 240 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 241 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_2
# 246 "data/maps/SakuTown/scripts.pory"
	closemessage
# 247 "data/maps/SakuTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 1
SakuTown_EventScript_GuardStopsYou_1:
# 250 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
	return

SakuTown_EventScript_GuardStopsYou_2:
# 231 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 232 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_1
# 237 "data/maps/SakuTown/scripts.pory"
	closemessage
# 238 "data/maps/SakuTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 3
	goto SakuTown_EventScript_GuardStopsYou_1


SakuTown_EventScript_TownSign::
# 255 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips::
# 259 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips2::
# 263 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips2_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_FloristSign::
# 267 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_FloristSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_BoardGame::
# 271 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_BoardGame_1
	return

SakuTown_EventScript_BoardGame_1:
# 272 "data/maps/SakuTown/scripts.pory"
	lock
# 273 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_BoardGame_Text_0, MSGBOX_DEFAULT
# 274 "data/maps/SakuTown/scripts.pory"
	closemessage
# 275 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Mart::
# 280 "data/maps/SakuTown/scripts.pory"
	lock
# 281 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 282 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Mart_Text_0
# 283 "data/maps/SakuTown/scripts.pory"
	message gText_HowMayIServeYou
# 284 "data/maps/SakuTown/scripts.pory"
	waitmessage
# 285 "data/maps/SakuTown/scripts.pory"
	pokemart SakuTown_Mart
# 286 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Mart_Text_0
# 287 "data/maps/SakuTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 288 "data/maps/SakuTown/scripts.pory"
	release
	return


	.align 2
# 291 "data/maps/SakuTown/scripts.pory"
SakuTown_Mart:
# 292 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 293 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 294 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 295 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 296 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 297 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 298 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SakuTown_EventScript_Makuhita::
# 302 "data/maps/SakuTown/scripts.pory"
	lock
# 303 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 304 "data/maps/SakuTown/scripts.pory"
	waitse
# 305 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 306 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Makuhita_Text_0
# 307 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Makuhita_Text_1
# 308 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 309 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_RivalAtSakuWall_Text_0:
# 20 "data/maps/SakuTown/scripts.pory"
	.string "???$"

SakuTown_EventScript_RivalAtSakuWall_Text_1:
# 21 "data/maps/SakuTown/scripts.pory"
	.string "Wait up, {PLAYER}!$"

SakuTown_EventScript_RivalAtSakuWall_Text_2:
# 37 "data/maps/SakuTown/scripts.pory"
	.string "{RIVAL}$"

SakuTown_EventScript_RivalAtSakuWall_Text_3:
# 39 "data/maps/SakuTown/scripts.pory"
	.string "I was wondering if you'd already\n"
	.string "reached Saku Village by now. Looks\l"
	.string "like we almost missed each other!\p"
	.string "Have you caught any Pokémon on your\n"
	.string "way here?\p"
	.string "Me? Oh, I can show you my Pokémon\n"
	.string "alright!$"

SakuTown_EventScript_RivalAtSakuWall_Text_4:
# 56 "data/maps/SakuTown/scripts.pory"
	.string "Okay, I… I didn't think you'd go that\n"
	.string "hard, honestly!\p"
	.string "Hahaha…\p"
	.string "Clearly I underestimated you. That's\n"
	.string "alright. I won't make that mistake\l"
	.string "next time!\p"
	.string "I can see your Pokémon are really\n"
	.string "growing to like you, it's great!\p"
	.string "You definitely stand a chance\n"
	.string "against the Dojo that's in the next\l"
	.string "village.\p"
	.string "Me? Actually, I just fought the Dojo's\n"
	.string "master and got a token from her!\p"
	.string "You'll have to hurry up if you wanna\n"
	.string "catch up!\p"
	.string "Well, it was good to see you. Until\n"
	.string "next time then.\p"
	.string "I bet you I'll get to Silveridge first!\p"
	.string "Race ya there!!!$"

blabla_Text_0:
# 92 "data/maps/SakuTown/scripts.pory"
	.string "{STR_VAR_1}$"

SakuTown_EventScript_Farmer_Text_0:
# 125 "data/maps/SakuTown/scripts.pory"
	.string "Farmer$"

SakuTown_EventScript_Farmer_Text_1:
# 127 "data/maps/SakuTown/scripts.pory"
	.string "We're cultivatin' Ryss berries. Saku\n"
	.string "Village exports its berries to many\l"
	.string "towns.$"

SakuTown_EventScript_Farmer2_Text_0:
# 136 "data/maps/SakuTown/scripts.pory"
	.string "Whew…\p"
	.string "Working in the fields sure is tiring…$"

SakuTown_EventScript_Woman_Text_0:
# 145 "data/maps/SakuTown/scripts.pory"
	.string "Woman$"

SakuTown_EventScript_Woman_Text_1:
# 147 "data/maps/SakuTown/scripts.pory"
	.string "Those thugs in Kura Village may have\n"
	.string "their own dojo, but their town is\l"
	.string "nothing but an ugly pile of rocks!\p"
	.string "They don't even have a Pokémon\n"
	.string "refuge!$"

SakuTown_EventScript_Karateka_Text_0:
# 156 "data/maps/SakuTown/scripts.pory"
	.string "Man$"

SakuTown_EventScript_Karateka_Text_1:
# 158 "data/maps/SakuTown/scripts.pory"
	.string "I let the Pokémon League borrow my\n"
	.string "super-strong Pokémon to help build\l"
	.string "the new Pokémon refuges throughout\l"
	.string "the region.$"

SakuTown_EventScript_Karateka_Text_2:
# 165 "data/maps/SakuTown/scripts.pory"
	.string "Come on, Mama, Kuku! Daddy loves you!!$"

SakuTown_EventScript_Guard_Text_0:
# 174 "data/maps/SakuTown/scripts.pory"
	.string "Guard$"

SakuTown_EventScript_Guard_Text_1:
# 176 "data/maps/SakuTown/scripts.pory"
	.string "Damn, where did that Mareep come\n"
	.string "from?!$"

SakuTown_EventScript_Guard_Text_2:
# 183 "data/maps/SakuTown/scripts.pory"
	.string "One can never be too careful.\p"
	.string "The safety of the whole village rests\n"
	.string "on my shoulders.$"

SakuTown_EventScript_KuraGuard_Text_0:
# 197 "data/maps/SakuTown/scripts.pory"
	.string "Hah, got two of your Tauros in my\n"
	.string "herd!$"

SakuTown_EventScript_GuardStopsYou_Text_0:
# 224 "data/maps/SakuTown/scripts.pory"
	.string "Hey!$"

SakuTown_EventScript_GuardStopsYou_Text_1:
# 233 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak in from Kura\n"
	.string "Village?\p"
	.string "…Oh, you're that traveler from before.\n"
	.string "You can go through.\p"
	.string "How was it? Awful, right? Welcome back\n"
	.string "to Saku Village!$"

SakuTown_EventScript_GuardStopsYou_Text_2:
# 242 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak into Kura\n"
	.string "Village?\p"
	.string "…Oh, you're just a traveler. Nevermind\n"
	.string "then, you can go through.\p"
	.string "Though I wouldn't recommend visiting\n"
	.string "the next village, there's really\l"
	.string "nothing interesting there.$"

SakuTown_EventScript_TownSign_Text_0:
# 255 "data/maps/SakuTown/scripts.pory"
	.string "Saku Village\n"
	.string "“A village of tender flower petals.”$"

SakuTown_EventScript_TrainerTips_Text_0:
# 259 "data/maps/SakuTown/scripts.pory"
	.string "Did you know?\p"
	.string "Saku Village is in all ways superior to\n"
	.string "Kura Village!$"

SakuTown_EventScript_TrainerTips2_Text_0:
# 263 "data/maps/SakuTown/scripts.pory"
	.string "Did you know?\p"
	.string "The folks from Kura Village are a\n"
	.string "bunch of mean jerks!$"

SakuTown_EventScript_FloristSign_Text_0:
# 267 "data/maps/SakuTown/scripts.pory"
	.string "Humble Blossom\n"
	.string "Bonsai & flower shop$"

SakuTown_EventScript_BoardGame_Text_0:
# 273 "data/maps/SakuTown/scripts.pory"
	.string "They're playing Tauros Herder, a\n"
	.string "popular board game!$"

SakuTown_EventScript_Mart_Text_0:
# 282 "data/maps/SakuTown/scripts.pory"
	.string "Saleswoman$"

SakuTown_EventScript_Makuhita_Text_0:
# 306 "data/maps/SakuTown/scripts.pory"
	.string "Makuhita$"

SakuTown_EventScript_Makuhita_Text_1:
# 307 "data/maps/SakuTown/scripts.pory"
	.string "Kuhi!$"

SakuTown_Text_RivalDefeat::
# 96 "data/maps/SakuTown/scripts.pory"
	.string "Oh, wow, okay.$"
