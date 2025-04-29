TestCell_PT_A3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestCell_PT_A3_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestCell_PT_A3_OnFrame
	.byte 0

TestCell_PT_A3_OnFrame:
	map_script_2 VAR_PROVING_TRIAL_STATE, 2, TestCell_PT_A3_EventScript_EnterPT
	.2byte 0

TestCell_PT_A3_EventScript_EnterPT::
	lockall
	setvar VAR_PROVING_TRIAL_STATE, 0
	releaseall
	end

TestCell_PT_A3_OnTransition:
	special EnterPTMode
	call_if_eq VAR_PROVING_TRIAL_STATE, 2, TestCell_PT_A3_EventScript_SetExit
	end

TestCell_PT_A3_EventScript_SetExit::
	setvar VAR_PROVING_TRIAL_STATE, 1
	special ExitPTMode
	warpdoor MAP_TEST_CELL_INTERIOR, 7, 1
	setflag FLAG_PT_STARTER
	waitstate
	end
