SakuTown_House3_MapScripts::
# 6 "data/maps/SakuTown_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_House3_EventScript_SetUpPokemon
	.byte 0


SakuTown_House3_EventScript_SetUpPokemon::
# 10 "data/maps/SakuTown_House3/scripts.pory"
	goto_if_unset FLAG_FORTREE_NPC_TRADE_COMPLETED, SakuTown_House3_EventScript_SetUpPokemon_1
	return

SakuTown_House3_EventScript_SetUpPokemon_1:
# 11 "data/maps/SakuTown_House3/scripts.pory"
	setflag FLAG_TEMP_1
	return


SakuTown_House3_EventScript_Psyduck::
# 16 "data/maps/SakuTown_House3/scripts.pory"
	lock
# 17 "data/maps/SakuTown_House3/scripts.pory"
	faceplayer
# 18 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_Psyduck_Text_0
# 19 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_Psyduck_Text_1
# 22 "data/maps/SakuTown_House3/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 23 "data/maps/SakuTown_House3/scripts.pory"
	waitmoncry
# 24 "data/maps/SakuTown_House3/scripts.pory"
	release
	end


SakuTown_House3_EventScript_Hoothoot::
# 29 "data/maps/SakuTown_House3/scripts.pory"
	lock
# 30 "data/maps/SakuTown_House3/scripts.pory"
	faceplayer
# 31 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_Hoothoot_Text_0
# 32 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_Hoothoot_Text_1
# 35 "data/maps/SakuTown_House3/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 36 "data/maps/SakuTown_House3/scripts.pory"
	waitmoncry
# 37 "data/maps/SakuTown_House3/scripts.pory"
	release
	end


SakuTown_House3_EventScript_TradeMe::
# 42 "data/maps/SakuTown_House3/scripts.pory"
	lock
# 43 "data/maps/SakuTown_House3/scripts.pory"
	faceplayer
# 44 "data/maps/SakuTown_House3/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, SakuTown_House3_EventScript_TradeMe_2
# 49 "data/maps/SakuTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PSYDUCK
# 50 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 51 "data/maps/SakuTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 52 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 54 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_TradeMe_Text_0
# 55 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_2, MSGBOX_YESNO
# 63 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SakuTown_House3_EventScript_TradeMe_5
# 63 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SakuTown_House3_EventScript_TradeMe_5
# 68 "data/maps/SakuTown_House3/scripts.pory"
	special ChoosePartyMon
# 69 "data/maps/SakuTown_House3/scripts.pory"
	waitstate
# 70 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 71 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SakuTown_House3_EventScript_TradeMe_10
# 76 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 77 "data/maps/SakuTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 78 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne SakuTown_House3_EventScript_TradeMe_13
# 83 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 84 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 85 "data/maps/SakuTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 86 "data/maps/SakuTown_House3/scripts.pory"
	special DoInGameTradeScene
# 88 "data/maps/SakuTown_House3/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 89 "data/maps/SakuTown_House3/scripts.pory"
	clearflag FLAG_TEMP_1
# 90 "data/maps/SakuTown_House3/scripts.pory"
	removeobject 3
# 91 "data/maps/SakuTown_House3/scripts.pory"
	addobject 4
# 93 "data/maps/SakuTown_House3/scripts.pory"
	waitstate
# 95 "data/maps/SakuTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 96 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_5, MSGBOX_DEFAULT
# 99 "data/maps/SakuTown_House3/scripts.pory"
	closemessage
SakuTown_House3_EventScript_TradeMe_1:
# 104 "data/maps/SakuTown_House3/scripts.pory"
	release
	return

SakuTown_House3_EventScript_TradeMe_2:
# 45 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_TradeMe_Text_0
# 46 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_1
# 47 "data/maps/SakuTown_House3/scripts.pory"
	closemessage
	goto SakuTown_House3_EventScript_TradeMe_1

SakuTown_House3_EventScript_TradeMe_5:
# 64 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_TradeMe_Text_0
# 65 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_3
# 66 "data/maps/SakuTown_House3/scripts.pory"
	closemessage
	goto SakuTown_House3_EventScript_TradeMe_1

