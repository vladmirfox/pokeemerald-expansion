JohtoStation_MapScripts::
.set LOCALID_ATTENDANT, 1

JohtoStation_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JohtoStation_OnFrame
	.byte 0

JohtoStation_EventScript_MoveAttendantAside::
	setobjectxyperm LOCALID_ATTENDANT, 5, 4
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_RIGHT
	return

JohtoStation_OnFrame:
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, JohtoStation_EventScript_ExitCableCar
	.2byte 0

JohtoStation_EventScript_ExitCableCar::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, JohtoStation_Movement_ExitCableCar
	applymovement LOCALID_ATTENDANT, JohtoStation_Movement_FollowPlayerOutFromCableCar
	waitmovement 0
	setvar VAR_CABLE_CAR_STATION_STATE, 0
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
	releaseall
	end

JohtoStation_EventScript_Attendant::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_TEA, KantoStation_UnderMantainance
	msgbox JohtoStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, JohtoStation_EventScript_RideCableCar
	goto_if_eq VAR_RESULT, NO, JohtoStation_EventScript_DeclineRide
	end

JohtoStation_EventScript_RideCableCar::
	msgbox JohtoStation_Text_StepThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ATTENDANT, JohtoStation_Movement_LeadPlayerToCableCar
	applymovement OBJ_EVENT_ID_PLAYER, JohtoStation_Movement_BoardCableCar
	waitmovement 0
	warp MAP_KANTO_STATION, 6, 7
	waitstate
	release
	end

JohtoStation_EventScript_DeclineRide::
	msgbox JohtoStation_Text_RideAnotherTime, MSGBOX_DEFAULT
	release
	end

JohtoStation_Movement_LeadPlayerToCableCar:
	walk_up
	walk_up
	walk_left
	walk_in_place_faster_right
	step_end

JohtoStation_Movement_FollowPlayerOutFromCableCar:
	delay_16
	walk_right
	walk_down
	walk_down
	step_end

JohtoStation_Movement_BoardCableCar:
	walk_up
	walk_up
	walk_up
	delay_16
	step_end

JohtoStation_Movement_ExitCableCar:
	walk_down
	walk_down
	walk_down
	delay_16
	step_end

JohtoStation_Text_CableCarReadyGetOn:
	.string "The MAGNET TRAIN is ready to run.\n"
	.string "Would you like to be on it?$"

JohtoStation_Text_StepThisWay:
	.string "Please step this way.$"

JohtoStation_Text_RideAnotherTime:
	.string "Please ride with us another time.$"

