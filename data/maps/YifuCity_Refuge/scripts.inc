YifuCity_Refuge_MapScripts::
	.byte 0


YifuCity_Refuge_EventScript_FakeNurse::
# 6 "data/maps/YifuCity_Refuge/scripts.pory"
	setvar VAR_0x800B, 1
# 7 "data/maps/YifuCity_Refuge/scripts.pory"
	lock
# 8 "data/maps/YifuCity_Refuge/scripts.pory"
	faceplayer
# 9 "data/maps/YifuCity_Refuge/scripts.pory"
	setvar VAR_0x8004, 0
# 10 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_FakeNurse_Text_0
# 11 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_FakeNurse_Text_1
# 12 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 14 "data/maps/YifuCity_Refuge/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 15 "data/maps/YifuCity_Refuge/scripts.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 19 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_FakeNurse_Text_0
# 20 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_FakeNurse_Text_2
# 24 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
	end


YifuCity_Refuge_EventScript_Woobat::
# 29 "data/maps/YifuCity_Refuge/scripts.pory"
	lock
# 30 "data/maps/YifuCity_Refuge/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 31 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_Woobat_Text_0
# 32 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_Woobat_Text_1
# 33 "data/maps/YifuCity_Refuge/scripts.pory"
	waitse
# 34 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 35 "data/maps/YifuCity_Refuge/scripts.pory"
	release
	return


YifuCity_Refuge_EventScript_Shamisen::
# 39 "data/maps/YifuCity_Refuge/scripts.pory"
	lock
# 40 "data/maps/YifuCity_Refuge/scripts.pory"
	faceplayer
# 42 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_Shamisen_Text_0
# 43 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_Shamisen_Text_1
# 47 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 48 "data/maps/YifuCity_Refuge/scripts.pory"
	release
	end


YifuCity_Refuge_EventScript_HotelValet::
# 53 "data/maps/YifuCity_Refuge/scripts.pory"
	lock
# 54 "data/maps/YifuCity_Refuge/scripts.pory"
	faceplayer
# 56 "data/maps/YifuCity_Refuge/scripts.pory"
	special GetPlayerSirMissString
# 58 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 59 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_1
# 64 "data/maps/YifuCity_Refuge/scripts.pory"
	showmoneybox 18, 0
	checkmoney 500
# 0 "data/maps/YifuCity_Refuge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne YifuCity_Refuge_EventScript_HotelValet_2
# 109 "data/maps/YifuCity_Refuge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Refuge_EventScript_HotelValet_Text_7
# 118 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 120 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 121 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_8
# 125 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
YifuCity_Refuge_EventScript_HotelValet_1:
# 128 "data/maps/YifuCity_Refuge/scripts.pory"
	release
	return

YifuCity_Refuge_EventScript_HotelValet_2:
# 67 "data/maps/YifuCity_Refuge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Refuge_EventScript_HotelValet_Text_2, YifuCity_Refuge_EventScript_HotelValet_Text_3
# 77 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 79 "data/maps/YifuCity_Refuge/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/YifuCity_Refuge/scripts.pory"
	case 0, YifuCity_Refuge_EventScript_HotelValet_6
# 100 "data/maps/YifuCity_Refuge/scripts.pory"
	case 1, YifuCity_Refuge_EventScript_HotelValet_7
	goto YifuCity_Refuge_EventScript_HotelValet_1

YifuCity_Refuge_EventScript_HotelValet_6:
# 81 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 82 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_4
# 85 "data/maps/YifuCity_Refuge/scripts.pory"
	removemoney 500
# 86 "data/maps/YifuCity_Refuge/scripts.pory"
	updatemoneybox
# 88 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 90 "data/maps/YifuCity_Refuge/scripts.pory"
	giveitem ITEM_REFUGE_ROOM_KEY
# 92 "data/maps/YifuCity_Refuge/scripts.pory"
	hidemoneybox
# 94 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_5
# 97 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
	goto YifuCity_Refuge_EventScript_HotelValet_1

YifuCity_Refuge_EventScript_HotelValet_7:
# 101 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 102 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_6
# 105 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
	goto YifuCity_Refuge_EventScript_HotelValet_1


YifuCity_Refuge_EventScript_ListenToShamisen::
	return


YifuCity_Refuge_EventScript_Traveler::
	return


YifuCity_Refuge_EventScript_FakeNurse_Text_0:
# 10 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Nurse$"

YifuCity_Refuge_EventScript_FakeNurse_Text_1:
# 11 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Gimme yer Pokémon, I'mma heal 'em\n"
	.string "good.$"

YifuCity_Refuge_EventScript_FakeNurse_Text_2:
# 21 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Yep, uh, good as new, probably!\p"
	.string "C'magain, or whatever.$"

YifuCity_Refuge_EventScript_Woobat_Text_0:
# 31 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Chansey?$"

YifuCity_Refuge_EventScript_Woobat_Text_1:
# 32 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Rrrrr!$"

YifuCity_Refuge_EventScript_Shamisen_Text_0:
# 42 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Shamisen player$"

YifuCity_Refuge_EventScript_Shamisen_Text_1:
# 44 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Good evening, traveler.\p"
	.string "I hope my song will soothe your spirit,\n"
	.string "should it be troubled.$"

YifuCity_Refuge_EventScript_HotelValet_Text_0:
# 58 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Valet$"

YifuCity_Refuge_EventScript_HotelValet_Text_1:
# 61 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Good morning, {STR_VAR_1}! There's\n"
	.string "a room available for ¥500, if you need\l"
	.string "a place to spend the night!$"

YifuCity_Refuge_EventScript_HotelValet_Text_2:
# 74 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "One room, please.$"

YifuCity_Refuge_EventScript_HotelValet_Text_3:
# 75 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "No, thanks.$"

YifuCity_Refuge_EventScript_HotelValet_Text_4:
# 83 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "For sure. That'll be ¥500!$"

YifuCity_Refuge_EventScript_HotelValet_Text_5:
# 95 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Your room is the first one down the\n"
	.string "corridor! We hope you have a pleasant\l"
	.string "stay!$"

YifuCity_Refuge_EventScript_HotelValet_Text_6:
# 103 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Have a nice day!$"

YifuCity_Refuge_EventScript_HotelValet_Text_7:
# 116 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "I'm poor…$"

YifuCity_Refuge_EventScript_HotelValet_Text_8:
# 122 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Oh my, it appears you don't have\n"
	.string "enough money…\p"
	.string "I'm sorry!$"
