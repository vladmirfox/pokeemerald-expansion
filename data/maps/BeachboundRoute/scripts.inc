BeachboundRoute_MapScripts::
# 7 "data/maps/BeachboundRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BeachboundRoute_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BeachboundRoute_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/BeachboundRoute/scripts.pory"
	call BeachboundRoute_EventScript_TimeBasedEvents
	return


BeachboundRoute_EventScript_TimeBasedEvents::
# 13 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/BeachboundRoute/scripts.pory"
	gettimeofday
# 16 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne BeachboundRoute_EventScript_TimeBasedEvents_1
	return

BeachboundRoute_EventScript_TimeBasedEvents_1:
# 17 "data/maps/BeachboundRoute/scripts.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_EventScript_RunningBoy::
# 22 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_RunningBoy_Text_0
# 23 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_RunningBoy_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_AnnoyedGirl::
# 30 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_AnnoyedGirl_Text_0
# 31 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedGirl_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_AnnoyedBoy::
# 37 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_AnnoyedBoy_Text_0
# 38 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedBoy_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_Hoppip::
# 45 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 46 "data/maps/BeachboundRoute/scripts.pory"
	faceplayer
# 47 "data/maps/BeachboundRoute/scripts.pory"
	ismonseen SPECIES_HOPPIP
# 48 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BeachboundRoute_EventScript_Hoppip_2
# 51 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Hoppip_Text_1
BeachboundRoute_EventScript_Hoppip_1:
# 53 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Hoppip_Text_2
# 56 "data/maps/BeachboundRoute/scripts.pory"
	playmoncry SPECIES_HOPPIP, CRY_MODE_NORMAL
# 57 "data/maps/BeachboundRoute/scripts.pory"
	waitmoncry
# 58 "data/maps/BeachboundRoute/scripts.pory"
	release
	end

BeachboundRoute_EventScript_Hoppip_2:
# 49 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Hoppip_Text_0
	goto BeachboundRoute_EventScript_Hoppip_1


BeachboundRoute_EventScript_Wooloo::
# 64 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 65 "data/maps/BeachboundRoute/scripts.pory"
	faceplayer
# 66 "data/maps/BeachboundRoute/scripts.pory"
	ismonseen SPECIES_WOOLOO
# 67 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BeachboundRoute_EventScript_Wooloo_2
# 70 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Wooloo_Text_1
BeachboundRoute_EventScript_Wooloo_1:
# 72 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Wooloo_Text_2
# 75 "data/maps/BeachboundRoute/scripts.pory"
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
# 76 "data/maps/BeachboundRoute/scripts.pory"
	waitmoncry
# 77 "data/maps/BeachboundRoute/scripts.pory"
	release
	end

BeachboundRoute_EventScript_Wooloo_2:
# 68 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Wooloo_Text_0
	goto BeachboundRoute_EventScript_Wooloo_1


BeachboundRoute_EventScript_Shepherd::
# 82 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Shepherd_Text_0
# 83 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Shepherd_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_Karu::
# 89 "data/maps/BeachboundRoute/scripts.pory"
	trainerbattle_single TRAINER_KARU, BeachboundRoute_EventScript_Karu_Text_0, BeachboundRoute_EventScript_Karu_Text_1, BeachboundRoute_EventScript_Karu_PostBattle
# 95 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Karu_Text_2
# 96 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Karu_Text_3, MSGBOX_AUTOCLOSE
	end


BeachboundRoute_EventScript_Karu_PostBattle::
# 101 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_5
# 102 "data/maps/BeachboundRoute/scripts.pory"
	removeobject 10
	return


BeachboundRoute_EventScript_Kin::
# 107 "data/maps/BeachboundRoute/scripts.pory"
	trainerbattle_single TRAINER_KIN_1, BeachboundRoute_EventScript_Kin_Text_0, BeachboundRoute_EventScript_Kin_Text_1
