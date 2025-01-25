CeladonDeptElevator_MapScripts::
	.byte 0


CeladonDeptElevator_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, CeladonDeptElevator_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, CeladonDeptElevator_EventScript_ChooseFloorFrom5th
	case 1, CeladonDeptElevator_EventScript_ChooseFloorFrom4th
	case 2, CeladonDeptElevator_EventScript_ChooseFloorFrom3rd
	case 3, CeladonDeptElevator_EventScript_ChooseFloorFrom2nd
	case 4, CeladonDeptElevator_EventScript_ChooseFloorFrom1st
	end

@ Below scripts ensure the cursor for floor select always starts on the current floor
CeladonDeptElevator_EventScript_ChooseFloorFrom5th::
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto CeladonDeptElevator_EventScript_ChooseFloor
	end

CeladonDeptElevator_EventScript_ChooseFloorFrom4th::
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto CeladonDeptElevator_EventScript_ChooseFloor
	end

CeladonDeptElevator_EventScript_ChooseFloorFrom3rd::
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto CeladonDeptElevator_EventScript_ChooseFloor
	end

CeladonDeptElevator_EventScript_ChooseFloorFrom2nd::
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto CeladonDeptElevator_EventScript_ChooseFloor
	end

CeladonDeptElevator_EventScript_ChooseFloorFrom1st::
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto CeladonDeptElevator_EventScript_ChooseFloor
	end

CeladonDeptElevator_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, CeladonDeptElevator_EventScript_5thFloor
	case 1, CeladonDeptElevator_EventScript_4thFloor
	case 2, CeladonDeptElevator_EventScript_3rdFloor
	case 3, CeladonDeptElevator_EventScript_2ndFloor
	case 4, CeladonDeptElevator_EventScript_1stFloor
	case 5, CeladonDeptElevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, CeladonDeptElevator_EventScript_ExitFloorSelect
	end

CeladonDeptElevator_EventScript_1stFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_CELADON_DEPT_F1, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, CeladonDeptElevator_EventScript_ExitFloorSelect
	call CeladonDeptElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto CeladonDeptElevator_EventScript_ExitFloorSelect
	end

CeladonDeptElevator_EventScript_2ndFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_CELADON_DEPT_F2, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, CeladonDeptElevator_EventScript_ExitFloorSelect
	call CeladonDeptElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto CeladonDeptElevator_EventScript_ExitFloorSelect
	end

CeladonDeptElevator_EventScript_3rdFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_CELADON_DEPT, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, CeladonDeptElevator_EventScript_ExitFloorSelect
	call CeladonDeptElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto CeladonDeptElevator_EventScript_ExitFloorSelect
	end

CeladonDeptElevator_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_CELADON_DEPT_F4, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, CeladonDeptElevator_EventScript_ExitFloorSelect
	call CeladonDeptElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto CeladonDeptElevator_EventScript_ExitFloorSelect
	end

CeladonDeptElevator_EventScript_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
	setdynamicwarp MAP_CELADON_DEPT_F5, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, CeladonDeptElevator_EventScript_ExitFloorSelect
	call CeladonDeptElevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
	goto CeladonDeptElevator_EventScript_ExitFloorSelect
	end

CeladonDeptElevator_EventScript_ExitFloorSelect::
	special CloseDeptStoreElevatorWindow
	release
	end

CeladonDeptElevator_EventScript_MoveElevator::
	special CloseDeptStoreElevatorWindow
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	waitse
	special MoveElevator
	waitstate
	setflag FLAG_TEMP_2
	return

CeladonDeptElevator_EventScript_SetFloor::
	special SetDeptStoreFloor
	return

