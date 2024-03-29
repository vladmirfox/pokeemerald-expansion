SakuTown_MapScripts::
	.byte 0


SakuTown_EventScript_Farmer::
# 9 "data/maps/SakuTown/scripts.pory"
	lock
# 10 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 11 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer_Text_0
# 14 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer2::
# 18 "data/maps/SakuTown/scripts.pory"
	lock
# 19 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Farmer2_Text_0
# 23 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Woman::
# 27 "data/maps/SakuTown/scripts.pory"
	lock
# 28 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 29 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
# 33 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Karateka::
# 37 "data/maps/SakuTown/scripts.pory"
	lock
# 38 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 39 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_0
# 42 "data/maps/SakuTown/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 43 "data/maps/SakuTown/scripts.pory"
	waitmovement 0
# 44 "data/maps/SakuTown/scripts.pory"
	delay 30
# 45 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Karateka_Text_1
# 48 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Guard::
# 52 "data/maps/SakuTown/scripts.pory"
	lock
# 53 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 54 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Woman_Text_0
# 58 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_GuardSeesYou::
# 62 "data/maps/SakuTown/scripts.pory"
	lock
# 63 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_0
# 64 "data/maps/SakuTown/scripts.pory"
	closemessage
# 65 "data/maps/SakuTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 66 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 67 "data/maps/SakuTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 68 "data/maps/SakuTown/scripts.pory"
	waitmovement 8
# 70 "data/maps/SakuTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SakuTown_EventScript_GuardSeesYou_2
# 77 "data/maps/SakuTown/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SakuTown_EventScript_GuardSeesYou_3
SakuTown_EventScript_GuardSeesYou_1:
# 85 "data/maps/SakuTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 87 "data/maps/SakuTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 1
# 89 "data/maps/SakuTown/scripts.pory"
	release
	return

SakuTown_EventScript_GuardSeesYou_2:
# 71 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_1
	goto SakuTown_EventScript_GuardSeesYou_1

SakuTown_EventScript_GuardSeesYou_3:
# 78 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_GuardSeesYou_Text_2
	goto SakuTown_EventScript_GuardSeesYou_1


SakuTown_EventScript_NorthOfGuard::
# 93 "data/maps/SakuTown/scripts.pory"
	setflag FLAG_TEMP_1
	return


SakuTown_EventScript_SouthOfGuard::
# 97 "data/maps/SakuTown/scripts.pory"
	clearflag FLAG_TEMP_1
	return


SakuTown_EventScript_TownSign::
# 101 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips::
# 105 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_TrainerTips2::
# 109 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_TrainerTips2_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_FloristSign::
# 113 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_FloristSign_Text_0, MSGBOX_SIGN
	return


SakuTown_EventScript_Mart::
# 117 "data/maps/SakuTown/scripts.pory"
	lock
# 118 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 119 "data/maps/SakuTown/scripts.pory"
	message gText_HowMayIServeYou
# 120 "data/maps/SakuTown/scripts.pory"
	waitmessage
# 121 "data/maps/SakuTown/scripts.pory"
	pokemart SakuTown_Mart
# 122 "data/maps/SakuTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 123 "data/maps/SakuTown/scripts.pory"
	release
	return


	.align 2
# 126 "data/maps/SakuTown/scripts.pory"
SakuTown_Mart:
# 127 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 128 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 129 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 130 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 131 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 132 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 133 "data/maps/SakuTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SakuTown_EventScript_Makuhita::
# 137 "data/maps/SakuTown/scripts.pory"
	lock
# 138 "data/maps/SakuTown/scripts.pory"
	faceplayer
# 139 "data/maps/SakuTown/scripts.pory"
	waitse
# 140 "data/maps/SakuTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 141 "data/maps/SakuTown/scripts.pory"
	msgbox SakuTown_EventScript_Makuhita_Text_0
# 142 "data/maps/SakuTown/scripts.pory"
	waitmoncry
# 143 "data/maps/SakuTown/scripts.pory"
	release
	return


SakuTown_EventScript_Farmer_Text_0:
# 12 "data/maps/SakuTown/scripts.pory"
	.string "We're cultivatin' Ryss berries. Saku\n"
	.string "Village exports its berries to many\l"
	.string "towns.$"

SakuTown_EventScript_Farmer2_Text_0:
# 20 "data/maps/SakuTown/scripts.pory"
	.string "Whew…\p"
	.string "Working in the fields sure is tiring…$"

SakuTown_EventScript_Woman_Text_0:
# 30 "data/maps/SakuTown/scripts.pory"
	.string "Those thugs in Kura Village may have\n"
	.string "their own dojo, but their town is\l"
	.string "nothing but an ugly pile of rocks!\p"
	.string "They don't even have a Pokémon refuge!$"

SakuTown_EventScript_Karateka_Text_0:
# 40 "data/maps/SakuTown/scripts.pory"
	.string "I let the Pokémon League borrow my\n"
	.string "super-strong Pokémon to help build the\l"
	.string "new Pokémon refuges throughout the\l"
	.string "region.\p"
	.string "$"

SakuTown_EventScript_Karateka_Text_1:
# 46 "data/maps/SakuTown/scripts.pory"
	.string "Come on, Mama, Kuku! Daddy loves you!!\p"
	.string "$"

SakuTown_EventScript_GuardSeesYou_Text_0:
# 63 "data/maps/SakuTown/scripts.pory"
	.string "Hey!$"

SakuTown_EventScript_GuardSeesYou_Text_1:
# 72 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak in from Kura\n"
	.string "Village?\p"
	.string "…Oh, you're that traveler from before.\n"
	.string "Come on in, then.\p"
	.string "How was it? Awful, right? Welcome back\n"
	.string "to Saku Village!$"

SakuTown_EventScript_GuardSeesYou_Text_2:
# 79 "data/maps/SakuTown/scripts.pory"
	.string "Are you trying to sneak into Kura\n"
	.string "Village?\p"
	.string "…Oh, you're just a traveler. Nevermind\n"
	.string "then, you can go through.\p"
	.string "Though I wouldn't recommend visiting\n"
	.string "the next village, there's really nothing\l"
	.string "interesting there.$"

SakuTown_EventScript_TownSign_Text_0:
# 101 "data/maps/SakuTown/scripts.pory"
	.string "Saku Village\n"
	.string "“A village of tender flower petals.”$"

SakuTown_EventScript_TrainerTips_Text_0:
# 105 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? Saku Village is in all ways\n"
	.string "superior to Kura Village!$"

SakuTown_EventScript_TrainerTips2_Text_0:
# 109 "data/maps/SakuTown/scripts.pory"
	.string "Did you know? The folk from Kura Village\n"
	.string "are a bunch of mean jerks!$"

SakuTown_EventScript_FloristSign_Text_0:
# 113 "data/maps/SakuTown/scripts.pory"
	.string "Humble Blossom\n"
	.string "Bonsai & flower shop$"

SakuTown_EventScript_Makuhita_Text_0:
# 141 "data/maps/SakuTown/scripts.pory"
	.string "Kuhi!$"
