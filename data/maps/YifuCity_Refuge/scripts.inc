YifuCity_Refuge_MapScripts::
	.byte 0


YifuCity_Refuge_EventScript_FakeNurse::
# 6 "data/maps/YifuCity_Refuge/scripts.pory"
	setvar VAR_0x800B, 1
# 7 "data/maps/YifuCity_Refuge/scripts.pory"
	call Common_EventScript_PkmnCenterNurse_CutTheBullshit
# 8 "data/maps/YifuCity_Refuge/scripts.pory"
	waitmessage
# 9 "data/maps/YifuCity_Refuge/scripts.pory"
	waitbuttonpress
# 10 "data/maps/YifuCity_Refuge/scripts.pory"
	release
	end


YifuCity_Refuge_EventScript_Shamisen::
# 15 "data/maps/YifuCity_Refuge/scripts.pory"
	lock
# 16 "data/maps/YifuCity_Refuge/scripts.pory"
	faceplayer
# 18 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_Shamisen_Text_0
# 19 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_Shamisen_Text_1
# 23 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 24 "data/maps/YifuCity_Refuge/scripts.pory"
	release
	end


YifuCity_Refuge_EventScript_HotelValet::
# 29 "data/maps/YifuCity_Refuge/scripts.pory"
	lock
# 30 "data/maps/YifuCity_Refuge/scripts.pory"
	faceplayer
# 32 "data/maps/YifuCity_Refuge/scripts.pory"
	special GetPlayerSirMissString
# 34 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 35 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_1
# 41 "data/maps/YifuCity_Refuge/scripts.pory"
	showmoneybox 10, 0
	checkmoney 500
# 0 "data/maps/YifuCity_Refuge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne YifuCity_Refuge_EventScript_HotelValet_2
# 86 "data/maps/YifuCity_Refuge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Refuge_EventScript_HotelValet_Text_7
# 95 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 97 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 98 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_8
# 102 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
YifuCity_Refuge_EventScript_HotelValet_1:
# 105 "data/maps/YifuCity_Refuge/scripts.pory"
	release
	return

YifuCity_Refuge_EventScript_HotelValet_2:
# 44 "data/maps/YifuCity_Refuge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Refuge_EventScript_HotelValet_Text_2, YifuCity_Refuge_EventScript_HotelValet_Text_3
# 54 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 56 "data/maps/YifuCity_Refuge/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/YifuCity_Refuge/scripts.pory"
	case 0, YifuCity_Refuge_EventScript_HotelValet_6
# 77 "data/maps/YifuCity_Refuge/scripts.pory"
	case 1, YifuCity_Refuge_EventScript_HotelValet_7
	goto YifuCity_Refuge_EventScript_HotelValet_1

YifuCity_Refuge_EventScript_HotelValet_6:
# 58 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 59 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_4
# 62 "data/maps/YifuCity_Refuge/scripts.pory"
	removemoney 500
# 63 "data/maps/YifuCity_Refuge/scripts.pory"
	updatemoneybox
# 65 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
# 67 "data/maps/YifuCity_Refuge/scripts.pory"
	giveitem ITEM_REFUGE_ROOM_KEY
# 69 "data/maps/YifuCity_Refuge/scripts.pory"
	hidemoneybox
# 71 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_5
# 74 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
	goto YifuCity_Refuge_EventScript_HotelValet_1

YifuCity_Refuge_EventScript_HotelValet_7:
# 78 "data/maps/YifuCity_Refuge/scripts.pory"
	speakername YifuCity_Refuge_EventScript_HotelValet_Text_0
# 79 "data/maps/YifuCity_Refuge/scripts.pory"
	msgbox YifuCity_Refuge_EventScript_HotelValet_Text_6
# 82 "data/maps/YifuCity_Refuge/scripts.pory"
	closemessage
	goto YifuCity_Refuge_EventScript_HotelValet_1


YifuCity_Refuge_EventScript_ListenToShamisen::
	return


YifuCity_Refuge_EventScript_Traveler::
	return


YifuCity_Refuge_EventScript_Shamisen_Text_0:
# 18 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Shamisen player$"

YifuCity_Refuge_EventScript_Shamisen_Text_1:
# 20 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Good evening, traveler.\p"
	.string "I hope my song will soothe your spirit,\n"
	.string "should it be troubled.$"

YifuCity_Refuge_EventScript_HotelValet_Text_0:
# 34 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Valet$"

YifuCity_Refuge_EventScript_HotelValet_Text_1:
# 37 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Good morning, {STR_VAR_1}! There's\n"
	.string "a room available for ¥500, if you need\l"
	.string "a place to spend the night!$"

YifuCity_Refuge_EventScript_HotelValet_Text_2:
# 51 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "One room, please.$"

YifuCity_Refuge_EventScript_HotelValet_Text_3:
# 52 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "No, thanks.$"

YifuCity_Refuge_EventScript_HotelValet_Text_4:
# 60 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "For sure. That'll be ¥500!$"

YifuCity_Refuge_EventScript_HotelValet_Text_5:
# 72 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Your room is the first one down the\n"
	.string "corridor! We hope you have a pleasant\l"
	.string "stay!$"

YifuCity_Refuge_EventScript_HotelValet_Text_6:
# 80 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Have a nice day!$"

YifuCity_Refuge_EventScript_HotelValet_Text_7:
# 93 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "I'm poor…$"

YifuCity_Refuge_EventScript_HotelValet_Text_8:
# 99 "data/maps/YifuCity_Refuge/scripts.pory"
	.string "Oh my, it appears you don't have\n"
	.string "enough money…\p"
	.string "I'm sorry!$"
