gBaIndoor_Prof_MapScripts::
	.byte 0


noticeplayer::
# 7 "data/maps/gBaIndoor_Prof/scripts.pory"
	switch VAR_SIGILLARIA_STATE
# 8 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 0, noticeplayer_3
# 18 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 1, noticeplayer_4
# 23 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 2, noticeplayer_5
# 44 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIG_LAB_TRIGGER, 1
noticeplayer_1:
	end

noticeplayer_3:
# 9 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 10 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement 4, noticeleftmove
# 11 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmovement 0
# 12 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox TriggerGreet
# 13 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmessage
# 14 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 1
# 15 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement 4, postnoticeleftT
# 16 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmovement 0
# 17 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	goto noticeplayer_1

noticeplayer_4:
# 19 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 20 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox noticeplayer_Text_0
# 21 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
# 22 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, stopplayer
	goto noticeplayer_1

noticeplayer_5:
# 24 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 25 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement 4, noticeleftmove
# 26 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmovement 0
# 27 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
# 28 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerlookup
# 29 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmovement 0
# 30 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 31 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox PostChoice
# 32 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox beforeyouleave
# 33 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement 4, postnoticeleftT
# 34 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmovement 0
# 35 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 3
# 36 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIG_LAB_TRIGGER, 1
# 37 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 38 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 39 "data/maps/gBaIndoor_Prof/scripts.pory"
	special SetUnlockedPokedexFlags
# 40 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 41 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 42 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	goto noticeplayer_1


NewProfessor_EventScript_Cyndaquill::
# 50 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 51 "data/maps/gBaIndoor_Prof/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 52 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_0, MSGBOX_YESNO
# 53 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Cyndaquill_2
# 75 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 76 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_3
NewProfessor_EventScript_Cyndaquill_1:
# 78 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmessage
# 79 "data/maps/gBaIndoor_Prof/scripts.pory"
	releaseall
	return

NewProfessor_EventScript_Cyndaquill_2:
# 54 "data/maps/gBaIndoor_Prof/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_CHARCOAL
# 55 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_STATER_GET
# 56 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 2
# 57 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Cyndaquill_5
# 63 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Cyndaquill_6
# 70 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 71 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_2
	goto NewProfessor_EventScript_Cyndaquill_1

NewProfessor_EventScript_Cyndaquill_5:
# 58 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_1
# 60 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 1
# 61 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknamePartyMon
	goto NewProfessor_EventScript_Cyndaquill_1

NewProfessor_EventScript_Cyndaquill_6:
# 64 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_1
# 66 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 1
# 67 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknameBoxMon
	goto NewProfessor_EventScript_Cyndaquill_1


NewProfessor_EventScript_Oshawott::
# 83 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 84 "data/maps/gBaIndoor_Prof/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 85 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 86 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Oshawott_2
# 108 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 109 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_3
NewProfessor_EventScript_Oshawott_1:
# 111 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmessage
# 112 "data/maps/gBaIndoor_Prof/scripts.pory"
	releaseall
	return

NewProfessor_EventScript_Oshawott_2:
# 87 "data/maps/gBaIndoor_Prof/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_MYSTIC_WATER
# 88 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_STATER_GET
# 89 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 2
# 90 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Oshawott_5
# 96 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Oshawott_6
# 103 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 104 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_2
	goto NewProfessor_EventScript_Oshawott_1

NewProfessor_EventScript_Oshawott_5:
# 91 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 92 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 93 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 2
# 94 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknamePartyMon
	goto NewProfessor_EventScript_Oshawott_1

NewProfessor_EventScript_Oshawott_6:
# 97 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 99 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 2
# 100 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknameBoxMon
	goto NewProfessor_EventScript_Oshawott_1


NewProfessor_EventScript_Rowlet::
# 117 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 118 "data/maps/gBaIndoor_Prof/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 119 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 120 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Rowlet_2
# 142 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 143 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_3
NewProfessor_EventScript_Rowlet_1:
# 145 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmessage
# 146 "data/maps/gBaIndoor_Prof/scripts.pory"
	releaseall
	return

