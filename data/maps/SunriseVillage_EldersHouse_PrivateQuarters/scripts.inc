SunriseVillage_EldersHouse_PrivateQuarters_MapScripts::
	.byte 0


SunriseVillage_EldersHouse_PrivateQuarters_EventScript_Meowth::
# 6 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	lock
# 7 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	faceplayer
# 8 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	waitse
# 9 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 10 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	speakername SunriseVillage_EldersHouse_PrivateQuarters_EventScript_Meowth_Text_0
# 11 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	msgbox SunriseVillage_EldersHouse_PrivateQuarters_EventScript_Meowth_Text_1
# 14 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	waitmoncry
# 15 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	release
	end


SunriseVillage_EldersHouse_PrivateQuarters_EventScript_Meowth_Text_0:
# 10 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	.string "Meowth$"

SunriseVillage_EldersHouse_PrivateQuarters_EventScript_Meowth_Text_1:
# 12 "data/maps/SunriseVillage_EldersHouse_PrivateQuarters/scripts.pory"
	.string "Fss!$"
