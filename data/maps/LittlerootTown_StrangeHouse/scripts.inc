LittlerootTown_StrangeHouse_MapScripts::
	.byte 0

LittlerootTown_StrangeHouse_Fridge::
	lockall
	msgbox LittlerootTown_StrangeHouse_Fridge_Text_0
	releaseall
	return


LittlerootTown_StrangeHouse_Fridge_Text_0:
	.string "Heck yeah, two refrigerators!$"