SakuVillage_NPCSchedules::
# 17 "data/scripts/schedule/saku_village.pory"
	setflag FLAG_TEMP_1
# 18 "data/scripts/schedule/saku_village.pory"
	gettimeofday
# 19 "data/scripts/schedule/saku_village.pory"
	switch VAR_0x8000
# 20 "data/scripts/schedule/saku_village.pory"
	case 0, SakuVillage_NPCSchedules_2
# 22 "data/scripts/schedule/saku_village.pory"
	case 1, SakuVillage_NPCSchedules_3
# 24 "data/scripts/schedule/saku_village.pory"
	case 2, SakuVillage_NPCSchedules_4
# 26 "data/scripts/schedule/saku_village.pory"
	case 3, SakuVillage_NPCSchedules_5
# 28 "data/scripts/schedule/saku_village.pory"
	case 4, SakuVillage_NPCSchedules_6
# 30 "data/scripts/schedule/saku_village.pory"
	case 5, SakuVillage_NPCSchedules_7
# 32 "data/scripts/schedule/saku_village.pory"
	case 6, SakuVillage_NPCSchedules_8
	return

SakuVillage_NPCSchedules_2:
# 21 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_DeadNightSchedules
	return

SakuVillage_NPCSchedules_3:
# 23 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_EarlySchedules
	return

SakuVillage_NPCSchedules_4:
# 25 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_MorningSchedules
	return

SakuVillage_NPCSchedules_5:
# 27 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_LunchtimeSchedules
	return

SakuVillage_NPCSchedules_6:
# 29 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_AfternoonSchedules
	return

SakuVillage_NPCSchedules_7:
# 31 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_EveningSchedules
	return

SakuVillage_NPCSchedules_8:
# 33 "data/scripts/schedule/saku_village.pory"
	call SakuVillage_NightSchedules
	return


SakuVillage_DeadNightSchedules:
	return


SakuVillage_EarlySchedules:
# 42 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_1
	return


SakuVillage_MorningSchedules:
# 46 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_1
	return


SakuVillage_LunchtimeSchedules:
# 49 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_2
	return


SakuVillage_AfternoonSchedules:
# 52 "data/scripts/schedule/saku_village.pory"
	clearflag FLAG_TEMP_1
	return


SakuVillage_EveningSchedules:
	return


SakuVillage_NightSchedules:
	return

