Beachbound_Route_Decay_MapScripts::
# 2 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script_2 VAR_DECAY_BEACHBOUND_ROUTE, 1, Beachbound_Route_Decay_SeeDecay
	.2byte 0


Beachbound_Route_Decay_SeeDecay::
# 8 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 9 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 2
# 11 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special SpawnCameraObject
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Beachbound_Route_Decay_SeeDecay_Movement_0
# 13 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special RemoveCameraObject
# 16 "data/maps/Beachbound_Route_Decay/scripts.pory"
	warpsilent MAP_BEACHBOUND_ROUTE_DECAY, 59, 16
# 18 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_ReturnToKura::
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 23 "data/maps/Beachbound_Route_Decay/scripts.pory"
	warpsilent MAP_KURA_TOWN
# 24 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitstate
# 25 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
Beachbound_Route_Decay_SeeDecay_Movement_0:
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end
