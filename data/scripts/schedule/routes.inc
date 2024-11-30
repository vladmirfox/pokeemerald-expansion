BeachboundRoute_NPCSchedule::
# 17 "data/scripts/schedule/routes.pory"
	setflag FLAG_TEMP_6
# 18 "data/scripts/schedule/routes.pory"
	setflag FLAG_TEMP_7
# 19 "data/scripts/schedule/routes.pory"
	gettimeofday
# 20 "data/scripts/schedule/routes.pory"
	switch VAR_0x8000
# 21 "data/scripts/schedule/routes.pory"
	case 0, BeachboundRoute_NPCSchedule_2
# 23 "data/scripts/schedule/routes.pory"
	case 1, BeachboundRoute_NPCSchedule_3
# 25 "data/scripts/schedule/routes.pory"
	case 2, BeachboundRoute_NPCSchedule_4
# 27 "data/scripts/schedule/routes.pory"
	case 3, BeachboundRoute_NPCSchedule_5
# 29 "data/scripts/schedule/routes.pory"
	case 4, BeachboundRoute_NPCSchedule_6
# 31 "data/scripts/schedule/routes.pory"
	case 5, BeachboundRoute_NPCSchedule_7
# 33 "data/scripts/schedule/routes.pory"
	case 6, BeachboundRoute_NPCSchedule_8
	return

BeachboundRoute_NPCSchedule_2:
# 22 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_DeadNightSchedules
	return

BeachboundRoute_NPCSchedule_3:
# 24 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_EarlySchedules
	return

BeachboundRoute_NPCSchedule_4:
# 26 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_MorningSchedules
	return

BeachboundRoute_NPCSchedule_5:
# 28 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_LunchtimeSchedules
	return

BeachboundRoute_NPCSchedule_6:
# 30 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_AfternoonSchedules
	return

BeachboundRoute_NPCSchedule_7:
# 32 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_EveningSchedules
	return

BeachboundRoute_NPCSchedule_8:
# 34 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_NightSchedules
	return


BeachboundRoute_DeadNightSchedules:
	return


BeachboundRoute_EarlySchedules:
# 43 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_MorningSchedules:
# 47 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_LunchtimeSchedules:
# 50 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_AfternoonSchedules:
# 53 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_EveningSchedules:
# 56 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
# 57 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_7
	return


BeachboundRoute_NightSchedules:
	return

