MaguroHarbor_NPCSchedules::
# 10 "data/scripts/schedule/maguro_harbor.pory"
	setflag FLAG_TEMP_2
# 11 "data/scripts/schedule/maguro_harbor.pory"
	setflag FLAG_TEMP_1
# 12 "data/scripts/schedule/maguro_harbor.pory"
	setflag FLAG_TEMP_3
# 13 "data/scripts/schedule/maguro_harbor.pory"
	setflag FLAG_TEMP_4
# 14 "data/scripts/schedule/maguro_harbor.pory"
	gettimeofday
# 15 "data/scripts/schedule/maguro_harbor.pory"
	switch VAR_TIME_OF_DAY
# 16 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_DEAD_NIGHT, MaguroHarbor_NPCSchedules_2
# 18 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_EARLY, MaguroHarbor_NPCSchedules_3
# 20 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_MORNING, MaguroHarbor_NPCSchedules_4
# 22 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_LUNCHTIME, MaguroHarbor_NPCSchedules_5
# 24 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_AFTERNOON, MaguroHarbor_NPCSchedules_6
# 26 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_EVENING, MaguroHarbor_NPCSchedules_7
# 28 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_NIGHT, MaguroHarbor_NPCSchedules_8
	return

MaguroHarbor_NPCSchedules_2:
# 17 "data/scripts/schedule/maguro_harbor.pory"
	call MaguroHarbor_DeadNightSchedules
	return

MaguroHarbor_NPCSchedules_3:
# 19 "data/scripts/schedule/maguro_harbor.pory"
	call MaguroHarbor_EarlySchedules
	return

MaguroHarbor_NPCSchedules_4:
# 21 "data/scripts/schedule/maguro_harbor.pory"
	call MaguroHarbor_MorningSchedules
	return

MaguroHarbor_NPCSchedules_5:
# 23 "data/scripts/schedule/maguro_harbor.pory"
	call MaguroHarbor_LunchtimeSchedules
	return

MaguroHarbor_NPCSchedules_6:
# 25 "data/scripts/schedule/maguro_harbor.pory"
	call MaguroHarbor_AfternoonSchedules
	return

MaguroHarbor_NPCSchedules_7:
# 27 "data/scripts/schedule/maguro_harbor.pory"
	call MaguroHarbor_EveningSchedules
	return

MaguroHarbor_NPCSchedules_8:
# 29 "data/scripts/schedule/maguro_harbor.pory"
	call MaguroHarbor_NightSchedules
	return


MaguroHarbor_DeadNightSchedules:
# 34 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_3
	return


MaguroHarbor_EarlySchedules:
# 38 "data/scripts/schedule/maguro_harbor.pory"
	getweekday
# 39 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_WEDNESDAY
	goto_if_eq MaguroHarbor_EarlySchedules_2
# 39 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SATURDAY
	goto_if_eq MaguroHarbor_EarlySchedules_2
# 39 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SUNDAY
	goto_if_eq MaguroHarbor_EarlySchedules_2
MaguroHarbor_EarlySchedules_1:
# 43 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_4
	return

MaguroHarbor_EarlySchedules_2:
# 40 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_2
	goto MaguroHarbor_EarlySchedules_1


MaguroHarbor_MorningSchedules:
# 47 "data/scripts/schedule/maguro_harbor.pory"
	getweekday
# 48 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_WEDNESDAY
	goto_if_eq MaguroHarbor_MorningSchedules_2
# 48 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SATURDAY
	goto_if_eq MaguroHarbor_MorningSchedules_2
# 48 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SUNDAY
	goto_if_eq MaguroHarbor_MorningSchedules_2
MaguroHarbor_MorningSchedules_1:
# 52 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_3
# 53 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_4
	return

MaguroHarbor_MorningSchedules_2:
# 49 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_1
	goto MaguroHarbor_MorningSchedules_1


MaguroHarbor_LunchtimeSchedules:
# 56 "data/scripts/schedule/maguro_harbor.pory"
	getweekday
# 57 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_WEDNESDAY
	goto_if_eq MaguroHarbor_LunchtimeSchedules_2
# 57 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SATURDAY
	goto_if_eq MaguroHarbor_LunchtimeSchedules_2
# 57 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SUNDAY
	goto_if_eq MaguroHarbor_LunchtimeSchedules_2
MaguroHarbor_LunchtimeSchedules_1:
# 61 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_3
# 62 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_4
	return

MaguroHarbor_LunchtimeSchedules_2:
# 58 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_1
	goto MaguroHarbor_LunchtimeSchedules_1


MaguroHarbor_AfternoonSchedules:
# 65 "data/scripts/schedule/maguro_harbor.pory"
	getweekday
# 66 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_WEDNESDAY
	goto_if_eq MaguroHarbor_AfternoonSchedules_2
# 66 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SATURDAY
	goto_if_eq MaguroHarbor_AfternoonSchedules_2
# 66 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SUNDAY
	goto_if_eq MaguroHarbor_AfternoonSchedules_2
MaguroHarbor_AfternoonSchedules_1:
# 70 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_3
# 71 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_4
	return

