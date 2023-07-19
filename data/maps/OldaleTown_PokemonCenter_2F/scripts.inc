OldaleTown_PokemonCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0

@ The below 3 are unused and leftover from RS
OldaleTown_PokemonCenter_2F_EventScript_Colosseum::
	call CableClub_EventScript_Colosseum
	end

OldaleTown_PokemonCenter_2F_EventScript_TradeCenter::
	call CableClub_EventScript_TradeCenter
	end

OldaleTown_PokemonCenter_2F_EventScript_RecordCorner::
	call CableClub_EventScript_RecordCorner
	end

OldaleTown_PokemonCenter_2F_EventScript_CandyShop::
	lock
	message OldaleTown_PokemonCenter_2F_EventScript_CandyShop_Text_0
	waitmessage
	pokemart OldaleTown_PokemonCenter_2F_CandyShop
	msgbox OldaleTown_PokemonCenter_2F_EventScript_CandyShop_Text_1
	release
	return


	.align 2
OldaleTown_PokemonCenter_2F_CandyShop:
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

OldaleTown_PokemonCenter_2F_EventScript_CandyShop_Text_0:
	.string "...psst. Wanna Buy Some Candy?$"

OldaleTown_PokemonCenter_2F_EventScript_CandyShop_Text_1:
	.string "Tell your Friends.$"
