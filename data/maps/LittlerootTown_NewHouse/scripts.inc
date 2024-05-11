LittlerootTown_NewHouse_MapScripts::
# 2 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewProfessor_EventScript_BallDefault
	.byte 0


NewProfessor_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
	return


LittlerootTown_NewHouse_EventScript_Pokeball_One::
# 11 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 12 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	showmonpic SPECIES_APPLIN, 10, 3
# 13 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_0, MSGBOX_YESNO
# 14 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_One_2
# 36 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 37 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NewProfessor_NotChosen
LittlerootTown_NewHouse_EventScript_Pokeball_One_1:
# 39 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 40 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_NewHouse_EventScript_Pokeball_One_2:
# 15 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	givemon SPECIES_APPLIN, 50, ITEM_MASTER_BALL
# 16 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_One_5
# 23 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_One_6
# 31 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 32 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_2
	goto LittlerootTown_NewHouse_EventScript_Pokeball_One_1

LittlerootTown_NewHouse_EventScript_Pokeball_One_5:
# 17 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_1
# 19 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 20 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 21 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_One_1

LittlerootTown_NewHouse_EventScript_Pokeball_One_6:
# 24 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_1
# 26 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 27 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 28 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_One_1


LittlerootTown_NewHouse_EventScript_Pokeball_Two::
# 47 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 48 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	showmonpic SPECIES_HORSEA, 10, 3
# 49 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Two_Text_0, MSGBOX_YESNO
# 50 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_Two_2
# 72 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 73 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NewProfessor_NotChosen
LittlerootTown_NewHouse_EventScript_Pokeball_Two_1:
# 75 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 76 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_NewHouse_EventScript_Pokeball_Two_2:
# 51 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	givemon SPECIES_HORSEA, 50, ITEM_MASTER_BALL
# 52 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_Two_5
# 59 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_Two_6
# 67 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 68 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_2
	goto LittlerootTown_NewHouse_EventScript_Pokeball_Two_1

LittlerootTown_NewHouse_EventScript_Pokeball_Two_5:
# 53 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Two_Text_1
# 55 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 56 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 57 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_Two_1

LittlerootTown_NewHouse_EventScript_Pokeball_Two_6:
# 60 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Two_Text_1
# 62 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 63 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 64 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_Two_1


LittlerootTown_NewHouse_EventScript_Pokeball_Three::
# 83 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 84 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	showmonpic SPECIES_TRAPINCH, 10, 3
# 85 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Three_Text_0, MSGBOX_YESNO
# 86 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_Three_2
# 108 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 109 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NewProfessor_NotChosen
LittlerootTown_NewHouse_EventScript_Pokeball_Three_1:
# 111 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 112 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_NewHouse_EventScript_Pokeball_Three_2:
# 87 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 50, ITEM_MASTER_BALL
# 88 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_Three_5
# 95 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_Three_6
# 103 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 104 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_2
	goto LittlerootTown_NewHouse_EventScript_Pokeball_Three_1

LittlerootTown_NewHouse_EventScript_Pokeball_Three_5:
# 89 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 90 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Three_Text_1
# 91 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 92 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 93 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_Three_1

LittlerootTown_NewHouse_EventScript_Pokeball_Three_6:
# 96 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Three_Text_1
# 98 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 99 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 100 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_Three_1


NicknamePartyMon::
# 119 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 120 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 121 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 122 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 123 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 131 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 132 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 133 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 136 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 134 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_0:
# 13 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Do you want to choose Applin?$"

LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_1:
# 18 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Recieved Applin$"

LittlerootTown_NewHouse_EventScript_Pokeball_One_Text_2:
# 32 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "No More Room$"

LittlerootTown_NewHouse_EventScript_Pokeball_Two_Text_0:
# 49 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Do you want to choose Horsea?$"

LittlerootTown_NewHouse_EventScript_Pokeball_Two_Text_1:
# 54 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Recieved Horsea$"

LittlerootTown_NewHouse_EventScript_Pokeball_Three_Text_0:
# 85 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Do you want to choose Trapinch?$"

LittlerootTown_NewHouse_EventScript_Pokeball_Three_Text_1:
# 90 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Recieved Trapinch$"

NicknamePartyMon_Text_0:
# 119 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Give it a nickname?$"

NewProfessor_NotChosen::
# 140 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "You did not choose the Pokemon$"
