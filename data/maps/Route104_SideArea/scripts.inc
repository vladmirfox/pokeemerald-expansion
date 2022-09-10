Route104_SideArea_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route104_SideArea_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_SYS_REMOTE_POKEMON_STORAGE
	return


Route104_SideArea_Healer::
	lock
	faceplayer
	msgbox Route104_SideArea_Healer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route104_SideArea_Healer_1
	msgbox Route104_SideArea_Healer_Text_2, MSGBOX_NPC
	return

Route104_SideArea_Healer_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	msgbox Route104_SideArea_Healer_Text_1
	waitmessage
	release
	end


Route104_SideArea_Healer_Text_0:
	.string "Would you like me to heal your party?$"

Route104_SideArea_Healer_Text_1:
	.string "Good luck.$"

Route104_SideArea_Healer_Text_2:
	.string "Alright then.$"
