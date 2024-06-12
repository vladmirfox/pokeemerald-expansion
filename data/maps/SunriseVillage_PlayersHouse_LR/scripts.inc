SunriseVillage_PlayersHouse_LR_MapScripts::
# 5 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunriseVillage_PlayersHouse_LR_MapScripts_MAP_SCRIPT_ON_LOAD
# 13 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunriseVillage_PlayersHouse_LR_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunriseVillage_PlayersHouse_LR_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_lt SunriseVillage_PlayersHouse_LR_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 10 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	removeobject 2
	return

SunriseVillage_PlayersHouse_LR_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setmetatile 4, 4, METATILE_HouseBeige_Scroll, TRUE
	return

SunriseVillage_PlayersHouse_LR_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	map_script_2 VAR_SUNRISE_VILLAGE_INTRO_STATE, 2, SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi
	.2byte 0


SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi::
# 19 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 20 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	playse SE_PIN
# 21 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 22 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmovement 0
# 23 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 24 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmovement 0
# 25 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	turnobject 1, DIR_EAST
# 26 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0
# 33 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 34 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	applymovement 1, SunriseVillage_PlayersHouse_LR_Movement_BigSisExits
# 35 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmovement 0
# 36 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitse
# 38 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	removeobject 1
# 40 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 3
# 41 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setflag FLAG_HIDE_BIGSIS_HOME
# 43 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	end


# 47 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
SunriseVillage_PlayersHouse_LR_Movement_BigSisExits:
# 48 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 48 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 49 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_right
# 50 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 50 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 51 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	step_end

SunriseVillage_PlayersHouse_LR_EventScript_BigSis::
# 55 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 56 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	faceplayer
# 57 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_le SunriseVillage_PlayersHouse_LR_EventScript_BigSis_2
# 62 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
	goto_if_le SunriseVillage_PlayersHouse_LR_EventScript_BigSis_3
# 68 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_eq SunriseVillage_PlayersHouse_LR_EventScript_BigSis_4
# 91 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBroSisString
# 92 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_4, MSGBOX_AUTOCLOSE
# 96 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 97 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_5, MSGBOX_AUTOCLOSE
SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1:
# 101 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	return

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_2:
# 58 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_3:
# 63 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBroSisString
# 64 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_1, MSGBOX_AUTOCLOSE
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_4:
# 69 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBroSisString
# 70 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_STARTER_MON
# 71 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 83 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_3, MSGBOX_AUTOCLOSE
# 87 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 8
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1


SunriseVillage_PlayersHouse_LR_EventScript_Eevee::
# 105 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 106 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	faceplayer
# 107 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitse
# 108 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 109 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_0
# 110 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmoncry
# 111 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	return


SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote::
# 115 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 116 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote_Text_0
# 121 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	end


SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0:
# 27 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, you're up! Ready for the\n"
	.string "big event?\p"
	.string "Are you excited? I sure hope you are,\n"
	.string "because I'm VERY EXCITED!\p"
	.string "I have to head out! Don't be late!\p"
	.string "Oh, by the way, your friend {RIVAL}\n"
	.string "left you a note.\p"
	.string "Make sure you read it!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_0:
# 59 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "What are you still doing here? You're\n"
	.string "late for the distribution!\p"
	.string "Go to Kaba's house right now!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_1:
# 65 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey {STR_VAR_1}! See how cute my\n"
	.string "new Pokémon is?\p"
	.string "By the way, I heard {RIVAL} was\n"
	.string "waiting for you at Elder Kaba's house.\l"
	.string "You should probably go see him.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_2:
# 72 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey {STR_VAR_1}! See how cute my\n"
	.string "new Pokémon is?\p"
	.string "Oh, who is that lovely little thing with\n"
	.string "you?\p"
	.string "So you got a {STR_VAR_2}, huh?\p"
	.string "Looks like it already likes you a lot!\n"
	.string "You're going to make a great wielder, I\l"
	.string "know it!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "So you're going on a journey…\p"
	.string "That's great! I'm proud of you,\n"
	.string "{PLAYER}.\p"
	.string "Come say hi sometimes, will you?\p"
	.string "Oh, and rest here a while before you go!\n"
	.string "Your {STR_VAR_2} looks tired.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_3:
# 84 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Alrighty! You all set? Have a safe\n"
	.string "journey!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_4:
# 93 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey {PLAYER}! How's it going?\p"
	.string "Here, rest for a bit.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_5:
# 98 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "See you around, {STR_VAR_1}.$"

SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_0:
# 109 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Eee!$"

SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote_Text_0:
# 117 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "“Hey {PLAYER}{KUN},\n"
	.string "I'm going down to the beach before the\l"
	.string "giveaway, meet me there if you wanna\l"
	.string "hang out.\p"
	.string "-{RIVAL}”$"
