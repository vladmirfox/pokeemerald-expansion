KuraVillage_NPCSchedules::
# 17 "data/scripts/schedule/kura_village.pory"
	setflag FLAG_TEMP_1
# 18 "data/scripts/schedule/kura_village.pory"
	setflag FLAG_TEMP_2
# 19 "data/scripts/schedule/kura_village.pory"
	gettimeofday
# 20 "data/scripts/schedule/kura_village.pory"
	switch VAR_0x8000
# 21 "data/scripts/schedule/kura_village.pory"
	case 0, KuraVillage_NPCSchedules_2
# 23 "data/scripts/schedule/kura_village.pory"
	case 1, KuraVillage_NPCSchedules_3
# 25 "data/scripts/schedule/kura_village.pory"
	case 2, KuraVillage_NPCSchedules_4
# 27 "data/scripts/schedule/kura_village.pory"
	case 3, KuraVillage_NPCSchedules_5
# 29 "data/scripts/schedule/kura_village.pory"
	case 4, KuraVillage_NPCSchedules_6
# 31 "data/scripts/schedule/kura_village.pory"
	case 5, KuraVillage_NPCSchedules_7
# 33 "data/scripts/schedule/kura_village.pory"
	case 6, KuraVillage_NPCSchedules_8
	return

KuraVillage_NPCSchedules_2:
# 22 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_DeadNightSchedules
	return

KuraVillage_NPCSchedules_3:
# 24 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_EarlySchedules
	return

KuraVillage_NPCSchedules_4:
# 26 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_MorningSchedules
	return

KuraVillage_NPCSchedules_5:
# 28 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_LunchtimeSchedules
	return

KuraVillage_NPCSchedules_6:
# 30 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_AfternoonSchedules
	return

KuraVillage_NPCSchedules_7:
# 32 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_EveningSchedules
	return

KuraVillage_NPCSchedules_8:
# 34 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_NightSchedules
	return


KuraVillage_DeadNightSchedules:
	return


KuraVillage_EarlySchedules:
# 43 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_1
	return


KuraVillage_MorningSchedules:
# 47 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_1
	return


KuraVillage_LunchtimeSchedules:
# 50 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_2
	return


KuraVillage_AfternoonSchedules:
# 53 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_1
	return


KuraVillage_EveningSchedules:
	return


KuraVillage_NightSchedules:
	return

