MaguroHarbor_Dojo_MapScripts::
	.byte 0


MaguroHarbor_Dojo_EventScript_Koishi::
# 8 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_KOISHI_1, MaguroHarbor_Dojo_EventScript_Koishi_Text_0, MaguroHarbor_Dojo_EventScript_Koishi_Text_1, MaguroHarbor_Dojo_EventScript_KoishiDefeated, NO_MUSIC
# 24 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Koishi_Text_2, MSGBOX_DEFAULT
	end


MaguroHarbor_Dojo_EventScript_KoishiDefeated::
# 34 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	message MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_0
# 38 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	waitmessage
# 39 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 40 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 51 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	closemessage
# 61 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setflag FLAG_BADGE02_GET
# 62 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	addvar VAR_PLAYER_REPUTATION, 5
# 64 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 1
# 66 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setflag FLAG_KURA_DOJO_CLOSED
# 68 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	clearflag FLAG_HIDE_BONSAI_SHOP_OWNER
# 77 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	delay 48
# 80 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setvar VAR_0x8004, 1
# 81 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setvar VAR_0x8005, 2
# 82 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setvar VAR_0x8006, 20
# 83 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setvar VAR_0x8007, 4
# 84 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	special ShakeCamera
# 85 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	delay 16
# 86 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	playse SE_PIN
# 87 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 88 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	delay 16
# 89 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	playse SE_PIN
# 90 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 91 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	waitstate
# 92 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 93 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	waitmovement 4
# 94 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	delay 48
# 96 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	speakername MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_3
# 97 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_4
# 101 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	closemessage
# 103 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 104 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq MaguroHarbor_Dojo_EventScript_KoishiDefeated_2
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	applymovement 4, MaguroHarbor_Dojo_EventScript_KoishiDefeated_Movement_1
MaguroHarbor_Dojo_EventScript_KoishiDefeated_1:
# 109 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	waitmovement 4
# 111 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	release
	end

MaguroHarbor_Dojo_EventScript_KoishiDefeated_2:
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	applymovement 4, MaguroHarbor_Dojo_EventScript_KoishiDefeated_Movement_0
	goto MaguroHarbor_Dojo_EventScript_KoishiDefeated_1


MaguroHarbor_Dojo_EventScript_Izumi::
# 118 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_IZUMI, MaguroHarbor_Dojo_EventScript_Izumi_Text_0, MaguroHarbor_Dojo_EventScript_Izumi_Text_1
# 123 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Izumi_Text_2, MSGBOX_AUTOCLOSE
	return


MaguroHarbor_Dojo_EventScript_Ren::
# 129 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_REN, MaguroHarbor_Dojo_EventScript_Ren_Text_0, MaguroHarbor_Dojo_EventScript_Ren_Text_1
# 134 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Ren_Text_2, MSGBOX_AUTOCLOSE
	return


MaguroHarbor_Dojo_EventScript_Mizu::
# 140 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_MIZU, MaguroHarbor_Dojo_EventScript_Mizu_Text_0, MaguroHarbor_Dojo_EventScript_Mizu_Text_1
# 145 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Mizu_Text_2, MSGBOX_AUTOCLOSE
	return


# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
MaguroHarbor_Dojo_EventScript_KoishiDefeated_Movement_0:
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_right
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_right
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_right
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
	step_end

# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
MaguroHarbor_Dojo_EventScript_KoishiDefeated_Movement_1:
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_right
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_right
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_right
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_left
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	walk_down
	step_end

MaguroHarbor_Dojo_EventScript_Koishi_Text_0:
# 11 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Welcome to Maguro's Koi Pond Dojo, one\n"
	.string "of the eight Dojos officially\l"
	.string "appointed by the Toku Council.\p"
	.string "We Dojo Masters fight wielders that\n"
	.string "have taken on the Pokémon Council's\l"
	.string "challenge.\p"
	.string "We each give out a different Token to\n"
	.string "anyone who succeeds in defeating us.\p"
	.string "I am Koishi. I began raising elegant,\n"
	.string "graceful Pokémon when I was even\l"
	.string "younger than you are now.\p"
	.string "I may behave and speak in a soft\n"
	.string "manner, but do not for one second\l"
	.string "mistake soft-spokenness for\l"
	.string "weakness.\p"
	.string "Now… Shall we battle?$"

MaguroHarbor_Dojo_EventScript_Koishi_Text_1:
# 18 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "I see…$"

MaguroHarbor_Dojo_EventScript_Koishi_Text_2:
# 26 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "You shall achieve great things. I hope\n"
	.string "we meet again.$"

MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_0:
# 35 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "{PLAYER} received the Flowing\n"
	.string "Token\n"
	.string "from Koishi.$"

MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_1:
# 42 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "I applaud your skill. You are still a\n"
	.string "child, yet you obviously have a\l"
	.string "natural aptitude for battle.\p"
	.string "With the Token I just gave you, your\n"
	.string "Pokémon will obey you without\l"
	.string "question, even those you trade with\l"
	.string "others.\p"
	.string "I am also supposed to give you this.$"

MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_2:
# 53 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "This scroll contains Water Pulse, a\n"
	.string "water-type move that can confuse\l"
	.string "your foes.\p"
	.string "Going through the Toku Council's\n"
	.string "challenge is no easy undertaking, but\l"
	.string "I can feel your spirit overflowing\l"
	.string "with determination.\p"
	.string "Good luck, {PLAYER}.$"

MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_3:
# 96 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Koishi$"

MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_4:
# 98 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "That… That was a big one!…\p"
	.string "I'm going outside to make sure\n"
	.string "everyone's alright.$"

MaguroHarbor_Dojo_EventScript_Izumi_Text_0:
# 120 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "My Pokémon is the daintiest there is!$"

MaguroHarbor_Dojo_EventScript_Izumi_Text_1:
# 121 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "My poor Goldeen!$"

MaguroHarbor_Dojo_EventScript_Izumi_Text_2:
# 124 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "You'll go far. I can tell.$"

MaguroHarbor_Dojo_EventScript_Ren_Text_0:
# 131 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Come in! The water's nice and toasty!$"

MaguroHarbor_Dojo_EventScript_Ren_Text_1:
# 132 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Nooo!$"

MaguroHarbor_Dojo_EventScript_Ren_Text_2:
# 135 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "I l-lied. I'm f-f-freezing in h-here.$"

MaguroHarbor_Dojo_EventScript_Mizu_Text_0:
# 142 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Do not disturb the koi pond!$"

MaguroHarbor_Dojo_EventScript_Mizu_Text_1:
# 143 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Stop making so much noise!$"

MaguroHarbor_Dojo_EventScript_Mizu_Text_2:
# 147 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "These are sophisticated fish. They\n"
	.string "need peace and quiet to thrive.$"
