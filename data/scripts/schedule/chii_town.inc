ChiiTown_NPCSchedules::
# 23 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_5
# 24 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_6
# 25 "data/scripts/schedule/chii_town.pory"
	gettimeofday
# 26 "data/scripts/schedule/chii_town.pory"
	switch VAR_0x8000
# 27 "data/scripts/schedule/chii_town.pory"
	case 0, ChiiTown_NPCSchedules_2
# 29 "data/scripts/schedule/chii_town.pory"
	case 1, ChiiTown_NPCSchedules_3
# 31 "data/scripts/schedule/chii_town.pory"
	case 2, ChiiTown_NPCSchedules_4
# 33 "data/scripts/schedule/chii_town.pory"
	case 3, ChiiTown_NPCSchedules_5
# 35 "data/scripts/schedule/chii_town.pory"
	case 4, ChiiTown_NPCSchedules_6
# 37 "data/scripts/schedule/chii_town.pory"
	case 5, ChiiTown_NPCSchedules_7
# 39 "data/scripts/schedule/chii_town.pory"
	case 6, ChiiTown_NPCSchedules_8
	return

ChiiTown_NPCSchedules_2:
# 28 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_DeadNightSchedules
	return

ChiiTown_NPCSchedules_3:
# 30 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_EarlySchedules
	return

ChiiTown_NPCSchedules_4:
# 32 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_MorningSchedules
	return

ChiiTown_NPCSchedules_5:
# 34 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_LunchtimeSchedules
	return

ChiiTown_NPCSchedules_6:
# 36 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_AfternoonSchedules
	return

ChiiTown_NPCSchedules_7:
# 38 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_EveningSchedules
	return

ChiiTown_NPCSchedules_8:
# 40 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_NightSchedules
	return


ChiiTown_DeadNightSchedules:
	return


ChiiTown_EarlySchedules:
	return


ChiiTown_MorningSchedules:
	return


ChiiTown_LunchtimeSchedules:
# 56 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_5
	return


ChiiTown_AfternoonSchedules:
	return


ChiiTown_EveningSchedules:
	return


ChiiTown_NightSchedules:
	return


ChiiTownSchool_NPCSchedules::
# 74 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_1
# 75 "data/scripts/schedule/chii_town.pory"
	gettimeofday
# 76 "data/scripts/schedule/chii_town.pory"
	switch VAR_0x8000
# 77 "data/scripts/schedule/chii_town.pory"
	case 0, ChiiTownSchool_NPCSchedules_2
# 79 "data/scripts/schedule/chii_town.pory"
	case 1, ChiiTownSchool_NPCSchedules_3
# 81 "data/scripts/schedule/chii_town.pory"
	case 2, ChiiTownSchool_NPCSchedules_4
# 83 "data/scripts/schedule/chii_town.pory"
	case 3, ChiiTownSchool_NPCSchedules_5
# 85 "data/scripts/schedule/chii_town.pory"
	case 4, ChiiTownSchool_NPCSchedules_6
# 87 "data/scripts/schedule/chii_town.pory"
	case 5, ChiiTownSchool_NPCSchedules_7
# 89 "data/scripts/schedule/chii_town.pory"
	case 6, ChiiTownSchool_NPCSchedules_8
	return

ChiiTownSchool_NPCSchedules_2:
# 78 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_DeadNightSchedules
	return

ChiiTownSchool_NPCSchedules_3:
# 80 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_EarlySchedules
	return

ChiiTownSchool_NPCSchedules_4:
# 82 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_MorningSchedules
	return

ChiiTownSchool_NPCSchedules_5:
# 84 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_LunchtimeSchedules
	return

ChiiTownSchool_NPCSchedules_6:
# 86 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_AfternoonSchedules
	return

ChiiTownSchool_NPCSchedules_7:
# 88 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_EveningSchedules
	return

ChiiTownSchool_NPCSchedules_8:
# 90 "data/scripts/schedule/chii_town.pory"
	call ChiiTownSchool_NightSchedules
	return


ChiiTownSchool_DeadNightSchedules:
	return


ChiiTownSchool_EarlySchedules:
# 99 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_1
	return


ChiiTownSchool_MorningSchedules:
# 103 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_1
	return


ChiiTownSchool_LunchtimeSchedules:
	return


ChiiTownSchool_AfternoonSchedules:
# 109 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_1
	return


ChiiTownSchool_EveningSchedules:
	return


ChiiTownSchool_NightSchedules:
	return

