TestCell_PT_A1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestCell_PT_A1_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestCell_PT_A1_OnFrame
	.byte 0

TestCell_PT_A1_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, TestCell_PT_A1_EventScript_EnterPT
	.2byte 0

TestCell_PT_A1_EventScript_EnterPT::
	lockall
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 0
	releaseall
	end

TestCell_PT_A1_OnTransition:
	call_if_eq VAR_SAFARI_ZONE_STATE, 2, TestCell_PT_A1_EventScript_SetExit
	end

TestCell_PT_A1_EventScript_SetExit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	setvar VAR_PROVING_TRIAL_STATE, 4
	setflag FLAG_PT_STARTER
	special ExitSafariMode
	warpdoor MAP_TEST_CELL_INTERIOR, 7, 1
	waitstate
	end
