YifuCity_MapScripts::
	.byte 0


YifuCity_EventScript_StoleMyMon::
# 8 "data/maps/YifuCity/scripts.pory"
	lock
# 9 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 10 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_StoleMyMon_Text_0
# 11 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_StoleMyMon_Text_1
# 15 "data/maps/YifuCity/scripts.pory"
	closemessage
# 16 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_IDontFeelSafe::
# 20 "data/maps/YifuCity/scripts.pory"
	lock
# 21 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 22 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_IDontFeelSafe_Text_0
# 23 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_IDontFeelSafe_Text_1
# 27 "data/maps/YifuCity/scripts.pory"
	closemessage
# 28 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_Samurai::
# 32 "data/maps/YifuCity/scripts.pory"
	lock
# 33 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 34 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_Samurai_Text_0
# 35 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_Samurai_Text_1
# 38 "data/maps/YifuCity/scripts.pory"
	closemessage
# 39 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_Samurai2::
# 43 "data/maps/YifuCity/scripts.pory"
	lock
# 44 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 45 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_Samurai_Text_0
# 46 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_Samurai2_Text_0
# 49 "data/maps/YifuCity/scripts.pory"
	closemessage
# 50 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_ShinySeller::
# 54 "data/maps/YifuCity/scripts.pory"
	lock
# 55 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 56 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 57 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_ShinySeller_Text_1
# 61 "data/maps/YifuCity/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3, TRUE
# 62 "data/maps/YifuCity/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_NORMAL
# 63 "data/maps/YifuCity/scripts.pory"
	waitmoncry
# 65 "data/maps/YifuCity/scripts.pory"
	waitbuttonpress
# 66 "data/maps/YifuCity/scripts.pory"
	hidemonpic
# 68 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 69 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_ShinySeller_Text_2
# 74 "data/maps/YifuCity/scripts.pory"
	goto YifuCity_ShinySellerChoice
# 76 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_ShinySellerChoice::
# 80 "data/maps/YifuCity/scripts.pory"
	showmoneybox 18, 0
# 82 "data/maps/YifuCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_ShinySellerChoice_Text_0, YifuCity_ShinySellerChoice_Text_1, YifuCity_ShinySellerChoice_Text_2
# 94 "data/maps/YifuCity/scripts.pory"
	closemessage
# 96 "data/maps/YifuCity/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/YifuCity/scripts.pory"
	case 0, YifuCity_ShinySellerChoice_3
# 199 "data/maps/YifuCity/scripts.pory"
	case 1, YifuCity_ShinySellerChoice_4
# 206 "data/maps/YifuCity/scripts.pory"
	case 2, YifuCity_ShinySellerChoice_5
YifuCity_ShinySellerChoice_1:
# 216 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 217 "data/maps/YifuCity/scripts.pory"
	release
	return

YifuCity_ShinySellerChoice_3:
	checkmoney 10000
# 0 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne YifuCity_ShinySellerChoice_6
# 193 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 194 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_8
# 197 "data/maps/YifuCity/scripts.pory"
	closemessage
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_4:
# 200 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 201 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 202 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_9
# 205 "data/maps/YifuCity/scripts.pory"
	closemessage
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_5:
# 207 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 208 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 209 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_10
# 213 "data/maps/YifuCity/scripts.pory"
	goto YifuCity_ShinySellerChoice
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_6:
# 99 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 100 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_3
# 104 "data/maps/YifuCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CATERPIE
# 105 "data/maps/YifuCity/scripts.pory"
	givemon SPECIES_CATERPIE, 5, isShiny = FALSE
# 107 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq YifuCity_ShinySellerChoice_10
YifuCity_ShinySellerChoice_9:
# 111 "data/maps/YifuCity/scripts.pory"
	removemoney 10000
# 112 "data/maps/YifuCity/scripts.pory"
	updatemoneybox
# 114 "data/maps/YifuCity/scripts.pory"
	closemessage
# 116 "data/maps/YifuCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/YifuCity/scripts.pory"
	message YifuCity_ShinySellerChoice_Text_4
