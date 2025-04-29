TestCellInterior_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, TestCellInterior_MapScript_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestCellInterior_MapScript_OnFrame
	.byte 0

TestCellInterior_MapScript_OnLoad::
	map_script_2 VAR_PROVING_TRIAL_STATE, 0, TestCellInterior_EventScript_DoPT
	.2byte 0 

TestCellInterior_MapScript_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, TestCell_PT_EventScript_ExitPT
	.2byte 0

TestCell_PT_EventScript_ExitPT::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TestCell_PT_Movement_ExitPT
	waitmovement 0
	setvar VAR_SAFARI_ZONE_STATE, 0
	special ExitSafariMode
	releaseall
	end

//TestCellInterior_EventScript_DoPT::
//	goto_if_unset FLAG_PT_STARTER, TestCellInterior_EventScript_StartPT
//	goto_if_set FLAG_PT_STARTER, TestCellInterior_EventScript_EndPT
//	end

TestCellInterior_EventScript_DoPT::
	compare VAR_PROVING_TRIAL_STATE, 0
	goto_if_eq TestCellInterior_EventScript_StartPT
	compare VAR_PROVING_TRIAL_STATE, 1
	goto_if_eq TestCellInterior_EventScript_DuringPT1
	compare VAR_PROVING_TRIAL_STATE, 2
	goto_if_eq TestCellInterior_EventScript_DuringPT2
	compare VAR_PROVING_TRIAL_STATE, 3
	goto_if_eq TestCellInterior_EventScript_GoToPT
	compare VAR_PROVING_TRIAL_STATE, 4
	goto_if_eq TestCellInterior_EventScript_EndPT
	end

TestCellInterior_EventScript_StartPT::
	lockall
	msgbox ElderLi_Text_Greetings, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, DuringPT_Movement_MoveUp
	waitmovement 0
	setvar VAR_PROVING_TRIAL_STATE, 2
	releaseall
	end

TestCellInterior_EventScript_DuringPT1::
	lockall
	//msgbox DuringPT1_Text_Stop, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, DuringPT_Movement_Stop
	waitmovement 0
	releaseall
	end

TestCellInterior_EventScript_DuringPT2::
	lockall
	msgbox ElderLi_Text_AreReady, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, TestCellInterior_EventScript_RejectPT
	case YES, TestCellInterior_EventScript_GoToPT
	case MULTI_B_PRESSED, TestCellInterior_EventScript_RejectPT
	releaseall
	end

TestCellInterior_EventScript_GoToPT::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, DuringPT_Movement_MoveUp
	waitmovement 0
	releaseall
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 0
	warp MAP_TEST_CELL_PT_A1, 14, 1
	waitstate
	end

TestCellInterior_EventScript_AcceptPT::
	lockall
	setvar VAR_PROVING_TRIAL_STATE, 3
	releaseall
	end

TestCellInterior_EventScript_RejectPT::
	lockall
	msgbox ElderLi_Text_TooBad, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, DuringPT_Movement_RejectPT
	waitmovement 0
	releaseall
	end

TestCellInterior_EventScript_EndPT::
	lockall
	msgbox ElderLi_Text_Congrats, MSGBOX_DEFAULT
	releaseall
	end

TestCellInterior_EventScript_EnterPT::
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 0
	warp MAP_TEST_CELL_PT_A1, 14, 1
	waitstate
	end

TestCell_PT_Movement_ExitPT:
	face_down
	walk_down
	walk_down
	walk_down
	step_end

TestCell_EventScript_ElderLi::
	lockall
	applymovement 1, ElderLi_Movement
	msgbox ElderLi_Text_Greetings, MSGBOX_DEFAULT
	waitmovement 1
	releaseall
	end

TestCell_EventScript_Asp1::
	lockall
	applymovement 3, Asp_Movement
	msgbox Asp1_Text_Starter, MSGBOX_DEFAULT
	waitmovement 3
	releaseall
	end

TestCell_EventScript_Asp2::
	lockall
	applymovement 5, Asp_Movement
	msgbox Asp2_Text_Starter, MSGBOX_DEFAULT
	waitmovement 5
	releaseall
	end

TestCell_EventScript_Asp3::
	lockall
	applymovement 4, Asp_Movement
	msgbox Asp3_Text_Starter, MSGBOX_DEFAULT
	waitmovement 4
	releaseall
	end

TestCellInterior_EventScript_BrailleSign1::
	lockall
	braillemsgbox TestCellInterior_Text_BrailleSign1
	releaseall
	end

TestCellInterior_EventScript_BrailleSign2::
	lockall
	braillemsgbox TestCellInterior_Text_BrailleSign2
	releaseall
	end

ElderLi_Text_Greetings::
	.string "Welcome Aspirants!\n"
	.string "Today you shall take part in the\l"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Proving Trial{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} whereupon you will be\l"
	.string "given the basic tools of a Trainer.\p"
	.string "Balls, Rod and Shoes shall be provided\n"
	.string "BUT only those of you who prove capable\l"
	.string "of Passing the Trial shall be deemed\l"
	.string "Worthy of a Pokedex.$"

TestCellInterior_Text_BrailleSign1:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "SEEK THE\n"
	.braille "DAO OF\n"
	.braille "DRAGONS!!!$"

TestCellInterior_Text_BrailleSign2:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "DISOWN THE DAO\n"
	.braille "BE DISOWNED\n"
	.braille "IN TURN BY US$"

Asp1_Text_Starter::
	.string "What do you think the Signs on the wall\n are talking about?$"

Asp2_Text_Starter::
	.string "W-Will I do the Clan proud?\nA-Am I worthy of the Clans resources?.....$"

Asp3_Text_Starter::
	.string "Can we get this over with Old Man!?$"

DuringPT1_Text_Stop::
	.string "Stop!!! You MUST participate in the\nProving Trial before you leave.$"

ElderLi_Text_AreReady::
	.string "Are you ready for your Trial?$"

ElderLi_Text_TooBad::
	.string "What!? How dare you refuse this Honor!$"

ElderLi_Text_Congrats::
	.string "Well done! {PLAYER} you have\nbrought back a Starter!$"

ElderLi_Movement::
	face_player
	step_end

Asp_Movement::
	face_player
	step_end

DuringPT_Movement_RejectPT::
	face_down
	walk_down
	step_end

DuringPT_Movement_MoveUp::
	walk_up
	step_end

DuringPT_Movement_Stop::
	face_up
	walk_up
	walk_up
	step_end

