TownOfTheSleepingCat_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TownOfTheSleepingCat_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TownOfTheSleepingCat_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_PICK_UP_MEI, TownOfTheSleepingCat_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

TownOfTheSleepingCat_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_LITTLEROOT_LEAVE, 0
	return


TOTSC_EventScript_HouseSign::
	lockall
	msgbox TOTSC_EventScript_HouseSign_Text_0
	releaseall
	return


TOTSC_EventScript_TownSign::
	lockall
	msgbox TOTSC_EventScript_TownSign_Text_0
	releaseall
	return


TOTSC_Trigger_BlockExit::
	lockall
	msgbox TOTSC_Trigger_BlockExit_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, StopEmily
	waitmovement 0
	releaseall
	return


setVarState::
	setvar VAR_LITTLEROOT_LEAVE, 0
	releaseall
	return


StopEmily:
	walk_up
	step_end

TOTSC_EventScript_HouseSign_Text_0:
	.string "Lin-Bolaris House$"

TOTSC_EventScript_TownSign_Text_0:
	.string "Town of the Sleeping Cat$"

TOTSC_Trigger_BlockExit_Text_0:
	.string "You can't leave on your own!$"
