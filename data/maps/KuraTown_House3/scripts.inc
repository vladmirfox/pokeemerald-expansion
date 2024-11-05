KuraTown_House3_MapScripts::
	.byte 0


KuraTown_House3_EventScript_Lady::
# 10 "data/maps/KuraTown_House3/scripts.pory"
	lock
# 13 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 0
	goto_if_eq KuraTown_House3_EventScript_Lady_2
# 13 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 2
	goto_if_eq KuraTown_House3_EventScript_Lady_2
# 40 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 1
	goto_if_eq KuraTown_House3_EventScript_Lady_3
# 48 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 3
	goto_if_eq KuraTown_House3_EventScript_Lady_4
# 53 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 4
	goto_if_eq KuraTown_House3_EventScript_Lady_5
# 61 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 5
	goto_if_eq KuraTown_House3_EventScript_Lady_6
KuraTown_House3_EventScript_Lady_1:
# 70 "data/maps/KuraTown_House3/scripts.pory"
	release
	return

KuraTown_House3_EventScript_Lady_2:
# 14 "data/maps/KuraTown_House3/scripts.pory"
	faceplayer
# 15 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Lady_Text_0
# 18 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
# 19 "data/maps/KuraTown_House3/scripts.pory"
	delay 60
# 20 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Lady_Text_1
# 26 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
# 28 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 0
	goto_if_eq KuraTown_House3_EventScript_Lady_15
# 32 "data/maps/KuraTown_House3/scripts.pory"
	compare VAR_SAKU_KURA_QUEST_ESPEON_STATE, 2
	goto_if_eq KuraTown_House3_EventScript_Lady_16
KuraTown_House3_EventScript_Lady_14:
# 38 "data/maps/KuraTown_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
	goto KuraTown_House3_EventScript_Lady_1

KuraTown_House3_EventScript_Lady_3:
# 41 "data/maps/KuraTown_House3/scripts.pory"
	faceplayer
# 42 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Lady_Text_2
# 45 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
	goto KuraTown_House3_EventScript_Lady_1

KuraTown_House3_EventScript_Lady_4:
# 49 "data/maps/KuraTown_House3/scripts.pory"
	faceplayer
# 51 "data/maps/KuraTown_House3/scripts.pory"
	call KuraTown_House3_EventScript_EspeonGoesHome
	goto KuraTown_House3_EventScript_Lady_1

KuraTown_House3_EventScript_Lady_5:
# 54 "data/maps/KuraTown_House3/scripts.pory"
	faceplayer
# 55 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Lady_Text_3
# 58 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
	goto KuraTown_House3_EventScript_Lady_1

KuraTown_House3_EventScript_Lady_6:
# 62 "data/maps/KuraTown_House3/scripts.pory"
	faceplayer
# 63 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Lady_Text_4
# 67 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
	goto KuraTown_House3_EventScript_Lady_1

KuraTown_House3_EventScript_Lady_15:
# 30 "data/maps/KuraTown_House3/scripts.pory"
	setvar VAR_SAKU_KURA_QUEST_ESPEON_STATE, 1
# 31 "data/maps/KuraTown_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
	goto KuraTown_House3_EventScript_Lady_14

KuraTown_House3_EventScript_Lady_16:
# 33 "data/maps/KuraTown_House3/scripts.pory"
	delay 60
# 35 "data/maps/KuraTown_House3/scripts.pory"
	call KuraTown_House3_EventScript_EspeonGoesHome
	goto KuraTown_House3_EventScript_Lady_14


KuraTown_House3_EventScript_EspeonGoesHome::
# 74 "data/maps/KuraTown_House3/scripts.pory"
	faceplayer
# 75 "data/maps/KuraTown_House3/scripts.pory"
	playse SE_PIN
# 76 "data/maps/KuraTown_House3/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 77 "data/maps/KuraTown_House3/scripts.pory"
	waitmovement 0
# 78 "data/maps/KuraTown_House3/scripts.pory"
	delay 48
# 79 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_EspeonGoesHome_Text_0
# 85 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
# 87 "data/maps/KuraTown_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 88 "data/maps/KuraTown_House3/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 90 "data/maps/KuraTown_House3/scripts.pory"
	waitmovement 0
# 91 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_EspeonGoesHome_Text_1
# 94 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
# 96 "data/maps/KuraTown_House3/scripts.pory"
	applymovement 2, JumpInJoy