SakuTown_House3_EventScript_TradeMe_10:
# 72 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_TradeMe_Text_0
# 73 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_3
# 74 "data/maps/SakuTown_House3/scripts.pory"
	closemessage
	goto SakuTown_House3_EventScript_TradeMe_1

SakuTown_House3_EventScript_TradeMe_13:
# 79 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_TradeMe_Text_0
# 80 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_4
# 81 "data/maps/SakuTown_House3/scripts.pory"
	closemessage
	goto SakuTown_House3_EventScript_TradeMe_1


SakuTown_House3_EventScript_Man::
# 108 "data/maps/SakuTown_House3/scripts.pory"
	lock
# 109 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_Man_Text_0
# 110 "data/maps/SakuTown_House3/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, SakuTown_House3_EventScript_Man_2
# 115 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_Man_Text_2
SakuTown_House3_EventScript_Man_1:
# 119 "data/maps/SakuTown_House3/scripts.pory"
	closemessage
# 120 "data/maps/SakuTown_House3/scripts.pory"
	release
	return

SakuTown_House3_EventScript_Man_2:
# 111 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_Man_Text_1
	goto SakuTown_House3_EventScript_Man_1


SakuTown_House3_EventScript_Psyduck_Text_0:
# 18 "data/maps/SakuTown_House3/scripts.pory"
	.string "Psyduck$"

SakuTown_House3_EventScript_Psyduck_Text_1:
# 20 "data/maps/SakuTown_House3/scripts.pory"
	.string "Psaïaïaï…$"

SakuTown_House3_EventScript_Hoothoot_Text_0:
# 31 "data/maps/SakuTown_House3/scripts.pory"
	.string "Hoothoot$"

SakuTown_House3_EventScript_Hoothoot_Text_1:
# 33 "data/maps/SakuTown_House3/scripts.pory"
	.string "Hooo…$"

SakuTown_House3_EventScript_TradeMe_Text_0:
# 45 "data/maps/SakuTown_House3/scripts.pory"
	.string "Little boy$"

SakuTown_House3_EventScript_TradeMe_Text_1:
# 46 "data/maps/SakuTown_House3/scripts.pory"
	.string "Thank you!$"

SakuTown_House3_EventScript_TradeMe_Text_2:
# 57 "data/maps/SakuTown_House3/scripts.pory"
	.string "The best thing about Pokémon is\n"
	.string "trading them around!\p"
	.string "I want a Hoothoot, but my pa doesn't\n"
	.string "let me go out at night.\p"
	.string "I'll trade you a super dope Psyduck\n"
	.string "for it!$"

SakuTown_House3_EventScript_TradeMe_Text_3:
# 65 "data/maps/SakuTown_House3/scripts.pory"
	.string "Keep your Hoothoot, I don't want it\n"
	.string "anyway…$"

SakuTown_House3_EventScript_TradeMe_Text_4:
# 80 "data/maps/SakuTown_House3/scripts.pory"
	.string "I don't want your weird Pokémon! I\n"
	.string "want a Hoothoot!$"

SakuTown_House3_EventScript_TradeMe_Text_5:
# 97 "data/maps/SakuTown_House3/scripts.pory"
	.string "Yeahhh!! I have a {STR_VAR_1} now!\n"
	.string "Take good care of Bread for me, okay?$"

SakuTown_House3_EventScript_Man_Text_0:
# 109 "data/maps/SakuTown_House3/scripts.pory"
	.string "Man$"

SakuTown_House3_EventScript_Man_Text_1:
# 112 "data/maps/SakuTown_House3/scripts.pory"
	.string "Oh great, he's got yet another\n"
	.string "Pokémon…$"

SakuTown_House3_EventScript_Man_Text_2:
# 116 "data/maps/SakuTown_House3/scripts.pory"
	.string "My son is really into this whole\n"
	.string "Pokémon trading business, huh…$"
