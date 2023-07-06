LittlerootTown_StrangeHouse_MapScripts::
	.byte 0

LittlerootTown_StrangeHouse_Fridge::
	lockall
	msgbox LittlerootTown_StrangeHouse_Fridge_Text_0
	releaseall
	return


StrangeHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StrangeHouse_EventScript_BallDefault
	.byte 0


StrangeHouse_EventScript_BallDefault::
	setvar STRANGEHOUSE_REGION, 0
	return


StrangeHouse_EventScript_StrangePC::
	goto_if_unset STRANGEHOUSE_BALL_ONE, StrangeHouse_EventScript_StrangePC_4
StrangeHouse_EventScript_StrangePC_3:
	msgbox StrangeHouse_EventScript_StrangePC_Text_12, MSGBOX_NPC
StrangeHouse_EventScript_StrangePC_1:
	end

StrangeHouse_EventScript_StrangePC_2:
	lock
	message StrangeHouse_EventScript_StrangePC_Text_0
	dynmultichoice 25, 3, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, StrangeHouse_EventScript_StrangePC_Text_1, StrangeHouse_EventScript_StrangePC_Text_2, StrangeHouse_EventScript_StrangePC_Text_3, StrangeHouse_EventScript_StrangePC_Text_4, StrangeHouse_EventScript_StrangePC_Text_5, StrangeHouse_EventScript_StrangePC_Text_6, StrangeHouse_EventScript_StrangePC_Text_7, StrangeHouse_EventScript_StrangePC_Text_8, StrangeHouse_EventScript_StrangePC_Text_9, StrangeHouse_EventScript_StrangePC_Text_10, StrangeHouse_EventScript_StrangePC_Text_11
	closemessage
	switch VAR_RESULT
	case 0, StrangeHouse_EventScript_StrangePC_11
	case 1, StrangeHouse_EventScript_StrangePC_12
	case 2, StrangeHouse_EventScript_StrangePC_13
	case 3, StrangeHouse_EventScript_StrangePC_14
	case 4, StrangeHouse_EventScript_StrangePC_15
	case 5, StrangeHouse_EventScript_StrangePC_16
	case 6, StrangeHouse_EventScript_StrangePC_17
	case 7, StrangeHouse_EventScript_StrangePC_18
	case 8, StrangeHouse_EventScript_StrangePC_19
	case 9, StrangeHouse_EventScript_StrangePC_20
	case 10, StrangeHouse_EventScript_StrangePC_21
StrangeHouse_EventScript_StrangePC_9:
	call StarterFade
	release
	goto StrangeHouse_EventScript_StrangePC_1

StrangeHouse_EventScript_StrangePC_4:
	goto_if_unset STRANGEHOUSE_BALL_TWO, StrangeHouse_EventScript_StrangePC_6
	goto StrangeHouse_EventScript_StrangePC_3

StrangeHouse_EventScript_StrangePC_6:
	goto_if_unset STRANGEHOUSE_BALL_THREE, StrangeHouse_EventScript_StrangePC_2
	goto StrangeHouse_EventScript_StrangePC_3

StrangeHouse_EventScript_StrangePC_11:
	setvar STRANGEHOUSE_REGION, 0
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_12:
	setvar STRANGEHOUSE_REGION, 1
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_13:
	setvar STRANGEHOUSE_REGION, 2
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_14:
	setvar STRANGEHOUSE_REGION, 3
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_15:
	setvar STRANGEHOUSE_REGION, 4
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_16:
	setvar STRANGEHOUSE_REGION, 5
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_17:
	setvar STRANGEHOUSE_REGION, 6
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_18:
	setvar STRANGEHOUSE_REGION, 7
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_19:
	setvar STRANGEHOUSE_REGION, 8
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_20:
	setvar STRANGEHOUSE_REGION, 9
	goto StrangeHouse_EventScript_StrangePC_9

StrangeHouse_EventScript_StrangePC_21:
	setvar STRANGEHOUSE_REGION, 10
	goto StrangeHouse_EventScript_StrangePC_9