# 97 "data/maps/KuraTown_House3/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
# 98 "data/maps/KuraTown_House3/scripts.pory"
	waitmoncry
# 99 "data/maps/KuraTown_House3/scripts.pory"
	delay 40
# 101 "data/maps/KuraTown_House3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 102 "data/maps/KuraTown_House3/scripts.pory"
	removeobject 2
# 103 "data/maps/KuraTown_House3/scripts.pory"
	delay 60
# 104 "data/maps/KuraTown_House3/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 105 "data/maps/KuraTown_House3/scripts.pory"
	delay 40
# 107 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Lady_Text_3
# 110 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
# 112 "data/maps/KuraTown_House3/scripts.pory"
	setvar VAR_SAKU_KURA_QUEST_ESPEON_STATE, 4
# 113 "data/maps/KuraTown_House3/scripts.pory"
	setflag FLAG_SAKU_KURA_HIDE_ESPEON_LADYS_HOUSE
	return


KuraTown_House3_EventScript_Espeon::
# 118 "data/maps/KuraTown_House3/scripts.pory"
	lock
# 119 "data/maps/KuraTown_House3/scripts.pory"
	faceplayer
# 120 "data/maps/KuraTown_House3/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
# 121 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Espeon_Text_0
# 124 "data/maps/KuraTown_House3/scripts.pory"
	waitmoncry
# 125 "data/maps/KuraTown_House3/scripts.pory"
	closemessage
# 126 "data/maps/KuraTown_House3/scripts.pory"
	delay 30
# 127 "data/maps/KuraTown_House3/scripts.pory"
	msgbox KuraTown_House3_EventScript_Espeon_Text_1
# 130 "data/maps/KuraTown_House3/scripts.pory"
	release
	return


# 133 "data/maps/KuraTown_House3/scripts.pory"
JumpInJoy:
# 134 "data/maps/KuraTown_House3/scripts.pory"
	jump_in_place_right
	step_end

KuraTown_House3_EventScript_Lady_Text_0:
# 16 "data/maps/KuraTown_House3/scripts.pory"
	.string "Hello! Ah, you came for your Pokémon!$"

KuraTown_House3_EventScript_Lady_Text_1:
# 21 "data/maps/KuraTown_House3/scripts.pory"
	.string "Sorry, I thought you were someone\n"
	.string "else.\p"
	.string "See, this little one came to me a while\n"
	.string "ago. There was a thunderstorm and it\l"
	.string "looked scared and lost.\p"
	.string "So I've been taking care of it while\n"
	.string "waiting for its master to show up!\p"
	.string "Looks like it's feeling a lot better\n"
	.string "now. Look how shiny his fur is! Such a\l"
	.string "pretty color, too!$"

KuraTown_House3_EventScript_Lady_Text_2:
# 43 "data/maps/KuraTown_House3/scripts.pory"
	.string "Don't worry, kitten, we'll find your\n"
	.string "master eventually!$"

KuraTown_House3_EventScript_Lady_Text_3:
# 56 "data/maps/KuraTown_House3/scripts.pory"
	.string "Sniffle… I'm going to miss him…$"

KuraTown_House3_EventScript_Lady_Text_4:
# 64 "data/maps/KuraTown_House3/scripts.pory"
	.string "That little lost kitten is reunited\n"
	.string "with its master? Do they seem happy\l"
	.string "together?\p"
	.string "Oh, how delightful!$"

KuraTown_House3_EventScript_EspeonGoesHome_Text_0:
# 80 "data/maps/KuraTown_House3/scripts.pory"
	.string "What? You're saying its master is\n"
	.string "waiting for him in Saku Village?\p"
	.string "… …\p"
	.string "I'd rather not try going over there,\n"
	.string "folks over at Saku Village are\l"
	.string "notoriously mean…\p"
	.string "But I guess… I can make an effort for\n"
	.string "this kitten here.$"

KuraTown_House3_EventScript_EspeonGoesHome_Text_1:
# 92 "data/maps/KuraTown_House3/scripts.pory"
	.string "Good news, sweetie! You're going home!$"

KuraTown_House3_EventScript_Espeon_Text_0:
# 122 "data/maps/KuraTown_House3/scripts.pory"
	.string "Speeee!$"

KuraTown_House3_EventScript_Espeon_Text_1:
# 128 "data/maps/KuraTown_House3/scripts.pory"
	.string "It looks happy and serene.$"
