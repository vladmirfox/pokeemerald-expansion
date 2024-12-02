MaguroHarbor_MapScripts::
# 2 "data/maps/MaguroHarbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MaguroHarbor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MaguroHarbor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MaguroHarbor/scripts.pory"
	call MaguroHarbor_NPCSchedules
	return


MaguroHarbor_EventScript_TownSign::
# 8 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


MaguroHarbor_EventScript_FishcakeSalesman::
# 12 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 13 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 15 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishcakeSalesman_Text_0
# 16 "data/maps/MaguroHarbor/scripts.pory"
	gettimeofday
# 17 "data/maps/MaguroHarbor/scripts.pory"
	switch VAR_TIME_OF_DAY
# 18 "data/maps/MaguroHarbor/scripts.pory"
	case TIME_EARLY, MaguroHarbor_EventScript_FishcakeSalesman_3
# 22 "data/maps/MaguroHarbor/scripts.pory"
	case TIME_NIGHT, MaguroHarbor_EventScript_FishcakeSalesman_4
# 27 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishcakeSalesman_Text_3, MSGBOX_DEFAULT
# 31 "data/maps/MaguroHarbor/scripts.pory"
	giveitem ITEM_FISHCAKE
MaguroHarbor_EventScript_FishcakeSalesman_1:
# 34 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 35 "data/maps/MaguroHarbor/scripts.pory"
	release
	return

MaguroHarbor_EventScript_FishcakeSalesman_3:
# 19 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishcakeSalesman_Text_1, MSGBOX_DEFAULT
	goto MaguroHarbor_EventScript_FishcakeSalesman_1

MaguroHarbor_EventScript_FishcakeSalesman_4:
# 23 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishcakeSalesman_Text_2, MSGBOX_DEFAULT
	goto MaguroHarbor_EventScript_FishcakeSalesman_1


MaguroHarbor_EventScript_FishPokemonSalesman::
# 39 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 40 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 41 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishPokemonSalesman_Text_0
# 42 "data/maps/MaguroHarbor/scripts.pory"
	gettimeofday
# 48 "data/maps/MaguroHarbor/scripts.pory"
	compare VAR_TIME_OF_DAY, TIME_EARLY
	goto_if_eq MaguroHarbor_EventScript_FishPokemonSalesman_4
# 54 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishPokemonSalesman_Text_2, MSGBOX_DEFAULT
MaguroHarbor_EventScript_FishPokemonSalesman_3:
# 59 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 60 "data/maps/MaguroHarbor/scripts.pory"
	release
	return

MaguroHarbor_EventScript_FishPokemonSalesman_4:
# 49 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishPokemonSalesman_Text_1, MSGBOX_DEFAULT
	goto MaguroHarbor_EventScript_FishPokemonSalesman_3


MaguroHarbor_EventScript_FishermanInBoat::
# 64 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 65 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 66 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
# 67 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanInBoat_Text_1, MSGBOX_DEFAULT
# 70 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 71 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_Cramorant::
# 75 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 76 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 77 "data/maps/MaguroHarbor/scripts.pory"
	playmoncry SPECIES_CRAMORANT, CRY_MODE_NORMAL
# 78 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_Cramorant_Text_0
# 79 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_Cramorant_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 83 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_FishermanOldRod::
# 87 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 88 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 89 "data/maps/MaguroHarbor/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, MaguroHarbor_EventScript_FishermanOldRod_2
# 102 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
# 103 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_1
# 111 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 113 "data/maps/MaguroHarbor/scripts.pory"
	giveitem ITEM_OLD_ROD
# 114 "data/maps/MaguroHarbor/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 116 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
	checkplayergender
# 0 "data/maps/MaguroHarbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MaguroHarbor_EventScript_FishermanOldRod_5
# 123 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_3
MaguroHarbor_EventScript_FishermanOldRod_4:
# 128 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 130 "data/maps/MaguroHarbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 131 "data/maps/MaguroHarbor/scripts.pory"
	waitmovement 0
# 133 "data/maps/MaguroHarbor/scripts.pory"
	release
	return

