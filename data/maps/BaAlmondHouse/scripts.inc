BaAlmondHouse_MapScripts::
	.byte 0


AlmondBattle::
# 6 "data/maps/BaAlmondHouse/scripts.pory"
	lockall
# 7 "data/maps/BaAlmondHouse/scripts.pory"
	faceplayer
# 8 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox HeyKid
# 9 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox Tellya, MSGBOX_YESNO
# 10 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_2
# 59 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_6
AlmondBattle_1:
# 61 "data/maps/BaAlmondHouse/scripts.pory"
	release
	return

AlmondBattle_2:
# 11 "data/maps/BaAlmondHouse/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, AlmondIntro, AlmondExit
# 12 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox lookslike
# 13 "data/maps/BaAlmondHouse/scripts.pory"
	multichoice 25, 5, MULTI_ALMOND_GIFT_CHOICE, 0
# 14 "data/maps/BaAlmondHouse/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/BaAlmondHouse/scripts.pory"
	case 0, AlmondBattle_6
# 23 "data/maps/BaAlmondHouse/scripts.pory"
	case 1, AlmondBattle_7
# 31 "data/maps/BaAlmondHouse/scripts.pory"
	case 2, AlmondBattle_8
# 39 "data/maps/BaAlmondHouse/scripts.pory"
	case 3, AlmondBattle_9
# 47 "data/maps/BaAlmondHouse/scripts.pory"
	case 4, AlmondBattle_10
	goto AlmondBattle_1

AlmondBattle_6:
# 16 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_0
# 17 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_DWEBBLE, 5
# 18 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_1, MSGBOX_YESNO
# 19 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_11
	goto AlmondBattle_1

AlmondBattle_7:
# 24 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_2
# 25 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_SEEL, 5
# 26 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_1, MSGBOX_YESNO
# 27 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_13
	goto AlmondBattle_1

AlmondBattle_8:
# 32 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_3
# 33 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_SKRELP, 5
# 34 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_1, MSGBOX_YESNO
# 35 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_15
	goto AlmondBattle_1

AlmondBattle_9:
# 40 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_4
# 41 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5
# 42 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_1, MSGBOX_YESNO
# 43 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_17
	goto AlmondBattle_1

AlmondBattle_10:
# 48 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_5
# 49 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_TATSUGIRI, 5
# 50 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_1, MSGBOX_YESNO
# 51 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_19
	goto AlmondBattle_1

AlmondBattle_11:
# 20 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 21 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_13:
# 28 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 29 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_15:
# 36 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 37 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_17:
# 44 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 45 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_19:
# 52 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 53 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1


SelectMon::
	return


AlmondBattle_Text_0:
# 16 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Dwebble!$"

AlmondBattle_Text_1:
# 18 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Give it a nickname?$"

AlmondBattle_Text_2:
# 24 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Seel!$"

AlmondBattle_Text_3:
# 32 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Skrelp!$"

AlmondBattle_Text_4:
# 40 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Spheal!$"

AlmondBattle_Text_5:
# 48 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Tatsugiri!$"

AlmondBattle_Text_6:
# 59 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Another time then.$"

AlmondIntro::
# 70 "data/maps/BaAlmondHouse/scripts.pory"
	.string "We will Seel how you measure up!$"

AlmondExit::
# 74 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Well played!$"

HeyKid::
# 78 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Hey kid, you a trainer? Me n' my Spheal\n have been itching for a fight.$"

Tellya::
# 82 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Tell ya what. If you beat me, I'll give\n you a Pokemon. You game?$"

lookslike::
# 86 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Looks like you earned a Pokemon. Which\n one you want?$"
