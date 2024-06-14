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
	setmetatile 19, 3, METATILE_SakuKura_BoardGame, TRUE
# 12 "data/maps/SakuTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
	return


SakuTown_EventScript_RivalAtSakuWall::
# 19 "data/maps/SakuTown/scripts.pory"
	lock
# 20 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/SakuTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 23 "data/maps/SakuTown/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 25 "data/maps/SakuTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SAKU
# 26 "data/maps/SakuTown/scripts.pory"
	addobject 10
# 27 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_2
# 30 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 17, 10
SakuTown_EventScript_RivalAtSakuWall_1:
# 32 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_WalkUp
# 33 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_1
# 42 "data/maps/SakuTown/scripts.pory"
	switch VAR_STARTER_MON
# 43 "data/maps/SakuTown/scripts.pory"
	case SPECIES_ARON, SakuTown_EventScript_RivalAtSakuWall_7
# 45 "data/maps/SakuTown/scripts.pory"
	case SPECIES_SPHEAL, SakuTown_EventScript_RivalAtSakuWall_8
# 47 "data/maps/SakuTown/scripts.pory"
	case SPECIES_TRAPINCH, SakuTown_EventScript_RivalAtSakuWall_9
SakuTown_EventScript_RivalAtSakuWall_5:
# 51 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_RivalAtSakuWall_Text_2, MSGBOX_AUTOCLOSE
# 65 "data/maps/SakuTown/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SakuTown_EventScript_RivalAtSakuWall_11
# 69 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromLeft
SakuTown_EventScript_RivalAtSakuWall_10:
# 71 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/SakuTown/scripts.pory"
	removeobject 10
# 74 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_SAKU
# 76 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 1
# 78 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_RivalAtSakuWall_2:
# 28 "data/maps/SakuTown/scripts.pory"
	setobjectxy 10, 16, 10
	goto SakuTown_EventScript_RivalAtSakuWall_1

SakuTown_EventScript_RivalAtSakuWall_7:
# 44 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_ARON, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_8:
# 46 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_SPHEAL, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_9:
# 48 "data/maps/SakuTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SAKU_TRAPINCH, SakuTown_Text_RivalDefeat
	goto SakuTown_EventScript_RivalAtSakuWall_5

SakuTown_EventScript_RivalAtSakuWall_11:
# 66 "data/maps/SakuTown/scripts.pory"
	applymovement 10, SakuTown_Movement_GoToKuraFromRight
	goto SakuTown_EventScript_RivalAtSakuWall_10


blabla::
# 82 "data/maps/SakuTown/scripts.pory"
	lock
# 83 "data/maps/SakuTown/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER_STATE, 0
# 84 "data/maps/SakuTown/scripts.pory"
	gettime
# 85 "data/maps/SakuTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 86 "data/maps/SakuTown/scripts.pory"
	msgbox blabla_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/SakuTown/scripts.pory"
	release
	return


# 94 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromLeft:
# 95 "data/maps/SakuTown/scripts.pory"
	walk_faster_left
# 96 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 96 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 96 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 96 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 96 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
	step_end

# 99 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_GoToKuraFromRight:
# 100 "data/maps/SakuTown/scripts.pory"
	walk_faster_right
# 101 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 101 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 101 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 101 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
# 101 "data/maps/SakuTown/scripts.pory"
	walk_faster_up
	step_end

# 104 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkUp:
# 105 "data/maps/SakuTown/scripts.pory"
	walk_up
# 105 "data/maps/SakuTown/scripts.pory"
	walk_up
# 105 "data/maps/SakuTown/scripts.pory"
	walk_up
# 105 "data/maps/SakuTown/scripts.pory"
	walk_up
# 105 "data/maps/SakuTown/scripts.pory"
	walk_up
	step_end

# 108 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkFastUp:
# 109 "data/maps/SakuTown/scripts.pory"
	walk_fast_up
	step_end

# 112 "data/maps/SakuTown/scripts.pory"
SakuTown_Movement_WalkAway:
# 113 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 113 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 113 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 113 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 113 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
# 113 "data/maps/SakuTown/scripts.pory"
	walk_fast_down
	step_end

SakuTown_EventScript_Farmer::
# 117 "data/maps/SakuTown/scripts.pory"
	lock
# 118 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 119 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer_Text_0
# 122 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer2::
# 126 "data/maps/SakuTown/scripts.pory"
	lock
# 127 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer2_Text_0
# 131 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Woman::
# 135 "data/maps/SakuTown/scripts.pory"
	lock
# 136 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 137 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
# 141 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Karateka::
# 145 "data/maps/SakuTown/scripts.pory"
	lock
