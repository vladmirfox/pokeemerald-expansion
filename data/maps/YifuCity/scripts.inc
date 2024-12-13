YifuCity_MapScripts::
	.byte 0


YifuCity_EventScript_StoleMyMon::
# 6 "data/maps/YifuCity/scripts.pory"
	lock
# 7 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 8 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_StoleMyMon_Text_0
# 9 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_StoleMyMon_Text_1
# 13 "data/maps/YifuCity/scripts.pory"
	closemessage
# 14 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_IDontFeelSafe::
# 18 "data/maps/YifuCity/scripts.pory"
	lock
# 19 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 20 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_IDontFeelSafe_Text_0
# 21 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_IDontFeelSafe_Text_1
# 25 "data/maps/YifuCity/scripts.pory"
	closemessage
# 26 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_Samurai::
# 30 "data/maps/YifuCity/scripts.pory"
	lock
# 31 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 32 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_Samurai_Text_0
# 33 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_Samurai_Text_1
# 36 "data/maps/YifuCity/scripts.pory"
	closemessage
# 37 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_Samurai2::
# 41 "data/maps/YifuCity/scripts.pory"
	lock
# 42 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 43 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_Samurai_Text_0
# 44 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_Samurai2_Text_0
# 47 "data/maps/YifuCity/scripts.pory"
	closemessage
# 48 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_ShinySeller::
# 52 "data/maps/YifuCity/scripts.pory"
	lock
# 53 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 54 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 55 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_ShinySeller_Text_1
# 59 "data/maps/YifuCity/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3, TRUE
# 60 "data/maps/YifuCity/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_NORMAL
# 61 "data/maps/YifuCity/scripts.pory"
	waitmoncry
# 63 "data/maps/YifuCity/scripts.pory"
	closemessage
# 64 "data/maps/YifuCity/scripts.pory"
	hidemonpic
# 66 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 67 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_ShinySeller_Text_2
# 72 "data/maps/YifuCity/scripts.pory"
	goto YifuCity_ShinySellerChoice
# 74 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_ShinySellerChoice::
# 78 "data/maps/YifuCity/scripts.pory"
	showmoneybox 10, 0
# 80 "data/maps/YifuCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_ShinySellerChoice_Text_0, YifuCity_ShinySellerChoice_Text_1, YifuCity_ShinySellerChoice_Text_2
# 92 "data/maps/YifuCity/scripts.pory"
	closemessage
# 94 "data/maps/YifuCity/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/YifuCity/scripts.pory"
	case 0, YifuCity_ShinySellerChoice_3
# 120 "data/maps/YifuCity/scripts.pory"
	case 1, YifuCity_ShinySellerChoice_4
# 126 "data/maps/YifuCity/scripts.pory"
	case 2, YifuCity_ShinySellerChoice_5
YifuCity_ShinySellerChoice_1:
# 134 "data/maps/YifuCity/scripts.pory"
	release
	return

YifuCity_ShinySellerChoice_3:
	checkmoney 6000
# 0 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne YifuCity_ShinySellerChoice_6
# 115 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 116 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_5
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_4:
# 121 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 122 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_6
# 125 "data/maps/YifuCity/scripts.pory"
	closemessage
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_5:
# 127 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 128 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_7
# 132 "data/maps/YifuCity/scripts.pory"
	goto YifuCity_ShinySellerChoice
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_6:
# 97 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 98 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_3
# 102 "data/maps/YifuCity/scripts.pory"
	removemoney 6000
# 103 "data/maps/YifuCity/scripts.pory"
	updatemoneybox
# 105 "data/maps/YifuCity/scripts.pory"
	closemessage
# 107 "data/maps/YifuCity/scripts.pory"
	givemon SPECIES_CATERPIE, 5
# 108 "data/maps/YifuCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/YifuCity/scripts.pory"
	message YifuCity_ShinySellerChoice_Text_4
