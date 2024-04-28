SakuTown_MapScripts::
# 6 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SakuTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/SakuTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/SakuTown/scripts.pory"
	compare VAR_RIVAL_ENCOUNTER_STATE, 1
	goto_if_eq SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/SakuTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SAKU
	goto SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/SakuTown/scripts.pory"
	setmetatile 19, 3, METATILE_SakuKura_BoardGame, TRUE
# 16 "data/maps/SakuTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/SakuTown/scripts.pory"
	map_script_2 VAR_RIVAL_ENCOUNTER_STATE, 1, SakuTown_EventScript_Rival
	.2byte 0


SakuTown_EventScript_Rival::
# 26 "data/maps/SakuTown/scripts.pory"
	lock
# 28 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_WalkFastUp
# 29 "data/maps/SakuTown/scripts.pory"
	playse SE_PIN
# 30 "data/maps/SakuTown/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 31 "data/maps/SakuTown/scripts.pory"
	delay 48
# 33 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Rival_Text_0
# 41 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_RivalFight
# 43 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_WalkAway
# 44 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/SakuTown/scripts.pory"
	removeobject 10
# 47 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_SAKU
# 49 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 2
# 51 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_RivalAtSakuWall::
# 56 "data/maps/SakuTown/scripts.pory"
	lock
# 57 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/SakuTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 60 "data/maps/SakuTown/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 62 "data/maps/SakuTown/scripts.pory"
	addobject 10
# 63 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_2
# 66 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 17, 10
SakuTown_EventScript_RivalAtSakuWall_1:
# 68 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_WalkUp
# 69 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_1
# 78 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_RivalFight
# 81 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_6
# 85 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromLeft
SakuTown_EventScript_RivalAtSakuWall_5:
# 87 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 89 "data/maps/SakuTown/scripts.pory"
	removeobject 10
# 90 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_SAKU
# 92 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 2
# 94 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_RivalAtSakuWall_2:
# 64 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 16, 10
	goto SakuTown_EventScript_RivalAtSakuWall_1

SakuTown_EventScript_RivalAtSakuWall_6:
# 82 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromRight
	goto SakuTown_EventScript_RivalAtSakuWall_5


SakuTown_EventScript_RivalFight::
# 98 "data/maps/SakuTown/scripts.pory"
	switch VAR_STARTER_MON
# 99 "data/maps/SakuTown/scripts.pory"
	case SPECIES_ARON, SakuTown_EventScript_RivalFight_3
# 102 "data/maps/SakuTown/scripts.pory"
	case SPECIES_SPHEAL, SakuTown_EventScript_RivalFight_4
# 105 "data/maps/SakuTown/scripts.pory"
	case SPECIES_TRAPINCH, SakuTown_EventScript_RivalFight_5
SakuTown_EventScript_RivalFight_1:
# 110 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalFight_Text_0
# 120 "data/maps/SakuTown/scripts.pory"
	closemessage
	return

SakuTown_EventScript_RivalFight_3:
# 100 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_ARON, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalFight_1

SakuTown_EventScript_RivalFight_4:
# 103 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_SPHEAL, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalFight_1

SakuTown_EventScript_RivalFight_5:
# 106 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_TRAPINCH, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalFight_1


# 127 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromLeft:
# 128 "data/maps/SakuTown/scripts.pory"
	walk_left
# 129 "data/maps/SakuTown/scripts.pory"
	walk_up
# 129 "data/maps/SakuTown/scripts.pory"
	walk_up
# 129 "data/maps/SakuTown/scripts.pory"
	walk_up
# 129 "data/maps/SakuTown/scripts.pory"
	walk_up
# 129 "data/maps/SakuTown/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromRight:
# 133 "data/maps/SakuTown/scripts.pory"
	walk_right
# 134 "data/maps/SakuTown/scripts.pory"
	walk_up
# 134 "data/maps/SakuTown/scripts.pory"
	walk_up
# 134 "data/maps/SakuTown/scripts.pory"
	walk_up
# 134 "data/maps/SakuTown/scripts.pory"
	walk_up
# 134 "data/maps/SakuTown/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkUp:
# 138 "data/maps/SakuTown/scripts.pory"
	walk_up
# 138 "data/maps/SakuTown/scripts.pory"
	walk_up
# 138 "data/maps/SakuTown/scripts.pory"
	walk_up
# 138 "data/maps/SakuTown/scripts.pory"
	walk_up
# 138 "data/maps/SakuTown/scripts.pory"
	walk_up
	step_end

# 141 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkFastUp:
# 142 "data/maps/SakuTown/scripts.pory"
	walk_fast_up
	step_end

# 145 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkAway:
# 146 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 146 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 146 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 146 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 146 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 146 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
	step_end

