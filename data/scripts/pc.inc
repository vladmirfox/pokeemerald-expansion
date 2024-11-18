Common_EventScript_PcGuy::
# 2 "data/scripts/pc.pory"
	lock
# 3 "data/scripts/pc.pory"
	faceplayer
# 4 "data/scripts/pc.pory"
	goto_if_set FLAG_PC_EXPLAINED, Common_EventScript_PcGuy_2
# 9 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_1
Common_EventScript_PcGuy_1:
# 18 "data/scripts/pc.pory"
	call EventScript_AccessPokemonStorage
# 19 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 20 "data/scripts/pc.pory"
	waitstate
# 21 "data/scripts/pc.pory"
	goto_if_set FLAG_PC_EXPLAINED, Common_EventScript_PcGuy_6
# 27 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_3
# 33 "data/scripts/pc.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/scripts/pc.pory"
	delay 120
# 35 "data/scripts/pc.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_4
# 44 "data/scripts/pc.pory"
	setflag FLAG_PC_EXPLAINED
Common_EventScript_PcGuy_5:
# 47 "data/scripts/pc.pory"
	release
	end

Common_EventScript_PcGuy_2:
# 5 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_0
	goto Common_EventScript_PcGuy_1

Common_EventScript_PcGuy_6:
# 22 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_2
	goto Common_EventScript_PcGuy_5


# 51 "data/scripts/pc.pory"
EventScript_PC::
# 52 "data/scripts/pc.pory"
	lockall
# 53 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 54 "data/scripts/pc.pory"
	special DoPCTurnOnEffect
# 55 "data/scripts/pc.pory"
	playse SE_PC_ON
# 56 "data/scripts/pc.pory"
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
# 57 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 58 "data/scripts/pc.pory"
	end
# 59 "data/scripts/pc.pory"

# 60 "data/scripts/pc.pory"
EventScript_PCMainMenu::
# 61 "data/scripts/pc.pory"
	message gText_WhichPCShouldBeAccessed
# 62 "data/scripts/pc.pory"
	waitmessage
# 63 "data/scripts/pc.pory"
	special ScriptMenu_CreatePCMultichoice
# 64 "data/scripts/pc.pory"
	waitstate
# 65 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 66 "data/scripts/pc.pory"
	end
# 67 "data/scripts/pc.pory"

# 68 "data/scripts/pc.pory"
EventScript_AccessPC::
# 69 "data/scripts/pc.pory"
	switch VAR_RESULT
# 70 "data/scripts/pc.pory"
	case 0, EventScript_AccessPokemonStorage
# 71 "data/scripts/pc.pory"
	case 1, EventScript_AccessPlayersPC
# 72 "data/scripts/pc.pory"
	case 2, EventScript_AccessHallOfFame
# 73 "data/scripts/pc.pory"
	case 3, EventScript_TurnOffPC
# 74 "data/scripts/pc.pory"
	case MULTI_B_PRESSED, EventScript_TurnOffPC
# 75 "data/scripts/pc.pory"
	end
# 76 "data/scripts/pc.pory"

# 77 "data/scripts/pc.pory"
EventScript_AccessPlayersPC::
# 78 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 79 "data/scripts/pc.pory"
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
# 80 "data/scripts/pc.pory"
	special PlayerPC
# 81 "data/scripts/pc.pory"
	waitstate
# 82 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 83 "data/scripts/pc.pory"
	end
# 84 "data/scripts/pc.pory"

# 85 "data/scripts/pc.pory"
EventScript_AccessPokemonStorage::
# 86 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 87 "data/scripts/pc.pory"
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
# 88 "data/scripts/pc.pory"
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
# 89 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 90 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 91 "data/scripts/pc.pory"
	waitstate
# 92 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 93 "data/scripts/pc.pory"
	end
# 94 "data/scripts/pc.pory"

# 95 "data/scripts/pc.pory"
EventScript_AccessSomeonesPC::
# 96 "data/scripts/pc.pory"
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
# 97 "data/scripts/pc.pory"
	return
# 98 "data/scripts/pc.pory"

# 99 "data/scripts/pc.pory"
EventScript_AccessLanettesPC::
# 100 "data/scripts/pc.pory"
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
# 101 "data/scripts/pc.pory"
	return
# 102 "data/scripts/pc.pory"

# 103 "data/scripts/pc.pory"
EventScript_TurnOffPC::
# 104 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 105 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 106 "data/scripts/pc.pory"
	special DoPCTurnOffEffect
# 107 "data/scripts/pc.pory"
	releaseall
# 108 "data/scripts/pc.pory"
	end
# 109 "data/scripts/pc.pory"

# 110 "data/scripts/pc.pory"
EventScript_AccessHallOfFame::
# 111 "data/scripts/pc.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
# 112 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 113 "data/scripts/pc.pory"
	special AccessHallOfFamePC
# 114 "data/scripts/pc.pory"
	waitstate
# 115 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 116 "data/scripts/pc.pory"
	end
# 117 "data/scripts/pc.pory"

# 118 "data/scripts/pc.pory"
EventScript_AccessPokemonBoxLink::
# 119 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 120 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 121 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 122 "data/scripts/pc.pory"
	waitstate
# 123 "data/scripts/pc.pory"
	goto EventScript_TurnOffPC
# 124 "data/scripts/pc.pory"
	end

Common_EventScript_PcGuy_Text_0:
# 6 "data/scripts/pc.pory"
	.string "Need me to carry some Pokémon around\n"
	.string "for you? Sure thing!$"

Common_EventScript_PcGuy_Text_1:
# 10 "data/scripts/pc.pory"
	.string "Hey there, Pokémon wielder!\p"
	.string "Have you ever thought, “Darn, I wish I\n"
	.string "could catch this seventh Pokémon,\l"
	.string "but I only have room for six?”\p"
	.string "Today's your lucky day!\p"
	.string "I've been appointed by the Toku\n"
	.string "council to store wielders' Pokémon\l"
	.string "for them while they travel around.\p"
	.string "We bring your Pokémon to a ranch\n"
	.string "where they live happily while waiting\l"
	.string "for you to get them back!\p"
	.string "So if you ever want to store or\n"
	.string "retrieve your Pokémon, come talk to\l"
	.string "me!$"

Common_EventScript_PcGuy_Text_2:
# 23 "data/scripts/pc.pory"
	.string "Pant… pant… Thanks for using our\n"
	.string "Pokémon storage!$"

Common_EventScript_PcGuy_Text_3:
# 28 "data/scripts/pc.pory"
	.string "Oh, you want to store these Pokémon?\p"
	.string "Alright, I'll just carry them over to\n"
	.string "the ranch!\p"
	.string "Just a minute!$"

Common_EventScript_PcGuy_Text_4:
# 38 "data/scripts/pc.pory"
	.string "PANT… PANT…\p"
	.string "Your… pant… Pokémon… pant… are all\n"
	.string "set!\p"
	.string "Whew, the ranch is a little far from\n"
	.string "here! Pant…\p"
	.string "Come… pant… Come again!$"
