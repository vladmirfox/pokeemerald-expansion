LittlerootTown_NewHouse_MapScripts::
# 2 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_EventScript_NewHouse_BallDefault
	.byte 0


LittlerootTown_EventScript_NewHouse_BallDefault::
# 6 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
	return


LittlerootTown_EventScript_NewHouse_Birch::
# 10 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 11 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_EventScript_NewHouse_Birch_4
LittlerootTown_EventScript_NewHouse_Birch_3:
# 28 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Birch_Text_2
LittlerootTown_EventScript_NewHouse_Birch_1:
# 30 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 31 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_NewHouse_Birch_2:
# 13 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_NewHouse_Birch_9
# 24 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Birch_Text_1
	goto LittlerootTown_EventScript_NewHouse_Birch_1

LittlerootTown_EventScript_NewHouse_Birch_4:
# 12 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_EventScript_NewHouse_Birch_6
	goto LittlerootTown_EventScript_NewHouse_Birch_3

LittlerootTown_EventScript_NewHouse_Birch_6:
# 12 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_EventScript_NewHouse_Birch_2
	goto LittlerootTown_EventScript_NewHouse_Birch_3

LittlerootTown_EventScript_NewHouse_Birch_9:
# 15 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne LittlerootTown_EventScript_NewHouse_Birch_13
# 19 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
LittlerootTown_EventScript_NewHouse_Birch_12:
# 21 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Birch_Text_1
	goto LittlerootTown_EventScript_NewHouse_Birch_1

LittlerootTown_EventScript_NewHouse_Birch_13:
# 16 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	addvar VAR_UNUSED_0x40F7, 1
	goto LittlerootTown_EventScript_NewHouse_Birch_12


LittlerootTown_EventScript_NewHouse_PokeballOne::
# 36 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 37 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_EventScript_NewHouse_PokeballOne_4
LittlerootTown_EventScript_NewHouse_PokeballOne_3:
# 43 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_PokeballOne_Text_0
LittlerootTown_EventScript_NewHouse_PokeballOne_1:
# 45 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 46 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_NewHouse_PokeballOne_2:
# 38 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq LittlerootTown_EventScript_NewHouse_PokeballOne_9
	goto LittlerootTown_EventScript_NewHouse_PokeballOne_1

LittlerootTown_EventScript_NewHouse_PokeballOne_4:
# 37 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_EventScript_NewHouse_PokeballOne_6
	goto LittlerootTown_EventScript_NewHouse_PokeballOne_3

LittlerootTown_EventScript_NewHouse_PokeballOne_6:
# 37 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_EventScript_NewHouse_PokeballOne_2
	goto LittlerootTown_EventScript_NewHouse_PokeballOne_3

LittlerootTown_EventScript_NewHouse_PokeballOne_9:
# 39 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NewProfessor_EventScript_Applin
	goto LittlerootTown_EventScript_NewHouse_PokeballOne_1


LittlerootTown_EventScript_NewHouse_PokeballTwo::
# 51 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 52 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_EventScript_NewHouse_PokeballTwo_4
LittlerootTown_EventScript_NewHouse_PokeballTwo_3:
# 58 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_PokeballOne_Text_0
LittlerootTown_EventScript_NewHouse_PokeballTwo_1:
# 60 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 61 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_NewHouse_PokeballTwo_2:
# 53 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq LittlerootTown_EventScript_NewHouse_PokeballTwo_9
	goto LittlerootTown_EventScript_NewHouse_PokeballTwo_1

LittlerootTown_EventScript_NewHouse_PokeballTwo_4:
# 52 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_EventScript_NewHouse_PokeballTwo_6
	goto LittlerootTown_EventScript_NewHouse_PokeballTwo_3

LittlerootTown_EventScript_NewHouse_PokeballTwo_6:
# 52 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_EventScript_NewHouse_PokeballTwo_2
	goto LittlerootTown_EventScript_NewHouse_PokeballTwo_3

LittlerootTown_EventScript_NewHouse_PokeballTwo_9:
# 54 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NewProfessor_EventScript_Trapinch
	goto LittlerootTown_EventScript_NewHouse_PokeballTwo_1


LittlerootTown_EventScript_NewHouse_PokeballThree::
# 66 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 67 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, LittlerootTown_EventScript_NewHouse_PokeballThree_4
LittlerootTown_EventScript_NewHouse_PokeballThree_3:
# 73 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_PokeballOne_Text_0
LittlerootTown_EventScript_NewHouse_PokeballThree_1:
# 75 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 76 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_NewHouse_PokeballThree_2:
# 68 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq LittlerootTown_EventScript_NewHouse_PokeballThree_9
	goto LittlerootTown_EventScript_NewHouse_PokeballThree_1

