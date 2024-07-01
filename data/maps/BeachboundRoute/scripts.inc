BeachboundRoute_MapScripts::
# 8 "data/maps/BeachboundRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BeachboundRoute_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BeachboundRoute_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/BeachboundRoute/scripts.pory"
	call BeachboundRoute_EventScript_TimeBasedEvents
	return


BeachboundRoute_EventScript_TimeBasedEvents::
# 14 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_7
# 17 "data/maps/BeachboundRoute/scripts.pory"
	gettimeofday
# 18 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne BeachboundRoute_EventScript_TimeBasedEvents_2
BeachboundRoute_EventScript_TimeBasedEvents_1:
# 22 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne BeachboundRoute_EventScript_TimeBasedEvents_5
	return

BeachboundRoute_EventScript_TimeBasedEvents_2:
# 19 "data/maps/BeachboundRoute/scripts.pory"
	clearflag FLAG_TEMP_6
	goto BeachboundRoute_EventScript_TimeBasedEvents_1

BeachboundRoute_EventScript_TimeBasedEvents_4:
# 23 "data/maps/BeachboundRoute/scripts.pory"
	clearflag FLAG_TEMP_7
	return

BeachboundRoute_EventScript_TimeBasedEvents_5:
# 22 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_ne BeachboundRoute_EventScript_TimeBasedEvents_4
	return


BeachboundRoute_EventScript_RunningBoy::
# 28 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_RunningBoy_Text_0
# 29 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_RunningBoy_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_RunningGirl::
# 36 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_RunningGirl_Text_0
# 37 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_RunningGirl_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_AnnoyedGirl::
# 43 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_AnnoyedGirl_Text_0
# 44 "data/maps/BeachboundRoute/scripts.pory"
	goto_if_set FLAG_TEMP_7, BeachboundRoute_EventScript_AnnoyedGirl_1
# 49 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedGirl_Text_2, MSGBOX_NPC
	return

BeachboundRoute_EventScript_AnnoyedGirl_1:
# 45 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedGirl_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_AnnoyedBoy::
# 56 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_AnnoyedBoy_Text_0
# 57 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedBoy_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_Hoppip::
# 64 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 65 "data/maps/BeachboundRoute/scripts.pory"
	faceplayer
# 66 "data/maps/BeachboundRoute/scripts.pory"
	ismonseen SPECIES_HOPPIP
# 67 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BeachboundRoute_EventScript_Hoppip_2
# 70 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Hoppip_Text_1
BeachboundRoute_EventScript_Hoppip_1:
# 72 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Hoppip_Text_2
# 75 "data/maps/BeachboundRoute/scripts.pory"
	playmoncry SPECIES_HOPPIP, CRY_MODE_NORMAL
# 76 "data/maps/BeachboundRoute/scripts.pory"
	waitmoncry
# 77 "data/maps/BeachboundRoute/scripts.pory"
	release
	end

BeachboundRoute_EventScript_Hoppip_2:
# 68 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Hoppip_Text_0
	goto BeachboundRoute_EventScript_Hoppip_1


BeachboundRoute_EventScript_Wooloo::
# 83 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 84 "data/maps/BeachboundRoute/scripts.pory"
	faceplayer
# 85 "data/maps/BeachboundRoute/scripts.pory"
	ismonseen SPECIES_WOOLOO
# 86 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BeachboundRoute_EventScript_Wooloo_2
# 89 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Wooloo_Text_1
BeachboundRoute_EventScript_Wooloo_1:
# 91 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Wooloo_Text_2
# 94 "data/maps/BeachboundRoute/scripts.pory"
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
# 95 "data/maps/BeachboundRoute/scripts.pory"
	waitmoncry
# 96 "data/maps/BeachboundRoute/scripts.pory"
	release
	end

BeachboundRoute_EventScript_Wooloo_2:
# 87 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Wooloo_Text_0
	goto BeachboundRoute_EventScript_Wooloo_1


BeachboundRoute_EventScript_Shepherd::
# 101 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Shepherd_Text_0
# 102 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Shepherd_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_Karu::
# 108 "data/maps/BeachboundRoute/scripts.pory"
	trainerbattle_single TRAINER_KARU, BeachboundRoute_EventScript_Karu_Text_0, BeachboundRoute_EventScript_Karu_Text_1, BeachboundRoute_EventScript_Karu_PostBattle
# 114 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Karu_Text_2
# 115 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Karu_Text_3, MSGBOX_AUTOCLOSE
	end


BeachboundRoute_EventScript_Karu_PostBattle::
# 120 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_5
# 121 "data/maps/BeachboundRoute/scripts.pory"
	removeobject 10
	return


