ProvingTrialEntrance_MapScripts::
# 2 "data/maps/ProvingTrialA1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PT_GO
	.byte 0


PT_GO::
# 6 "data/maps/ProvingTrialA1/scripts.pory"
	special EnterSafariMode
# 7 "data/maps/ProvingTrialA1/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
	return

