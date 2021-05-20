InsideTestTown_MapScripts::
	.byte 0


InsideTestTown_EventScript_MudkipPokeBall::
	lockall
	msgbox InsideTestTown_Text_TakeThisBall, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq InsideTestTown_EventScript_MudkipPokeBall_1
	givemon SPECIES_MUDKIP, 15, ITEM_MASTER_BALL
	compare VAR_RESULT, 0
	goto_if_eq InsideTestTown_EventScript_MudkipPokeBall_5
	compare VAR_RESULT, 1
	goto_if_eq InsideTestTown_EventScript_MudkipPokeBall_6
	goto Common_EventScript_NoMoreRoomForPokemon
InsideTestTown_EventScript_MudkipPokeBall_4:
	releaseall
	end

InsideTestTown_EventScript_MudkipPokeBall_1:
	msgbox InsideTestTown_Text_LeftTheBall
	releaseall
	end

InsideTestTown_EventScript_MudkipPokeBall_5:
	call InsideTestTown_EventScript_MudkipFanFare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq InsideTestTown_EventScript_MudkipPokeBall_11
InsideTestTown_EventScript_MudkipPokeBall_10:
	setflag FLAG_UNUSED_0x020
	goto InsideTestTown_EventScript_MudkipPokeBall_4

InsideTestTown_EventScript_MudkipPokeBall_6:
	call InsideTestTown_EventScript_MudkipFanFare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq InsideTestTown_EventScript_MudkipPokeBall_14
InsideTestTown_EventScript_MudkipPokeBall_13:
	call Common_EventScript_TransferredToPC
	setflag FLAG_UNUSED_0x020
	goto InsideTestTown_EventScript_MudkipPokeBall_4

InsideTestTown_EventScript_MudkipPokeBall_11:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto InsideTestTown_EventScript_MudkipPokeBall_10

InsideTestTown_EventScript_MudkipPokeBall_14:
	call Common_EventScript_NameReceivedBoxMon
	goto InsideTestTown_EventScript_MudkipPokeBall_13


InsideTestTown_EventScript_MudkipFanFare::
	bufferspeciesname 1, SPECIES_MUDKIP
	removeobject 1
	playfanfare MUS_CAUGHT
	setflag FLAG_SYS_POKEMON_GET
	message InsideTestTown_Text_ObtainedMudkip
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_MUDKIP
	return


InsideTestTown_Text_LeftTheBall::
	.string "Decdied to leave the Poke Ball.$"

InsideTestTown_Text_TakeThisBall::
	.string "This Poke Ball contains a Mudkip. \p"
	.string "Will you take it?$"

InsideTestTown_Text_ObtainedMudkip::
	.string "{PLAYER} obtained Mudkip!$"