SakuTown_EventScript_Farmer::
# 150 "data/maps/SakuTown/scripts.pory"
	lock
# 151 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 152 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer_Text_0
# 155 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer2::
# 159 "data/maps/SakuTown/scripts.pory"
	lock
# 160 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer2_Text_0
# 164 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Woman::
# 168 "data/maps/SakuTown/scripts.pory"
	lock
# 169 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 170 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
# 174 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Karateka::
# 178 "data/maps/SakuTown/scripts.pory"
	lock
# 179 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 180 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_0
# 183 "data/maps/SakuTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 184 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_1
# 188 "data/maps/SakuTown/scripts.pory"
	closemessage
# 189 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Guard::
# 193 "data/maps/SakuTown/scripts.pory"
	lock
# 194 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_Guard_2
# 199 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 200 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
SakuTown_EventScript_Guard_1:
# 205 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_Guard_2:
# 195 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_0
	goto SakuTown_EventScript_Guard_1


SakuTown_EventScript_KuraGuard::
# 209 "data/maps/SakuTown/scripts.pory"
	lock
# 210 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_KuraGuard_Text_0
# 213 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_GuardSeesYou::
# 217 "data/maps/SakuTown/scripts.pory"
	lock
# 219 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 222 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 0
	goto_if_eq SakuTown_EventScript_GuardSeesYou_2
# 225 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 1
	goto_if_eq SakuTown_EventScript_GuardSeesYou_4
SakuTown_EventScript_GuardSeesYou_1:
# 229 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_GuardSeesYou_2:
# 223 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_3:
# 226 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_4:
# 225 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardSeesYou_3
	goto SakuTown_EventScript_GuardSeesYou_1


SakuTown_EventScript_GuardStopsYou::
# 233 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 234 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 235 "data/maps/SakuTown/scripts.pory"
	waitmovement 8
# 236 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_0
# 237 "data/maps/SakuTown/scripts.pory"
	closemessage
# 238 "data/maps/SakuTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 239 "data/maps/SakuTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 241 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardStopsYou_2
# 248 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_2
SakuTown_EventScript_GuardStopsYou_1:
# 255 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 257 "data/maps/SakuTown/scripts.pory"
	addvar VAR_SAKU_KURA_VILLAGES_STATE, 1
	return

SakuTown_EventScript_GuardStopsYou_2:
# 242 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_1
	goto SakuTown_EventScript_GuardStopsYou_1


SakuTown_EventScript_TownSign::
# 261 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips::
# 265 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips2::
# 269 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips2_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_FloristSign::
# 273 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_FloristSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_BoardGame::
# 277 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_BoardGame_1
	return

SakuTown_EventScript_BoardGame_1:
# 278 "data/maps/SakuTown/scripts.pory"
	lock
# 279 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_BoardGame_Text_0, MSGBOX_DEFAULT
# 280 "data/maps/SakuTown/scripts.pory"
	closemessage
# 281 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Mart::
# 286 "data/maps/SakuTown/scripts.pory"
	lock
# 287 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 288 "data/maps/SakuTown/scripts.pory"
	message gText_HowMayIServeYou
# 289 "data/maps/SakuTown/scripts.pory"
	waitmessage
# 290 "data/maps/SakuTown/scripts.pory"
	pokemart SakuTown_Mart
# 291 "data/maps/SakuTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 292 "data/maps/SakuTown/scripts.pory"
	release
	return


	.align 2
# 295 "data/maps/SakuTown/scripts.pory"
SakuTown_Mart:
# 296 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 297 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 298 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 299 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 300 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 301 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 302 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SakuTown_EventScript_Makuhita::
# 306 "data/maps/SakuTown/scripts.pory"
	lock
# 307 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 308 "data/maps/SakuTown/scripts.pory"
	waitse
# 309 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 310 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Makuhita_Text_0
# 311 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 312 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Rival_Text_0:
# 34 "data/maps/SakuTown/scripts.pory"
	.string "Excuse me-\p"
	.string "… …\p"
	.string "Hey! {PLAYER}!! I was wondering if\n"
	.string "you'd already reached Saku Village by\l"
	.string "now.\p"
	.string "Have you caught any Pokémon on your\n"
	.string "way here?\p"
	.string "Me? Oh, I can show you my Pokémon\n"
	.string "alright!$"

SakuTown_EventScript_RivalAtSakuWall_Text_0:
# 57 "data/maps/SakuTown/scripts.pory"
	.string "Wait up, {PLAYER}!$"

SakuTown_EventScript_RivalAtSakuWall_Text_1:
# 72 "data/maps/SakuTown/scripts.pory"
	.string "Wait up, {PLAYER}!\p"
	.string "I was wondering if you'd already\n"
	.string "reached Saku Village by now. Looks like\l"
	.string "we almost missed each other!\p"
	.string "Have you caught any Pokémon on your\n"
	.string "way here?\p"
	.string "Me? Oh, I can show you my Pokémon\n"
	.string "alright!$"

