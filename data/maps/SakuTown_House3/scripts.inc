SakuTown_House3_MapScripts::
	.byte 0


SakuTown_House3_EventScript_TradeMe::
# 6 "data/maps/SakuTown_House3/scripts.pory"
	lock
# 7 "data/maps/SakuTown_House3/scripts.pory"
	faceplayer
# 8 "data/maps/SakuTown_House3/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, SakuTown_House3_EventScript_TradeMe_2
# 12 "data/maps/SakuTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
# 13 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/SakuTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_2, MSGBOX_YESNO
# 18 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SakuTown_House3_EventScript_TradeMe_5
# 18 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SakuTown_House3_EventScript_TradeMe_5
# 21 "data/maps/SakuTown_House3/scripts.pory"
	special ChoosePartyMon
# 22 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 23 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SakuTown_House3_EventScript_TradeMe_10
# 26 "data/maps/SakuTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 27 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 28 "data/maps/SakuTown_House3/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne SakuTown_House3_EventScript_TradeMe_13
# 31 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 32 "data/maps/SakuTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 33 "data/maps/SakuTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 34 "data/maps/SakuTown_House3/scripts.pory"
	special DoInGameTradeScene
# 35 "data/maps/SakuTown_House3/scripts.pory"
	waitstate
# 36 "data/maps/SakuTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 37 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_5, MSGBOX_DEFAULT
# 38 "data/maps/SakuTown_House3/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
SakuTown_House3_EventScript_TradeMe_1:
# 43 "data/maps/SakuTown_House3/scripts.pory"
	release
	return

SakuTown_House3_EventScript_TradeMe_2:
# 9 "data/maps/SakuTown_House3/scripts.pory"
	speakername SakuTown_House3_EventScript_TradeMe_Text_0
# 10 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_1
	goto SakuTown_House3_EventScript_TradeMe_1

SakuTown_House3_EventScript_TradeMe_5:
# 19 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_3
	goto SakuTown_House3_EventScript_TradeMe_1

SakuTown_House3_EventScript_TradeMe_10:
# 24 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_3
	goto SakuTown_House3_EventScript_TradeMe_1

SakuTown_House3_EventScript_TradeMe_13:
# 29 "data/maps/SakuTown_House3/scripts.pory"
	msgbox SakuTown_House3_EventScript_TradeMe_Text_4
	goto SakuTown_House3_EventScript_TradeMe_1


SakuTown_House3_EventScript_Man::
	return


SakuTown_House3_EventScript_TradeMe_Text_0:
# 9 "data/maps/SakuTown_House3/scripts.pory"
	.string "Little boy$"

SakuTown_House3_EventScript_TradeMe_Text_1:
# 10 "data/maps/SakuTown_House3/scripts.pory"
	.string "Thank you!$"

SakuTown_House3_EventScript_TradeMe_Text_2:
# 16 "data/maps/SakuTown_House3/scripts.pory"
	.string "Wanna trade?$"

SakuTown_House3_EventScript_TradeMe_Text_3:
# 19 "data/maps/SakuTown_House3/scripts.pory"
	.string "You're mean.$"

SakuTown_House3_EventScript_TradeMe_Text_4:
# 29 "data/maps/SakuTown_House3/scripts.pory"
	.string "Not the mon I'm after.$"

SakuTown_House3_EventScript_TradeMe_Text_5:
# 37 "data/maps/SakuTown_House3/scripts.pory"
	.string "{STR_VAR_1}, welcome!\n{STR_VAR_2}, you take care!$"
