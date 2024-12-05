.set LOCALID_HEAD_SCIENTIST, 3

ZoneA_Warehouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZoneA_Warehouse_1F_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ZoneA_Warehouse_1F_OnWarp
	.byte 0

ZoneA_Warehouse_1F_OnTransition:
	call_if_eq VAR_LAB_A_STATE, 1
	end

ZoneA_Warehouse_1F_OnFrame:
	map_script_2 VAR_LAB_A_STATE, 1, ZoneA_Warehouse_1F_EventScript_HeadScientistExplainMachine
	.2byte 0

ZoneA_Warehouse_1F_EventScript_HeadScientistExplainMachine::
	msgbox ZoneA_Warehouse_1F_Text_HeadScientistExplainMachine, MSGBOX_DEFAULT
	closemessage
	setvar VAR_LAB_A_STATE, 2
	end

ZoneA_Warehouse_1F_OnWarp:
	map_script_2 VAR_LAB_A_STATE, 1, ZoneA_Warehouse_1F_EventScript_FaceNorth
	.2byte 0

ZoneA_Warehouse_1F_EventScript_FaceNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

ZoneA_Warehouse_1F_Text_HeadScientistExplainMachine:
	.string "Those goons were here trying to\n"
	.string "steal our research.\p"
	.string "Luckily it looks like all our\n"
	.string "machinery is still here, but they\l"
	.string "took some of our research specimens.\p"
	.string "We've been working on a\n"
	.string "groundbreaking project that\l"
	.string "allows us to completely alter\l"
	.string "a POKéMON's typings!\p"
	.string "We call it the DELTA PROJECT.\p"
	.string "You might be the perfect person to\n"
	.string "help us with our research.\p"
	.string "If you could bring me some new\n"
	.string "test subjects we can let you keep\l"
	.string "the powerful modified POKéMON!\p"
	.string "Just check on the machine to\n"
	.string "your left for what conversions\l"
	.string "are available!$"

@ Delta Scientist
ZoneA_Warehouse_1F_EventScript_DeltaConverterScientist::
	lockall
	@ applymovement LOCALID_HEAD_SCIENTIST, Common_Movement_FacePlayer
	@ waitmovement 0
	msgbox ZoneA_Warehouse_1F_Text_DeltaMachineBootup, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, ZoneA_Warehouse_1F_EventScript_ConfirmDeltaConversion
	case NO, ZoneA_Warehouse_1F_EventScript_ExitMachine
	releaseall
	end

ZoneA_Warehouse_1F_EventScript_ConfirmDeltaConversion::
	msgbox ZoneA_Warehouse_1F_Text_ConfirmDeltaConversion, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, ZoneA_Warehouse_1F_EventScript_ChooseMonToConvert
	case NO, ZoneA_Warehouse_1F_EventScript_ExitMachine
	releaseall
	end

ZoneA_Warehouse_1F_EventScript_ChooseMonToConvert::
	msgbox ZoneA_Warehouse_1F_Text_SelectMon, MSGBOX_DEFAULT
	special ChoosePartyMonForDeltaMachine
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ZoneA_Warehouse_1F_EventScript_ExitMachine
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, ZoneA_Warehouse_1F_EventScript_ExitMachine
	fadescreen FADE_TO_BLACK
	special UpgradeToDeltaSpecies
	fadescreen FADE_FROM_BLACK
	releaseall
	end

ZoneA_Warehouse_1F_EventScript_ExitMachine::
	msgbox ZoneA_Warehouse_1F_Text_PoweringOff, MSGBOX_AUTOCLOSE
	return

ZoneA_Warehouse_1F_Text_DeltaMachineBootup:
	.string "> LOADING…\p"
	.string "> CURRENT AVAILABLE CONVERSIONS:\n"
	.string "> WURMPLE    > SILCOON\l"
	.string "> DUSTOX     > NINCADA\l"
	.string "> NINJASK    > SHEDINJA\l"
	.string "> SANDSHREW  > SANDSLASH\l"
	.string "> VENONAT    > VENOMOTH\l"
	.string "> GOLAT      > BEEDRILL\p"
	.string "> WOULD YOU LIKE TO PROCEED$"

ZoneA_Warehouse_1F_Text_ConfirmDeltaConversion:
	.string "> REMINDER: CONVERSION IS PERMANENT\n"
	.string "> ALL CURRENT MOVES WILL BE REPLACED\p"
	.string "> WOULD YOU LIKE TO PROCEED$"

ZoneA_Warehouse_1F_Text_SelectMon:
	.string "> SELECT POKéMON TO CONVERT$"

ZoneA_Warehouse_1F_Text_PoweringOff:
	.string "> POWERING OFF…$"

@ ARCO MEMBERS
ZoneA_Warehouse_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WAREHOUSE_A_1, ZoneA_Warehouse_1F_Text_SilentTreatment, ZoneA_Warehouse_1F_Text_SilentTreatment
	msgbox ZoneA_Warehouse_1F_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

ZoneA_Warehouse_1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WAREHOUSE_A_2, ZoneA_Warehouse_1F_Text_SilentTreatment, ZoneA_Warehouse_1F_Text_SilentTreatment
	msgbox ZoneA_Warehouse_1F_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

@ ZoneAlpha_Text_

ZoneA_Warehouse_1F_Text_SilentTreatment:
	.string "…$"
