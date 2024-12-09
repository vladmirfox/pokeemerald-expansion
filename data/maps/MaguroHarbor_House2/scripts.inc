MaguroHarbor_House2_MapScripts::
# 2 "data/maps/MaguroHarbor_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MaguroHarbor_House2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MaguroHarbor_House2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MaguroHarbor_House2/scripts.pory"
	call YoungGirlsHouse_NPCSchedules
	return


MaguroHarbor_House2_EventScript_YoungGirl::
# 8 "data/maps/MaguroHarbor_House2/scripts.pory"
	lock
# 9 "data/maps/MaguroHarbor_House2/scripts.pory"
	faceplayer
# 10 "data/maps/MaguroHarbor_House2/scripts.pory"
	speakername MaguroHarbor_House2_EventScript_YoungGirl_Text_0
# 11 "data/maps/MaguroHarbor_House2/scripts.pory"
	msgbox MaguroHarbor_House2_EventScript_YoungGirl_Text_1
# 14 "data/maps/MaguroHarbor_House2/scripts.pory"
	closemessage
# 15 "data/maps/MaguroHarbor_House2/scripts.pory"
	release
	return


MaguroHarbor_House2_EventScript_Fisherman::
# 19 "data/maps/MaguroHarbor_House2/scripts.pory"
	lock
# 20 "data/maps/MaguroHarbor_House2/scripts.pory"
	faceplayer
# 21 "data/maps/MaguroHarbor_House2/scripts.pory"
	speakername MaguroHarbor_House2_EventScript_Fisherman_Text_0
# 22 "data/maps/MaguroHarbor_House2/scripts.pory"
	msgbox MaguroHarbor_House2_EventScript_Fisherman_Text_1
# 25 "data/maps/MaguroHarbor_House2/scripts.pory"
	closemessage
# 26 "data/maps/MaguroHarbor_House2/scripts.pory"
	release
	return


MaguroHarbor_EventScript_MartMom::
# 30 "data/maps/MaguroHarbor_House2/scripts.pory"
	lock
# 31 "data/maps/MaguroHarbor_House2/scripts.pory"
	faceplayer
# 32 "data/maps/MaguroHarbor_House2/scripts.pory"
	speakername MaguroHarbor_EventScript_MartMom_Text_0
# 33 "data/maps/MaguroHarbor_House2/scripts.pory"
	msgbox MaguroHarbor_EventScript_MartMom_Text_1
# 36 "data/maps/MaguroHarbor_House2/scripts.pory"
	closemessage
# 37 "data/maps/MaguroHarbor_House2/scripts.pory"
	release
	return


MaguroHarbor_House2_EventScript_YoungGirl_Text_0:
# 10 "data/maps/MaguroHarbor_House2/scripts.pory"
	.string "Young girl$"

MaguroHarbor_House2_EventScript_YoungGirl_Text_1:
# 12 "data/maps/MaguroHarbor_House2/scripts.pory"
	.string "I can't wait to see my love again…$"

MaguroHarbor_House2_EventScript_Fisherman_Text_0:
# 21 "data/maps/MaguroHarbor_House2/scripts.pory"
	.string "Fisherman$"

MaguroHarbor_House2_EventScript_Fisherman_Text_1:
# 23 "data/maps/MaguroHarbor_House2/scripts.pory"
	.string "My daughter is current at the\n"
	.string "Beachbound Route with her partner.\l"
	.string "She stays out late, but I'm not\l"
	.string "worried since she's not alone. She's a\l"
	.string "smart girl too.$"

MaguroHarbor_EventScript_MartMom_Text_0:
# 32 "data/maps/MaguroHarbor_House2/scripts.pory"
	.string "Merchant$"

MaguroHarbor_EventScript_MartMom_Text_1:
# 34 "data/maps/MaguroHarbor_House2/scripts.pory"
	.string "It's hard selling at the market.$"
