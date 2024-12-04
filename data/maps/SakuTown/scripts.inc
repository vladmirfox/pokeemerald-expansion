SakuTown_MapScripts::
# 8 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/SakuTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/SakuTown/scripts.pory"
	setmetatile 19, 2, METATILE_SakuKura_BoardGame, TRUE
# 14 "data/maps/SakuTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
	return


SakuTown_EventScript_RivalAtSakuWall::
# 21 "data/maps/SakuTown/scripts.pory"
	lock
# 22 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_RivalAtSakuWall_Text_0
# 23 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_1
# 24 "data/maps/SakuTown/scripts.pory"
	closemessage
# 26 "data/maps/SakuTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 27 "data/maps/SakuTown/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 29 "data/maps/SakuTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SAKU
# 30 "data/maps/SakuTown/scripts.pory"
	addobject 10
# 31 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_2
# 34 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 17, 10
SakuTown_EventScript_RivalAtSakuWall_1:
# 36 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_WalkUp
# 37 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 39 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_RivalAtSakuWall_Text_2
# 40 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_3
# 47 "data/maps/SakuTown/scripts.pory"
	switch VAR_STARTER_MON
# 48 "data/maps/SakuTown/scripts.pory"
	case SPECIES_ARON, SakuTown_EventScript_RivalAtSakuWall_7
# 50 "data/maps/SakuTown/scripts.pory"
	case SPECIES_SPHEAL, SakuTown_EventScript_RivalAtSakuWall_8
# 52 "data/maps/SakuTown/scripts.pory"
	case SPECIES_TRAPINCH, SakuTown_EventScript_RivalAtSakuWall_9
SakuTown_EventScript_RivalAtSakuWall_5:
# 56 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_RivalAtSakuWall_Text_2
# 57 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_4
# 69 "data/maps/SakuTown/scripts.pory"
	closemessage
# 72 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_11
# 76 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromLeft
SakuTown_EventScript_RivalAtSakuWall_10:
# 78 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 80 "data/maps/SakuTown/scripts.pory"
	removeobject 10
# 81 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_SAKU
# 83 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 1
# 85 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_RivalAtSakuWall_2:
# 32 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 16, 10
	goto SakuTown_EventScript_RivalAtSakuWall_1

SakuTown_EventScript_RivalAtSakuWall_7:
# 49 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_ARON, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_8:
# 51 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_SPHEAL, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_9:
# 53 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_TRAPINCH, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_11:
# 73 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromRight
	goto SakuTown_EventScript_RivalAtSakuWall_10


blabla::
# 90 "data/maps/SakuTown/scripts.pory"
	lock
# 91 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 0
# 92 "data/maps/SakuTown/scripts.pory"
	gettime
# 93 "data/maps/SakuTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 94 "data/maps/SakuTown/scripts.pory"
	msgbox blabla_Text_0
# 95 "data/maps/SakuTown/scripts.pory"
	release
	return


# 102 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromLeft:
# 103 "data/maps/SakuTown/scripts.pory"
	walk_faster_left
# 104 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 104 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 104 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 104 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 104 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
	step_end

# 107 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromRight:
# 108 "data/maps/SakuTown/scripts.pory"
	walk_faster_right
# 109 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 109 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 109 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 109 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 109 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
	step_end

# 112 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkUp:
# 113 "data/maps/SakuTown/scripts.pory"
	walk_up
# 113 "data/maps/SakuTown/scripts.pory"
	walk_up
# 113 "data/maps/SakuTown/scripts.pory"
	walk_up
# 113 "data/maps/SakuTown/scripts.pory"
	walk_up
# 113 "data/maps/SakuTown/scripts.pory"
	walk_up
	step_end

# 116 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkFastUp:
# 117 "data/maps/SakuTown/scripts.pory"
	walk_fast_up
	step_end

# 120 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkAway:
# 121 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 121 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 121 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 121 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 121 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 121 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
	step_end

SakuTown_EventScript_Farmer::
# 125 "data/maps/SakuTown/scripts.pory"
	lock
