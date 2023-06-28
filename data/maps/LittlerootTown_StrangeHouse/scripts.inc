LittlerootTown_StrangeHouse_MapScripts::
	.byte 0

LittlerootTown_StrangeHouse_Fridge::
	lockall
	msgbox LittlerootTown_StrangeHouse_Fridge_Text_0
	releaseall
	return


LittlerootTown_StrangeHouse_GiftPokemon1::
	lockall
	showmonpic SPECIES_BULBASAUR, 10, 3
	msgbox LittlerootTown_StrangeHouse_GiftPokemon1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon1_2
	hidemonpic
LittlerootTown_StrangeHouse_GiftPokemon1_1:
	waitmessage
	releaseall
	end

LittlerootTown_StrangeHouse_GiftPokemon1_2:
	givemon SPECIES_BULBASAUR, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon1_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon1_6
	hidemonpic
	msgbox LittlerootTown_StrangeHouse_GiftPokemon1_Text_2
	goto LittlerootTown_StrangeHouse_GiftPokemon1_1

LittlerootTown_StrangeHouse_GiftPokemon1_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_StrangeHouse_GiftPokemon1_Text_1
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x493
	call nicknamePartyMon
	goto LittlerootTown_StrangeHouse_GiftPokemon1_1

LittlerootTown_StrangeHouse_GiftPokemon1_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_StrangeHouse_GiftPokemon1_Text_1
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x493
	call nicknameBoxMon
	goto LittlerootTown_StrangeHouse_GiftPokemon1_1


LittlerootTown_StrangeHouse_GiftPokemon2::
	lockall
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox LittlerootTown_StrangeHouse_GiftPokemon2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon2_2
	hidemonpic
LittlerootTown_StrangeHouse_GiftPokemon2_1:
	waitmessage
	releaseall
	end

LittlerootTown_StrangeHouse_GiftPokemon2_2:
	givemon SPECIES_CHARMANDER, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon2_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon2_6
	hidemonpic
	msgbox LittlerootTown_StrangeHouse_GiftPokemon1_Text_2
	goto LittlerootTown_StrangeHouse_GiftPokemon2_1

LittlerootTown_StrangeHouse_GiftPokemon2_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_StrangeHouse_GiftPokemon2_Text_1
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x494
	call nicknamePartyMon
	goto LittlerootTown_StrangeHouse_GiftPokemon2_1

LittlerootTown_StrangeHouse_GiftPokemon2_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_StrangeHouse_GiftPokemon2_Text_1
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x494
	call nicknameBoxMon
	goto LittlerootTown_StrangeHouse_GiftPokemon2_1


LittlerootTown_StrangeHouse_GiftPokemon3::
	lockall
	showmonpic SPECIES_SQUIRTLE, 10, 3
	msgbox LittlerootTown_StrangeHouse_GiftPokemon3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon3_2
	hidemonpic
LittlerootTown_StrangeHouse_GiftPokemon3_1:
	waitmessage
	releaseall
	end

LittlerootTown_StrangeHouse_GiftPokemon3_2:
	givemon SPECIES_SQUIRTLE, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon3_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_StrangeHouse_GiftPokemon3_6
	hidemonpic
	msgbox LittlerootTown_StrangeHouse_GiftPokemon1_Text_2
	goto LittlerootTown_StrangeHouse_GiftPokemon3_1

LittlerootTown_StrangeHouse_GiftPokemon3_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_StrangeHouse_GiftPokemon3_Text_1
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call nicknamePartyMon
	goto LittlerootTown_StrangeHouse_GiftPokemon3_1

LittlerootTown_StrangeHouse_GiftPokemon3_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_StrangeHouse_GiftPokemon3_Text_1
	removeobject 1
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call nicknameBoxMon
	goto LittlerootTown_StrangeHouse_GiftPokemon3_1


nicknamePartyMon::
	msgbox nicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq nicknamePartyMon_1
	return

nicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


nicknameBoxMon::
	msgbox nicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq nicknameBoxMon_2
nicknameBoxMon_1:
	msgbox nicknameBoxMon_Text_0
	return

nicknameBoxMon_2:
	call Common_EventScript_GetGiftMonPartySlot
	goto nicknameBoxMon_1


LittlerootTown_StrangeHouse_Fridge_Text_0:
	.string "Heck yeah, two refrigerators!$"

LittlerootTown_StrangeHouse_GiftPokemon1_Text_0:
	.string "Will you take the BULBASAUR?$"

LittlerootTown_StrangeHouse_GiftPokemon1_Text_1:
	.string "You recieved the BULBASAUR!$"

LittlerootTown_StrangeHouse_GiftPokemon1_Text_2:
	.string "No More Room.$"

LittlerootTown_StrangeHouse_GiftPokemon2_Text_0:
	.string "Will you take the CHARMANDER?$"

LittlerootTown_StrangeHouse_GiftPokemon2_Text_1:
	.string "You recieved the CHARMANDER!$"

LittlerootTown_StrangeHouse_GiftPokemon3_Text_0:
	.string "Will you take the SQUIRTLE?$"

LittlerootTown_StrangeHouse_GiftPokemon3_Text_1:
	.string "You recieved the SQUIRTLE!$"

nicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

nicknameBoxMon_Text_0:
	.string "Transferred to PC.$"
