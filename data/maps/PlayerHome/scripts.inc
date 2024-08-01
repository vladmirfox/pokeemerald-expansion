PlayerHome_MapScripts::
	.byte 0


turnto_and_getunown::
# 8 "data/maps/PlayerHome/scripts.pory"
	lockall
# 9 "data/maps/PlayerHome/scripts.pory"
	call getunown
# 10 "data/maps/PlayerHome/scripts.pory"
	releaseall
	end


getrunning_shoes::
# 15 "data/maps/PlayerHome/scripts.pory"
	lockall
# 16 "data/maps/PlayerHome/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/PlayerHome/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 19 "data/maps/PlayerHome/scripts.pory"
	removeobject 2
# 20 "data/maps/PlayerHome/scripts.pory"
	releaseall
	end


getunown::
# 25 "data/maps/PlayerHome/scripts.pory"
	lockall
# 26 "data/maps/PlayerHome/scripts.pory"
	setrespawn HEAL_LOCATION_BA
# 27 "data/maps/PlayerHome/scripts.pory"
	givemon SPECIES_UNOWN, 5, ITEM_POKE_BALL
# 28 "data/maps/PlayerHome/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/PlayerHome/scripts.pory"
	msgbox getunown_Text_0
# 30 "data/maps/PlayerHome/scripts.pory"
	removeobject 1
# 31 "data/maps/PlayerHome/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 32 "data/maps/PlayerHome/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 33 "data/maps/PlayerHome/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
# 34 "data/maps/PlayerHome/scripts.pory"
	msgbox getunown_Text_1, MSGBOX_YESNO
# 35 "data/maps/PlayerHome/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq getunown_2
getunown_1:
# 38 "data/maps/PlayerHome/scripts.pory"
	waitmessage
# 39 "data/maps/PlayerHome/scripts.pory"
	releaseall
	end

getunown_2:
# 36 "data/maps/PlayerHome/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto getunown_1


getunown_Text_0:
# 29 "data/maps/PlayerHome/scripts.pory"
	.string "You grabbed your partner, Unown!$"

getunown_Text_1:
# 34 "data/maps/PlayerHome/scripts.pory"
	.string "Give it a nickname?$"