# 126 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 127 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Farmer_Text_0
# 128 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer_Text_1
# 131 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer2::
# 135 "data/maps/SakuTown/scripts.pory"
	lock
# 136 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Farmer_Text_0
# 137 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer2_Text_0
# 141 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Woman::
# 145 "data/maps/SakuTown/scripts.pory"
	lock
# 146 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 147 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Woman_Text_0
# 148 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_1
# 152 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Karateka::
# 156 "data/maps/SakuTown/scripts.pory"
	lock
# 157 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 158 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Karateka_Text_0
# 159 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_1
# 162 "data/maps/SakuTown/scripts.pory"
	closemessage
# 163 "data/maps/SakuTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 164 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Karateka_Text_0
# 166 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_2
# 169 "data/maps/SakuTown/scripts.pory"
	closemessage
# 171 "data/maps/SakuTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 172 "data/maps/SakuTown/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 173 "data/maps/SakuTown/scripts.pory"
	waitmovement 1
# 174 "data/maps/SakuTown/scripts.pory"
	waitmovement 2
# 176 "data/maps/SakuTown/scripts.pory"
	delay 24
# 178 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 179 "data/maps/SakuTown/scripts.pory"
	applymovement 1, SakuTown_EventScript_Karateka_Movement_0
# 180 "data/maps/SakuTown/scripts.pory"
	waitmovement 1
# 181 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 182 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 183 "data/maps/SakuTown/scripts.pory"
	applymovement 2, SakuTown_EventScript_Karateka_Movement_0
# 184 "data/maps/SakuTown/scripts.pory"
	waitmovement 2
# 185 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 187 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Guard::
# 191 "data/maps/SakuTown/scripts.pory"
	lock
# 192 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_Guard_2
# 199 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 200 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 201 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_2
# 205 "data/maps/SakuTown/scripts.pory"
	closemessage
# 206 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 207 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
SakuTown_EventScript_Guard_1:
# 209 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_Guard_2:
# 193 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 194 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_1
# 197 "data/maps/SakuTown/scripts.pory"
	closemessage
	goto SakuTown_EventScript_Guard_1


SakuTown_EventScript_KuraGuard::
# 213 "data/maps/SakuTown/scripts.pory"
	lock
# 214 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 215 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_KuraGuard_Text_0
# 218 "data/maps/SakuTown/scripts.pory"
	closemessage
# 219 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_GuardSeesYou::
# 223 "data/maps/SakuTown/scripts.pory"
	lock
# 225 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 228 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 0
	goto_if_eq SakuTown_EventScript_GuardSeesYou_2
# 231 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 2
	goto_if_eq SakuTown_EventScript_GuardSeesYou_4
SakuTown_EventScript_GuardSeesYou_1:
# 235 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_GuardSeesYou_2:
# 229 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_3:
# 232 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_4:
# 231 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardSeesYou_3
	goto SakuTown_EventScript_GuardSeesYou_1


SakuTown_EventScript_GuardStopsYou::
# 239 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 240 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 241 "data/maps/SakuTown/scripts.pory"
	waitmovement 8
# 242 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 243 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_0
# 244 "data/maps/SakuTown/scripts.pory"
	closemessage
# 245 "data/maps/SakuTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 246 "data/maps/SakuTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 247 "data/maps/SakuTown/scripts.pory"
	delay 20
# 249 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardStopsYou_2
# 259 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 260 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_2
# 265 "data/maps/SakuTown/scripts.pory"
	closemessage
# 266 "data/maps/SakuTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 1
SakuTown_EventScript_GuardStopsYou_1:
# 269 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
	return

SakuTown_EventScript_GuardStopsYou_2:
# 250 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Guard_Text_0
# 251 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_1
# 256 "data/maps/SakuTown/scripts.pory"
	closemessage
# 257 "data/maps/SakuTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 3
	goto SakuTown_EventScript_GuardStopsYou_1