StarterFade::
	fadescreen FADE_TO_BLACK
	delay 10
	fadescreen FADE_FROM_BLACK
	return


StrangeHouse_EventScript_PokeballOne::
	lockall
	goto_if_unset STRANGEHOUSE_BALL_ONE, StrangeHouse_EventScript_PokeballOne_4
StrangeHouse_EventScript_PokeballOne_3:
	msgbox StrangeHouse_EventScript_PokeballOne_Text_0
StrangeHouse_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

StrangeHouse_EventScript_PokeballOne_2:
	switch STRANGEHOUSE_REGION
	case 0, StrangeHouse_EventScript_PokeballOne_10
	case 1, StrangeHouse_EventScript_PokeballOne_11
	case 2, StrangeHouse_EventScript_PokeballOne_12
	case 3, StrangeHouse_EventScript_PokeballOne_13
	case 4, StrangeHouse_EventScript_PokeballOne_14
	case 5, StrangeHouse_EventScript_PokeballOne_15
	case 6, StrangeHouse_EventScript_PokeballOne_16
	case 7, StrangeHouse_EventScript_PokeballOne_17
	case 9, StrangeHouse_EventScript_PokeballOne_18
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_4:
	goto_if_unset STRANGEHOUSE_BALL_TWO, StrangeHouse_EventScript_PokeballOne_6
	goto StrangeHouse_EventScript_PokeballOne_3

StrangeHouse_EventScript_PokeballOne_6:
	goto_if_unset STRANGEHOUSE_BALL_THREE, StrangeHouse_EventScript_PokeballOne_2
	goto StrangeHouse_EventScript_PokeballOne_3

StrangeHouse_EventScript_PokeballOne_10:
	call StrangeHouse_EventScript_Bulbasaur
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_11:
	call StrangeHouse_EventScript_Chikorita
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_12:
	call StrangeHouse_EventScript_Treecko
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_13:
	call StrangeHouse_EventScript_Turtwig
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_14:
	call StrangeHouse_EventScript_Snivy
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_15:
	call StrangeHouse_EventScript_Chespin
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_16:
	call StrangeHouse_EventScript_Rowlet
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_17:
	call StrangeHouse_EventScript_Grookey
	goto StrangeHouse_EventScript_PokeballOne_1

StrangeHouse_EventScript_PokeballOne_18:
	call StrangeHouse_EventScript_SquirtleSevii
	goto StrangeHouse_EventScript_PokeballOne_1


StrangeHouse_EventScript_PokeballTwo::
	lockall
	goto_if_unset STRANGEHOUSE_BALL_ONE, StrangeHouse_EventScript_PokeballTwo_4
StrangeHouse_EventScript_PokeballTwo_3:
	msgbox StrangeHouse_EventScript_PokeballOne_Text_0
StrangeHouse_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

StrangeHouse_EventScript_PokeballTwo_2:
	switch STRANGEHOUSE_REGION
	case 0, StrangeHouse_EventScript_PokeballTwo_10
	case 1, StrangeHouse_EventScript_PokeballTwo_11
	case 2, StrangeHouse_EventScript_PokeballTwo_12
	case 3, StrangeHouse_EventScript_PokeballTwo_13
	case 4, StrangeHouse_EventScript_PokeballTwo_14
	case 5, StrangeHouse_EventScript_PokeballTwo_15
	case 6, StrangeHouse_EventScript_PokeballTwo_16
	case 7, StrangeHouse_EventScript_PokeballTwo_17
	case 9, StrangeHouse_EventScript_PokeballTwo_18
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_4:
	goto_if_unset STRANGEHOUSE_BALL_TWO, StrangeHouse_EventScript_PokeballTwo_6
	goto StrangeHouse_EventScript_PokeballTwo_3

StrangeHouse_EventScript_PokeballTwo_6:
	goto_if_unset STRANGEHOUSE_BALL_THREE, StrangeHouse_EventScript_PokeballTwo_2
	goto StrangeHouse_EventScript_PokeballTwo_3