# 110 "data/maps/YifuCity/scripts.pory"
	waitmessage
# 111 "data/maps/YifuCity/scripts.pory"
	waitfanfare
# 113 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
	goto YifuCity_ShinySellerChoice_1


YifuCity_EventScript_StoleMyMon_Text_0:
# 8 "data/maps/YifuCity/scripts.pory"
	.string "Man$"

YifuCity_EventScript_StoleMyMon_Text_1:
# 10 "data/maps/YifuCity/scripts.pory"
	.string "When I got my Shiftry back from the\n"
	.string "nurse, it had somehow changed into a\l"
	.string "Pidgey…\p"
	.string "Each day, Pokémon never cease to\n"
	.string "amaze me!$"

YifuCity_EventScript_IDontFeelSafe_Text_0:
# 20 "data/maps/YifuCity/scripts.pory"
	.string "Woman$"

YifuCity_EventScript_IDontFeelSafe_Text_1:
# 22 "data/maps/YifuCity/scripts.pory"
	.string "I don't feel safe with those Crobat\n"
	.string "dudes creeping around the city…\p"
	.string "I can't imagine how much worse it'd be\n"
	.string "if it were not for the patrolling\l"
	.string "Samurai!$"

YifuCity_EventScript_Samurai_Text_0:
# 32 "data/maps/YifuCity/scripts.pory"
	.string "Samurai$"

YifuCity_EventScript_Samurai_Text_1:
# 34 "data/maps/YifuCity/scripts.pory"
	.string "The Crobat Shadow's reign of terror\n"
	.string "will cease!$"

YifuCity_EventScript_Samurai2_Text_0:
# 45 "data/maps/YifuCity/scripts.pory"
	.string "Please be vigilant! Should you\n"
	.string "witness any suspicious situation,\l"
	.string "report it immediately!$"

YifuCity_EventScript_ShinySeller_Text_0:
# 54 "data/maps/YifuCity/scripts.pory"
	.string "Shady man$"

YifuCity_EventScript_ShinySeller_Text_1:
# 56 "data/maps/YifuCity/scripts.pory"
	.string "Hey, uh… Wanna buy this Pokémon 'ere?\n"
	.string "'Parently it's super rare or somethin',\l"
	.string "but I don't really need it, so…$"

YifuCity_EventScript_ShinySeller_Text_2:
# 68 "data/maps/YifuCity/scripts.pory"
	.string "So whadyasay?\n"
	.string "It's yours for only ¥6000.$"

YifuCity_ShinySellerChoice_Text_0:
# 87 "data/maps/YifuCity/scripts.pory"
	.string "I'll buy it!$"

YifuCity_ShinySellerChoice_Text_1:
# 88 "data/maps/YifuCity/scripts.pory"
	.string "No, thanks.$"

YifuCity_ShinySellerChoice_Text_2:
# 89 "data/maps/YifuCity/scripts.pory"
	.string "Are you a criminal?$"

YifuCity_ShinySellerChoice_Text_3:
# 99 "data/maps/YifuCity/scripts.pory"
	.string "Alright yeah, gimme the cash.$"

YifuCity_ShinySellerChoice_Text_4:
# 109 "data/maps/YifuCity/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "Caterpie!$"

YifuCity_ShinySellerChoice_Text_5:
# 117 "data/maps/YifuCity/scripts.pory"
	.string "You, uh… You don't got enough cash,\n"
	.string "kid.$"

YifuCity_ShinySellerChoice_Text_6:
# 123 "data/maps/YifuCity/scripts.pory"
	.string "Then why are ya bothering me? Scram,\n"
	.string "kid!$"

YifuCity_ShinySellerChoice_Text_7:
# 129 "data/maps/YifuCity/scripts.pory"
	.string "What? No! Why would ya even say that?\n"
	.string "Do I not look respectable to ya?\p"
	.string "So uh… You gonna buy it or not?$"