SakuTown_EventScript_TownSign::
# 274 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips::
# 278 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips2::
# 282 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips2_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_FloristSign::
# 286 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_FloristSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_BoardGame::
# 290 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_BoardGame_1
	return

SakuTown_EventScript_BoardGame_1:
# 291 "data/maps/SakuTown/scripts.pory"
	lock
# 292 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_BoardGame_Text_0, MSGBOX_DEFAULT
# 293 "data/maps/SakuTown/scripts.pory"
	closemessage
# 294 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Mart::
# 299 "data/maps/SakuTown/scripts.pory"
	lock
# 300 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 301 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Mart_Text_0
# 302 "data/maps/SakuTown/scripts.pory"
	message gText_HowMayIServeYou
# 303 "data/maps/SakuTown/scripts.pory"
	waitmessage
# 304 "data/maps/SakuTown/scripts.pory"
	pokemart SakuTown_Mart
# 305 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Mart_Text_0
# 306 "data/maps/SakuTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 307 "data/maps/SakuTown/scripts.pory"
	release
	return


	.align 2
# 310 "data/maps/SakuTown/scripts.pory"
SakuTown_Mart:
# 311 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 312 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 313 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 314 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 315 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 316 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 317 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SakuTown_EventScript_Makuhita::
# 321 "data/maps/SakuTown/scripts.pory"
	lock
# 322 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 323 "data/maps/SakuTown/scripts.pory"
	waitse
# 324 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 325 "data/maps/SakuTown/scripts.pory"
	speakername SakuTown_EventScript_Makuhita_Text_0
# 326 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Makuhita_Text_1
# 327 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 328 "data/maps/SakuTown/scripts.pory"
	release
	return


# 179 "data/maps/SakuTown/scripts.pory"
SakuTown_EventScript_Karateka_Movement_0:
# 179 "data/maps/SakuTown/scripts.pory"
	jump_in_place_down
	step_end

SakuTown_EventScript_RivalAtSakuWall_Text_0:
# 22 "data/maps/SakuTown/scripts.pory"
	.string "???$"

SakuTown_EventScript_RivalAtSakuWall_Text_1:
# 23 "data/maps/SakuTown/scripts.pory"
	.string "Wait up, {PLAYER}!$"

SakuTown_EventScript_RivalAtSakuWall_Text_2:
# 39 "data/maps/SakuTown/scripts.pory"
	.string "Natsuki$"

SakuTown_EventScript_RivalAtSakuWall_Text_3:
# 41 "data/maps/SakuTown/scripts.pory"
	.string "I was wondering if you'd already\n"
	.string "reached Saku Village by now. Looks\l"
	.string "like we almost missed each other!\p"
	.string "Have you caught any Pokémon on your\n"
	.string "way here?\p"
	.string "Me? Oh, I can show you my Pokémon\n"
	.string "alright!$"

SakuTown_EventScript_RivalAtSakuWall_Text_4:
# 58 "data/maps/SakuTown/scripts.pory"
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
# 94 "data/maps/SakuTown/scripts.pory"
	.string "{STR_VAR_1}$"

SakuTown_EventScript_Farmer_Text_0:
# 127 "data/maps/SakuTown/scripts.pory"
	.string "Farmer$"

SakuTown_EventScript_Farmer_Text_1:
# 129 "data/maps/SakuTown/scripts.pory"
	.string "We're cultivatin' Mifan berries. Saku\n"
	.string "Village exports its berries to many\l"
	.string "towns.$"

SakuTown_EventScript_Farmer2_Text_0:
# 138 "data/maps/SakuTown/scripts.pory"
	.string "Whew…\p"
	.string "Working in the fields sure is tiring…$"

SakuTown_EventScript_Woman_Text_0:
# 147 "data/maps/SakuTown/scripts.pory"
	.string "Woman$"

SakuTown_EventScript_Woman_Text_1:
# 149 "data/maps/SakuTown/scripts.pory"
	.string "Those thugs in Kura Village may have\n"
	.string "their own Dojo, but their town is\l"
	.string "nothing but an ugly pile of rocks!\p"
	.string "They don't even have a Pokémon\n"
	.string "refuge!$"