StrangeHouse_EventScript_PokeballTwo_10:
	call StrangeHouse_EventScript_Charmander
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_11:
	call StrangeHouse_EventScript_Cyndaquil
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_12:
	call StrangeHouse_EventScript_Torchic
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_13:
	call StrangeHouse_EventScript_Chimchar
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_14:
	call StrangeHouse_EventScript_Tepig
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_15:
	call StrangeHouse_EventScript_Fennekin
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_16:
	call StrangeHouse_EventScript_Litten
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_17:
	call StrangeHouse_EventScript_Scorbunny
	goto StrangeHouse_EventScript_PokeballTwo_1

StrangeHouse_EventScript_PokeballTwo_18:
	call StrangeHouse_EventScript_BulbasaurSevii
	goto StrangeHouse_EventScript_PokeballTwo_1


StrangeHouse_EventScript_PokeballThree::
	lockall
	goto_if_unset STRANGEHOUSE_BALL_ONE, StrangeHouse_EventScript_PokeballThree_4
StrangeHouse_EventScript_PokeballThree_3:
	msgbox StrangeHouse_EventScript_PokeballOne_Text_0
StrangeHouse_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

StrangeHouse_EventScript_PokeballThree_2:
	switch STRANGEHOUSE_REGION
	case 0, StrangeHouse_EventScript_PokeballThree_10
	case 1, StrangeHouse_EventScript_PokeballThree_11
	case 2, StrangeHouse_EventScript_PokeballThree_12
	case 3, StrangeHouse_EventScript_PokeballThree_13
	case 4, StrangeHouse_EventScript_PokeballThree_14
	case 5, StrangeHouse_EventScript_PokeballThree_15
	case 6, StrangeHouse_EventScript_PokeballThree_16
	case 7, StrangeHouse_EventScript_PokeballThree_17
	case 9, StrangeHouse_EventScript_PokeballThree_18
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_4:
	goto_if_unset STRANGEHOUSE_BALL_TWO, StrangeHouse_EventScript_PokeballThree_6
	goto StrangeHouse_EventScript_PokeballThree_3

StrangeHouse_EventScript_PokeballThree_6:
	goto_if_unset STRANGEHOUSE_BALL_THREE, StrangeHouse_EventScript_PokeballThree_2
	goto StrangeHouse_EventScript_PokeballThree_3

StrangeHouse_EventScript_PokeballThree_10:
	call StrangeHouse_EventScript_Squirtle
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_11:
	call StrangeHouse_EventScript_Totodile
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_12:
	call StrangeHouse_EventScript_Mudkip
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_13:
	call StrangeHouse_EventScript_Piplup
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_14:
	call StrangeHouse_EventScript_Oshawott
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_15:
	call StrangeHouse_EventScript_Froakie
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_16:
	call StrangeHouse_EventScript_Popplio
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_17:
	call StrangeHouse_EventScript_Sobble
	goto StrangeHouse_EventScript_PokeballThree_1

StrangeHouse_EventScript_PokeballThree_18:
	call StrangeHouse_EventScript_CharmanderSevii
	goto StrangeHouse_EventScript_PokeballThree_1


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


StrangeHouse_EventScript_Bulbasaur::
	showmonpic SPECIES_BULBASAUR, 10, 3
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Bulbasaur_1
	hidemonpic
	return

StrangeHouse_EventScript_Bulbasaur_1:
	givemon SPECIES_BULBASAUR, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Bulbasaur_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Bulbasaur_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Bulbasaur_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Bulbasaur_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Charmander::
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox StrangeHouse_EventScript_Charmander_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Charmander_1
	hidemonpic
	return

StrangeHouse_EventScript_Charmander_1:
	givemon SPECIES_CHARMANDER, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Charmander_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Charmander_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Charmander_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Charmander_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Charmander_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Charmander_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Squirtle::
	showmonpic SPECIES_SQUIRTLE, 10, 3
	msgbox StrangeHouse_EventScript_Squirtle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Squirtle_1
	hidemonpic
	return

StrangeHouse_EventScript_Squirtle_1:
	givemon SPECIES_SQUIRTLE, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Squirtle_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Squirtle_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Squirtle_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Squirtle_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Squirtle_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Squirtle_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Chikorita::
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox StrangeHouse_EventScript_Chikorita_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Chikorita_1
	hidemonpic
	return

