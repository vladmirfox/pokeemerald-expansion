MaguroHarbor_MapScripts::
	.byte 0


MaguroHarbor_EventScript_TownSign::
# 6 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


MaguroHarbor_EventScript_FishcakeSalesman::
# 10 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 11 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 12 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishcakeSalesman_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 18 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_FishPokemonSalesman::
# 22 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 23 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 24 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishPokemonSalesman_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 29 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_Mart::
# 33 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 34 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 35 "data/maps/MaguroHarbor/scripts.pory"
	message gText_HowMayIServeYou
# 36 "data/maps/MaguroHarbor/scripts.pory"
	waitmessage
# 37 "data/maps/MaguroHarbor/scripts.pory"
	pokemart MaguroHarbor_Mart
# 38 "data/maps/MaguroHarbor/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 39 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


	.align 2
# 42 "data/maps/MaguroHarbor/scripts.pory"
MaguroHarbor_Mart:
# 43 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_POKE_BALL
# 44 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 45 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 46 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 47 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_AWAKENING
# 48 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 49 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

MaguroHarbor_EventScript_TownSign_Text_0:
# 6 "data/maps/MaguroHarbor/scripts.pory"
	.string "Maguro Harbor\n"
	.string "“A town that lives hand in hand with the\l"
	.string "sea.”$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_0:
# 13 "data/maps/MaguroHarbor/scripts.pory"
	.string "Hello dear, want to try a fishcake?\p"
	.string "They're the town's specialty!$"

MaguroHarbor_EventScript_FishPokemonSalesman_Text_0:
# 25 "data/maps/MaguroHarbor/scripts.pory"
	.string "Fresh fish! Come get yer fish!$"
