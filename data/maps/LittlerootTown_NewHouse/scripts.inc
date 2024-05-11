LittlerootTown_NewHouse_MapScripts::
	.byte 0


LittlerootTown_NewHouse_EventScript_Pokeball::
# 5 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	lockall
# 6 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	showmonpic SPECIES_APPLIN, 10, 3
# 7 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 8 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_2
# 30 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 31 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NewProfessor_NotChosen
LittlerootTown_NewHouse_EventScript_Pokeball_1:
# 33 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	waitmessage
# 34 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	releaseall
	end

LittlerootTown_NewHouse_EventScript_Pokeball_2:
# 9 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	givemon SPECIES_APPLIN, 50, ITEM_MASTER_BALL
# 10 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_5
# 17 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewHouse_EventScript_Pokeball_6
# 25 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 26 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Text_2
	goto LittlerootTown_NewHouse_EventScript_Pokeball_1

LittlerootTown_NewHouse_EventScript_Pokeball_5:
# 11 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Text_1
# 13 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 14 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 15 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_1

LittlerootTown_NewHouse_EventScript_Pokeball_6:
# 18 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox LittlerootTown_NewHouse_EventScript_Pokeball_Text_1
# 20 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	removeobject 1
# 21 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 22 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_NewHouse_EventScript_Pokeball_1


NicknamePartyMon::
# 41 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 42 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 43 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 44 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 45 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 53 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 54 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	hidemonpic
# 55 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 58 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 56 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_NewHouse_EventScript_Pokeball_Text_0:
# 7 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Do you want to choose Applin?$"

LittlerootTown_NewHouse_EventScript_Pokeball_Text_1:
# 12 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Recieved Applin$"

LittlerootTown_NewHouse_EventScript_Pokeball_Text_2:
# 26 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 41 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "Give it a nickname?$"

NewProfessor_NotChosen::
# 62 "data/maps/LittlerootTown_NewHouse/scripts.pory"
	.string "You did not choose the Pokemon$"
