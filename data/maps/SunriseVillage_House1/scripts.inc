SunriseVillage_House1_MapScripts::
	.byte 0


SunriseVillage_House1_EventScript_Kirlia::
# 5 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_Kirlia_Text_0, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_OldWoman::
# 9 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_OldWoman_Text_0, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_OldMan::
# 13 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_OldMan_Text_0, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_LittleGirl::
# 17 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_Zigzagoon::
# 21 "data/maps/SunriseVillage_House1/scripts.pory"
	lock
# 22 "data/maps/SunriseVillage_House1/scripts.pory"
	faceplayer
# 23 "data/maps/SunriseVillage_House1/scripts.pory"
	waitse
# 24 "data/maps/SunriseVillage_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 25 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_Zigzagoon_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/SunriseVillage_House1/scripts.pory"
	waitmoncry
# 29 "data/maps/SunriseVillage_House1/scripts.pory"
	release
	end


SunriseVillage_House1_EventScript_Kirlia_Text_0:
# 5 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "…$"

SunriseVillage_House1_EventScript_OldWoman_Text_0:
# 9 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Kirlia here is quite the silent type. I'm\n"
	.string "fine with that.$"

SunriseVillage_House1_EventScript_OldMan_Text_0:
# 13 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "My granddaughter's Pokémon has already\n"
	.string "scratched all the furniture…$"

SunriseVillage_House1_EventScript_LittleGirl_Text_0:
# 17 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Ahhh I'm so happy!! Look how cute my\n"
	.string "Zigzagoon is!!!$"

SunriseVillage_House1_EventScript_Zigzagoon_Text_0:
# 26 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Rawr!$"
