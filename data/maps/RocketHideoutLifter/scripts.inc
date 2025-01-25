RocketHideoutLifter_MapScripts::
	.byte 0

RocketHideoutLifter_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, RocketHideoutLifter_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, RocketHideoutLifter_EventScript_ChooseFloorFrom5th
	case 1, RocketHideoutLifter_EventScript_ChooseFloorFrom4th
	case 2, RocketHideoutLifter_EventScript_ChooseFloorFrom3rd
	case 3, RocketHideoutLifter_EventScript_ChooseFloorFrom2nd
	case 4, RocketHideoutLifter_EventScript_ChooseFloorFrom1st
	end

@ Below scripts ensure the cursor for floor select always starts on the current floor
RocketHideoutLifter_EventScript_ChooseFloorFrom5th::
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto RocketHideoutLifter_EventScript_ChooseFloor
	end

RocketHideoutLifter_EventScript_ChooseFloorFrom4th::
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto RocketHideoutLifter_EventScript_ChooseFloor
	end

RocketHideoutLifter_EventScript_ChooseFloorFrom3rd::
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto RocketHideoutLifter_EventScript_ChooseFloor
	end

RocketHideoutLifter_EventScript_ChooseFloorFrom2nd::
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto RocketHideoutLifter_EventScript_ChooseFloor
	end

RocketHideoutLifter_EventScript_ChooseFloorFrom1st::
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto RocketHideoutLifter_EventScript_ChooseFloor
	end

RocketHideoutLifter_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, RocketHideoutLifter_EventScript_5thFloor
	case 1, RocketHideoutLifter_EventScript_4thFloor
	case 2, RocketHideoutLifter_EventScript_3rdFloor
	case 3, RocketHideoutLifter_EventScript_2ndFloor
	case 4, RocketHideoutLifter_EventScript_1stFloor
	case 5, RocketHideoutLifter_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, RocketHideoutLifter_EventScript_ExitFloorSelect
	end

RocketHideoutLifter_EventScript_1stFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_ROCKET_HIDEOUT_F1, 25, 24
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideoutLifter_EventScript_ExitFloorSelect
	call RocketHideoutLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideoutLifter_EventScript_ExitFloorSelect
	end

RocketHideoutLifter_EventScript_2ndFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_ROCKET_HIDEOUT_F2, 29, 14
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, RocketHideoutLifter_EventScript_ExitFloorSelect
	call RocketHideoutLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto RocketHideoutLifter_EventScript_ExitFloorSelect
	end

RocketHideoutLifter_EventScript_3rdFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_ROCKET_HIDEOUT_F3, 23, 9
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, RocketHideoutLifter_EventScript_ExitFloorSelect
	call RocketHideoutLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto RocketHideoutLifter_EventScript_ExitFloorSelect
	end

RocketHideoutLifter_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_ROCKET_HIDEOUT_F4, 10, 5
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, RocketHideoutLifter_EventScript_ExitFloorSelect
	call RocketHideoutLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto RocketHideoutLifter_EventScript_ExitFloorSelect
	end

RocketHideoutLifter_EventScript_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
	setdynamicwarp MAP_ROCKET_HIDEOUT_F5, 6, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, RocketHideoutLifter_EventScript_ExitFloorSelect
	call RocketHideoutLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
	goto RocketHideoutLifter_EventScript_ExitFloorSelect
	end

RocketHideoutLifter_EventScript_ExitFloorSelect::
	special CloseDeptStoreElevatorWindow
	release
	end

RocketHideoutLifter_EventScript_MoveElevator::
	special CloseDeptStoreElevatorWindow
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	waitse
	special MoveElevator
	waitstate
	setflag FLAG_TEMP_2
	return

RocketHideoutLifter_EventScript_SetFloor::
	special SetDeptStoreFloor
	return

