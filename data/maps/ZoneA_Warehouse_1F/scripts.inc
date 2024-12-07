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
	msgbox ZoneA_Warehouse_1F_Text_Loading, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DELTA_MACHINE_MENU, FALSE
	@ closemessage
	switch VAR_RESULT
	case 0, ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	case 1, ZoneA_Warehouse_1F_EventScript_ConfirmDeltaConversion
	case 2, ZoneA_Warehouse_1F_EventScript_ExitMachine
	releaseall
	end

ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo::
	msgbox ZoneA_Warehouse_1F_Text_AvailableConversions, MSGBOX_DEFAULT
	@ .macro multichoicegrid x:req, y:req, multichoiceId:req, per_row:req, ignoreBPress:req
	multichoicegrid 0, 0, MULTI_LAB_A_DELTAS, 2, FALSE
	@ closemessage
	switch VAR_RESULT
	case 0, EventScript_WurmpleData
	case 1, EventScript_VenonatData
	case 2, EventScript_SilcoonData
	case 3, EventScript_WhismurData
	case 4, EventScript_SandslashData
	case 5, EventScript_DustoxData
	case 6, EventScript_LaironData
	case 7, EventScript_FearowData
	case 8, EventScript_BeedrillData
	case 9, EventScript_ShedinjaData
	goto ZoneA_Warehouse_1F_EventScript_DeltaConverterScientist
	end

EventScript_WurmpleData::
	showmonpic SPECIES_WURMPLE_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_WurmpleData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_VenonatData::
	showmonpic SPECIES_VENONAT_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_VenonatData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_SilcoonData::
	showmonpic SPECIES_SILCOON_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_SilcoonData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_WhismurData::
	showmonpic SPECIES_SILCOON_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_WhismurData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end
	
EventScript_SandslashData::
	showmonpic SPECIES_SANDSLASH_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_SandslashData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_DustoxData::
	showmonpic SPECIES_DUSTOX_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_DustoxData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_LaironData::
	showmonpic SPECIES_LAIRON_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_LaironData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_FearowData::
	showmonpic SPECIES_FEAROW_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_FearowData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_BeedrillData::
	showmonpic SPECIES_BEEDRILL_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_BeedrillData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

EventScript_ShedinjaData::
	showmonpic SPECIES_SHEDINJA_DELTA, 10, 3
	msgbox ZoneA_Warehouse_1F_Text_ShedinjaData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto ZoneA_Warehouse_1F_EventScript_DeltaMachineInfo
	end

    @ {gText_Wurmple},
    @ {gText_Venonat},
    @ {gText_Silcoon},
    @ {gText_Whismur},
    @ {gText_Sandslash},
    @ {gText_Dustox},
    @ {gText_Lairon},
    @ {gText_Fearow},
    @ {gText_Beedrill},
    @ {gText_Shedinja},

ZoneA_Warehouse_1F_EventScript_DeltaMachineConvert::
	end

ZoneA_Warehouse_1F_Text_AvailableConversions:
	.string "> CONVERSIONS INFO$"

ZoneA_Warehouse_1F_Text_WurmpleData:
	.string "> WURMPLE δ\n"
	.string "> TYPE: DRAGON$"

ZoneA_Warehouse_1F_Text_VenonatData:
	.string "> VENONAT δ\n"
	.string "> TYPE: FAIRY / POISON$"

ZoneA_Warehouse_1F_Text_SilcoonData:
	.string "> SILCOON δ\n"
	.string "> TYPE: GROUND$"

ZoneA_Warehouse_1F_Text_WhismurData:
	.string "> WHISMUR δ\n"
	.string "> TYPE: POISON$"

ZoneA_Warehouse_1F_Text_SandslashData:
	.string "> SANDSLASH δ\n"
	.string "> TYPE: FIGHTING$"

ZoneA_Warehouse_1F_Text_DustoxData:
	.string "> DUSTOX δ\n"
	.string "> TYPE: FIRE / POISON$"

ZoneA_Warehouse_1F_Text_LaironData:
	.string "> LAIRON δ\n"
	.string "> TYPE: ICE / ROCK$"

ZoneA_Warehouse_1F_Text_FearowData:
	.string "> FEAROW δ\n"
	.string "> TYPE: DARK / POISON$"

ZoneA_Warehouse_1F_Text_BeedrillData:
	.string "> BEEDRILL δ\n"
	.string "> TYPE: FIGHTING / POISON$"

ZoneA_Warehouse_1F_Text_ShedinjaData:
	.string "> SHEDINJA δ\n"
	.string "> TYPE: FAIRY / GHOST$"

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

ZoneA_Warehouse_1F_Text_Loading:
	.string "> LOADING…\p"
	.string "> SELECT OPTION$"

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
