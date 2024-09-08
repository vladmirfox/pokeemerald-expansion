BaPokemonCenter_MapScripts::
# 2 "data/maps/BaPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ba_PokemonCenter_OnTransition
# 3 "data/maps/BaPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Ba_PokemonCenter_OnTransition::
# 7 "data/maps/BaPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_BA
	end


NurseHeal::
# 12 "data/maps/BaPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/BaPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/BaPokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/BaPokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/BaPokemonCenter/scripts.pory"
	release
	end