MaguroHarbor_EventScript_FishermanOldRod_2:
# 90 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_FishermanInBoat_Text_0
# 91 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_0
# 94 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 96 "data/maps/MaguroHarbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 97 "data/maps/MaguroHarbor/scripts.pory"
	waitmovement 0
# 98 "data/maps/MaguroHarbor/scripts.pory"
	release
	end

MaguroHarbor_EventScript_FishermanOldRod_5:
# 118 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishermanOldRod_Text_2
	goto MaguroHarbor_EventScript_FishermanOldRod_4


MaguroHarbor_EventScript_Man::
# 137 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 138 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 139 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_Man_Text_0
# 140 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_Man_Text_1
# 143 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 144 "data/maps/MaguroHarbor/scripts.pory"
	release
	return


MaguroHarbor_EventScript_CoupleGirl::
# 148 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 149 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 150 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_CoupleGirl_Text_0
# 151 "data/maps/MaguroHarbor/scripts.pory"
	gettimeofday
# 152 "data/maps/MaguroHarbor/scripts.pory"
	compare VAR_TIME_OF_DAY, TIME_DEAD_NIGHT
	goto_if_eq MaguroHarbor_EventScript_CoupleGirl_2
# 158 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_CoupleGirl_Text_2
MaguroHarbor_EventScript_CoupleGirl_1:
# 162 "data/maps/MaguroHarbor/scripts.pory"
	closemessage
# 163 "data/maps/MaguroHarbor/scripts.pory"
	release
	return

MaguroHarbor_EventScript_CoupleGirl_2:
# 153 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_CoupleGirl_Text_1
	goto MaguroHarbor_EventScript_CoupleGirl_1


MaguroHarbor_EventScript_Mart::
# 167 "data/maps/MaguroHarbor/scripts.pory"
	lock
# 168 "data/maps/MaguroHarbor/scripts.pory"
	faceplayer
# 169 "data/maps/MaguroHarbor/scripts.pory"
	speakername MaguroHarbor_EventScript_Mart_Text_0
# 170 "data/maps/MaguroHarbor/scripts.pory"
	gettimeofday
# 171 "data/maps/MaguroHarbor/scripts.pory"
	switch VAR_TIME_OF_DAY
# 172 "data/maps/MaguroHarbor/scripts.pory"
	case TIME_EARLY, MaguroHarbor_EventScript_Mart_3
# 176 "data/maps/MaguroHarbor/scripts.pory"
	case TIME_NIGHT, MaguroHarbor_EventScript_Mart_4
# 181 "data/maps/MaguroHarbor/scripts.pory"
	message gText_HowMayIServeYou
# 182 "data/maps/MaguroHarbor/scripts.pory"
	waitmessage
# 183 "data/maps/MaguroHarbor/scripts.pory"
	pokemart MaguroHarbor_Mart
# 184 "data/maps/MaguroHarbor/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
MaguroHarbor_EventScript_Mart_1:
# 186 "data/maps/MaguroHarbor/scripts.pory"
	release
	return

MaguroHarbor_EventScript_Mart_3:
# 173 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_FishPokemonSalesman_Text_1, MSGBOX_DEFAULT
	goto MaguroHarbor_EventScript_Mart_1

MaguroHarbor_EventScript_Mart_4:
# 177 "data/maps/MaguroHarbor/scripts.pory"
	msgbox MaguroHarbor_EventScript_Mart_Text_1, MSGBOX_DEFAULT
	goto MaguroHarbor_EventScript_Mart_1


	.align 2
# 189 "data/maps/MaguroHarbor/scripts.pory"
MaguroHarbor_Mart:
# 190 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_POKE_BALL
# 191 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 192 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 193 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 194 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_AWAKENING
# 195 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 196 "data/maps/MaguroHarbor/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

MaguroHarbor_EventScript_TownSign_Text_0:
# 8 "data/maps/MaguroHarbor/scripts.pory"
	.string "Maguro Harbor\n"
	.string "“A town that lives hand in hand with\l"
	.string "the sea.”$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_0:
# 15 "data/maps/MaguroHarbor/scripts.pory"
	.string "Old woman$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_1:
