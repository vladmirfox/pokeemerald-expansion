Common_EventScript_PcGuy::
# 2 "data/scripts/pc.pory"
	goto_if_set FLAG_PC_EXPLAINED, Common_EventScript_PcGuy_2
# 7 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_1
Common_EventScript_PcGuy_1:
# 16 "data/scripts/pc.pory"
	call EventScript_AccessPokemonStorage
# 17 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 18 "data/scripts/pc.pory"
	waitstate
# 19 "data/scripts/pc.pory"
	goto_if_set FLAG_PC_EXPLAINED, Common_EventScript_PcGuy_6
# 25 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_3
# 31 "data/scripts/pc.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/scripts/pc.pory"
	delay 120
# 33 "data/scripts/pc.pory"
	fadescreen FADE_FROM_BLACK
# 35 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_4
# 42 "data/scripts/pc.pory"
	setflag FLAG_PC_EXPLAINED
Common_EventScript_PcGuy_5:
	end

Common_EventScript_PcGuy_2:
# 3 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_0
	goto Common_EventScript_PcGuy_1

Common_EventScript_PcGuy_6:
# 20 "data/scripts/pc.pory"
	msgbox Common_EventScript_PcGuy_Text_2
	goto Common_EventScript_PcGuy_5


# 47 "data/scripts/pc.pory"
EventScript_PC::
# 48 "data/scripts/pc.pory"
	lockall
# 49 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 50 "data/scripts/pc.pory"
	special DoPCTurnOnEffect
# 51 "data/scripts/pc.pory"
	playse SE_PC_ON
# 52 "data/scripts/pc.pory"
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
# 53 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 54 "data/scripts/pc.pory"
	end
# 55 "data/scripts/pc.pory"

# 56 "data/scripts/pc.pory"
EventScript_PCMainMenu::
# 57 "data/scripts/pc.pory"
	message gText_WhichPCShouldBeAccessed
# 58 "data/scripts/pc.pory"
	waitmessage
# 59 "data/scripts/pc.pory"
	special ScriptMenu_CreatePCMultichoice
# 60 "data/scripts/pc.pory"
	waitstate
# 61 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 62 "data/scripts/pc.pory"
	end
# 63 "data/scripts/pc.pory"

# 64 "data/scripts/pc.pory"
EventScript_AccessPC::
# 65 "data/scripts/pc.pory"
	switch VAR_RESULT
# 66 "data/scripts/pc.pory"
	case 0, EventScript_AccessPokemonStorage
# 67 "data/scripts/pc.pory"
	case 1, EventScript_AccessPlayersPC
# 68 "data/scripts/pc.pory"
	case 2, EventScript_AccessHallOfFame
# 69 "data/scripts/pc.pory"
	case 3, EventScript_TurnOffPC
# 70 "data/scripts/pc.pory"
	case MULTI_B_PRESSED, EventScript_TurnOffPC
# 71 "data/scripts/pc.pory"
	end
# 72 "data/scripts/pc.pory"

# 73 "data/scripts/pc.pory"
EventScript_AccessPlayersPC::
# 74 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 75 "data/scripts/pc.pory"
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
# 76 "data/scripts/pc.pory"
	special PlayerPC
# 77 "data/scripts/pc.pory"
	waitstate
# 78 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 79 "data/scripts/pc.pory"
	end
# 80 "data/scripts/pc.pory"

# 81 "data/scripts/pc.pory"
EventScript_AccessPokemonStorage::
# 82 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 83 "data/scripts/pc.pory"
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
# 84 "data/scripts/pc.pory"
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
# 85 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 86 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 87 "data/scripts/pc.pory"
	waitstate
# 88 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 89 "data/scripts/pc.pory"
	end
# 90 "data/scripts/pc.pory"

# 91 "data/scripts/pc.pory"
EventScript_AccessSomeonesPC::
# 92 "data/scripts/pc.pory"
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
# 93 "data/scripts/pc.pory"
	return
# 94 "data/scripts/pc.pory"

# 95 "data/scripts/pc.pory"
EventScript_AccessLanettesPC::
# 96 "data/scripts/pc.pory"
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
# 97 "data/scripts/pc.pory"
	return
# 98 "data/scripts/pc.pory"

# 99 "data/scripts/pc.pory"
EventScript_TurnOffPC::
# 100 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 101 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 102 "data/scripts/pc.pory"
	special DoPCTurnOffEffect
# 103 "data/scripts/pc.pory"
	releaseall
# 104 "data/scripts/pc.pory"
	end
# 105 "data/scripts/pc.pory"

# 106 "data/scripts/pc.pory"
EventScript_AccessHallOfFame::
# 107 "data/scripts/pc.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
# 108 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 109 "data/scripts/pc.pory"
	special AccessHallOfFamePC
# 110 "data/scripts/pc.pory"
	waitstate
# 111 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 112 "data/scripts/pc.pory"
	end
# 113 "data/scripts/pc.pory"

# 114 "data/scripts/pc.pory"
EventScript_AccessPokemonBoxLink::
# 115 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 116 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 117 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 118 "data/scripts/pc.pory"
	waitstate
# 119 "data/scripts/pc.pory"
	goto EventScript_TurnOffPC
# 120 "data/scripts/pc.pory"
	end

Common_EventScript_PcGuy_Text_0:
# 4 "data/scripts/pc.pory"
	.string "Need me to carry some Pokémon around\n"
	.string "for you? Sure thing!$"

Common_EventScript_PcGuy_Text_1:
# 8 "data/scripts/pc.pory"
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
# 21 "data/scripts/pc.pory"
	.string "Pant… pant… Thanks for using our\n"
	.string "Pokémon storage!$"

Common_EventScript_PcGuy_Text_3:
# 26 "data/scripts/pc.pory"
	.string "Oh, you want to store these Pokémon?\p"
	.string "Alright, I'll just carry them over to\n"
	.string "the ranch!\p"
	.string "Just a minute!$"

Common_EventScript_PcGuy_Text_4:
# 36 "data/scripts/pc.pory"
	.string "PANT… PANT…\p"
	.string "Your… pant… Pokémon… pant… are all\n"
	.string "set!\p"
	.string "Whew, the ranch is a little far from\n"
	.string "here! Pant…\p"
	.string "Come… pant… Come again!$"
