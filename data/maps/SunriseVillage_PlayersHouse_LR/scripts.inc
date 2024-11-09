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
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 28 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBrotherSisterString
# 29 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	speakername SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0
# 30 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_1
# 37 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 38 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	applymovement 1, SunriseVillage_PlayersHouse_LR_Movement_BigSisExits
# 39 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 40 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmovement 0
# 41 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitse
# 43 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	removeobject 1
# 45 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 3
# 46 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setflag FLAG_HIDE_BIGSIS_HOME
# 48 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	end


# 52 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
SunriseVillage_PlayersHouse_LR_Movement_BigSisExits:
# 53 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 53 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 54 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_right
# 55 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 55 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	walk_down
# 56 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	step_end

SunriseVillage_PlayersHouse_LR_EventScript_BigSis::
# 60 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 61 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	faceplayer
# 62 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	speakername SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0
# 63 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_le SunriseVillage_PlayersHouse_LR_EventScript_BigSis_2
# 69 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
	goto_if_le SunriseVillage_PlayersHouse_LR_EventScript_BigSis_3
# 76 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_eq SunriseVillage_PlayersHouse_LR_EventScript_BigSis_4
# 114 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBroSisString
# 115 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_5
# 119 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 120 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 121 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	speakername SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0
# 122 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_6
# 125 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1:
# 127 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	return

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_2:
# 64 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_0
# 68 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_3:
# 70 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBrotherSisterString
# 71 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_1
# 75 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_4:
# 77 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBrotherSisterString
# 78 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_STARTER_MON
# 79 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_2
# 89 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 91 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 93 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_STARTER_MON
# 94 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	speakername SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0
# 95 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_3
# 98 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 100 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 102 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	special GetPlayerBrotherSisterString
# 103 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	speakername SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0
# 104 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_4
# 108 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 110 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 8
	goto SunriseVillage_PlayersHouse_LR_EventScript_BigSis_1


SunriseVillage_PlayersHouse_LR_EventScript_Eevee::
# 131 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 132 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	faceplayer
# 133 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitse
# 134 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 135 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	ismonseen SPECIES_EEVEE
# 136 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SunriseVillage_PlayersHouse_LR_EventScript_Eevee_2
# 139 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	speakername SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_1
SunriseVillage_PlayersHouse_LR_EventScript_Eevee_1:
# 141 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_2
# 142 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	waitmoncry
# 143 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	return

SunriseVillage_PlayersHouse_LR_EventScript_Eevee_2:
# 137 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	speakername SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_0
	goto SunriseVillage_PlayersHouse_LR_EventScript_Eevee_1


SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote::
# 147 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	lock
# 148 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	msgbox SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote_Text_0
# 153 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	closemessage
# 154 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	release
	end


SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_0:
# 29 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Big sis$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSisSaysHi_Text_1:
# 31 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Oh, {PLAYER}, you're up! Ready for\n"
	.string "the big event?\p"
	.string "Are you excited? I sure hope you are,\n"
	.string "because I'm VERY EXCITED!\p"
	.string "I have to head out! Don't be late, I\n"
	.string "know you, little {STR_VAR_1}!\p"
	.string "By the way, your friend Natsuki left\n"
	.string "you a note.\p"
	.string "Make sure you read it!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_0:
# 65 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "What are you still doing here? You're\n"
	.string "late for the distribution!\p"
	.string "Go to Kaba's house right now!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_1:
# 72 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey little {STR_VAR_1}! See how\n"
	.string "cute my new Pokémon is?\p"
	.string "By the way, I heard Natsuki was\n"
	.string "waiting for you at Elder Kaba's house.\l"
	.string "You should probably go see them.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_2:
# 80 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey little {STR_VAR_1}! See how\n"
	.string "cute my new Pokémon is?\p"
	.string "Oh, who is that lovely little thing\n"
	.string "with you?\p"
	.string "{STR_VAR_2}, huh?\p"
	.string "Looks like it already likes you a lot!\n"
	.string "You're going to make a great wielder, I\l"
	.string "know it!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "So you're going on a journey…\p"
	.string "That's great! I'm proud of you,\n"
	.string "{PLAYER}.\p"
	.string "Take some of these Pokéballs for your\n"
	.string "trip, in case you find any good\l"
	.string "Pokémon!$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_3:
# 96 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Oh, and rest here a while before you\n"
	.string "go! Your {STR_VAR_2} looks tired.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_4:
# 105 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Alrighty! You all set? Have a safe\n"
	.string "journey, little {STR_VAR_1}.\p"
	.string "Come say hi sometimes though, will\n"
	.string "you?$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_5:
# 116 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Hey {PLAYER}! How's it going?\p"
	.string "Here, rest for a bit.$"

SunriseVillage_PlayersHouse_LR_EventScript_BigSis_Text_6:
# 123 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "See you around, little\n"
	.string "{STR_VAR_1}.$"

SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_0:
# 137 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Eevee$"

SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_1:
# 139 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Fluffy fox$"

SunriseVillage_PlayersHouse_LR_EventScript_Eevee_Text_2:
# 141 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "Eee!$"

SunriseVillage_PlayersHouse_LR_EventScript_RivalsNote_Text_0:
# 149 "data/maps/SunriseVillage_PlayersHouse_LR/scripts.pory"
	.string "“Hey {PLAYER},\n"
	.string "I'm going down to the beach before\l"
	.string "the giveaway, meet me there if you\l"
	.string "wanna hang out.\p"
	.string "-Natsuki”$"