SakuTown_EventScript_Karateka_Text_0:
# 158 "data/maps/SakuTown/scripts.pory"
	.string "Man$"

SakuTown_EventScript_Karateka_Text_1:
# 160 "data/maps/SakuTown/scripts.pory"
	.string "I let the Pokémon League borrow my\n"
	.string "super-strong Pokémon to help build\l"
	.string "the new Pokémon refuges throughout\l"
	.string "the region.$"

SakuTown_EventScript_Karateka_Text_2:
# 167 "data/maps/SakuTown/scripts.pory"
	.string "Come on, Mama, Kuku! Daddy loves you!!$"

SakuTown_EventScript_Guard_Text_0:
# 193 "data/maps/SakuTown/scripts.pory"
	.string "Guard$"

SakuTown_EventScript_Guard_Text_1:
# 195 "data/maps/SakuTown/scripts.pory"
	.string "Damn, where did that Mareep come\n"
	.string "from?!$"

SakuTown_EventScript_Guard_Text_2:
# 202 "data/maps/SakuTown/scripts.pory"
	.string "One can never be too careful.\p"
	.string "The safety of the whole village rests\n"
	.string "on my shoulders.$"

SakuTown_EventScript_KuraGuard_Text_0:
# 216 "data/maps/SakuTown/scripts.pory"
	.string "Hah, got two of your Tauros in my\n"
	.string "herd!$"

SakuTown_EventScript_GuardStopsYou_Text_0:
# 243 "data/maps/SakuTown/scripts.pory"
	.string "Hey!$"

SakuTown_EventScript_GuardStopsYou_Text_1:
# 252 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak in from Kura\n"
	.string "Village?\p"
	.string "…Oh, you're that traveler from before.\n"
	.string "You can go through.\p"
	.string "How was it? Awful, right? Welcome back\n"
	.string "to Saku Village!$"

SakuTown_EventScript_GuardStopsYou_Text_2:
# 261 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak into Kura\n"
	.string "Village?\p"
	.string "…Oh, you're just a traveler. Nevermind\n"
	.string "then, you can go through.\p"
	.string "Though I wouldn't recommend visiting\n"
	.string "the next village, there's really\l"
	.string "nothing interesting there.$"

SakuTown_EventScript_TownSign_Text_0:
# 274 "data/maps/SakuTown/scripts.pory"
	.string "Saku Village\n"
	.string "“A village of tender flower petals.”$"

SakuTown_EventScript_TrainerTips_Text_0:
# 278 "data/maps/SakuTown/scripts.pory"
	.string "Did you know?\p"
	.string "Saku Village is in all ways superior to\n"
	.string "Kura Village!$"

SakuTown_EventScript_TrainerTips2_Text_0:
# 282 "data/maps/SakuTown/scripts.pory"
	.string "Did you know?\p"
	.string "The folks from Kura Village are a\n"
	.string "bunch of mean jerks!$"

SakuTown_EventScript_FloristSign_Text_0:
# 286 "data/maps/SakuTown/scripts.pory"
	.string "Humble Blossom\n"
	.string "Bonsai & flower shop$"

SakuTown_EventScript_BoardGame_Text_0:
# 292 "data/maps/SakuTown/scripts.pory"
	.string "They're playing Tauros Herder, a\n"
	.string "popular board game!$"

SakuTown_EventScript_Mart_Text_0:
# 301 "data/maps/SakuTown/scripts.pory"
	.string "Saleswoman$"

SakuTown_EventScript_Makuhita_Text_0:
# 325 "data/maps/SakuTown/scripts.pory"
	.string "Makuhita$"

SakuTown_EventScript_Makuhita_Text_1:
# 326 "data/maps/SakuTown/scripts.pory"
	.string "Kuhi!$"

SakuTown_Text_RivalDefeat::
# 98 "data/maps/SakuTown/scripts.pory"
	.string "Oh, wow, okay.$"
