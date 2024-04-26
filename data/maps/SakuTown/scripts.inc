SakuTown_MapScripts::
# 8 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 13 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_SAKU_KURA_RIVALS
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/SakuTown/scripts.pory"
	setmetatile 19, 3, METATILE_SakuKura_BoardGame, TRUE
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/SakuTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
	return


SakuTown_EventScript_Farmer::
# 24 "data/maps/SakuTown/scripts.pory"
	lock
# 25 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 26 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer_Text_0
# 29 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer2::
# 33 "data/maps/SakuTown/scripts.pory"
	lock
# 34 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer2_Text_0
# 38 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Woman::
# 42 "data/maps/SakuTown/scripts.pory"
	lock
# 43 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 44 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
# 48 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Karateka::
# 52 "data/maps/SakuTown/scripts.pory"
	lock
# 53 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 54 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_0
# 57 "data/maps/SakuTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 58 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_1
# 62 "data/maps/SakuTown/scripts.pory"
	closemessage
# 63 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Guard::
# 67 "data/maps/SakuTown/scripts.pory"
	lock
# 68 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_Guard_2
# 73 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 74 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
SakuTown_EventScript_Guard_1:
# 79 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_Guard_2:
# 69 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_0
	goto SakuTown_EventScript_Guard_1


SakuTown_EventScript_KuraGuard::
# 83 "data/maps/SakuTown/scripts.pory"
	lock
# 84 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_KuraGuard_Text_0
# 87 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_GuardSeesYou::
# 91 "data/maps/SakuTown/scripts.pory"
	lock
# 92 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 93 "data/maps/SakuTown/scripts.pory"
	waitmovement 8
# 94 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_0
# 95 "data/maps/SakuTown/scripts.pory"
	closemessage
# 96 "data/maps/SakuTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 97 "data/maps/SakuTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 99 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SakuTown_EventScript_GuardSeesYou_2
# 106 "data/maps/SakuTown/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SakuTown_EventScript_GuardSeesYou_3
SakuTown_EventScript_GuardSeesYou_1:
# 114 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 116 "data/maps/SakuTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 1
# 118 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_GuardSeesYou_2:
# 100 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_1
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_3:
# 107 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_2
	goto SakuTown_EventScript_GuardSeesYou_1


SakuTown_EventScript_NorthOfGuard::
# 122 "data/maps/SakuTown/scripts.pory"
	lockall
# 123 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_TEMP_1
# 124 "data/maps/SakuTown/scripts.pory"
	releaseall
	return


SakuTown_EventScript_SouthOfGuard::
# 128 "data/maps/SakuTown/scripts.pory"
	lockall
# 129 "data/maps/SakuTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 130 "data/maps/SakuTown/scripts.pory"
	releaseall
	return


SakuTown_EventScript_TownSign::
# 134 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips::
# 138 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips2::
# 142 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips2_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_FloristSign::
# 146 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_FloristSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_BoardGame::
# 150 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_BoardGame_1
	return

SakuTown_EventScript_BoardGame_1:
# 151 "data/maps/SakuTown/scripts.pory"
	lock
# 152 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_BoardGame_Text_0, MSGBOX_DEFAULT
# 153 "data/maps/SakuTown/scripts.pory"
	closemessage
# 154 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Mart::
# 159 "data/maps/SakuTown/scripts.pory"
	lock
# 160 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 161 "data/maps/SakuTown/scripts.pory"
	message gText_HowMayIServeYou
# 162 "data/maps/SakuTown/scripts.pory"
	waitmessage
# 163 "data/maps/SakuTown/scripts.pory"
	pokemart SakuTown_Mart
# 164 "data/maps/SakuTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 165 "data/maps/SakuTown/scripts.pory"
	release
	return


	.align 2
# 168 "data/maps/SakuTown/scripts.pory"
SakuTown_Mart:
# 169 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 170 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 171 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 172 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 173 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 174 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 175 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SakuTown_EventScript_Makuhita::
# 179 "data/maps/SakuTown/scripts.pory"
	lock
# 180 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 181 "data/maps/SakuTown/scripts.pory"
	waitse
# 182 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 183 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Makuhita_Text_0
# 184 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 185 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer_Text_0:
# 27 "data/maps/SakuTown/scripts.pory"
	.string "We're cultivatin' Ryss berries. Saku\n"
	.string "Village exports its berries to many\l"
	.string "towns.$"

SakuTown_EventScript_Farmer2_Text_0:
# 35 "data/maps/SakuTown/scripts.pory"
	.string "Whew…\p"
	.string "Working in the fields sure is tiring…$"

SakuTown_EventScript_Woman_Text_0:
# 45 "data/maps/SakuTown/scripts.pory"
	.string "Those thugs in Kura Village may have\n"
	.string "their own dojo, but their town is\l"
	.string "nothing but an ugly pile of rocks!\p"
	.string "They don't even have a Pokémon refuge!$"

SakuTown_EventScript_Karateka_Text_0:
# 55 "data/maps/SakuTown/scripts.pory"
	.string "I let the Pokémon League borrow my\n"
	.string "super-strong Pokémon to help build the\l"
	.string "new Pokémon refuges throughout the\l"
	.string "region.$"

SakuTown_EventScript_Karateka_Text_1:
# 60 "data/maps/SakuTown/scripts.pory"
	.string "Come on, Mama, Kuku! Daddy loves you!!$"

SakuTown_EventScript_Guard_Text_0:
# 70 "data/maps/SakuTown/scripts.pory"
	.string "Damn, where did that Mareep come from?!$"

SakuTown_EventScript_KuraGuard_Text_0:
# 85 "data/maps/SakuTown/scripts.pory"
	.string "Hah, got two of your Tauros in my herd!$"

SakuTown_EventScript_GuardSeesYou_Text_0:
# 94 "data/maps/SakuTown/scripts.pory"
	.string "Hey!$"

SakuTown_EventScript_GuardSeesYou_Text_1:
# 101 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak in from Kura\n"
	.string "Village?\p"
	.string "…Oh, you're that traveler from before.\n"
	.string "Come on in, then.\p"
	.string "How was it? Awful, right? Welcome back\n"
	.string "to Saku Village!$"

SakuTown_EventScript_GuardSeesYou_Text_2:
# 108 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak into Kura\n"
	.string "Village?\p"
	.string "…Oh, you're just a traveler. Nevermind\n"
	.string "then, you can go through.\p"
	.string "Though I wouldn't recommend visiting\n"
	.string "the next village, there's really nothing\l"
	.string "interesting there.$"

SakuTown_EventScript_TownSign_Text_0:
# 134 "data/maps/SakuTown/scripts.pory"
	.string "Saku Village\n"
	.string "“A village of tender flower petals.”$"

SakuTown_EventScript_TrainerTips_Text_0:
# 138 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? Saku Village is in all ways\n"
	.string "superior to Kura Village!$"

SakuTown_EventScript_TrainerTips2_Text_0:
# 142 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? The folks from Kura\n"
	.string "Village are a bunch of mean jerks!$"

SakuTown_EventScript_FloristSign_Text_0:
# 146 "data/maps/SakuTown/scripts.pory"
	.string "Humble Blossom\n"
	.string "Bonsai & flower shop$"

SakuTown_EventScript_BoardGame_Text_0:
# 152 "data/maps/SakuTown/scripts.pory"
	.string "They're playing Tauros Herder, a popular\n"
	.string "board game!$"

SakuTown_EventScript_Makuhita_Text_0:
# 183 "data/maps/SakuTown/scripts.pory"
	.string "Kuhi!$"