MaguroHarbor_AfternoonSchedules_2:
# 67 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_1
	goto MaguroHarbor_AfternoonSchedules_1


MaguroHarbor_EveningSchedules:
# 74 "data/scripts/schedule/maguro_harbor.pory"
	getweekday
# 75 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_WEDNESDAY
	goto_if_eq MaguroHarbor_EveningSchedules_1
# 75 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SATURDAY
	goto_if_eq MaguroHarbor_EveningSchedules_1
# 75 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SUNDAY
	goto_if_eq MaguroHarbor_EveningSchedules_1
	return

MaguroHarbor_EveningSchedules_1:
# 76 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_1
	return


MaguroHarbor_NightSchedules:
# 81 "data/scripts/schedule/maguro_harbor.pory"
	getweekday
# 82 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_WEDNESDAY
	goto_if_eq MaguroHarbor_NightSchedules_1
# 82 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SATURDAY
	goto_if_eq MaguroHarbor_NightSchedules_1
# 82 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_DAY_OF_WEEK, DAY_SUNDAY
	goto_if_eq MaguroHarbor_NightSchedules_1
	return

MaguroHarbor_NightSchedules_1:
# 83 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_2
	return


MaguroHarbor_DrawMetatiles::
# 89 "data/scripts/schedule/maguro_harbor.pory"
	switch VAR_TIME_OF_DAY
# 90 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_DEAD_NIGHT, MaguroHarbor_DrawMetatiles_2
# 93 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_EARLY, MaguroHarbor_DrawMetatiles_3
# 96 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_MORNING, MaguroHarbor_DrawMetatiles_4
# 99 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_LUNCHTIME, MaguroHarbor_DrawMetatiles_5
# 102 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_AFTERNOON, MaguroHarbor_DrawMetatiles_6
# 105 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_EVENING, MaguroHarbor_DrawMetatiles_7
# 108 "data/scripts/schedule/maguro_harbor.pory"
	case TIME_NIGHT, MaguroHarbor_DrawMetatiles_8
	return

MaguroHarbor_DrawMetatiles_2:
# 91 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 20, 13, METATILE_Maguro_HouseDoorClosed, TRUE
# 92 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 37, 20, METATILE_Maguro_HouseDoorClosed, TRUE
	return

MaguroHarbor_DrawMetatiles_3:
# 94 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 20, 13, METATILE_Maguro_HouseDoorOpen, FALSE
# 95 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 37, 20, METATILE_Maguro_HouseDoorOpen, FALSE
	return

MaguroHarbor_DrawMetatiles_4:
# 97 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 20, 13, METATILE_Maguro_HouseDoorOpen, FALSE
# 98 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 37, 20, METATILE_Maguro_HouseDoorOpen, FALSE
	return

MaguroHarbor_DrawMetatiles_5:
# 100 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 20, 13, METATILE_Maguro_HouseDoorOpen, FALSE
# 101 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 37, 20, METATILE_Maguro_HouseDoorOpen, FALSE
	return

MaguroHarbor_DrawMetatiles_6:
# 103 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 20, 13, METATILE_Maguro_HouseDoorOpen, FALSE
# 104 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 37, 20, METATILE_Maguro_HouseDoorOpen, FALSE
	return

MaguroHarbor_DrawMetatiles_7:
# 106 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 20, 13, METATILE_Maguro_HouseDoorOpen, FALSE
# 107 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 37, 20, METATILE_Maguro_HouseDoorOpen, FALSE
	return

MaguroHarbor_DrawMetatiles_8:
# 109 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 20, 13, METATILE_Maguro_HouseDoorOpen, FALSE
# 110 "data/scripts/schedule/maguro_harbor.pory"
	setmetatile 37, 20, METATILE_Maguro_HouseDoorOpen, FALSE
	return


YoungGirlsHouse_NPCSchedules::
# 122 "data/scripts/schedule/maguro_harbor.pory"
	setflag FLAG_TEMP_1
# 123 "data/scripts/schedule/maguro_harbor.pory"
	setflag FLAG_TEMP_2
# 124 "data/scripts/schedule/maguro_harbor.pory"
	setflag FLAG_TEMP_3
# 125 "data/scripts/schedule/maguro_harbor.pory"
	gettimeofday
# 126 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_TIME_OF_DAY, TIME_EARLY
	goto_if_eq YoungGirlsHouse_NPCSchedules_2
YoungGirlsHouse_NPCSchedules_1:
# 129 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_TIME_OF_DAY, TIME_EVENING
	goto_if_eq YoungGirlsHouse_NPCSchedules_4
# 129 "data/scripts/schedule/maguro_harbor.pory"
	compare VAR_TIME_OF_DAY, TIME_NIGHT
	goto_if_eq YoungGirlsHouse_NPCSchedules_4
	return

YoungGirlsHouse_NPCSchedules_2:
# 127 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_1
	goto YoungGirlsHouse_NPCSchedules_1

YoungGirlsHouse_NPCSchedules_4:
# 130 "data/scripts/schedule/maguro_harbor.pory"
	clearflag FLAG_TEMP_2
	return