# 118 "data/maps/YifuCity/scripts.pory"
	waitmessage
# 119 "data/maps/YifuCity/scripts.pory"
	waitfanfare
# 121 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 123 "data/maps/YifuCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CATERPIE
# 124 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq YifuCity_ShinySellerChoice_13
# 130 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq YifuCity_ShinySellerChoice_14
YifuCity_ShinySellerChoice_12:
# 138 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 139 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_5
# 142 "data/maps/YifuCity/scripts.pory"
	closemessage
# 144 "data/maps/YifuCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq YifuCity_ShinySellerChoice_18
# 147 "data/maps/YifuCity/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_ShinySellerChoice_Movement_1
YifuCity_ShinySellerChoice_17:
# 149 "data/maps/YifuCity/scripts.pory"
	delay 24
# 150 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 151 "data/maps/YifuCity/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 152 "data/maps/YifuCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 154 "data/maps/YifuCity/scripts.pory"
	delay 48
# 155 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 156 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_6
# 161 "data/maps/YifuCity/scripts.pory"
	closemessage
# 163 "data/maps/YifuCity/scripts.pory"
	playse SE_PIN
# 164 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 165 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/YifuCity/scripts.pory"
	waitse
# 167 "data/maps/YifuCity/scripts.pory"
	delay 48
# 169 "data/maps/YifuCity/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3, TRUE
# 170 "data/maps/YifuCity/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_NORMAL
# 171 "data/maps/YifuCity/scripts.pory"
	waitmoncry
# 173 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_7
# 177 "data/maps/YifuCity/scripts.pory"
	playse SE_M_MIST
# 178 "data/maps/YifuCity/scripts.pory"
	hidemonpic
# 179 "data/maps/YifuCity/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3
# 180 "data/maps/YifuCity/scripts.pory"
	waitse
# 182 "data/maps/YifuCity/scripts.pory"
	waitbuttonpress
# 183 "data/maps/YifuCity/scripts.pory"
	closemessage
# 184 "data/maps/YifuCity/scripts.pory"
	hidemonpic
# 186 "data/maps/YifuCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, YifuCity_ShinySellerChoice_27
YifuCity_ShinySellerChoice_26:
# 190 "data/maps/YifuCity/scripts.pory"
	setflag FLAG_BOUGHT_FAKE_SHINY
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_10:
# 108 "data/maps/YifuCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto YifuCity_ShinySellerChoice_9

YifuCity_ShinySellerChoice_13:
# 125 "data/maps/YifuCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 126 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne YifuCity_ShinySellerChoice_21
	goto YifuCity_ShinySellerChoice_12

YifuCity_ShinySellerChoice_14:
# 131 "data/maps/YifuCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 132 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne YifuCity_ShinySellerChoice_24
YifuCity_ShinySellerChoice_23:
# 135 "data/maps/YifuCity/scripts.pory"
	setflag FLAG_TEMP_1
	goto YifuCity_ShinySellerChoice_12

YifuCity_ShinySellerChoice_18:
# 145 "data/maps/YifuCity/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_ShinySellerChoice_Movement_0
	goto YifuCity_ShinySellerChoice_17

YifuCity_ShinySellerChoice_21:
# 127 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 128 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto YifuCity_ShinySellerChoice_12

YifuCity_ShinySellerChoice_24:
# 133 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto YifuCity_ShinySellerChoice_23

YifuCity_ShinySellerChoice_27:
# 187 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto YifuCity_ShinySellerChoice_26


# 145 "data/maps/YifuCity/scripts.pory"
YifuCity_ShinySellerChoice_Movement_0:
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_down
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 145 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
	step_end

# 147 "data/maps/YifuCity/scripts.pory"
YifuCity_ShinySellerChoice_Movement_1:
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
	step_end

YifuCity_EventScript_StoleMyMon_Text_0:
# 10 "data/maps/YifuCity/scripts.pory"
	.string "Man$"