LittlerootTown_EventScript_NewHouse_PokeballThree_4:
# 67 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, LittlerootTown_EventScript_NewHouse_PokeballThree_6
	goto LittlerootTown_EventScript_NewHouse_PokeballThree_3

LittlerootTown_EventScript_NewHouse_PokeballThree_6:
# 67 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, LittlerootTown_EventScript_NewHouse_PokeballThree_2
	goto LittlerootTown_EventScript_NewHouse_PokeballThree_3

LittlerootTown_EventScript_NewHouse_PokeballThree_9:
# 69 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NewProfessor_EventScript_Horsea
	goto LittlerootTown_EventScript_NewHouse_PokeballThree_1


LittlerootTown_EventScript_NewHouse_EventScript_Applin::
# 82 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	showmonpic SPECIES_APPLIN, 10, 3
# 83 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_0, MSGBOX_YESNO
# 84 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_NewHouse_EventScript_Applin_1
# 106 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 107 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

LittlerootTown_EventScript_NewHouse_EventScript_Applin_1:
# 85 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
# 86 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_EventScript_NewHouse_EventScript_Applin_4
# 93 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_EventScript_NewHouse_EventScript_Applin_5
# 101 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 102 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_2
	return

LittlerootTown_EventScript_NewHouse_EventScript_Applin_4:
# 87 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_1
# 89 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 90 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 91 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_EventScript_NewHouse_EventScript_Applin_5:
# 94 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_1
# 96 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 97 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 98 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_EventScript_NewHouse_Trapinch::
# 113 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	showmonpic SPECIES_TRAPINCH, 10, 3
# 114 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Trapinch_Text_0, MSGBOX_YESNO
# 115 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_NewHouse_Trapinch_1
# 137 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 138 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

LittlerootTown_EventScript_NewHouse_Trapinch_1:
# 116 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_MASTER_BALL
# 117 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_EventScript_NewHouse_Trapinch_4
# 124 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_EventScript_NewHouse_Trapinch_5
# 132 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 133 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_2
	return

LittlerootTown_EventScript_NewHouse_Trapinch_4:
# 118 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Trapinch_Text_1
# 120 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 121 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 122 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_EventScript_NewHouse_Trapinch_5:
# 125 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Trapinch_Text_1
# 127 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 128 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 129 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_EventScript_NewHouse_Horsea::
# 144 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	showmonpic SPECIES_Horsea, 10, 3
# 145 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Horsea_Text_0, MSGBOX_YESNO
# 146 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_NewHouse_Horsea_1
# 168 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 169 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

LittlerootTown_EventScript_NewHouse_Horsea_1:
# 147 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	givemon SPECIES_HORSEA, 50, ITEM_MASTER_BALL
# 148 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_EventScript_NewHouse_Horsea_4
# 155 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_EventScript_NewHouse_Horsea_5
# 163 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 164 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_2
	return

LittlerootTown_EventScript_NewHouse_Horsea_4:
# 149 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Horsea_Text_1
# 151 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 152 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 153 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_EventScript_NewHouse_Horsea_5:
# 156 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_EventScript_NewHouse_Horsea_Text_1
# 158 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 159 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 160 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 175 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 176 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 177 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 178 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 179 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 186 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 187 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 188 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 191 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 189 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_EventScript_NewHouse_Birch_Text_0:
# 13 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Hello, would you like to see more?$"

LittlerootTown_EventScript_NewHouse_Birch_Text_1:
# 21 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Choose your Pokemon wisely$"

LittlerootTown_EventScript_NewHouse_Birch_Text_2:
# 28 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Take care of your Pokemon$"

LittlerootTown_EventScript_NewHouse_PokeballOne_Text_0:
# 43 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Don't Take Another$"

LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_0:
# 83 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Do you want to choose Applin?$"

LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_1:
# 88 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Recieved Applin$"

LittlerootTown_EventScript_NewHouse_EventScript_Applin_Text_2:
# 102 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "No More Room$"

LittlerootTown_EventScript_NewHouse_Trapinch_Text_0:
# 114 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Do you want to choose Trapinch?$"

LittlerootTown_EventScript_NewHouse_Trapinch_Text_1:
# 119 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Recieved Trapinch$"

LittlerootTown_EventScript_NewHouse_Horsea_Text_0:
# 145 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Do you want to choose Horsea?$"

LittlerootTown_EventScript_NewHouse_Horsea_Text_1:
# 150 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Recieved Horsea$"

NicknamePartyMon_Text_0:
# 175 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 191 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Transferred to PC$"

NewProfessor_NotChosen::
# 194 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "You did not choose the Pokemon$"
