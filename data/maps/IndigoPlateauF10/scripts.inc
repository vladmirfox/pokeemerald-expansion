IndigoPlateauF10_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, IndigoPlateauF10_OnWarp
	.byte 0

IndigoPlateauF10_OnWarp:
	map_script_2 VAR_TEMP_1, 0, IndigoPlateauF10_EventScript_TurnPlayerNorth
	.2byte 0

IndigoPlateauF10_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

IndigoPlateauF10_Wich_ChampionsRoom::
	call_if_eq VAR_KANTO_LEAGUE_REMATCH, 0, IndigoPlateauF10_Champion_Leaf_Room
	call_if_eq VAR_KANTO_LEAGUE_REMATCH, 1, IndigoPlateauF10_Champion_Lance_Room
	end

IndigoPlateauF10_Champion_Leaf_Room::
	warp MAP_INDIGO_PLATEAU_F11, 6, 12,
	waitstate
	release
	end

IndigoPlateauF10_Champion_Lance_Room::
	warp MAP_INDIGO_PLATEAU_F13, 6, 12,
	waitstate
	release
	end