SakuTown_EventScript_RivalFight_Text_0:
# 111 "data/maps/SakuTown/scripts.pory"
	.string "Okay, I… I didn't think you'd go that\n"
	.string "hard, honestly! Hahaha…\p"
	.string "Clearly I underestimated you. That's\n"
	.string "alright. I won't make that mistake next\l"
	.string "time!\p"
	.string "I can see your Pokémon are really\n"
	.string "growing to like you, it's great!\p"
	.string "You definitely stand a chance against\n"
	.string "the Dojo that's in the next village.\p"
	.string "Me? Actually, I just fought the Dojo's\n"
	.string "master and gotten a token from her!\p"
	.string "You'll have to hurry up if you wanna\n"
	.string "catch up!\p"
	.string "Well, it was good to see you. Until next\n"
	.string "time then.\p"
	.string "I bet you I'll get to Silveridge first!$"

SakuTown_EventScript_Farmer_Text_0:
# 153 "data/maps/SakuTown/scripts.pory"
	.string "We're cultivatin' Ryss berries. Saku\n"
	.string "Village exports its berries to many\l"
	.string "towns.$"

SakuTown_EventScript_Farmer2_Text_0:
# 161 "data/maps/SakuTown/scripts.pory"
	.string "Whew…\p"
	.string "Working in the fields sure is tiring…$"

SakuTown_EventScript_Woman_Text_0:
# 171 "data/maps/SakuTown/scripts.pory"
	.string "Those thugs in Kura Village may have\n"
	.string "their own dojo, but their town is\l"
	.string "nothing but an ugly pile of rocks!\p"
	.string "They don't even have a Pokémon refuge!$"

SakuTown_EventScript_Karateka_Text_0:
# 181 "data/maps/SakuTown/scripts.pory"
	.string "I let the Pokémon League borrow my\n"
	.string "super-strong Pokémon to help build the\l"
	.string "new Pokémon refuges throughout the\l"
	.string "region.$"

SakuTown_EventScript_Karateka_Text_1:
# 186 "data/maps/SakuTown/scripts.pory"
	.string "Come on, Mama, Kuku! Daddy loves you!!$"

SakuTown_EventScript_Guard_Text_0:
# 196 "data/maps/SakuTown/scripts.pory"
	.string "Damn, where did that Mareep come from?!$"

SakuTown_EventScript_KuraGuard_Text_0:
# 211 "data/maps/SakuTown/scripts.pory"
	.string "Hah, got two of your Tauros in my herd!$"

SakuTown_EventScript_GuardStopsYou_Text_0:
# 236 "data/maps/SakuTown/scripts.pory"
	.string "Hey!$"

SakuTown_EventScript_GuardStopsYou_Text_1:
# 243 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak in from Kura\n"
	.string "Village?\p"
	.string "…Oh, you're that traveler from before.\n"
	.string "You can go through.\p"
	.string "How was it? Awful, right? Welcome back\n"
	.string "to Saku Village!$"

SakuTown_EventScript_GuardStopsYou_Text_2:
# 249 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak into Kura\n"
	.string "Village?\p"
	.string "…Oh, you're just a traveler. Nevermind\n"
	.string "then, you can go through.\p"
	.string "Though I wouldn't recommend visiting\n"
	.string "the next village, there's really nothing\l"
	.string "interesting there.$"

SakuTown_EventScript_TownSign_Text_0:
# 261 "data/maps/SakuTown/scripts.pory"
	.string "Saku Village\n"
	.string "“A village of tender flower petals.”$"

SakuTown_EventScript_TrainerTips_Text_0:
# 265 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? Saku Village is in all ways\n"
	.string "superior to Kura Village!$"

SakuTown_EventScript_TrainerTips2_Text_0:
# 269 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? The folks from Kura\n"
	.string "Village are a bunch of mean jerks!$"

SakuTown_EventScript_FloristSign_Text_0:
# 273 "data/maps/SakuTown/scripts.pory"
	.string "Humble Blossom\n"
	.string "Bonsai & flower shop$"

SakuTown_EventScript_BoardGame_Text_0:
# 279 "data/maps/SakuTown/scripts.pory"
	.string "They're playing Tauros Herder, a popular\n"
	.string "board game!$"

SakuTown_EventScript_Makuhita_Text_0:
# 310 "data/maps/SakuTown/scripts.pory"
	.string "Kuhi!$"

SakuTown_Text_RivalDefeat::
# 123 "data/maps/SakuTown/scripts.pory"
	.string "Oh, wow, okay.$"
