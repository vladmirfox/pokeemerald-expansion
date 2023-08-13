NewBirchsLab_MapScripts::
	.byte 0


NewBirchsLab_EventScript_Pokeball::
	lockall
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox NewBirchsLab_EventScript_Pokeball_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Pokeball_2
	hidemonpic
	msgbox NewBirchsLab_NotChosen
NewBirchsLab_EventScript_Pokeball_1:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_Pokeball_2:
	givemon SPECIES_MUDKIP, 5, ITEM_RARE_CANDY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Pokeball_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Pokeball_6
	hidemonpic
	msgbox NewBirchsLab_EventScript_Pokeball_Text_2
	goto NewBirchsLab_EventScript_Pokeball_1

NewBirchsLab_EventScript_Pokeball_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Pokeball_1

NewBirchsLab_EventScript_Pokeball_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Pokeball_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Pokeball_Text_0:
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Pokeball_Text_1:
	.string "Recieved Mudkip$"

NewBirchsLab_EventScript_Pokeball_Text_2:
	.string "No More Room$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NewBirchsLab_NotChosen::
	.string "You did not choose the Pokemon$"