# 146 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 147 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_0
# 150 "data/maps/SakuTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 151 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_1
# 155 "data/maps/SakuTown/scripts.pory"
	closemessage
# 156 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Guard::
# 160 "data/maps/SakuTown/scripts.pory"
	lock
# 161 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_Guard_2
# 166 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 167 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_1
SakuTown_EventScript_Guard_1:
# 171 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_Guard_2:
# 162 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_0
	goto SakuTown_EventScript_Guard_1


SakuTown_EventScript_KuraGuard::
# 175 "data/maps/SakuTown/scripts.pory"
	lock
# 176 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_KuraGuard_Text_0
# 179 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_GuardSeesYou::
# 183 "data/maps/SakuTown/scripts.pory"
	lock
# 185 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 188 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 0
	goto_if_eq SakuTown_EventScript_GuardSeesYou_2
# 191 "data/maps/SakuTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 1
	goto_if_eq SakuTown_EventScript_GuardSeesYou_4
SakuTown_EventScript_GuardSeesYou_1:
# 195 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_GuardSeesYou_2:
# 189 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_3:
# 192 "data/maps/SakuTown/scripts.pory"
	call SakuTown_EventScript_GuardStopsYou
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_4:
# 191 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardSeesYou_3
	goto SakuTown_EventScript_GuardSeesYou_1


SakuTown_EventScript_GuardStopsYou::
# 199 "data/maps/SakuTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 200 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/maps/SakuTown/scripts.pory"
	waitmovement 8
# 202 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_0
# 203 "data/maps/SakuTown/scripts.pory"
	closemessage
# 204 "data/maps/SakuTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 205 "data/maps/SakuTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 207 "data/maps/SakuTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SakuTown_EventScript_GuardStopsYou_2
# 214 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_2
SakuTown_EventScript_GuardStopsYou_1:
# 221 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 223 "data/maps/SakuTown/scripts.pory"
	addvar VAR_SAKU_KURA_VILLAGES_STATE, 1
	return

SakuTown_EventScript_GuardStopsYou_2:
# 208 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardStopsYou_Text_1
	goto SakuTown_EventScript_GuardStopsYou_1


SakuTown_EventScript_TownSign::
# 227 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips::
# 231 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips2::
# 235 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips2_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_FloristSign::
# 239 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_FloristSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_BoardGame::
# 243 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_BoardGame_1
	return

SakuTown_EventScript_BoardGame_1:
# 244 "data/maps/SakuTown/scripts.pory"
	lock
# 245 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_BoardGame_Text_0, MSGBOX_DEFAULT
# 246 "data/maps/SakuTown/scripts.pory"
	closemessage
# 247 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Mart::
# 252 "data/maps/SakuTown/scripts.pory"
	lock
# 253 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 254 "data/maps/SakuTown/scripts.pory"
	message gText_HowMayIServeYou
# 255 "data/maps/SakuTown/scripts.pory"
	waitmessage
# 256 "data/maps/SakuTown/scripts.pory"
	pokemart SakuTown_Mart
# 257 "data/maps/SakuTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 258 "data/maps/SakuTown/scripts.pory"
	release
	return


	.align 2
# 261 "data/maps/SakuTown/scripts.pory"
SakuTown_Mart:
# 262 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 263 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 264 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 265 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 266 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 267 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 268 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SakuTown_EventScript_Makuhita::
# 272 "data/maps/SakuTown/scripts.pory"
	lock
# 273 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 274 "data/maps/SakuTown/scripts.pory"
	waitse
# 275 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 276 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Makuhita_Text_0
# 277 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 278 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_RivalAtSakuWall_Text_0:
# 20 "data/maps/SakuTown/scripts.pory"
	.string "Wait up, {PLAYER}!$"

SakuTown_EventScript_RivalAtSakuWall_Text_1:
# 36 "data/maps/SakuTown/scripts.pory"
	.string "I was wondering if you'd already\n"
	.string "reached Saku Village by now. Looks like\l"
	.string "we almost missed each other!\p"
	.string "Have you caught any Pokémon on your\n"
	.string "way here?\p"
	.string "Me? Oh, I can show you my Pokémon\n"
	.string "alright!$"

