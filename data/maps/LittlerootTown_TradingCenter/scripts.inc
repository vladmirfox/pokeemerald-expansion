LittlerootTown_TradingCenter_MapScripts::
	.byte 0

LittlerootTown_TradingCenter_Poliwhirl_TradeSequence::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_POLIWHIRL
	goto LittlerootTown_TradingCenter_Trading
	release
	end

LittlerootTown_TradingCenter_Kadabra_TradeSequence::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_KADABRA
	goto LittlerootTown_TradingCenter_Trading
	release
	end

LittlerootTown_TradingCenter_Machoke_TradeSequence::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_MACHOKE
	goto LittlerootTown_TradingCenter_Trading
	release
	end

LittlerootTown_TradingCenter_Graveler_TradeSequence::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_GRAVELER
	goto LittlerootTown_TradingCenter_Trading
	release
	end

LittlerootTown_TradingCenter_Slowpoke_TradeSequence::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_SLOWPOKE
	goto LittlerootTown_TradingCenter_Trading
	release
	end

LittlerootTown_TradingCenter_Haunter_TradeSequence::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_HAUNTER
	goto LittlerootTown_TradingCenter_Trading
	release
	end

//Reusable scripts:
LittlerootTown_TradingCenter_Trading::
	// Buffer the trade and requested mon names and ask if you want to trade
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox LittlerootTown_TradingCenter_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_TradingCenter_DeclineTrade
 
	// Handle the selection of the requested mon from the player
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_TradingCenter_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies 
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_TradingCenter_EventScript_NotRequestedMon 
 
	// Perform the actual trade
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon 
	special DoInGameTradeScene 
	waitstate
 
	msgbox LittlerootTown_TradingCenter_TradeThanks, MSGBOX_DEFAULT
	release
	end

LittlerootTown_TradingCenter_DeclineTrade::
	msgbox LittlerootTown_TradingCenter_DeclineTrade_Text, MSGBOX_DEFAULT
	release
	end
 
LittlerootTown_TradingCenter_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox LittlerootTown_TradingCenter_WrongMon_Text, MSGBOX_DEFAULT
	release
	end
 
LittlerootTown_TradingCenter_Text_WillingToTradeIt::
	.string "Check out this {STR_VAR_2}!\n"
	.string "Do you want to help me evolve it!\p"
	.string "I'll tell you what. Let's team up and\n"
	.string " evolve our {STR_VAR_1} together.$"
 
LittlerootTown_TradingCenter_DeclineTrade_Text::
	.string "Thats too bad, maybe next time.$"
 
LittlerootTown_TradingCenter_WrongMon_Text::
	.string "I'm sorry but that is not\n"
	.string "a {STR_VAR_1}, I cannot trade with you.$"
 
LittlerootTown_TradingCenter_TradeThanks::
	.string "Thanks for helping me out!$"
	