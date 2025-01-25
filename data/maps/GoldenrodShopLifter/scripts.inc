GoldenrodShopLifter_MapScripts::
	.byte 0

GoldenrodShopLifter_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, GoldenrodShopLifter_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, GoldenrodShopLifter_EventScript_ChooseFloorFrom5th
	case 1, GoldenrodShopLifter_EventScript_ChooseFloorFrom4th
	case 2, GoldenrodShopLifter_EventScript_ChooseFloorFrom3rd
	case 3, GoldenrodShopLifter_EventScript_ChooseFloorFrom2nd
	case 4, GoldenrodShopLifter_EventScript_ChooseFloorFrom1st
	end

@ Below scripts ensure the cursor for floor select always starts on the current floor
GoldenrodShopLifter_EventScript_ChooseFloorFrom5th::
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto GoldenrodShopLifter_EventScript_ChooseFloor
	end

GoldenrodShopLifter_EventScript_ChooseFloorFrom4th::
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto GoldenrodShopLifter_EventScript_ChooseFloor
	end

GoldenrodShopLifter_EventScript_ChooseFloorFrom3rd::
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto GoldenrodShopLifter_EventScript_ChooseFloor
	end

GoldenrodShopLifter_EventScript_ChooseFloorFrom2nd::
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto GoldenrodShopLifter_EventScript_ChooseFloor
	end

GoldenrodShopLifter_EventScript_ChooseFloorFrom1st::
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto GoldenrodShopLifter_EventScript_ChooseFloor
	end

GoldenrodShopLifter_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, GoldenrodShopLifter_EventScript_5thFloor
	case 1, GoldenrodShopLifter_EventScript_4thFloor
	case 2, GoldenrodShopLifter_EventScript_3rdFloor
	case 3, GoldenrodShopLifter_EventScript_2ndFloor
	case 4, GoldenrodShopLifter_EventScript_1stFloor
	case 5, GoldenrodShopLifter_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, GoldenrodShopLifter_EventScript_ExitFloorSelect
	end

GoldenrodShopLifter_EventScript_1stFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_GOLDENROD_SHOP_F1, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, GoldenrodShopLifter_EventScript_ExitFloorSelect
	call GoldenrodShopLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto GoldenrodShopLifter_EventScript_ExitFloorSelect
	end

GoldenrodShopLifter_EventScript_2ndFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_GOLDENROD_SHOP_F2, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, GoldenrodShopLifter_EventScript_ExitFloorSelect
	call GoldenrodShopLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto GoldenrodShopLifter_EventScript_ExitFloorSelect
	end

GoldenrodShopLifter_EventScript_3rdFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_GOLDENROD_F3, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, GoldenrodShopLifter_EventScript_ExitFloorSelect
	call GoldenrodShopLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto GoldenrodShopLifter_EventScript_ExitFloorSelect
	end

GoldenrodShopLifter_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_GOLDENROD_SHOP_F4, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, GoldenrodShopLifter_EventScript_ExitFloorSelect
	call GoldenrodShopLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto GoldenrodShopLifter_EventScript_ExitFloorSelect
	end

GoldenrodShopLifter_EventScript_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
	setdynamicwarp MAP_GOLDENROD_SHOP_F5, 2, 1
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, GoldenrodShopLifter_EventScript_ExitFloorSelect
	call GoldenrodShopLifter_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
	goto GoldenrodShopLifter_EventScript_ExitFloorSelect
	end

GoldenrodShopLifter_EventScript_ExitFloorSelect::
	special CloseDeptStoreElevatorWindow
	release
	end

GoldenrodShopLifter_EventScript_MoveElevator::
	special CloseDeptStoreElevatorWindow
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	waitse
	special MoveElevator
	waitstate
	setflag FLAG_TEMP_2
	return

GoldenrodShopLifter_EventScript_SetFloor::
	special SetDeptStoreFloor
	return

