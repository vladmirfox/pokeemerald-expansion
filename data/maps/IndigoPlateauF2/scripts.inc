IndigoPlateauF2_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, IndigoPlateauF2_OnWarp
	.byte 0

IndigoPlateauF2_OnWarp:
	map_script_2 VAR_TEMP_1, 0, IndigoPlateauF2_EventScript_TurnPlayerNorth
	.2byte 0

IndigoPlateauF2_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

