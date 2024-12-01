SakuVillage_NPCSchedules::
# 8 "data/scripts/schedule/saku_village.pory"
	setflag FLAG_TEMP_1
# 9 "data/scripts/schedule/saku_village.pory"
	setflag FLAG_TEMP_2
# 10 "data/scripts/schedule/saku_village.pory"
	gettimeofday
# 11 "data/scripts/schedule/saku_village.pory"
	switch VAR_TIME_OF_DAY
# 12 "data/scripts/schedule/saku_village.pory"
	case TIME_DEAD_NIGHT, SakuVillage_NPCSchedules_2
# 14 "data/scripts/schedule/saku_village.pory"
	case TIME_EARLY, SakuVillage_NPCSchedules_3
# 16 "data/scripts/schedule/saku_village.pory"
	case TIME_MORNING, SakuVillage_NPCSchedules_4
# 18 "data/scripts/schedule/saku_village.pory"
	case TIME_LUNCHTIME, SakuVillage_NPCSchedules_5
# 20 "data/scripts/schedule/saku_village.pory"
	case TIME_AFTERNOON, SakuVillage_NPCSchedules_6
# 22 "data/scripts/schedule/saku_village.pory"
	case TIME_EVENING, SakuVillage_NPCSchedules_7
# 24 "data/scripts/schedule/saku_village.pory"
	case TIME_NIGHT, SakuVillage_NPCSchedules_8
	return

SakuVillage_NPCSchedules_2:
# 13 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_DeadNightSchedules
	return

SakuVillage_NPCSchedules_3:
# 15 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_EarlySchedules
	return

SakuVillage_NPCSchedules_4:
# 17 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_MorningSchedules
	return

SakuVillage_NPCSchedules_5:
# 19 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_LunchtimeSchedules
	return

SakuVillage_NPCSchedules_6:
# 21 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_AfternoonSchedules
	return

SakuVillage_NPCSchedules_7:
# 23 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_EveningSchedules
	return

SakuVillage_NPCSchedules_8:
# 25 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_NightSchedules
	return


SakuVillage_DeadNightSchedules:
	return


SakuVillage_EarlySchedules:
# 34 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_1
	return


SakuVillage_MorningSchedules:
# 38 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_1
	return


SakuVillage_LunchtimeSchedules:
# 41 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_2
	return


SakuVillage_AfternoonSchedules:
# 44 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_1
	return


SakuVillage_EveningSchedules:
	return


SakuVillage_NightSchedules:
	return


SakuVillage_DrawMetatiles::
	return

