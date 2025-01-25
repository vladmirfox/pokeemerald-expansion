BerryForest_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BerryForest_OnWarp
	.byte 0

Berryforest_Bondbridge_left::
	warp MAP_BOND_BRIDGE, 12, 7,
	waitstate
	release
	end

Berryforest_Bondbridge_right::
	warp MAP_BOND_BRIDGE, 13, 7,
	waitstate
	release
	end

BerryForest_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BerryForest_EventScript_TurnPlayerNorth
	.2byte 0

BerryForest_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end