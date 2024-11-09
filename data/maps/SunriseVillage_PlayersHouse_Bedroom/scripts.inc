SunriseVillage_PlayersHouse_Bedroom_MapScripts::
# 2 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunriseVillage_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SunriseVillage_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 1
	goto_if_lt SunriseVillage_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SunriseVillage_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setrespawn HEAL_LOCATION_SUNRISE_VILLAGE
# 5 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 1
# 7 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	pausefakertc
	return


SunriseVillage_PlayersHouse_Bedroom_EventScript_Doll::
# 13 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	lock
# 14 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_EventScript_Doll_Text_0
# 17 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	release
	return


SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling::
# 22 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	lock
# 23 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 24 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	speakername SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_0
# 25 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_1
# 29 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_2, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_3, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_4
# 41 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 43 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	speakername SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_0
# 45 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_2
# 51 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	delay 48
# 53 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_6
# 58 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	dynmultichoice 16, 8, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_7, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_8
# 69 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 71 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	delay 30
# 73 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	speakername SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_0
# 74 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_9
SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_1:
# 80 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 82 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 2
# 83 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
# 84 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	release
	end

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_2:
# 46 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	delay 30
# 47 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_5
	goto SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_1


SunriseVillage_PlayersHouse_Bedroom_EventScript_Doll_Text_0:
# 15 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "A very fluffy Wooloo doll. It's made of\n"
	.string "real Wooloo wool!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_0:
# 24 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "Big sis$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_1:
# 26 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "{PLAYER}! {PLAYER}!\n"
	.string "Are you still sleeping?$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_2:
# 36 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "…Yes?$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_3:
# 37 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "Coming!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_4:
# 38 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "…$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_5:
# 48 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "Very funny! Now get up and get ready!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_6:
# 54 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "… … … … … …\p"
	.string "…{PLAYER}!! ARE YOU UP?!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_7:
# 65 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "COMIIIIING!!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_8:
# 66 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "COMIIIIIIIIIIING!!!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_9:
# 75 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "No need to yell, I can hear you just\n"
	.string "fine!\p"
	.string "Now get up and get ready!$"
