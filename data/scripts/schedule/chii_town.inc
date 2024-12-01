ChiiTown_NPCSchedules::
# 9 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_5
# 10 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_6
# 11 "data/scripts/schedule/chii_town.pory"
	gettimeofday
# 12 "data/scripts/schedule/chii_town.pory"
	switch VAR_TIME_OF_DAY
# 13 "data/scripts/schedule/chii_town.pory"
	case TIME_DEAD_NIGHT, ChiiTown_NPCSchedules_2
# 15 "data/scripts/schedule/chii_town.pory"
	case TIME_EARLY, ChiiTown_NPCSchedules_3
# 17 "data/scripts/schedule/chii_town.pory"
	case TIME_MORNING, ChiiTown_NPCSchedules_4
# 19 "data/scripts/schedule/chii_town.pory"
	case TIME_LUNCHTIME, ChiiTown_NPCSchedules_5
# 21 "data/scripts/schedule/chii_town.pory"
	case TIME_AFTERNOON, ChiiTown_NPCSchedules_6
# 23 "data/scripts/schedule/chii_town.pory"
	case TIME_EVENING, ChiiTown_NPCSchedules_7
# 25 "data/scripts/schedule/chii_town.pory"
	case TIME_NIGHT, ChiiTown_NPCSchedules_8
	return

ChiiTown_NPCSchedules_2:
# 14 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_DeadNightSchedules
	return

ChiiTown_NPCSchedules_3:
# 16 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_EarlySchedules
	return

ChiiTown_NPCSchedules_4:
# 18 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_MorningSchedules
	return

ChiiTown_NPCSchedules_5:
# 20 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_LunchtimeSchedules
	return

ChiiTown_NPCSchedules_6:
# 22 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_AfternoonSchedules
	return

ChiiTown_NPCSchedules_7:
# 24 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_EveningSchedules
	return

ChiiTown_NPCSchedules_8:
# 26 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_NightSchedules
	return


ChiiTown_DeadNightSchedules:
	return


ChiiTown_EarlySchedules:
	return


ChiiTown_MorningSchedules:
	return


ChiiTown_LunchtimeSchedules:
# 42 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_5
	return


ChiiTown_AfternoonSchedules:
	return


ChiiTown_EveningSchedules:
	return


ChiiTown_NightSchedules:
	return


ChiiTownSchool_NPCSchedules::
# 60 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_1
# 61 "data/scripts/schedule/chii_town.pory"
	gettimeofday
# 62 "data/scripts/schedule/chii_town.pory"
	switch VAR_TIME_OF_DAY
# 63 "data/scripts/schedule/chii_town.pory"
	case TIME_DEAD_NIGHT, ChiiTownSchool_NPCSchedules_2
# 65 "data/scripts/schedule/chii_town.pory"
	case TIME_EARLY, ChiiTownSchool_NPCSchedules_3
# 67 "data/scripts/schedule/chii_town.pory"
	case TIME_MORNING, ChiiTownSchool_NPCSchedules_4
# 69 "data/scripts/schedule/chii_town.pory"
	case TIME_LUNCHTIME, ChiiTownSchool_NPCSchedules_5
# 71 "data/scripts/schedule/chii_town.pory"
	case TIME_AFTERNOON, ChiiTownSchool_NPCSchedules_6
# 73 "data/scripts/schedule/chii_town.pory"
	case TIME_EVENING, ChiiTownSchool_NPCSchedules_7
# 75 "data/scripts/schedule/chii_town.pory"
	case TIME_NIGHT, ChiiTownSchool_NPCSchedules_8
	return

ChiiTownSchool_NPCSchedules_2:
# 64 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_DeadNightSchedules
	return

ChiiTownSchool_NPCSchedules_3:
# 66 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_EarlySchedules
	return

ChiiTownSchool_NPCSchedules_4:
# 68 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_MorningSchedules
	return

ChiiTownSchool_NPCSchedules_5:
# 70 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_LunchtimeSchedules
	return

ChiiTownSchool_NPCSchedules_6:
# 72 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_AfternoonSchedules
	return

ChiiTownSchool_NPCSchedules_7:
# 74 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_EveningSchedules
	return

ChiiTownSchool_NPCSchedules_8:
# 76 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_NightSchedules
	return


ChiiTownSchool_DeadNightSchedules:
	return


ChiiTownSchool_EarlySchedules:
# 85 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_1
	return


ChiiTownSchool_MorningSchedules:
# 89 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_1
	return


ChiiTownSchool_LunchtimeSchedules:
	return


ChiiTownSchool_AfternoonSchedules:
# 95 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_1
	return


ChiiTownSchool_EveningSchedules:
	return


ChiiTownSchool_NightSchedules:
	return