StrangeHouse_EventScript_Chikorita_1:
	givemon SPECIES_CHIKORITA, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Chikorita_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Chikorita_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Chikorita_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Chikorita_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Chikorita_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Chikorita_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Cyndaquil::
	showmonpic SPECIES_MEWTWO, 10, 3
	msgbox StrangeHouse_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Cyndaquil_1
	hidemonpic
	return

StrangeHouse_EventScript_Cyndaquil_1:
	givemon SPECIES_BERGMITE, 99, ITEM_RARE_CANDY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Cyndaquil_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Cyndaquil_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Cyndaquil_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Cyndaquil_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Cyndaquil_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Cyndaquil_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Totodile::
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox StrangeHouse_EventScript_Totodile_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Totodile_1
	hidemonpic
	return

StrangeHouse_EventScript_Totodile_1:
	givemon SPECIES_TOTODILE, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Totodile_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Totodile_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Totodile_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Totodile_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Totodile_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Totodile_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Treecko::
	showmonpic SPECIES_TREECKO, 10, 3
	msgbox StrangeHouse_EventScript_Treecko_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Treecko_1
	hidemonpic
	return

StrangeHouse_EventScript_Treecko_1:
	givemon SPECIES_TREECKO, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Treecko_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Treecko_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Treecko_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Treecko_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Treecko_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Treecko_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Torchic::
	showmonpic SPECIES_TORCHIC, 10, 3
	msgbox StrangeHouse_EventScript_Torchic_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Torchic_1
	hidemonpic
	return

StrangeHouse_EventScript_Torchic_1:
	givemon SPECIES_TORCHIC, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Torchic_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Torchic_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Torchic_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Torchic_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Torchic_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Torchic_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Mudkip::
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox StrangeHouse_EventScript_Mudkip_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Mudkip_1
	hidemonpic
	return

StrangeHouse_EventScript_Mudkip_1:
	givemon SPECIES_MUDKIP, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Mudkip_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Mudkip_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Mudkip_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Mudkip_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Mudkip_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Mudkip_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Turtwig::
	showmonpic SPECIES_TURTWIG, 10, 3
	msgbox StrangeHouse_EventScript_Turtwig_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Turtwig_1
	hidemonpic
	return

StrangeHouse_EventScript_Turtwig_1:
	givemon SPECIES_TURTWIG, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Turtwig_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Turtwig_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Turtwig_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Turtwig_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Turtwig_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Turtwig_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Chimchar::
	showmonpic SPECIES_CHIMCHAR, 10, 3
	msgbox StrangeHouse_EventScript_Chimchar_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Chimchar_1
	hidemonpic
	return

StrangeHouse_EventScript_Chimchar_1:
	givemon SPECIES_CHIMCHAR, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Chimchar_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Chimchar_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Chimchar_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Chimchar_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Chimchar_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Chimchar_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Piplup::
	showmonpic SPECIES_PIPLUP, 10, 3
	msgbox StrangeHouse_EventScript_Piplup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Piplup_1
	hidemonpic
	return

StrangeHouse_EventScript_Piplup_1:
	givemon SPECIES_PIPLUP, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Piplup_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Piplup_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Piplup_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Piplup_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Piplup_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Piplup_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Snivy::
	showmonpic SPECIES_SNIVY, 10, 3
	msgbox StrangeHouse_EventScript_Snivy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Snivy_1
	hidemonpic
	return

StrangeHouse_EventScript_Snivy_1:
	givemon SPECIES_SNIVY, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Snivy_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Snivy_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Snivy_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Snivy_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Snivy_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Snivy_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Tepig::
	showmonpic SPECIES_TEPIG, 10, 3
	msgbox StrangeHouse_EventScript_Tepig_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Tepig_1
	hidemonpic
	return