# 20 "data/maps/MaguroHarbor/scripts.pory"
	.string "Oh dear, I haven't finished setting up\n"
	.string "yet!$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_2:
# 24 "data/maps/MaguroHarbor/scripts.pory"
	.string "Oh dear, We're closed! I'm sorry.$"

MaguroHarbor_EventScript_FishcakeSalesman_Text_3:
# 28 "data/maps/MaguroHarbor/scripts.pory"
	.string "Hello dear, want to try a fishcake?\p"
	.string "They're the town's specialty!$"

MaguroHarbor_EventScript_FishPokemonSalesman_Text_0:
# 41 "data/maps/MaguroHarbor/scripts.pory"
	.string "Salesman$"

MaguroHarbor_EventScript_FishPokemonSalesman_Text_1:
# 50 "data/maps/MaguroHarbor/scripts.pory"
	.string "Oop! We're not open yet. Come back\n"
	.string "later!$"

MaguroHarbor_EventScript_FishPokemonSalesman_Text_2:
# 55 "data/maps/MaguroHarbor/scripts.pory"
	.string "Fresh fish! Come get yer fish!$"

MaguroHarbor_EventScript_FishermanInBoat_Text_0:
# 66 "data/maps/MaguroHarbor/scripts.pory"
	.string "Fisherman$"

MaguroHarbor_EventScript_FishermanInBoat_Text_1:
# 68 "data/maps/MaguroHarbor/scripts.pory"
	.string "I'm letting my fishing partner\n"
	.string "Cramorant rest for a while.$"

MaguroHarbor_EventScript_Cramorant_Text_0:
# 78 "data/maps/MaguroHarbor/scripts.pory"
	.string "Cramorant$"

MaguroHarbor_EventScript_Cramorant_Text_1:
# 80 "data/maps/MaguroHarbor/scripts.pory"
	.string "Craaah!$"

MaguroHarbor_EventScript_FishermanOldRod_Text_0:
# 92 "data/maps/MaguroHarbor/scripts.pory"
	.string "Heyo, wee fisherm'n! Hope ye be\n"
	.string "enjoyin' yer fishing rod!$"

MaguroHarbor_EventScript_FishermanOldRod_Text_1:
# 104 "data/maps/MaguroHarbor/scripts.pory"
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
# 119 "data/maps/MaguroHarbor/scripts.pory"
	.string "It be a wee bit used, but I reckon it\n"
	.string "will serve ye mighty fine!\p"
	.string "Farewell, lad! May ye become a great\n"
	.string "fisherm'n!$"

MaguroHarbor_EventScript_FishermanOldRod_Text_3:
# 124 "data/maps/MaguroHarbor/scripts.pory"
	.string "It be a wee bit used, but I reckon it\n"
	.string "will serve ye mighty fine!\p"
	.string "Farewell, lass! May ye become a great\n"
	.string "fisherm'n!$"

MaguroHarbor_EventScript_Man_Text_0:
# 139 "data/maps/MaguroHarbor/scripts.pory"
	.string "Man$"

MaguroHarbor_EventScript_Man_Text_1:
# 141 "data/maps/MaguroHarbor/scripts.pory"
	.string "I wish I swam as gracefully as the\n"
	.string "Dojo's Magikarp…$"

MaguroHarbor_EventScript_CoupleGirl_Text_0:
# 150 "data/maps/MaguroHarbor/scripts.pory"
	.string "Young girl$"

MaguroHarbor_EventScript_CoupleGirl_Text_1:
# 154 "data/maps/MaguroHarbor/scripts.pory"
	.string "I can't wait to see my love again…$"

MaguroHarbor_EventScript_CoupleGirl_Text_2:
# 159 "data/maps/MaguroHarbor/scripts.pory"
	.string "I can't wait to see my love soon…$"

MaguroHarbor_EventScript_Mart_Text_0:
# 169 "data/maps/MaguroHarbor/scripts.pory"
	.string "Clerk$"

MaguroHarbor_EventScript_Mart_Text_1:
# 178 "data/maps/MaguroHarbor/scripts.pory"
	.string "Oop! We're closed. Come back another\n"
	.string "time!$"