# 112 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Kin_Text_2
# 113 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Kin_Text_3, MSGBOX_AUTOCLOSE
	end


BeachboundRoute_EventScript_RunningBoy_Text_0:
# 22 "data/maps/BeachboundRoute/scripts.pory"
	.string "Little boy$"

BeachboundRoute_EventScript_RunningBoy_Text_1:
# 24 "data/maps/BeachboundRoute/scripts.pory"
	.string "Running running running!!\p"
	.string "Yaaaaaaaay!!!$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_0:
# 30 "data/maps/BeachboundRoute/scripts.pory"
	.string "Annoyed girl$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_1:
# 32 "data/maps/BeachboundRoute/scripts.pory"
	.string "I wish that kid would leave…$"

BeachboundRoute_EventScript_AnnoyedBoy_Text_0:
# 37 "data/maps/BeachboundRoute/scripts.pory"
	.string "Annoyed boy$"

BeachboundRoute_EventScript_AnnoyedBoy_Text_1:
# 39 "data/maps/BeachboundRoute/scripts.pory"
	.string "I brought my date to the Lover's\n"
	.string "Meadow, but I kind of thought we'd be\l"
	.string "alone…$"

BeachboundRoute_EventScript_Hoppip_Text_0:
# 49 "data/maps/BeachboundRoute/scripts.pory"
	.string "Hoppip$"

BeachboundRoute_EventScript_Hoppip_Text_1:
# 51 "data/maps/BeachboundRoute/scripts.pory"
	.string "Leafy cat$"

BeachboundRoute_EventScript_Hoppip_Text_2:
# 54 "data/maps/BeachboundRoute/scripts.pory"
	.string "Pip!$"

BeachboundRoute_EventScript_Wooloo_Text_0:
# 68 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wooloo$"

BeachboundRoute_EventScript_Wooloo_Text_1:
# 70 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wool ball$"

BeachboundRoute_EventScript_Wooloo_Text_2:
# 73 "data/maps/BeachboundRoute/scripts.pory"
	.string "Bah…$"

BeachboundRoute_EventScript_Shepherd_Text_0:
# 82 "data/maps/BeachboundRoute/scripts.pory"
	.string "Shepherd$"

BeachboundRoute_EventScript_Shepherd_Text_1:
# 84 "data/maps/BeachboundRoute/scripts.pory"
	.string "I bring my Wooloo here to graze\n"
	.string "everyday.$"

BeachboundRoute_EventScript_Karu_Text_0:
# 91 "data/maps/BeachboundRoute/scripts.pory"
	.string "Please allow me to introduce you to\n"
	.string "your own defeat!$"

BeachboundRoute_EventScript_Karu_Text_1:
# 92 "data/maps/BeachboundRoute/scripts.pory"
	.string "N-nice to meet you…$"

BeachboundRoute_EventScript_Karu_Text_2:
# 95 "data/maps/BeachboundRoute/scripts.pory"
	.string "Karu$"

BeachboundRoute_EventScript_Karu_Text_3:
# 96 "data/maps/BeachboundRoute/scripts.pory"
	.string "You wiped me away there. How long\n"
	.string "have you been a wielder?$"

BeachboundRoute_EventScript_Kin_Text_0:
# 109 "data/maps/BeachboundRoute/scripts.pory"
	.string "I run several hours everyday! You\n"
	.string "literally cannot defeat me!$"

BeachboundRoute_EventScript_Kin_Text_1:
# 110 "data/maps/BeachboundRoute/scripts.pory"
	.string "Ow! I pulled a muscle!$"

BeachboundRoute_EventScript_Kin_Text_2:
# 112 "data/maps/BeachboundRoute/scripts.pory"
	.string "Kin$"

BeachboundRoute_EventScript_Kin_Text_3:
# 113 "data/maps/BeachboundRoute/scripts.pory"
	.string "You really don't look strong at all,\n"
	.string "and yet…$"