StrangeHouse_EventScript_Tepig_1:
	givemon SPECIES_TEPIG, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Tepig_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Tepig_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Tepig_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Tepig_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Tepig_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Tepig_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Oshawott::
	showmonpic SPECIES_OSHAWOTT, 10, 3
	msgbox StrangeHouse_EventScript_Oshawott_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Oshawott_1
	hidemonpic
	return

StrangeHouse_EventScript_Oshawott_1:
	givemon SPECIES_OSHAWOTT, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Oshawott_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Oshawott_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Oshawott_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Oshawott_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Oshawott_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Oshawott_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Chespin::
	showmonpic SPECIES_CHESPIN, 10, 3
	msgbox StrangeHouse_EventScript_Chespin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Chespin_1
	hidemonpic
	return

StrangeHouse_EventScript_Chespin_1:
	givemon SPECIES_CHESPIN, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Chespin_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Chespin_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Chespin_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Chespin_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Chespin_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Chespin_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Fennekin::
	showmonpic SPECIES_FENNEKIN, 10, 3
	msgbox StrangeHouse_EventScript_Fennekin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Fennekin_1
	hidemonpic
	return

StrangeHouse_EventScript_Fennekin_1:
	givemon SPECIES_FENNEKIN, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Fennekin_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Fennekin_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Fennekin_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Fennekin_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Fennekin_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Fennekin_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Froakie::
	showmonpic SPECIES_FROAKIE, 10, 3
	msgbox StrangeHouse_EventScript_Froakie_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Froakie_1
	hidemonpic
	return

StrangeHouse_EventScript_Froakie_1:
	givemon SPECIES_FROAKIE, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Froakie_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Froakie_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Froakie_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Froakie_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Froakie_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Froakie_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Rowlet::
	showmonpic SPECIES_ROWLET, 10, 3
	msgbox StrangeHouse_EventScript_Rowlet_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Rowlet_1
	hidemonpic
	return

StrangeHouse_EventScript_Rowlet_1:
	givemon SPECIES_ROWLET, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Rowlet_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Rowlet_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Rowlet_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Rowlet_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Rowlet_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Rowlet_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Litten::
	showmonpic SPECIES_LITTEN, 10, 3
	msgbox StrangeHouse_EventScript_Litten_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Litten_1
	hidemonpic
	return

StrangeHouse_EventScript_Litten_1:
	givemon SPECIES_LITTEN, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Litten_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Litten_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Litten_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Litten_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Litten_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Litten_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Popplio::
	showmonpic SPECIES_POPPLIO, 10, 3
	msgbox StrangeHouse_EventScript_Popplio_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Popplio_1
	hidemonpic
	return

StrangeHouse_EventScript_Popplio_1:
	givemon SPECIES_POPPLIO, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Popplio_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Popplio_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Popplio_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Popplio_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Popplio_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Popplio_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Grookey::
	showmonpic SPECIES_GROOKEY, 10, 3
	msgbox StrangeHouse_EventScript_Grookey_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Grookey_1
	hidemonpic
	return

StrangeHouse_EventScript_Grookey_1:
	givemon SPECIES_GROOKEY, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Grookey_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Grookey_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Grookey_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Grookey_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Grookey_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Grookey_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Scorbunny::
	showmonpic SPECIES_SCORBUNNY, 10, 3
	msgbox StrangeHouse_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Scorbunny_1
	hidemonpic
	return

StrangeHouse_EventScript_Scorbunny_1:
	givemon SPECIES_SCORBUNNY, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Scorbunny_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Scorbunny_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Scorbunny_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Scorbunny_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Scorbunny_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Scorbunny_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_Sobble::
	showmonpic SPECIES_SOBBLE, 10, 3
	msgbox StrangeHouse_EventScript_Sobble_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_Sobble_1
	hidemonpic
	return

StrangeHouse_EventScript_Sobble_1:
	givemon SPECIES_SOBBLE, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_Sobble_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_Sobble_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_Sobble_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Sobble_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_Sobble_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Sobble_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_CharmanderSevii::
	showmonpic SPECIES_CHARMANDER_SEVII, 10, 3
	msgbox StrangeHouse_EventScript_Charmander_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_CharmanderSevii_1
	hidemonpic
	return

