BeachboundRoute_NPCSchedule::
# 16 "data/scripts/schedule/routes.pory"
	setflag FLAG_TEMP_6
# 17 "data/scripts/schedule/routes.pory"
	setflag FLAG_TEMP_7
# 18 "data/scripts/schedule/routes.pory"
	gettimeofday
# 19 "data/scripts/schedule/routes.pory"
	switch VAR_0x8000
# 20 "data/scripts/schedule/routes.pory"
	case 0, BeachboundRoute_NPCSchedule_2
# 22 "data/scripts/schedule/routes.pory"
	case 1, BeachboundRoute_NPCSchedule_3
# 24 "data/scripts/schedule/routes.pory"
	case 2, BeachboundRoute_NPCSchedule_4
# 26 "data/scripts/schedule/routes.pory"
	case 3, BeachboundRoute_NPCSchedule_5
# 28 "data/scripts/schedule/routes.pory"
	case 4, BeachboundRoute_NPCSchedule_6
# 30 "data/scripts/schedule/routes.pory"
	case 5, BeachboundRoute_NPCSchedule_7
# 32 "data/scripts/schedule/routes.pory"
	case 6, BeachboundRoute_NPCSchedule_8
	return

BeachboundRoute_NPCSchedule_2:
# 21 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_DeadNightSchedules
	return

BeachboundRoute_NPCSchedule_3:
# 23 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_EarlySchedules
	return

BeachboundRoute_NPCSchedule_4:
# 25 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_MorningSchedules
	return

BeachboundRoute_NPCSchedule_5:
# 27 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_LunchtimeSchedules
	return

BeachboundRoute_NPCSchedule_6:
# 29 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_AfternoonSchedules
	return

BeachboundRoute_NPCSchedule_7:
# 31 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_EveningSchedules
	return

BeachboundRoute_NPCSchedule_8:
# 33 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_NightSchedules
	return


BeachboundRoute_DeadNightSchedules:
	return


BeachboundRoute_EarlySchedules:
# 42 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_MorningSchedules:
# 46 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
# 47 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_7
	return


BeachboundRoute_LunchtimeSchedules:
# 50 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
# 51 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_7
	return


BeachboundRoute_AfternoonSchedules:
# 54 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
# 55 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_7
	return


BeachboundRoute_EveningSchedules:
# 58 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
# 59 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_7
	return


BeachboundRoute_NightSchedules:
	return

