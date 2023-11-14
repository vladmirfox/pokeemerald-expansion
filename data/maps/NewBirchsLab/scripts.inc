NewBirchsLab_MapScripts::
	.byte 0


NewBirchsLab_EventScript_Pokeball1::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_Pokeball1_3
NewBirchsLab_EventScript_Pokeball1_2:
	msgbox NewBirchsLab_AlreadyChosen
	releaseall
	end

NewBirchsLab_EventScript_Pokeball1_1:
	showmonpic SPECIES_TURTWIG, 10, 3
	msgbox NewBirchsLab_EventScript_Pokeball1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Pokeball1_9
	hidemonpic
	msgbox NewBirchsLab_NotChosen
NewBirchsLab_EventScript_Pokeball1_8:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_Pokeball1_3:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_Pokeball1_5
	goto NewBirchsLab_EventScript_Pokeball1_2

NewBirchsLab_EventScript_Pokeball1_5:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_Pokeball1_1
	goto NewBirchsLab_EventScript_Pokeball1_2

NewBirchsLab_EventScript_Pokeball1_9:
	givemon SPECIES_TURTWIG, 5, ITEM_BERRY_JUICE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Pokeball1_12
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Pokeball1_13
	hidemonpic
	msgbox NewBirchsLab_EventScript_Pokeball1_Text_2
	goto NewBirchsLab_EventScript_Pokeball1_8

NewBirchsLab_EventScript_Pokeball1_12:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball1_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Pokeball1_8

NewBirchsLab_EventScript_Pokeball1_13:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball1_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Pokeball1_8


NewBirchsLab_EventScript_Pokeball2::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_Pokeball2_3
NewBirchsLab_EventScript_Pokeball2_2:
	msgbox NewBirchsLab_AlreadyChosen
	releaseall
	end

NewBirchsLab_EventScript_Pokeball2_1:
	showmonpic SPECIES_FENNEKIN, 10, 3
	msgbox NewBirchsLab_EventScript_Pokeball2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Pokeball2_9
	hidemonpic
	msgbox NewBirchsLab_NotChosen
NewBirchsLab_EventScript_Pokeball2_8:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_Pokeball2_3:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_Pokeball2_5
	goto NewBirchsLab_EventScript_Pokeball2_2

NewBirchsLab_EventScript_Pokeball2_5:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_Pokeball2_1
	goto NewBirchsLab_EventScript_Pokeball2_2

NewBirchsLab_EventScript_Pokeball2_9:
	givemon SPECIES_FENNEKIN, 5, ITEM_BERRY_JUICE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Pokeball2_12
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Pokeball2_13
	hidemonpic
	msgbox NewBirchsLab_EventScript_Pokeball1_Text_2
	goto NewBirchsLab_EventScript_Pokeball2_8

NewBirchsLab_EventScript_Pokeball2_12:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball2_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Pokeball2_8

NewBirchsLab_EventScript_Pokeball2_13:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball2_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Pokeball2_8


NewBirchsLab_EventScript_Pokeball3::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_Pokeball3_3
NewBirchsLab_EventScript_Pokeball3_2:
	msgbox NewBirchsLab_AlreadyChosen
	releaseall
	end

NewBirchsLab_EventScript_Pokeball3_1:
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox NewBirchsLab_EventScript_Pokeball3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Pokeball3_9
	hidemonpic
	msgbox NewBirchsLab_NotChosen
NewBirchsLab_EventScript_Pokeball3_8:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_Pokeball3_3:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_Pokeball3_5
	goto NewBirchsLab_EventScript_Pokeball3_2

NewBirchsLab_EventScript_Pokeball3_5:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_Pokeball3_1
	goto NewBirchsLab_EventScript_Pokeball3_2

NewBirchsLab_EventScript_Pokeball3_9:
	givemon SPECIES_TOTODILE, 5, ITEM_BERRY_JUICE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Pokeball3_12
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Pokeball3_13
	hidemonpic
	msgbox NewBirchsLab_EventScript_Pokeball1_Text_2
	goto NewBirchsLab_EventScript_Pokeball3_8

NewBirchsLab_EventScript_Pokeball3_12:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball3_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Pokeball3_8

NewBirchsLab_EventScript_Pokeball3_13:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Pokeball3_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Pokeball3_8


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
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Pokeball1_Text_0:
	.string "Do you want to choose Turtwig?$"

NewBirchsLab_EventScript_Pokeball1_Text_1:
	.string "Received Turtwig!$"

NewBirchsLab_EventScript_Pokeball1_Text_2:
	.string "No more room.$"

NewBirchsLab_EventScript_Pokeball2_Text_0:
	.string "Do you want to choose Fennekin?$"

NewBirchsLab_EventScript_Pokeball2_Text_1:
	.string "Received Fennekin!$"

NewBirchsLab_EventScript_Pokeball3_Text_0:
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Pokeball3_Text_1:
	.string "Received Totodile!$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Pokémon transferred to PC.$"

NewBirchsLab_NotChosen::
	.string "You did not choose the Pokémon.$"

NewBirchsLab_AlreadyChosen::
	.string "You can only choose one Pokémon!$"
