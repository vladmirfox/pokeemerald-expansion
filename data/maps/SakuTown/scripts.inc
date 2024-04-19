SakuTown_MapScripts::
# 8 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 13 "data/maps/SakuTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/SakuTown/scripts.pory"
	setmetatile 19, 3, METATILE_SakuKura_BoardGame, TRUE
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SakuTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/SakuTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
	return


SakuTown_EventScript_Farmer::
# 21 "data/maps/SakuTown/scripts.pory"
	lock
# 22 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 23 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer_Text_0
# 26 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer2::
# 30 "data/maps/SakuTown/scripts.pory"
	lock
# 31 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer2_Text_0
# 35 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Woman::
# 39 "data/maps/SakuTown/scripts.pory"
	lock
# 40 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 41 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
# 45 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Karateka::
# 49 "data/maps/SakuTown/scripts.pory"
	lock
# 50 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 51 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_0
# 54 "data/maps/SakuTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 55 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/SakuTown/scripts.pory"
	delay 30
# 57 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_1
# 60 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Guard::
# 64 "data/maps/SakuTown/scripts.pory"
	lock
# 65 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_Guard_2
# 70 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 71 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
SakuTown_EventScript_Guard_1:
# 76 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_Guard_2:
# 66 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Guard_Text_0
	goto SakuTown_EventScript_Guard_1


SakuTown_EventScript_KuraGuard::
# 80 "data/maps/SakuTown/scripts.pory"
	lock
# 81 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_KuraGuard_Text_0
# 84 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_GuardSeesYou::
# 88 "data/maps/SakuTown/scripts.pory"
	lock
# 89 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_0
# 90 "data/maps/SakuTown/scripts.pory"
	closemessage
# 91 "data/maps/SakuTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 92 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 93 "data/maps/SakuTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 94 "data/maps/SakuTown/scripts.pory"
	waitmovement 8
# 96 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SakuTown_EventScript_GuardSeesYou_2
# 103 "data/maps/SakuTown/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SakuTown_EventScript_GuardSeesYou_3
SakuTown_EventScript_GuardSeesYou_1:
# 111 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 113 "data/maps/SakuTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 1
# 115 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_GuardSeesYou_2:
# 97 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_1
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_3:
# 104 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_2
	goto SakuTown_EventScript_GuardSeesYou_1


SakuTown_EventScript_NorthOfGuard::
# 119 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_TEMP_1
	return


SakuTown_EventScript_SouthOfGuard::
# 123 "data/maps/SakuTown/scripts.pory"
	clearflag FLAG_TEMP_1
	return


SakuTown_EventScript_TownSign::
# 127 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips::
# 131 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips2::
# 135 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips2_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_FloristSign::
# 139 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_FloristSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_BoardGame::
# 143 "data/maps/SakuTown/scripts.pory"
	lock
# 144 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, SakuTown_EventScript_BoardGame_2
SakuTown_EventScript_BoardGame_1:
# 147 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_BoardGame_2:
# 145 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_BoardGame_Text_0, MSGBOX_DEFAULT
	goto SakuTown_EventScript_BoardGame_1


SakuTown_EventScript_Mart::
# 151 "data/maps/SakuTown/scripts.pory"
	lock
# 152 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 153 "data/maps/SakuTown/scripts.pory"
	message gText_HowMayIServeYou
# 154 "data/maps/SakuTown/scripts.pory"
	waitmessage
# 155 "data/maps/SakuTown/scripts.pory"
	pokemart SakuTown_Mart
# 156 "data/maps/SakuTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 157 "data/maps/SakuTown/scripts.pory"
	release
	return


	.align 2
# 160 "data/maps/SakuTown/scripts.pory"
SakuTown_Mart:
# 161 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 162 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 163 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 164 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 165 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 166 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 167 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SakuTown_EventScript_Makuhita::
# 171 "data/maps/SakuTown/scripts.pory"
	lock
# 172 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 173 "data/maps/SakuTown/scripts.pory"
	waitse
# 174 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 175 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Makuhita_Text_0
# 176 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 177 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer_Text_0:
# 24 "data/maps/SakuTown/scripts.pory"
	.string "We're cultivatin' Ryss berries. Saku\n"
	.string "Village exports its berries to many\l"
	.string "towns.$"

SakuTown_EventScript_Farmer2_Text_0:
# 32 "data/maps/SakuTown/scripts.pory"
	.string "Whew…\p"
	.string "Working in the fields sure is tiring…$"

SakuTown_EventScript_Woman_Text_0:
# 42 "data/maps/SakuTown/scripts.pory"
	.string "Those thugs in Kura Village may have\n"
	.string "their own dojo, but their town is\l"
	.string "nothing but an ugly pile of rocks!\p"
	.string "They don't even have a Pokémon refuge!$"

SakuTown_EventScript_Karateka_Text_0:
# 52 "data/maps/SakuTown/scripts.pory"
	.string "I let the Pokémon League borrow my\n"
	.string "super-strong Pokémon to help build the\l"
	.string "new Pokémon refuges throughout the\l"
	.string "region.\p"
	.string "$"

SakuTown_EventScript_Karateka_Text_1:
# 58 "data/maps/SakuTown/scripts.pory"
	.string "Come on, Mama, Kuku! Daddy loves you!!\p"
	.string "$"

SakuTown_EventScript_Guard_Text_0:
# 67 "data/maps/SakuTown/scripts.pory"
	.string "Damn, where did that Mareep come from?!$"

SakuTown_EventScript_KuraGuard_Text_0:
# 82 "data/maps/SakuTown/scripts.pory"
	.string "Hah, got two of your Tauros in my herd!$"

SakuTown_EventScript_GuardSeesYou_Text_0:
# 89 "data/maps/SakuTown/scripts.pory"
	.string "Hey!$"

SakuTown_EventScript_GuardSeesYou_Text_1:
# 98 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak in from Kura\n"
	.string "Village?\p"
	.string "…Oh, you're that traveler from before.\n"
	.string "Come on in, then.\p"
	.string "How was it? Awful, right? Welcome back\n"
	.string "to Saku Village!$"

SakuTown_EventScript_GuardSeesYou_Text_2:
# 105 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak into Kura\n"
	.string "Village?\p"
	.string "…Oh, you're just a traveler. Nevermind\n"
	.string "then, you can go through.\p"
	.string "Though I wouldn't recommend visiting\n"
	.string "the next village, there's really nothing\l"
	.string "interesting there.$"

SakuTown_EventScript_TownSign_Text_0:
# 127 "data/maps/SakuTown/scripts.pory"
	.string "Saku Village\n"
	.string "“A village of tender flower petals.”$"

SakuTown_EventScript_TrainerTips_Text_0:
# 131 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? Saku Village is in all ways\n"
	.string "superior to Kura Village!$"

SakuTown_EventScript_TrainerTips2_Text_0:
# 135 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? The folk from Kura Village\n"
	.string "are a bunch of mean jerks!$"

SakuTown_EventScript_FloristSign_Text_0:
# 139 "data/maps/SakuTown/scripts.pory"
	.string "Humble Blossom\n"
	.string "Bonsai & flower shop$"

SakuTown_EventScript_BoardGame_Text_0:
# 145 "data/maps/SakuTown/scripts.pory"
	.string "They're playing Herd the Tauros, a\n"
	.string "popular board game!$"

SakuTown_EventScript_Makuhita_Text_0:
# 175 "data/maps/SakuTown/scripts.pory"
	.string "Kuhi!$"