StrangeHouse_EventScript_CharmanderSevii_1:
	givemon SPECIES_CHARMANDER_SEVII, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_CharmanderSevii_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_CharmanderSevii_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_CharmanderSevii_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Charmander_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_CharmanderSevii_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Charmander_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_BulbasaurSevii::
	showmonpic SPECIES_BULBASAUR_SEVII, 10, 3
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_BulbasaurSevii_1
	hidemonpic
	return

StrangeHouse_EventScript_BulbasaurSevii_1:
	givemon SPECIES_BULBASAUR_SEVII, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_BulbasaurSevii_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_BulbasaurSevii_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_BulbasaurSevii_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_BulbasaurSevii_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_1
	call NicknameBoxMon
	return


StrangeHouse_EventScript_SquirtleSevii::
	showmonpic SPECIES_SQUIRTLE_SEVII, 10, 3
	msgbox StrangeHouse_EventScript_Squirtle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_EventScript_SquirtleSevii_1
	hidemonpic
	return

StrangeHouse_EventScript_SquirtleSevii_1:
	givemon SPECIES_SQUIRTLE_SEVII, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StrangeHouse_EventScript_SquirtleSevii_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq StrangeHouse_EventScript_SquirtleSevii_5
	hidemonpic
	msgbox StrangeHouse_EventScript_Bulbasaur_Text_2
	return

StrangeHouse_EventScript_SquirtleSevii_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Squirtle_Text_1
	call NicknamePartyMon
	return

StrangeHouse_EventScript_SquirtleSevii_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox StrangeHouse_EventScript_Squirtle_Text_1
	call NicknameBoxMon
	return


LittlerootTown_StrangeHouse_Fridge_Text_0:
	.string "Heck yeah, two refrigerators!$"

StrangeHouse_EventScript_StrangePC_Text_0:
	.string "Where are you from?$"

StrangeHouse_EventScript_StrangePC_Text_1:
	.string "Kanto$"

StrangeHouse_EventScript_StrangePC_Text_2:
	.string "Johto$"

StrangeHouse_EventScript_StrangePC_Text_3:
	.string "Hoenn$"

StrangeHouse_EventScript_StrangePC_Text_4:
	.string "Sinnoh$"

StrangeHouse_EventScript_StrangePC_Text_5:
	.string "Unova$"

StrangeHouse_EventScript_StrangePC_Text_6:
	.string "Kalos$"

StrangeHouse_EventScript_StrangePC_Text_7:
	.string "Alola$"

StrangeHouse_EventScript_StrangePC_Text_8:
	.string "Galar$"

StrangeHouse_EventScript_StrangePC_Text_9:
	.string "Paldea$"

StrangeHouse_EventScript_StrangePC_Text_10:
	.string "Sevii Isles$"

StrangeHouse_EventScript_StrangePC_Text_11:
	.string "Hisui$"

StrangeHouse_EventScript_StrangePC_Text_12:
	.string "Take care of your Pokémon.$"

StrangeHouse_EventScript_PokeballOne_Text_0:
	.string "Don't take another.$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC.$"

StrangeHouse_EventScript_Bulbasaur_Text_0:
	.string "Will you take the Bulbasaur?$"

StrangeHouse_EventScript_Bulbasaur_Text_1:
	.string "Recieved Bulbasaur$"

StrangeHouse_EventScript_Bulbasaur_Text_2:
	.string "Your PC is full!$"

StrangeHouse_EventScript_Charmander_Text_0:
	.string "Will you take the Charmander?$"

StrangeHouse_EventScript_Charmander_Text_1:
	.string "Recieved Charmander$"

StrangeHouse_EventScript_Squirtle_Text_0:
	.string "Will you take the Squirtle?$"

StrangeHouse_EventScript_Squirtle_Text_1:
	.string "Recieved Squirtle$"

StrangeHouse_EventScript_Chikorita_Text_0:
	.string "Will you take the Chikorita?$"

StrangeHouse_EventScript_Chikorita_Text_1:
	.string "Recieved Chikorita$"

