BeachboundRoute_NPCSchedule::
# 9 "data/scripts/schedule/routes.pory"
	setflag FLAG_TEMP_6
# 10 "data/scripts/schedule/routes.pory"
	setflag FLAG_TEMP_7
# 11 "data/scripts/schedule/routes.pory"
	gettimeofday
# 12 "data/scripts/schedule/routes.pory"
	switch VAR_TIME_OF_DAY
# 13 "data/scripts/schedule/routes.pory"
	case TIME_DEAD_NIGHT, BeachboundRoute_NPCSchedule_2
# 15 "data/scripts/schedule/routes.pory"
	case TIME_EARLY, BeachboundRoute_NPCSchedule_3
# 17 "data/scripts/schedule/routes.pory"
	case TIME_MORNING, BeachboundRoute_NPCSchedule_4
# 19 "data/scripts/schedule/routes.pory"
	case TIME_LUNCHTIME, BeachboundRoute_NPCSchedule_5
# 21 "data/scripts/schedule/routes.pory"
	case TIME_AFTERNOON, BeachboundRoute_NPCSchedule_6
# 23 "data/scripts/schedule/routes.pory"
	case TIME_EVENING, BeachboundRoute_NPCSchedule_7
# 25 "data/scripts/schedule/routes.pory"
	case TIME_NIGHT, BeachboundRoute_NPCSchedule_8
	return

BeachboundRoute_NPCSchedule_2:
# 14 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_DeadNightSchedules
	return

BeachboundRoute_NPCSchedule_3:
# 16 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_EarlySchedules
	return

BeachboundRoute_NPCSchedule_4:
# 18 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_MorningSchedules
	return

BeachboundRoute_NPCSchedule_5:
# 20 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_LunchtimeSchedules
	return

BeachboundRoute_NPCSchedule_6:
# 22 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_AfternoonSchedules
	return

BeachboundRoute_NPCSchedule_7:
# 24 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_EveningSchedules
	return

BeachboundRoute_NPCSchedule_8:
# 26 "data/scripts/schedule/routes.pory"
	call BeachboundRoute_NightSchedules
	return


BeachboundRoute_DeadNightSchedules:
	return


BeachboundRoute_EarlySchedules:
# 35 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_MorningSchedules:
# 39 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_LunchtimeSchedules:
# 42 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_AfternoonSchedules:
# 45 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
	return


BeachboundRoute_EveningSchedules:
# 48 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_6
# 49 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_7
# 50 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_5
	return


BeachboundRoute_NightSchedules:
# 53 "data/scripts/schedule/routes.pory"
	clearflag FLAG_TEMP_5
	return