BeachboundRoute_EventScript_Kin::
# 126 "data/maps/BeachboundRoute/scripts.pory"
	trainerbattle_single TRAINER_KIN_1, BeachboundRoute_EventScript_Kin_Text_0, BeachboundRoute_EventScript_Kin_Text_1
# 131 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Kin_Text_2
# 132 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Kin_Text_3, MSGBOX_AUTOCLOSE
	end


BeachboundRoute_EventScript_RunningBoy_Text_0:
# 28 "data/maps/BeachboundRoute/scripts.pory"
	.string "Little boy$"

BeachboundRoute_EventScript_RunningBoy_Text_1:
# 30 "data/maps/BeachboundRoute/scripts.pory"
	.string "Running running running!!\p"
	.string "Yaaaaaaaay!!!$"

BeachboundRoute_EventScript_RunningGirl_Text_0:
# 36 "data/maps/BeachboundRoute/scripts.pory"
	.string "Little girl$"

BeachboundRoute_EventScript_RunningGirl_Text_1:
# 38 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wait for me!! It's not fair!!!$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_0:
# 43 "data/maps/BeachboundRoute/scripts.pory"
	.string "Annoyed girl$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_1:
# 46 "data/maps/BeachboundRoute/scripts.pory"
	.string "Hum… Could you maybe, like, leave?$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_2:
# 50 "data/maps/BeachboundRoute/scripts.pory"
	.string "I wish those kids would leave…$"

BeachboundRoute_EventScript_AnnoyedBoy_Text_0:
# 56 "data/maps/BeachboundRoute/scripts.pory"
	.string "Annoyed boy$"

BeachboundRoute_EventScript_AnnoyedBoy_Text_1:
# 58 "data/maps/BeachboundRoute/scripts.pory"
	.string "I brought my date to the Lover's\n"
	.string "Meadow, but I kind of thought we'd be\l"
	.string "alone…$"

BeachboundRoute_EventScript_Hoppip_Text_0:
# 68 "data/maps/BeachboundRoute/scripts.pory"
	.string "Hoppip$"

BeachboundRoute_EventScript_Hoppip_Text_1:
# 70 "data/maps/BeachboundRoute/scripts.pory"
	.string "Leafy cat$"

BeachboundRoute_EventScript_Hoppip_Text_2:
# 73 "data/maps/BeachboundRoute/scripts.pory"
	.string "Pip!$"

BeachboundRoute_EventScript_Wooloo_Text_0:
# 87 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wooloo$"

BeachboundRoute_EventScript_Wooloo_Text_1:
# 89 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wool ball$"

BeachboundRoute_EventScript_Wooloo_Text_2:
# 92 "data/maps/BeachboundRoute/scripts.pory"
	.string "Bah…$"

BeachboundRoute_EventScript_Shepherd_Text_0:
# 101 "data/maps/BeachboundRoute/scripts.pory"
	.string "Shepherd$"

BeachboundRoute_EventScript_Shepherd_Text_1:
# 103 "data/maps/BeachboundRoute/scripts.pory"
	.string "I bring my Wooloo here to graze\n"
	.string "everyday.$"

BeachboundRoute_EventScript_Karu_Text_0:
# 110 "data/maps/BeachboundRoute/scripts.pory"
	.string "Please allow me to introduce you to\n"
	.string "your own defeat!$"

BeachboundRoute_EventScript_Karu_Text_1:
# 111 "data/maps/BeachboundRoute/scripts.pory"
	.string "N-nice to meet you…$"

BeachboundRoute_EventScript_Karu_Text_2:
# 114 "data/maps/BeachboundRoute/scripts.pory"
	.string "Karu$"

BeachboundRoute_EventScript_Karu_Text_3:
# 115 "data/maps/BeachboundRoute/scripts.pory"
	.string "You wiped me away there. How long\n"
	.string "have you been a wielder?$"

BeachboundRoute_EventScript_Kin_Text_0:
# 128 "data/maps/BeachboundRoute/scripts.pory"
	.string "I run several hours everyday! You\n"
	.string "literally cannot defeat me!$"

BeachboundRoute_EventScript_Kin_Text_1:
# 129 "data/maps/BeachboundRoute/scripts.pory"
	.string "Ow! I pulled a muscle!$"

BeachboundRoute_EventScript_Kin_Text_2:
# 131 "data/maps/BeachboundRoute/scripts.pory"
	.string "Kin$"

BeachboundRoute_EventScript_Kin_Text_3:
# 132 "data/maps/BeachboundRoute/scripts.pory"
	.string "You really don't look strong at all,\n"
	.string "and yet…$"
