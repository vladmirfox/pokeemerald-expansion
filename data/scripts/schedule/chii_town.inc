ChiiTown_NPCSchedules::
# 25 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_5
# 26 "data/scripts/schedule/chii_town.pory"
	setflag FLAG_TEMP_6
# 27 "data/scripts/schedule/chii_town.pory"
	gettimeofday
# 28 "data/scripts/schedule/chii_town.pory"
	switch VAR_0x8000
# 29 "data/scripts/schedule/chii_town.pory"
	case 0, ChiiTown_NPCSchedules_2
# 31 "data/scripts/schedule/chii_town.pory"
	case 1, ChiiTown_NPCSchedules_3
# 33 "data/scripts/schedule/chii_town.pory"
	case 2, ChiiTown_NPCSchedules_4
# 35 "data/scripts/schedule/chii_town.pory"
	case 3, ChiiTown_NPCSchedules_5
# 37 "data/scripts/schedule/chii_town.pory"
	case 4, ChiiTown_NPCSchedules_6
# 39 "data/scripts/schedule/chii_town.pory"
	case 5, ChiiTown_NPCSchedules_7
# 41 "data/scripts/schedule/chii_town.pory"
	case 6, ChiiTown_NPCSchedules_8
	return

ChiiTown_NPCSchedules_2:
# 30 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_DeadNightSchedules
	return

ChiiTown_NPCSchedules_3:
# 32 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_EarlySchedules
	return

ChiiTown_NPCSchedules_4:
# 34 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_MorningSchedules
	return

ChiiTown_NPCSchedules_5:
# 36 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_LunchtimeSchedules
	return

ChiiTown_NPCSchedules_6:
# 38 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_AfternoonSchedules
	return

ChiiTown_NPCSchedules_7:
# 40 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_EveningSchedules
	return

ChiiTown_NPCSchedules_8:
# 42 "data/scripts/schedule/chii_town.pory"
	call ChiiTown_NightSchedules
	return


ChiiTown_DeadNightSchedules:
	return


ChiiTown_EarlySchedules:
	return


ChiiTown_MorningSchedules:
	return


ChiiTown_LunchtimeSchedules:
# 58 "data/scripts/schedule/chii_town.pory"
	clearflag FLAG_TEMP_5
	return


ChiiTown_AfternoonSchedules:
	return


ChiiTown_EveningSchedules:
	return


ChiiTown_NightSchedules:
	return