YifuCity_EventScript_StoleMyMon_Text_1:
# 12 "data/maps/YifuCity/scripts.pory"
	.string "When I got my Shiftry back from the\n"
	.string "nurse, it had somehow changed into a\l"
	.string "Pidgey…\p"
	.string "Each day, Pokémon never cease to\n"
	.string "amaze me!$"

YifuCity_EventScript_IDontFeelSafe_Text_0:
# 22 "data/maps/YifuCity/scripts.pory"
	.string "Woman$"

YifuCity_EventScript_IDontFeelSafe_Text_1:
# 24 "data/maps/YifuCity/scripts.pory"
	.string "I don't feel safe with those Crobat\n"
	.string "dudes creeping around the city…\p"
	.string "I can't imagine how much worse it'd be\n"
	.string "if it were not for the patrolling\l"
	.string "Samurai!$"

YifuCity_EventScript_Samurai_Text_0:
# 34 "data/maps/YifuCity/scripts.pory"
	.string "Samurai$"

YifuCity_EventScript_Samurai_Text_1:
# 36 "data/maps/YifuCity/scripts.pory"
	.string "The Crobat Shadows' reign of terror\n"
	.string "will cease!$"

YifuCity_EventScript_Samurai2_Text_0:
# 47 "data/maps/YifuCity/scripts.pory"
	.string "Please be vigilant! Should you\n"
	.string "witness any suspicious situation,\l"
	.string "report it immediately!$"

YifuCity_EventScript_ShinySeller_Text_0:
# 56 "data/maps/YifuCity/scripts.pory"
	.string "Shady man$"

YifuCity_EventScript_ShinySeller_Text_1:
# 58 "data/maps/YifuCity/scripts.pory"
	.string "Hey, uh… Wanna buy this Pokémon 'ere?\n"
	.string "'Parently it's super rare or somethin',\l"
	.string "but I don't really need it, so…$"

YifuCity_EventScript_ShinySeller_Text_2:
# 70 "data/maps/YifuCity/scripts.pory"
	.string "So whadyasay?\n"
	.string "It's yours for only ¥10000.$"

YifuCity_ShinySellerChoice_Text_0:
# 89 "data/maps/YifuCity/scripts.pory"
	.string "I'll buy it!$"

YifuCity_ShinySellerChoice_Text_1:
# 90 "data/maps/YifuCity/scripts.pory"
	.string "No, thanks.$"

YifuCity_ShinySellerChoice_Text_2:
# 91 "data/maps/YifuCity/scripts.pory"
	.string "Are you a criminal?$"

YifuCity_ShinySellerChoice_Text_3:
# 101 "data/maps/YifuCity/scripts.pory"
	.string "Alright yeah, gimme the cash.$"

YifuCity_ShinySellerChoice_Text_4:
# 117 "data/maps/YifuCity/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "Caterpie!$"

YifuCity_ShinySellerChoice_Text_5:
# 140 "data/maps/YifuCity/scripts.pory"
	.string "Heheheehe… I'm rich! Finally rich!$"

YifuCity_ShinySellerChoice_Text_6:
# 159 "data/maps/YifuCity/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …$"

YifuCity_ShinySellerChoice_Text_7:
# 174 "data/maps/YifuCity/scripts.pory"
	.string "Some gold paint came off the\n"
	.string "Caterpie…$"

YifuCity_ShinySellerChoice_Text_8:
# 195 "data/maps/YifuCity/scripts.pory"
	.string "You, uh… You don't got enough cash,\n"
	.string "kid.$"

YifuCity_ShinySellerChoice_Text_9:
# 203 "data/maps/YifuCity/scripts.pory"
	.string "Then why are ya bothering me? Scram,\n"
	.string "kid!$"

YifuCity_ShinySellerChoice_Text_10:
# 210 "data/maps/YifuCity/scripts.pory"
	.string "What? No! Why would ya even say that?\n"
	.string "Do I not look respectable to ya?\p"
	.string "So uh… You gonna buy it or not?$"
