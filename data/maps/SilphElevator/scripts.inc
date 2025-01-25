SilphElevator_MapScripts::
	.byte 0

SilphElevator_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, SilphElevator_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, SilphElevator_EventScript_ChooseFloorFrom5th
	case 1, SilphElevator_EventScript_ChooseFloorFrom4th
	case 2, SilphElevator_EventScript_ChooseFloorFrom3rd
	case 3, SilphElevator_EventScript_ChooseFloorFrom2nd
	case 4, SilphElevator_EventScript_ChooseFloorFrom1st
	end

@ Below scripts ensure the cursor for floor select always starts on the current floor
SilphElevator_EventScript_ChooseFloorFrom5th::
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto SilphElevator_EventScript_ChooseFloor
	end

SilphElevator_EventScript_ChooseFloorFrom4th::
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto SilphElevator_EventScript_ChooseFloor
	end

SilphElevator_EventScript_ChooseFloorFrom3rd::
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto SilphElevator_EventScript_ChooseFloor
	end

SilphElevator_EventScript_ChooseFloorFrom2nd::
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto SilphElevator_EventScript_ChooseFloor
	end

SilphElevator_EventScript_ChooseFloorFrom1st::
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto SilphElevator_EventScript_ChooseFloor
	end

SilphElevator_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, SilphElevator_EventScript_5thFloor
	case 1, SilphElevator_EventScript_4thFloor
	case 2, SilphElevator_EventScript_3rdFloor
	case 3, SilphElevator_EventScript_2ndFloor
	case 4, SilphElevator_EventScript_1stFloor
	case 5, SilphElevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, SilphElevator_EventScript_ExitFloorSelect
	end

SilphElevator_EventScript_1stFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_SILPH, 23, 3
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, SilphElevator_EventScript_ExitFloorSelect
	call SilphElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto SilphElevator_EventScript_ExitFloorSelect
	end

SilphElevator_EventScript_2ndFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_SILPH, 23, 37
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, SilphElevator_EventScript_ExitFloorSelect
	call SilphElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto SilphElevator_EventScript_ExitFloorSelect
	end

SilphElevator_EventScript_3rdFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_SILPH, 29, 70
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, SilphElevator_EventScript_ExitFloorSelect
	call SilphElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto SilphElevator_EventScript_ExitFloorSelect
	end

SilphElevator_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_SILPH_F1, 23, 3
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, SilphElevator_EventScript_ExitFloorSelect
	call SilphElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto SilphElevator_EventScript_ExitFloorSelect
	end

SilphElevator_EventScript_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
	setdynamicwarp MAP_SILPH_F1, 25, 35
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, SilphElevator_EventScript_ExitFloorSelect
	call SilphElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
	goto SilphElevator_EventScript_ExitFloorSelect
	end

SilphElevator_EventScript_ExitFloorSelect::
	special CloseDeptStoreElevatorWindow
	release
	end

SilphElevator_EventScript_MoveElevator::
	special CloseDeptStoreElevatorWindow
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	waitse
	special MoveElevator
	waitstate
	setflag FLAG_TEMP_2
	return

SilphElevator_EventScript_SetFloor::
	special SetDeptStoreFloor
	return

