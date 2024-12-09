KuraVillage_NPCSchedules::
# 8 "data/scripts/schedule/kura_village.pory"
	setflag FLAG_TEMP_1
# 9 "data/scripts/schedule/kura_village.pory"
	setflag FLAG_TEMP_2
# 10 "data/scripts/schedule/kura_village.pory"
	gettimeofday
# 11 "data/scripts/schedule/kura_village.pory"
	switch VAR_HOUR_OF_DAY
# 12 "data/scripts/schedule/kura_village.pory"
	case TIME_DEAD_NIGHT, KuraVillage_NPCSchedules_2
# 14 "data/scripts/schedule/kura_village.pory"
	case TIME_EARLY, KuraVillage_NPCSchedules_3
# 16 "data/scripts/schedule/kura_village.pory"
	case TIME_MORNING, KuraVillage_NPCSchedules_4
# 18 "data/scripts/schedule/kura_village.pory"
	case TIME_LUNCHTIME, KuraVillage_NPCSchedules_5
# 20 "data/scripts/schedule/kura_village.pory"
	case TIME_AFTERNOON, KuraVillage_NPCSchedules_6
# 22 "data/scripts/schedule/kura_village.pory"
	case TIME_EVENING, KuraVillage_NPCSchedules_7
# 24 "data/scripts/schedule/kura_village.pory"
	case TIME_NIGHT, KuraVillage_NPCSchedules_8
	return

KuraVillage_NPCSchedules_2:
# 13 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_DeadNightSchedules
	return

KuraVillage_NPCSchedules_3:
# 15 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_EarlySchedules
	return

KuraVillage_NPCSchedules_4:
# 17 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_MorningSchedules
	return

KuraVillage_NPCSchedules_5:
# 19 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_LunchtimeSchedules
	return

KuraVillage_NPCSchedules_6:
# 21 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_AfternoonSchedules
	return

KuraVillage_NPCSchedules_7:
# 23 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_EveningSchedules
	return

KuraVillage_NPCSchedules_8:
# 25 "data/scripts/schedule/kura_village.pory"
	call KuraVillage_NightSchedules
	return


KuraVillage_DeadNightSchedules:
	return


KuraVillage_EarlySchedules:
# 34 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_1
	return


KuraVillage_MorningSchedules:
# 38 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_1
	return


KuraVillage_LunchtimeSchedules:
# 41 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_2
	return


KuraVillage_AfternoonSchedules:
# 44 "data/scripts/schedule/kura_village.pory"
	clearflag FLAG_TEMP_1
	return


KuraVillage_EveningSchedules:
	return


KuraVillage_NightSchedules:
	return


KuraVillage_DrawMetatiles::
# 54 "data/scripts/schedule/kura_village.pory"
	switch VAR_HOUR_OF_DAY
# 55 "data/scripts/schedule/kura_village.pory"
	case TIME_DEAD_NIGHT, KuraVillage_DrawMetatiles_2
# 58 "data/scripts/schedule/kura_village.pory"
	case TIME_EARLY, KuraVillage_DrawMetatiles_3
# 61 "data/scripts/schedule/kura_village.pory"
	case TIME_MORNING, KuraVillage_DrawMetatiles_4
# 64 "data/scripts/schedule/kura_village.pory"
	case TIME_LUNCHTIME, KuraVillage_DrawMetatiles_5
# 67 "data/scripts/schedule/kura_village.pory"
	case TIME_AFTERNOON, KuraVillage_DrawMetatiles_6
# 70 "data/scripts/schedule/kura_village.pory"
	case TIME_EVENING, KuraVillage_DrawMetatiles_7
# 73 "data/scripts/schedule/kura_village.pory"
	case TIME_NIGHT, KuraVillage_DrawMetatiles_8
	return

KuraVillage_DrawMetatiles_2:
# 56 "data/scripts/schedule/kura_village.pory"
	setmetatile 34, 25, METATILE_SakuKura_ClosedDojoDoor, TRUE
# 57 "data/scripts/schedule/kura_village.pory"
	setmetatile 43, 23, METATILE_SakuKura_ClosedDojoDoor, TRUE
	return

KuraVillage_DrawMetatiles_3:
# 59 "data/scripts/schedule/kura_village.pory"
	setmetatile 34, 25, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
# 60 "data/scripts/schedule/kura_village.pory"
	setmetatile 43, 23, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
	return

KuraVillage_DrawMetatiles_4:
# 62 "data/scripts/schedule/kura_village.pory"
	setmetatile 34, 25, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
# 63 "data/scripts/schedule/kura_village.pory"
	setmetatile 43, 23, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
	return

KuraVillage_DrawMetatiles_5:
# 65 "data/scripts/schedule/kura_village.pory"
	setmetatile 34, 25, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
# 66 "data/scripts/schedule/kura_village.pory"
	setmetatile 43, 23, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
	return

KuraVillage_DrawMetatiles_6:
# 68 "data/scripts/schedule/kura_village.pory"
	setmetatile 34, 25, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
# 69 "data/scripts/schedule/kura_village.pory"
	setmetatile 43, 23, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
	return

KuraVillage_DrawMetatiles_7:
# 71 "data/scripts/schedule/kura_village.pory"
	setmetatile 34, 25, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
# 72 "data/scripts/schedule/kura_village.pory"
	setmetatile 43, 23, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
	return

KuraVillage_DrawMetatiles_8:
# 74 "data/scripts/schedule/kura_village.pory"
	setmetatile 34, 25, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
# 75 "data/scripts/schedule/kura_village.pory"
	setmetatile 43, 23, METATILE_PorytilesPrimaryTutorial_OpenDoor, FALSE
	return

