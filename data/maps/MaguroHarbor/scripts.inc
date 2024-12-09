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
# 13 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishcakeSalesman_Text_0
# 14 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishcakeSalesman_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/MaguroHarbor/scripts.pory"
	giveitem ITEM_FISHCAKE
# 21 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 22 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_FishPokemonSalesman::
# 26 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 27 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 28 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishPokemonSalesman_Text_0
# 29 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishPokemonSalesman_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 34 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_FishermanInBoat::
# 38 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 39 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 40 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
# 41 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanInBoat_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 45 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_Cramorant::
# 49 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 50 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 51 "data/maps/MaguroHarbor/scripts.pory"
	playmoncry SPECIES_CRAMORANT, CRY_MODE_NORMAL
# 52 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_Cramorant_Text_0
# 53 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_Cramorant_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 57 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_FishermanOldRod::
# 61 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 62 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 63 "data/maps/MaguroHarbor/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, MaguroHarbor_EventScript_FishermanOldRod_2
# 76 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
# 77 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_1
# 85 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 87 "data/maps/MaguroHarbor/scripts.pory"
	giveitem ITEM_OLD_ROD
# 88 "data/maps/MaguroHarbor/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 90 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
	checkplayergender
# 0 "data/maps/MaguroHarbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MaguroHarbor_EventScript_FishermanOldRod_5
# 97 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_3
MaguroHarbor_EventScript_FishermanOldRod_4:
# 102 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 104 "data/maps/MaguroHarbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 105 "data/maps/MaguroHarbor/scripts.pory"
	waitmovement 0
# 107 "data/maps/MaguroHarbor/scripts.pory"
	release
	return

MaguroHarbor_EventScript_FishermanOldRod_2:
# 64 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
# 65 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_0
# 68 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 70 "data/maps/MaguroHarbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 71 "data/maps/MaguroHarbor/scripts.pory"
	waitmovement 0
# 72 "data/maps/MaguroHarbor/scripts.pory"
	release
	end

MaguroHarbor_EventScript_FishermanOldRod_5:
# 92 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_2
	goto MaguroHarbor_EventScript_FishermanOldRod_4


MaguroHarbor_EventScript_Man::
# 111 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 112 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 113 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_Man_Text_0
# 114 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_Man_Text_1
# 117 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 118 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_Mart::
# 122 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 123 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 124 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_Mart_Text_0
# 125 "data/maps/MaguroHarbor/scripts.pory"
	message gText_HowMayIServeYou
# 126 "data/maps/MaguroHarbor/scripts.pory"
	waitmessage
# 127 "data/maps/MaguroHarbor/scripts.pory"
	pokemart MaguroHarbor_Mart
# 128 "data/maps/MaguroHarbor/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 129 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


	.align 2
# 132 "data/maps/MaguroHarbor/scripts.pory"
MaguroHarbor_Mart:
# 133 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_POKE_BALL
# 134 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 135 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 136 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 137 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_AWAKENING
# 138 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 139 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

MaguroHarbor_EventScript_TownSign_Text_0:
# 6 "data/maps/MaguroHarbor/scripts.pory"
	.string "Maguro Harbor\n"
	.string "“A town that lives hand in hand with\l"
	.string "the sea.”$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_0:
# 13 "data/maps/MaguroHarbor/scripts.pory"
	.string "Old woman$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_1:
# 15 "data/maps/MaguroHarbor/scripts.pory"
	.string "Hello dear, want to try a fishcake?\p"
	.string "They're the town's specialty!$"

MaguroHarbor_EventScript_FishPokemonSalesman_Text_0:
# 28 "data/maps/MaguroHarbor/scripts.pory"
	.string "Salesman$"

MaguroHarbor_EventScript_FishPokemonSalesman_Text_1:
# 30 "data/maps/MaguroHarbor/scripts.pory"
	.string "Fresh fish! Come get yer fish!$"

MaguroHarbor_EventScript_FishermanInBoat_Text_0:
# 40 "data/maps/MaguroHarbor/scripts.pory"
	.string "Fisherman$"

MaguroHarbor_EventScript_FishermanInBoat_Text_1:
# 42 "data/maps/MaguroHarbor/scripts.pory"
	.string "I'm letting my fishing partner\n"
	.string "Cramorant rest for a while.$"

MaguroHarbor_EventScript_Cramorant_Text_0:
# 52 "data/maps/MaguroHarbor/scripts.pory"
	.string "Cramorant$"

MaguroHarbor_EventScript_Cramorant_Text_1:
# 54 "data/maps/MaguroHarbor/scripts.pory"
	.string "Craaah!$"

MaguroHarbor_EventScript_FishermanOldRod_Text_0:
# 66 "data/maps/MaguroHarbor/scripts.pory"
	.string "Heyo, wee fisherm'n! Hope ye be\n"
	.string "enjoyin' yer fishing rod!$"

MaguroHarbor_EventScript_FishermanOldRod_Text_1:
# 78 "data/maps/MaguroHarbor/scripts.pory"
	.string "Shush, ye fool child! You're scarin'\n"
	.string "tha wee fishes!\p"
	.string "… … … …\p"
	.string "Yer eyes… They be sparklin' with\n"
	.string "passion… Are ye by any chance an\l"
	.string "aspirin' fisherm'n?\p"
	.string "Ye are! I can feel it! I can see ye be\n"
	.string "dyin' to try it fer yerself!\p"
	.string "Now, I can't be givin' ye me loyal\n"
	.string "Cramorant here…\p"
	.string "But I can give ye this ol' rud o' mine!$"

MaguroHarbor_EventScript_FishermanOldRod_Text_2:
# 93 "data/maps/MaguroHarbor/scripts.pory"
	.string "It be a wee bit used, but I reckon it\n"
	.string "will serve ye mighty fine!\p"
	.string "Farewell, lad! May ye become a great\n"
	.string "fisherm'n!$"

MaguroHarbor_EventScript_FishermanOldRod_Text_3:
# 98 "data/maps/MaguroHarbor/scripts.pory"
	.string "It be a wee bit used, but I reckon it\n"
	.string "will serve ye mighty fine!\p"
	.string "Farewell, lass! May ye become a great\n"
	.string "fisherm'n!$"

MaguroHarbor_EventScript_Man_Text_0:
# 113 "data/maps/MaguroHarbor/scripts.pory"
	.string "Man$"

MaguroHarbor_EventScript_Man_Text_1:
# 115 "data/maps/MaguroHarbor/scripts.pory"
	.string "I wish I swam as gracefully as the\n"
	.string "Dojo's Magikarp…$"

MaguroHarbor_EventScript_Mart_Text_0:
# 124 "data/maps/MaguroHarbor/scripts.pory"
	.string "Clerk$"
