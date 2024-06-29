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


MaguroHarbor_EventScript_FishermanInBoat::
# 33 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 34 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 35 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanInBoat_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 39 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_Mart::
# 43 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 44 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 45 "data/maps/MaguroHarbor/scripts.pory"
	message gText_HowMayIServeYou
# 46 "data/maps/MaguroHarbor/scripts.pory"
	waitmessage
# 47 "data/maps/MaguroHarbor/scripts.pory"
	pokemart MaguroHarbor_Mart
# 48 "data/maps/MaguroHarbor/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 49 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


	.align 2
# 52 "data/maps/MaguroHarbor/scripts.pory"
MaguroHarbor_Mart:
# 53 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_POKE_BALL
# 54 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 55 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 56 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 57 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_AWAKENING
# 58 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 59 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

MaguroHarbor_EventScript_TownSign_Text_0:
# 6 "data/maps/MaguroHarbor/scripts.pory"
	.string "Maguro Harbor\n"
	.string "“A town that lives hand in hand with\l"
	.string "the sea.”$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_0:
# 13 "data/maps/MaguroHarbor/scripts.pory"
	.string "Hello dear, want to try a fishcake?\p"
	.string "They're the town's specialty!$"

MaguroHarbor_EventScript_FishPokemonSalesman_Text_0:
# 25 "data/maps/MaguroHarbor/scripts.pory"
	.string "Fresh fish! Come get yer fish!$"

MaguroHarbor_EventScript_FishermanInBoat_Text_0:
# 36 "data/maps/MaguroHarbor/scripts.pory"
	.string "I'm letting my fishing partner\n"
	.string "Cramorant rest for a while.$"