NewProfessor_EventScript_Rowlet_2:
# 121 "data/maps/gBaIndoor_Prof/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_MIRACLE_SEED
# 122 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_STATER_GET
# 123 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 2
# 124 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Rowlet_5
# 130 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Rowlet_6
# 137 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 138 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_2
	goto NewProfessor_EventScript_Rowlet_1

NewProfessor_EventScript_Rowlet_5:
# 125 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_1
# 127 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 3
# 128 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknamePartyMon
	goto NewProfessor_EventScript_Rowlet_1

NewProfessor_EventScript_Rowlet_6:
# 131 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_1
# 133 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 3
# 134 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknameBoxMon
	goto NewProfessor_EventScript_Rowlet_1


NicknamePartyMon::
# 150 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 151 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 152 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 153 "data/maps/gBaIndoor_Prof/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 154 "data/maps/gBaIndoor_Prof/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 161 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 162 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 163 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 166 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 164 "data/maps/gBaIndoor_Prof/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Sigillaria::
# 170 "data/maps/gBaIndoor_Prof/scripts.pory"
	switch VAR_SIGILLARIA_STATE
# 171 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 0, Sigillaria_2
# 176 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 1, Sigillaria_3
# 181 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 2, Sigillaria_4
# 194 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 3, Sigillaria_5
# 200 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 201 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox AllThisNewTech
# 202 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_2:
# 172 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 173 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox Sigillaria_Text_0
# 174 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_3:
# 177 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 178 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox Sigillaria_Text_0
# 179 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_4:
# 182 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 183 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox PostChoice
# 184 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox beforeyouleave
# 185 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 3
# 186 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIG_LAB_TRIGGER, 1
# 187 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 188 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 189 "data/maps/gBaIndoor_Prof/scripts.pory"
	special SetUnlockedPokedexFlags
# 190 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 191 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 192 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_5:
# 195 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 196 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox AllThisNewTech
# 197 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return


# 223 "data/maps/gBaIndoor_Prof/scripts.pory"
noticeleftmove:
# 224 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_right
# 225 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
# 225 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
# 225 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/gBaIndoor_Prof/scripts.pory"
postnoticeleftT:
# 230 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 230 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 230 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 231 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_left
# 232 "data/maps/gBaIndoor_Prof/scripts.pory"
	face_player
	step_end

# 235 "data/maps/gBaIndoor_Prof/scripts.pory"
stopplayer:
# 236 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
	step_end

# 238 "data/maps/gBaIndoor_Prof/scripts.pory"
playerlookup:
# 239 "data/maps/gBaIndoor_Prof/scripts.pory"
	face_up
	step_end

noticeplayer_Text_0:
# 20 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Wait! Please take a pokemon!$"

NewProfessor_EventScript_Cyndaquill_Text_0:
# 52 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewProfessor_EventScript_Cyndaquill_Text_1:
# 59 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Recieved Cyndaquil$"

NewProfessor_EventScript_Cyndaquill_Text_2:
# 71 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "No More Room$"

NewProfessor_EventScript_Cyndaquill_Text_3:
# 76 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Choose carefully!$"

NewProfessor_EventScript_Oshawott_Text_0:
# 85 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewProfessor_EventScript_Oshawott_Text_1:
# 92 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Recieved Oshawott$"

NewProfessor_EventScript_Rowlet_Text_0:
# 119 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewProfessor_EventScript_Rowlet_Text_1:
# 126 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Recieved Rowlet$"

NicknamePartyMon_Text_0:
# 150 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 166 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Transferred to PC$"

Sigillaria_Text_0:
# 173 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Go on, pick a pokemon!$"

PostChoice::
# 207 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Say could you do me a favor and check\n"
	.string "on my granddaughter in Appel? My sister\l"
	.string "told me she lost her precious Scyther.$"

beforeyouleave::
# 212 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Oh! and before you leave, take\n"
	.string "this.Silph Co. sent it to me. It's a\l"
	.string "PokeDex. It automatically records data\l"
	.string "about the Pokemon you catch.$"

TriggerGreet::
# 217 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Hello {PLAYER}! I just got the\n"
	.string "Pokemon from Silph Co. in. Say, why don't\l"
	.string "you choose one?$"

AllThisNewTech::
# 242 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "All this new technology makes my head\n"
	.string "spin!$"
