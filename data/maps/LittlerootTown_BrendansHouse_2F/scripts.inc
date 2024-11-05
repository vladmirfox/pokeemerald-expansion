LittlerootTown_BrendansHouse_2F_MapScripts::
	.byte 0


# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
