ZoneAlpha_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZoneAlpha_OnFrame
	.byte 0

ZoneAlpha_OnFrame:
	map_script_2 VAR_LAB_A_STATE, 2, ZoneAlpha_EventScript_WallyReturnToPetalburgCall
	.2byte 0

ZoneAlpha_EventScript_WallyReturnToPetalburgCall::
	lockall
	pokenavcall ZoneAlpha_Text_WallyPokenavCall
	waitmessage
	setvar VAR_LAB_A_STATE, 3
	setvar VAR_PETALBURG_CITY_STATE, 3
	clearflag FLAG_HIDE_PETALBURG_CITY_DAD
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
	end

ZoneAlpha_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_ZONE_ALPHA_1, ZoneAlpha_Text_SilentTreatment, ZoneAlpha_Text_SilentTreatment
	msgbox ZoneAlpha_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

ZoneAlpha_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_ZONE_ALPHA_2, ZoneAlpha_Text_SilentTreatment, ZoneAlpha_Text_SilentTreatment
	msgbox ZoneAlpha_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

ZoneAlpha_Text_SilentTreatment:
	.string "…$"

ZoneAlpha_Text_WallyPokenavCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "WALLY: {PLAYER}!\p"
	.string "I heard you chased out TEAM ARCO\n"
	.string "from the LAB! Great job!\p"
	.string "Head on back to PETALBURG when\n"
	.string "you get a chance, your dad and I\l"
	.string "have a thank you gift for you!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"
