AzaleaTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_OnTransition
	.byte 0

AzaleaTown_OnTransition:
	setflag FLAG_VISITED_AZALEA
	end

AzaleaTown_Well::
	warp MAP_SLOWPOKEWELL, 53, 6,
	waitstate
	release
	end