SakuTown_EventScript_RivalAtSakuWall_Text_2:
# 52 "data/maps/SakuTown/scripts.pory"
	.string "Okay, I… I didn't think you'd go that\n"
	.string "hard, honestly!\p"
	.string "Hahaha…\p"
	.string "Clearly I underestimated you. That's\n"
	.string "alright. I won't make that mistake next\l"
	.string "time!\p"
	.string "I can see your Pokémon are really\n"
	.string "growing to like you, it's great!\p"
	.string "You definitely stand a chance against\n"
	.string "the Dojo that's in the next village.\p"
	.string "Me? Actually, I just fought the Dojo's\n"
	.string "master and got a token from her!\p"
	.string "You'll have to hurry up if you wanna\n"
	.string "catch up!\p"
	.string "Well, it was good to see you. Until next\n"
	.string "time then.\p"
	.string "I bet you I'll get to Silveridge first!\p"
	.string "Race ya there!!!$"

blabla_Text_0:
# 86 "data/maps/SakuTown/scripts.pory"
	.string "{STR_VAR_1}$"

SakuTown_EventScript_Farmer_Text_0:
# 120 "data/maps/SakuTown/scripts.pory"
	.string "We're cultivatin' Ryss berries. Saku\n"
	.string "Village exports its berries to many\l"
	.string "towns.$"

SakuTown_EventScript_Farmer2_Text_0:
# 128 "data/maps/SakuTown/scripts.pory"
	.string "Whew…\p"
	.string "Working in the fields sure is tiring…$"

SakuTown_EventScript_Woman_Text_0:
# 138 "data/maps/SakuTown/scripts.pory"
	.string "Those thugs in Kura Village may have\n"
	.string "their own dojo, but their town is\l"
	.string "nothing but an ugly pile of rocks!\p"
	.string "They don't even have a Pokémon refuge!$"

SakuTown_EventScript_Karateka_Text_0:
# 148 "data/maps/SakuTown/scripts.pory"
	.string "I let the Pokémon League borrow my\n"
	.string "super-strong Pokémon to help build the\l"
	.string "new Pokémon refuges throughout the\l"
	.string "region.$"

SakuTown_EventScript_Karateka_Text_1:
# 153 "data/maps/SakuTown/scripts.pory"
	.string "Come on, Mama, Kuku! Daddy loves you!!$"

SakuTown_EventScript_Guard_Text_0:
# 163 "data/maps/SakuTown/scripts.pory"
	.string "Damn, where did that Mareep come from?!$"

SakuTown_EventScript_Guard_Text_1:
# 168 "data/maps/SakuTown/scripts.pory"
	.string "One can never be too careful. The whole\n"
	.string "village's safety rests on my shoulder.$"

SakuTown_EventScript_KuraGuard_Text_0:
# 177 "data/maps/SakuTown/scripts.pory"
	.string "Hah, got two of your Tauros in my herd!$"

SakuTown_EventScript_GuardStopsYou_Text_0:
# 202 "data/maps/SakuTown/scripts.pory"
	.string "Hey!$"

SakuTown_EventScript_GuardStopsYou_Text_1:
# 209 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak in from Kura\n"
	.string "Village?\p"
	.string "…Oh, you're that traveler from before.\n"
	.string "You can go through.\p"
	.string "How was it? Awful, right? Welcome back\n"
	.string "to Saku Village!$"

SakuTown_EventScript_GuardStopsYou_Text_2:
# 215 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak into Kura\n"
	.string "Village?\p"
	.string "…Oh, you're just a traveler. Nevermind\n"
	.string "then, you can go through.\p"
	.string "Though I wouldn't recommend visiting\n"
	.string "the next village, there's really nothing\l"
	.string "interesting there.$"

SakuTown_EventScript_TownSign_Text_0:
# 227 "data/maps/SakuTown/scripts.pory"
	.string "Saku Village\n"
	.string "“A village of tender flower petals.”$"

SakuTown_EventScript_TrainerTips_Text_0:
# 231 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? Saku Village is in all ways\n"
	.string "superior to Kura Village!$"

SakuTown_EventScript_TrainerTips2_Text_0:
# 235 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? The folks from Kura\n"
	.string "Village are a bunch of mean jerks!$"

SakuTown_EventScript_FloristSign_Text_0:
# 239 "data/maps/SakuTown/scripts.pory"
	.string "Humble Blossom\n"
	.string "Bonsai & flower shop$"

SakuTown_EventScript_BoardGame_Text_0:
# 245 "data/maps/SakuTown/scripts.pory"
	.string "They're playing Tauros Herder, a popular\n"
	.string "board game!$"

SakuTown_EventScript_Makuhita_Text_0:
# 276 "data/maps/SakuTown/scripts.pory"
	.string "Kuhi!$"

SakuTown_Text_RivalDefeat::
# 90 "data/maps/SakuTown/scripts.pory"
	.string "Oh, wow, okay.$"
