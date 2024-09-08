BaAlmondHouse_MapScripts::
	.byte 0


AlmondBattle::
# 6 "data/maps/BaAlmondHouse/scripts.pory"
	lockall
# 7 "data/maps/BaAlmondHouse/scripts.pory"
	faceplayer
# 8 "data/maps/BaAlmondHouse/scripts.pory"
	checktrainerflag TRAINER_SAWYER_1
	goto_if 0, AlmondBattle_2
# 21 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_ALMOND_GIFT, 0
	goto_if_eq AlmondBattle_8
# 73 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_7
AlmondBattle_1:
# 76 "data/maps/BaAlmondHouse/scripts.pory"
	release
	return

AlmondBattle_2:
# 9 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox HeyKid
# 10 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox Tellya, MSGBOX_YESNO
# 11 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_5
# 17 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_0
	goto AlmondBattle_1

AlmondBattle_5:
# 12 "data/maps/BaAlmondHouse/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, AlmondIntro, AlmondExit
	goto AlmondBattle_1

AlmondBattle_8:
# 22 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox lookslike
# 23 "data/maps/BaAlmondHouse/scripts.pory"
	multichoice 25, 5, MULTI_ALMOND_GIFT_CHOICE, 0
# 24 "data/maps/BaAlmondHouse/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/BaAlmondHouse/scripts.pory"
	case 0, AlmondBattle_12
# 34 "data/maps/BaAlmondHouse/scripts.pory"
	case 1, AlmondBattle_13
# 43 "data/maps/BaAlmondHouse/scripts.pory"
	case 2, AlmondBattle_14
# 52 "data/maps/BaAlmondHouse/scripts.pory"
	case 3, AlmondBattle_15
# 61 "data/maps/BaAlmondHouse/scripts.pory"
	case 4, AlmondBattle_16
	goto AlmondBattle_1

AlmondBattle_12:
# 26 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_1
# 27 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_DWEBBLE, 5
# 28 "data/maps/BaAlmondHouse/scripts.pory"
	setvar VAR_ALMOND_GIFT, 1
# 29 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_2, MSGBOX_YESNO
# 30 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_17
	goto AlmondBattle_1

AlmondBattle_13:
# 35 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_3
# 36 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_SEEL, 5
# 37 "data/maps/BaAlmondHouse/scripts.pory"
	setvar VAR_ALMOND_GIFT, 1
# 38 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_2, MSGBOX_YESNO
# 39 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_19
	goto AlmondBattle_1

AlmondBattle_14:
# 44 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_4
# 45 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_SKRELP, 5
# 46 "data/maps/BaAlmondHouse/scripts.pory"
	setvar VAR_ALMOND_GIFT, 1
# 47 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_2, MSGBOX_YESNO
# 48 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_21
	goto AlmondBattle_1

AlmondBattle_15:
# 53 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_5
# 54 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5
# 55 "data/maps/BaAlmondHouse/scripts.pory"
	setvar VAR_ALMOND_GIFT, 1
# 56 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_2, MSGBOX_YESNO
# 57 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_23
	goto AlmondBattle_1

AlmondBattle_16:
# 62 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_6
# 63 "data/maps/BaAlmondHouse/scripts.pory"
	givemon SPECIES_TATSUGIRI, 5
# 64 "data/maps/BaAlmondHouse/scripts.pory"
	setvar VAR_ALMOND_GIFT, 1
# 65 "data/maps/BaAlmondHouse/scripts.pory"
	msgbox AlmondBattle_Text_2, MSGBOX_YESNO
# 66 "data/maps/BaAlmondHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AlmondBattle_25
	goto AlmondBattle_1

AlmondBattle_17:
# 31 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 32 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_19:
# 40 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 41 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_21:
# 49 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 50 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_23:
# 58 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 59 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1

AlmondBattle_25:
# 67 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 68 "data/maps/BaAlmondHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto AlmondBattle_1


AlmondBattle_Text_0:
# 17 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Another time then.$"

AlmondBattle_Text_1:
# 26 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Dwebble!$"

AlmondBattle_Text_2:
# 29 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Give it a nickname?$"

AlmondBattle_Text_3:
# 35 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Seel!$"

AlmondBattle_Text_4:
# 44 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Skrelp!$"

AlmondBattle_Text_5:
# 53 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Spheal!$"

AlmondBattle_Text_6:
# 62 "data/maps/BaAlmondHouse/scripts.pory"
	.string "You got Tatsugiri!$"

AlmondBattle_Text_7:
# 73 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Spheal you later, kid!$"

AlmondIntro::
# 80 "data/maps/BaAlmondHouse/scripts.pory"
	.string "We will Seel how you measure up!$"

AlmondExit::
# 84 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Well played!$"

HeyKid::
# 88 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Hey kid, you a trainer? Me n' my Spheal\n have been itching for a fight.$"

Tellya::
# 92 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Tell ya what. If you beat me, I'll give\n you a Pokemon. You game?$"

lookslike::
# 96 "data/maps/BaAlmondHouse/scripts.pory"
	.string "Looks like you earned a Pokemon. Which\n one you want?$"
