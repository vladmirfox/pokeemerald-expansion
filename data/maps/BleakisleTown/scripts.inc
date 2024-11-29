BleakisleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BleakisleTown_PokemonCenter_OnTransition
	.byte 0

BleakisleTown_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_BLEAKISLE_TOWN
	end
