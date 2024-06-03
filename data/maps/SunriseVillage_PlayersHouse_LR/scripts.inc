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
	waitmovement 0
# 27 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0
# 34 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 35 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	applymovement 1, SunriseVillage_PlayersHouse_LR_Movement_BigSisExits
# 36 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmovement 0
# 37 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitse
# 39 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	removeobject 1
# 41 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 3
# 42 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setflag FLAG_HIDE_BIGSIS_HOME
# 44 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	end


# 48 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
SunriseVillage_PlayersHouse_LR_Movement_BigSisExits:
# 49 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 49 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 50 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_right
# 51 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 51 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 52 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	step_end

SunriseVillage_PlayersHouse_LR_EventScript_BigSis::
# 56 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 57 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	faceplayer
# 58 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_le SunriseVillage_PlayersHouse_LR_EventScript_BigSis_2
# 63 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_le SunriseVillage_PlayersHouse_LR_EventScript_BigSis_3
# 69 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_eq SunriseVillage_PlayersHouse_LR_EventScript_BigSis_4
# 92 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBroSisString
# 93 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_4, MSGBOX_AUTOCLOSE
# 97 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 98 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_5, MSGBOX_AUTOCLOSE
SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1:
# 102 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	return

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_2:
# 59 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_3:
# 64 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBroSisString
# 65 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_1, MSGBOX_AUTOCLOSE
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_4:
# 70 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBroSisString
# 71 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_STARTER_MON
# 72 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_2, MSGBOX_AUTOCLOSE
# 83 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 84 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_3, MSGBOX_AUTOCLOSE
# 88 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 8
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1


SunriseVillage_PlayersHouse_LR_EventScript_Eevee::
# 106 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 107 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	faceplayer
# 108 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitse
# 109 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 110 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_0
# 111 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmoncry
# 112 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	return


SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote::
# 116 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 117 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote_Text_0
# 122 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	end


SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0:
# 28 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, you're up! Ready for the\n"
	.string "big event?\p"
	.string "Are you excited? I sure hope you are,\n"
	.string "because I'm VERY EXCITED!\p"
	.string "I have to head out! Don't be late!\p"
	.string "Oh, by the way, your friend {RIVAL}\n"
	.string "left you a note.\p"
	.string "Make sure you read it!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_0:
# 60 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "What are you still doing here? You're\n"
	.string "late for the distribution!\p"
	.string "Go to Kaba's house right now!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_1:
# 66 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey {STR_VAR_1}! See how cute my\n"
	.string "new Pokémon is?\p"
	.string "By the way, I heard {RIVAL} was\n"
	.string "waiting for you at Elder Kaba's house.\l"
	.string "You should probably go see him.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_2:
# 73 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "{STR_VAR_1}! See how cute my new\n"
	.string "Pokémon is?\p"
	.string "Oh, who is that lovely little thing with\n"
	.string "you?\p"
	.string "{STR_VAR_2}, huh?\p"
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
	.string "Your Pok {STR_VAR_2} looks tired.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_3:
# 85 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Alrighty! You all set? Have a safe\n"
	.string "journey!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_4:
# 94 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey {PLAYER}! How's it going?\p"
	.string "Here, rest for a bit.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_5:
# 99 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "See you around, {STR_VAR_1}.$"

SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_0:
# 110 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Eee!$"

SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote_Text_0:
# 118 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "“Hey {PLAYER}{KUN},\n"
	.string "I'm going down to the beach before the\l"
	.string "giveaway, meet me there if you wanna\l"
	.string "hang out.\p"
	.string "-{RIVAL}”$"
