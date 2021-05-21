TestTown_House1_MapScripts::
	.byte 0


TestTown_House1_EventScript_MudkipPokeBall::
	lockall
	msgbox TestTown_House1_Text_TakeThisBall, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq TestTown_House1_EventScript_MudkipPokeBall_1
	givemon SPECIES_MUDKIP, 15, ITEM_MASTER_BALL
	compare VAR_RESULT, 0
	goto_if_eq TestTown_House1_EventScript_MudkipPokeBall_5
	compare VAR_RESULT, 1
	goto_if_eq TestTown_House1_EventScript_MudkipPokeBall_6
	goto Common_EventScript_NoMoreRoomForPokemon
TestTown_House1_EventScript_MudkipPokeBall_4:
	releaseall
	end

TestTown_House1_EventScript_MudkipPokeBall_1:
	msgbox TestTown_House1_Text_LeftTheBall
	releaseall
	end

TestTown_House1_EventScript_MudkipPokeBall_5:
	call TestTown_House1_EventScript_MudkipFanFare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TestTown_House1_EventScript_MudkipPokeBall_11
TestTown_House1_EventScript_MudkipPokeBall_10:
	setflag FLAG_UNUSED_0x020
	goto TestTown_House1_EventScript_MudkipPokeBall_4

TestTown_House1_EventScript_MudkipPokeBall_6:
	call TestTown_House1_EventScript_MudkipFanFare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TestTown_House1_EventScript_MudkipPokeBall_14
TestTown_House1_EventScript_MudkipPokeBall_13:
	call Common_EventScript_TransferredToPC
	setflag FLAG_UNUSED_0x020
	goto TestTown_House1_EventScript_MudkipPokeBall_4

TestTown_House1_EventScript_MudkipPokeBall_11:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto TestTown_House1_EventScript_MudkipPokeBall_10

TestTown_House1_EventScript_MudkipPokeBall_14:
	call Common_EventScript_NameReceivedBoxMon
	goto TestTown_House1_EventScript_MudkipPokeBall_13


TestTown_House1_EventScript_MudkipFanFare::
	bufferspeciesname 1, SPECIES_MUDKIP
	removeobject 1
	playfanfare MUS_CAUGHT
	setflag FLAG_SYS_POKEMON_GET
	message TestTown_House1_Text_ObtainedMudkip
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_MUDKIP
	return


TestTown_House1_EventScript_GivePokedex::
	lockall
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, TestTown_House1_EventScript_DexFlagSet
	msgbox TestTown_House1_Text_RecievedDex
	setflag FLAG_SYS_POKEDEX_GET
	releaseall
	end


TestTown_House1_EventScript_DexFlagSet::
	lockall
	msgbox TestTown_House1_Text_DontGiveDex
	releaseall
	end


TestTown_House1_EventScript_GiveRunningShoes::
	lockall
	faceplayer
	goto_if_set FLAG_SYS_B_DASH, TestTown_House1_EventScript_GiveRunningShoes_2
	goto_if_unset FLAG_SYS_B_DASH, TestTown_House1_EventScript_GiveRunningShoes_3
TestTown_House1_EventScript_GiveRunningShoes_1:
	releaseall
	end

TestTown_House1_EventScript_GiveRunningShoes_2:
	msgbox TestTown_House1_Text_TakeRunningShoesQuestion, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TestTown_House1_EventScript_GiveRunningShoes_6
	msgbox TestTown_House1_Text_KeptRunningShoes
	goto TestTown_House1_EventScript_GiveRunningShoes_1

TestTown_House1_EventScript_GiveRunningShoes_3:
	setflag FLAG_SYS_B_DASH
	msgbox TestTown_House1_Text_GiveRunningShoes
	goto TestTown_House1_EventScript_GiveRunningShoes_1

TestTown_House1_EventScript_GiveRunningShoes_6:
	clearflag FLAG_SYS_B_DASH
	msgbox TestTown_House1_Text_MomTookRunningShoes
	goto TestTown_House1_EventScript_GiveRunningShoes_1


TestTown_House1_Text_LeftTheBall::
	.string "Decided to leave the Poke Ball.$"

TestTown_House1_Text_TakeThisBall::
	.string "This Poke Ball contains a Mudkip. \p"
	.string "Will you take it?$"

TestTown_House1_Text_ObtainedMudkip::
	.string "{PLAYER} obtained Mudkip!$"

TestTown_House1_Text_RecievedDex::
	.string "Here is a Pokédex.$"

TestTown_House1_Text_DontGiveDex::
	.string "You already have a Pokédex!$"

TestTown_House1_Text_GiveRunningShoes::
	.string "Here are the running shoes!$"

TestTown_House1_Text_TakeRunningShoesQuestion::
	.string "Do you want me to take your \n"
	.string "running shoes?$"

TestTown_House1_Text_KeptRunningShoes::
	.string "Decided to keep the running shoes.$"

TestTown_House1_Text_MomTookRunningShoes::
	.string "Mom took the running shoes.$"
