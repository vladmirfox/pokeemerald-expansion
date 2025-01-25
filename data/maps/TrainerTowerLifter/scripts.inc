TrainerTowerLifter_MapScripts::
	.byte 0

TrainerTowerLifter_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, TrainerTowerLifter_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, TrainerTowerLifter_EventScript_ChooseFloorFrom5th
	case 1, TrainerTowerLifter_EventScript_ChooseFloorFrom4th
	case 2, TrainerTowerLifter_EventScript_ChooseFloorFrom3rd
	case 3, TrainerTowerLifter_EventScript_ChooseFloorFrom2nd
	case 4, TrainerTowerLifter_EventScript_ChooseFloorFrom1st
	end

@ Below scripts ensure the cursor for floor select always starts on the current floor
TrainerTowerLifter_EventScript_ChooseFloorFrom5th::
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto TrainerTowerLifter_EventScript_ChooseFloor
	end

TrainerTowerLifter_EventScript_ChooseFloorFrom4th::
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto TrainerTowerLifter_EventScript_ChooseFloor
	end

TrainerTowerLifter_EventScript_ChooseFloorFrom3rd::
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto TrainerTowerLifter_EventScript_ChooseFloor
	end

TrainerTowerLifter_EventScript_ChooseFloorFrom2nd::
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto TrainerTowerLifter_EventScript_ChooseFloor
	end

TrainerTowerLifter_EventScript_ChooseFloorFrom1st::
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto TrainerTowerLifter_EventScript_ChooseFloor
	end

TrainerTowerLifter_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, TrainerTowerLifter_EventScript_5thFloor
	case 1, TrainerTowerLifter_EventScript_4thFloor
	case 2, TrainerTowerLifter_EventScript_3rdFloor
	case 3, TrainerTowerLifter_EventScript_2ndFloor
	case 4, TrainerTowerLifter_EventScript_1stFloor
	case 5, TrainerTowerLifter_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, TrainerTowerLifter_EventScript_ExitFloorSelect
	end

TrainerTowerLifter_EventScript_1stFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_TRAINER_TOWER_F1, 15, 9
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, TrainerTowerLifter_EventScript_ExitFloorSelect
	call TrainerTowerLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto TrainerTowerLifter_EventScript_ExitFloorSelect
	end

TrainerTowerLifter_EventScript_2ndFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_TRAINER_TOWER2, 18, 3
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, TrainerTowerLifter_EventScript_ExitFloorSelect
	call TrainerTowerLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto TrainerTowerLifter_EventScript_ExitFloorSelect
	end

TrainerTowerLifter_EventScript_3rdFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_TRAINER_TOWER2, 21, 42
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, TrainerTowerLifter_EventScript_ExitFloorSelect
	call TrainerTowerLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto TrainerTowerLifter_EventScript_ExitFloorSelect
	end

TrainerTowerLifter_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_TRAINER_TOWER_F1, 12, 39
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, TrainerTowerLifter_EventScript_ExitFloorSelect
	call TrainerTowerLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto TrainerTowerLifter_EventScript_ExitFloorSelect
	end

TrainerTowerLifter_EventScript_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
	setdynamicwarp MAP_TRAINER_TOWER_ROOF, 15, 6
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, TrainerTowerLifter_EventScript_ExitFloorSelect
	call TrainerTowerLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
	goto TrainerTowerLifter_EventScript_ExitFloorSelect
	end

TrainerTowerLifter_EventScript_ExitFloorSelect::
	special CloseDeptStoreElevatorWindow
	release
	end

TrainerTowerLifter_EventScript_MoveElevator::
	special CloseDeptStoreElevatorWindow
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	waitse
	special MoveElevator
	waitstate
	setflag FLAG_TEMP_2
	return

TrainerTowerLifter_EventScript_SetFloor::
	special SetDeptStoreFloor
	return

