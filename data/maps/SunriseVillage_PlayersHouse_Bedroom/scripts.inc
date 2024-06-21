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
# 5 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 1
	return


SunriseVillage_PlayersHouse_Bedroom_EventScript_Doll::
# 11 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	lock
# 12 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_EventScript_Doll_Text_0
# 15 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	release
	return


SunriseVillage_PlayersHouse_Bedroom_EventScript_MUGSHOT::
# 19 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	lock
# 20 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AO
# 21 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	callnative DrawMugshot
# 22 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_EventScript_MUGSHOT_Text_0
# 25 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 26 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	callnative ClearMugshot
# 27 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	release
	return


SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling::
# 32 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	lock
# 33 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 34 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_0
# 38 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_1, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_2, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_3
# 50 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_2
# 55 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_5
# 60 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	dynmultichoice 16, 8, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_6, SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_7
# 71 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_8
SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_1:
# 77 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 79 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 2
# 80 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
# 81 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	release
	end

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_2:
# 51 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_4
	goto SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_1


SunriseVillage_PlayersHouse_Bedroom_EventScript_Doll_Text_0:
# 13 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "A very fluffy Wooloo doll. It's made of\n"
	.string "real Wooloo wool!$"

SunriseVillage_PlayersHouse_Bedroom_EventScript_MUGSHOT_Text_0:
# 23 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "What up dumdum?$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_0:
# 35 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Are you still\n"
	.string "sleeping?$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_1:
# 45 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "Not anymore!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_2:
# 46 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "I'm coming!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_3:
# 47 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "…$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_4:
# 52 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "Very funny! Now get up and get ready!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_5:
# 56 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "… … … … … …\p"
	.string "…{PLAYER}? Are you up?$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_6:
# 67 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "COMIIIIING!!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_7:
# 68 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "COMIIIIIIIIIIING!!!$"

SunriseVillage_PlayersHouse_Bedroom_Event_BigSisCalling_Text_8:
# 72 "data/maps/SunriseVillage_PlayersHouse_Bedroom/scripts.pory"
	.string "No need to yell, I can hear you just\n"
	.string "fine!\p"
	.string "Now get up and get ready!$"