StrangeHouse_EventScript_Cyndaquil_Text_0:
	.string "Will you take the Cyndaquil?$"

StrangeHouse_EventScript_Cyndaquil_Text_1:
	.string "Recieved Cyndaquil$"

StrangeHouse_EventScript_Totodile_Text_0:
	.string "Will you choose the Totodile?$"

StrangeHouse_EventScript_Totodile_Text_1:
	.string "Recieved Totodile$"

StrangeHouse_EventScript_Treecko_Text_0:
	.string "Will you take the Treecko?$"

StrangeHouse_EventScript_Treecko_Text_1:
	.string "Recieved Treecko$"

StrangeHouse_EventScript_Torchic_Text_0:
	.string "Will you take the Torchic?$"

StrangeHouse_EventScript_Torchic_Text_1:
	.string "Recieved Torchic$"

StrangeHouse_EventScript_Mudkip_Text_0:
	.string "Will you take the Mudkip?$"

StrangeHouse_EventScript_Mudkip_Text_1:
	.string "Recieved Mudkip$"

StrangeHouse_EventScript_Turtwig_Text_0:
	.string "Will you take the Turtwig?$"

StrangeHouse_EventScript_Turtwig_Text_1:
	.string "Recieved Turtwig$"

StrangeHouse_EventScript_Chimchar_Text_0:
	.string "Will you take the Chimchar?$"

StrangeHouse_EventScript_Chimchar_Text_1:
	.string "Recieved Chimchar$"

StrangeHouse_EventScript_Piplup_Text_0:
	.string "Will you take the Piplup?$"

StrangeHouse_EventScript_Piplup_Text_1:
	.string "Recieved Piplup$"

StrangeHouse_EventScript_Snivy_Text_0:
	.string "Will you take the Snivy?$"

StrangeHouse_EventScript_Snivy_Text_1:
	.string "Recieved Snivy$"

StrangeHouse_EventScript_Tepig_Text_0:
	.string "Will you take the Tepig?$"

StrangeHouse_EventScript_Tepig_Text_1:
	.string "Recieved Tepig$"

StrangeHouse_EventScript_Oshawott_Text_0:
	.string "Will you take the Oshawott?$"

StrangeHouse_EventScript_Oshawott_Text_1:
	.string "Recieved Oshawott$"

StrangeHouse_EventScript_Chespin_Text_0:
	.string "Will you take the Chespin?$"

StrangeHouse_EventScript_Chespin_Text_1:
	.string "Recieved Chespin$"

StrangeHouse_EventScript_Fennekin_Text_0:
	.string "Will you take the Fennekin?$"

StrangeHouse_EventScript_Fennekin_Text_1:
	.string "Recieved Fennekin$"

StrangeHouse_EventScript_Froakie_Text_0:
	.string "Will you take the Froakie?$"

StrangeHouse_EventScript_Froakie_Text_1:
	.string "Recieved Froakie$"

StrangeHouse_EventScript_Rowlet_Text_0:
	.string "Will you take the Rowlet?$"

StrangeHouse_EventScript_Rowlet_Text_1:
	.string "Recieved Rowlet$"

StrangeHouse_EventScript_Litten_Text_0:
	.string "Will you take the Litten?$"

StrangeHouse_EventScript_Litten_Text_1:
	.string "Recieved Litten$"

StrangeHouse_EventScript_Popplio_Text_0:
	.string "Will you take the Popplio?$"

StrangeHouse_EventScript_Popplio_Text_1:
	.string "Recieved Popplio$"

StrangeHouse_EventScript_Grookey_Text_0:
	.string "Will you take the Grookey?$"

StrangeHouse_EventScript_Grookey_Text_1:
	.string "Recieved Grookey$"

StrangeHouse_EventScript_Scorbunny_Text_0:
	.string "Will you take the Scorbunny?$"

StrangeHouse_EventScript_Scorbunny_Text_1:
	.string "Recieved Scorbunny$"

StrangeHouse_EventScript_Sobble_Text_0:
	.string "Will you take the Sobble?$"

StrangeHouse_EventScript_Sobble_Text_1:
	.string "Recieved Sobble$"
