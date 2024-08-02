PlayerHome_MapScripts::
	.byte 0


turnto_and_getunown::
# 8 "data/maps/PlayerHome/scripts.pory"
	applymovement OBJECT_EVENT_ID_PLAYER, face_right
# 9 "data/maps/PlayerHome/scripts.pory"
	waitmovement 0
# 10 "data/maps/PlayerHome/scripts.pory"
	call getunown
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
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/PlayerHome/scripts.pory"
	removeobject 1
# 29 "data/maps/PlayerHome/scripts.pory"
	givemon SPECIES_UNOWN, 5, ITEM_POKE_BALL
# 30 "data/maps/PlayerHome/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq getunown_2
# 36 "data/maps/PlayerHome/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq getunown_3
getunown_1:
# 42 "data/maps/PlayerHome/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 43 "data/maps/PlayerHome/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 44 "data/maps/PlayerHome/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
# 45 "data/maps/PlayerHome/scripts.pory"
	waitmessage
# 46 "data/maps/PlayerHome/scripts.pory"
	releaseall
	end

getunown_2:
# 31 "data/maps/PlayerHome/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 32 "data/maps/PlayerHome/scripts.pory"
	msgbox getunown_Text_0
# 33 "data/maps/PlayerHome/scripts.pory"
	removeobject 3
# 34 "data/maps/PlayerHome/scripts.pory"
	call NicknamePartyMon
	goto getunown_1

getunown_3:
# 37 "data/maps/PlayerHome/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/PlayerHome/scripts.pory"
	msgbox getunown_Text_0
# 39 "data/maps/PlayerHome/scripts.pory"
	removeobject 3
# 40 "data/maps/PlayerHome/scripts.pory"
	call NicknameBoxMon
	goto getunown_1


# 50 "data/maps/PlayerHome/scripts.pory"
lookatunown:
# 51 "data/maps/PlayerHome/scripts.pory"
	face_right
	step_end

getunown_Text_0:
# 32 "data/maps/PlayerHome/scripts.pory"
	.string "You grabbed your partner, Unown!$"
