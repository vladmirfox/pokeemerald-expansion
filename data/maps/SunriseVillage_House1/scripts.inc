SunriseVillage_House1_MapScripts::
	.byte 0


SunriseVillage_House1_EventScript_Kirlia::
# 5 "data/maps/SunriseVillage_House1/scripts.pory"
	speakername SunriseVillage_House1_EventScript_Kirlia_Text_0
# 6 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_Kirlia_Text_1, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_OldWoman::
# 10 "data/maps/SunriseVillage_House1/scripts.pory"
	speakername SunriseVillage_House1_EventScript_OldWoman_Text_0
# 11 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_OldWoman_Text_1, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_OldMan::
# 15 "data/maps/SunriseVillage_House1/scripts.pory"
	speakername SunriseVillage_House1_EventScript_OldWoman_Text_0
# 16 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_OldMan_Text_0, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_LittleGirl::
# 20 "data/maps/SunriseVillage_House1/scripts.pory"
	speakername SunriseVillage_House1_EventScript_LittleGirl_Text_0
# 21 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_LittleGirl_Text_1, MSGBOX_NPC
	return


SunriseVillage_House1_EventScript_Zigzagoon::
# 25 "data/maps/SunriseVillage_House1/scripts.pory"
	lock
# 26 "data/maps/SunriseVillage_House1/scripts.pory"
	faceplayer
# 27 "data/maps/SunriseVillage_House1/scripts.pory"
	waitse
# 28 "data/maps/SunriseVillage_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 29 "data/maps/SunriseVillage_House1/scripts.pory"
	speakername SunriseVillage_House1_EventScript_Zigzagoon_Text_0
# 30 "data/maps/SunriseVillage_House1/scripts.pory"
	msgbox SunriseVillage_House1_EventScript_Zigzagoon_Text_1
# 33 "data/maps/SunriseVillage_House1/scripts.pory"
	waitmoncry
# 34 "data/maps/SunriseVillage_House1/scripts.pory"
	release
	end


SunriseVillage_House1_EventScript_Kirlia_Text_0:
# 5 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Kirlia$"

SunriseVillage_House1_EventScript_Kirlia_Text_1:
# 6 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "…$"

SunriseVillage_House1_EventScript_OldWoman_Text_0:
# 10 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Neighbour$"

SunriseVillage_House1_EventScript_OldWoman_Text_1:
# 11 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Kirlia here is quite the silent type.\n"
	.string "I'm fine with that.$"

SunriseVillage_House1_EventScript_OldMan_Text_0:
# 16 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "My granddaughter's Pokémon has\n"
	.string "already scratched all the furniture…$"

SunriseVillage_House1_EventScript_LittleGirl_Text_0:
# 20 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Little girl$"

SunriseVillage_House1_EventScript_LittleGirl_Text_1:
# 21 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Ahhh I'm so happy!! Look how cute my\n"
	.string "Ziggy is!!!$"

SunriseVillage_House1_EventScript_Zigzagoon_Text_0:
# 29 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Ziggy$"

SunriseVillage_House1_EventScript_Zigzagoon_Text_1:
# 31 "data/maps/SunriseVillage_House1/scripts.pory"
	.string "Rawr!$"
