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
# 39 "data/maps/gBaIndoor_Prof/scripts.pory"
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
	release
	goto noticeplayer_1


NewProfessor_EventScript_Cyndaquill::
# 45 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 46 "data/maps/gBaIndoor_Prof/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 47 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_0, MSGBOX_YESNO
# 48 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Cyndaquill_2
# 70 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 71 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_3
NewProfessor_EventScript_Cyndaquill_1:
# 73 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmessage
# 74 "data/maps/gBaIndoor_Prof/scripts.pory"
	releaseall
	return

NewProfessor_EventScript_Cyndaquill_2:
# 49 "data/maps/gBaIndoor_Prof/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
# 50 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_STATER_GET
# 51 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 2
# 52 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Cyndaquill_5
# 58 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Cyndaquill_6
# 65 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 66 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_2
	goto NewProfessor_EventScript_Cyndaquill_1

NewProfessor_EventScript_Cyndaquill_5:
# 53 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_1
# 55 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 1
# 56 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknamePartyMon
	goto NewProfessor_EventScript_Cyndaquill_1

NewProfessor_EventScript_Cyndaquill_6:
# 59 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_1
# 61 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 1
# 62 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknameBoxMon
	goto NewProfessor_EventScript_Cyndaquill_1


NewProfessor_EventScript_Oshawott::
# 78 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 79 "data/maps/gBaIndoor_Prof/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 80 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 81 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Oshawott_2
# 103 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 104 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_3
NewProfessor_EventScript_Oshawott_1:
# 106 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmessage
# 107 "data/maps/gBaIndoor_Prof/scripts.pory"
	releaseall
	return

NewProfessor_EventScript_Oshawott_2:
# 82 "data/maps/gBaIndoor_Prof/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_MASTER_BALL
# 83 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_STATER_GET
# 84 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 2
# 85 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Oshawott_5
# 91 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Oshawott_6
# 98 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 99 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_2
	goto NewProfessor_EventScript_Oshawott_1

NewProfessor_EventScript_Oshawott_5:
# 86 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 88 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 2
# 89 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknamePartyMon
	goto NewProfessor_EventScript_Oshawott_1

NewProfessor_EventScript_Oshawott_6:
# 92 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 93 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 94 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 2
# 95 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknameBoxMon
	goto NewProfessor_EventScript_Oshawott_1


NewProfessor_EventScript_Rowlet::
# 112 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 113 "data/maps/gBaIndoor_Prof/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 114 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 115 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Rowlet_2
# 137 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 138 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_3
NewProfessor_EventScript_Rowlet_1:
# 140 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmessage
# 141 "data/maps/gBaIndoor_Prof/scripts.pory"
	releaseall
	return

NewProfessor_EventScript_Rowlet_2:
# 116 "data/maps/gBaIndoor_Prof/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_MASTER_BALL
# 117 "data/maps/gBaIndoor_Prof/scripts.pory"
	setflag FLAG_STATER_GET
# 118 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 2
# 119 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Rowlet_5
# 125 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Rowlet_6
# 132 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 133 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquill_Text_2
	goto NewProfessor_EventScript_Rowlet_1

NewProfessor_EventScript_Rowlet_5:
# 120 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_1
# 122 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 3
# 123 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknamePartyMon
	goto NewProfessor_EventScript_Rowlet_1

NewProfessor_EventScript_Rowlet_6:
# 126 "data/maps/gBaIndoor_Prof/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NewProfessor_EventScript_Rowlet_Text_1
# 128 "data/maps/gBaIndoor_Prof/scripts.pory"
	removeobject 3
# 129 "data/maps/gBaIndoor_Prof/scripts.pory"
	call NicknameBoxMon
	goto NewProfessor_EventScript_Rowlet_1


NicknamePartyMon::
# 145 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 146 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 147 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 148 "data/maps/gBaIndoor_Prof/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 149 "data/maps/gBaIndoor_Prof/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 156 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 157 "data/maps/gBaIndoor_Prof/scripts.pory"
	hidemonpic
# 158 "data/maps/gBaIndoor_Prof/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 161 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 159 "data/maps/gBaIndoor_Prof/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Sigillaria::
# 165 "data/maps/gBaIndoor_Prof/scripts.pory"
	switch VAR_SIGILLARIA_STATE
# 166 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 0, Sigillaria_2
# 171 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 1, Sigillaria_3
# 176 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 2, Sigillaria_4
# 184 "data/maps/gBaIndoor_Prof/scripts.pory"
	case 3, Sigillaria_5
# 190 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 191 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox Sigillaria_Text_1
# 192 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_2:
# 167 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 168 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox Sigillaria_Text_0
# 169 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_3:
# 172 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 173 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox Sigillaria_Text_0
# 174 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_4:
# 177 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 178 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox PostChoice
# 179 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox beforeyouleave
# 180 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIGILLARIA_STATE, 3
# 181 "data/maps/gBaIndoor_Prof/scripts.pory"
	setvar VAR_SIG_LAB_TRIGGER, 1
# 182 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return

Sigillaria_5:
# 185 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 186 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox Sigillaria_Text_1
# 187 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return


# 213 "data/maps/gBaIndoor_Prof/scripts.pory"
noticeleftmove:
# 214 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_right
# 215 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
# 215 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
# 215 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/gBaIndoor_Prof/scripts.pory"
postnoticeleftT:
# 220 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 220 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 220 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 221 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_left
# 222 "data/maps/gBaIndoor_Prof/scripts.pory"
	face_player
	step_end

# 225 "data/maps/gBaIndoor_Prof/scripts.pory"
stopplayer:
# 226 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
	step_end

# 228 "data/maps/gBaIndoor_Prof/scripts.pory"
playerlookup:
# 229 "data/maps/gBaIndoor_Prof/scripts.pory"
	face_up
	step_end

noticeplayer_Text_0:
# 20 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Wait! Please take a pokemon!$"

NewProfessor_EventScript_Cyndaquill_Text_0:
# 47 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewProfessor_EventScript_Cyndaquill_Text_1:
# 54 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Recieved Cyndaquil$"

NewProfessor_EventScript_Cyndaquill_Text_2:
# 66 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "No More Room$"

NewProfessor_EventScript_Cyndaquill_Text_3:
# 71 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Choose carefully!$"

NewProfessor_EventScript_Oshawott_Text_0:
# 80 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewProfessor_EventScript_Oshawott_Text_1:
# 87 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Recieved Oshawott$"

NewProfessor_EventScript_Rowlet_Text_0:
# 114 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewProfessor_EventScript_Rowlet_Text_1:
# 121 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Recieved Rowlet$"

NicknamePartyMon_Text_0:
# 145 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 161 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Transferred to PC$"

Sigillaria_Text_0:
# 168 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Go on, pick a pokemon!$"

Sigillaria_Text_1:
# 186 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "All this new technology makes my head spin!$"

PostChoice::
# 197 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Say could you do me a favor and check\n"
	.string "on my granddaughter in Appleton? My\l"
	.string "sister told me she lost her precious\l"
	.string "Scyther.$"

beforeyouleave::
# 202 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Oh! and before you leave, take\n"
	.string "this.Silph Co. sent it to me. It's a\l"
	.string "PokeDex. It automatically records data\l"
	.string "about the Pokemon you catch.$"

TriggerGreet::
# 207 "data/maps/gBaIndoor_Prof/scripts.pory"
	.string "Hello! I just got the Pokemon from Silph\n"
	.string "Co. in. Say, why don't you choose one?$"
