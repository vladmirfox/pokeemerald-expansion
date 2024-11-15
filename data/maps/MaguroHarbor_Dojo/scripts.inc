MaguroHarbor_Dojo_MapScripts::
	.byte 0


MaguroHarbor_Dojo_EventScript_Koishi::
# 6 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_KOISHI_1, MaguroHarbor_Dojo_EventScript_Koishi_Text_0, MaguroHarbor_Dojo_EventScript_Koishi_Text_1, MaguroHarbor_Dojo_EventScript_KoishiDefeated, NO_MUSIC
# 22 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_KOI_DOJO, MaguroHarbor_Dojo_EventScript_Koishi_2
# 26 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Koishi_Text_2, MSGBOX_DEFAULT
MaguroHarbor_Dojo_EventScript_Koishi_1:
# 33 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	release
	end

MaguroHarbor_Dojo_EventScript_Koishi_2:
# 23 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	addvar VAR_PLAYER_REPUTATION, 5
# 24 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	call MaguroHarbor_Dojo_EventScript_GiveReward
	goto MaguroHarbor_Dojo_EventScript_Koishi_1


MaguroHarbor_Dojo_EventScript_GiveReward::
# 38 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 39 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 40 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_GiveReward_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setflag FLAG_RECEIVED_TM_BONSAI_DOJO
	return


MaguroHarbor_Dojo_EventScript_KoishiDefeated::
# 53 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	message MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_0
# 57 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	waitmessage
# 58 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 59 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	setflag FLAG_BADGE02_GET
# 68 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	call MaguroHarbor_Dojo_EventScript_GiveReward
# 69 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	closemessage
# 76 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	release
	end


MaguroHarbor_Dojo_EventScript_Izumi::
# 83 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_IZUMI, MaguroHarbor_Dojo_EventScript_Izumi_Text_0, MaguroHarbor_Dojo_EventScript_Izumi_Text_1
# 88 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Izumi_Text_2, MSGBOX_AUTOCLOSE
	return


MaguroHarbor_Dojo_EventScript_Ren::
# 94 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_REN, MaguroHarbor_Dojo_EventScript_Ren_Text_0, MaguroHarbor_Dojo_EventScript_Ren_Text_1
# 99 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Ren_Text_2, MSGBOX_AUTOCLOSE
	return


MaguroHarbor_Dojo_EventScript_Mizu::
# 105 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	trainerbattle_single TRAINER_MIZU, MaguroHarbor_Dojo_EventScript_Mizu_Text_0, MaguroHarbor_Dojo_EventScript_Mizu_Text_1
# 110 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	msgbox MaguroHarbor_Dojo_EventScript_Mizu_Text_2, MSGBOX_AUTOCLOSE
	return


MaguroHarbor_Dojo_EventScript_Koishi_Text_0:
# 9 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Welcome to Maguro's Koi Pond Dojo, one\n"
	.string "of the eight Dojos officially\l"
	.string "appointed by the Toku Council.\p"
	.string "We Dojo Masters fight wielders that\n"
	.string "have taken on the Pokémon Council's\l"
	.string "challenge.\p"
	.string "We each give out a different Token to\n"
	.string "anyone who succeeds in defeating us.\p"
	.string "I am Koishi. I have raised elegant,\n"
	.string "graceful Pokémon since I was way\l"
	.string "younger than you.\p"
	.string "I may behave and speak in a soft\n"
	.string "manner, but do not for one second\l"
	.string "mistake soft-spokenness for\l"
	.string "weakness.\p"
	.string "Now… Shall we battle?$"

MaguroHarbor_Dojo_EventScript_Koishi_Text_1:
# 16 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "I see…$"

MaguroHarbor_Dojo_EventScript_Koishi_Text_2:
# 28 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "You shall achieve great things. I hope\n"
	.string "we meet again.$"

MaguroHarbor_Dojo_EventScript_GiveReward_Text_0:
# 42 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "This scroll contains Water Pulse, a\n"
	.string "water-type move that can confuse\l"
	.string "your foes.\p"
	.string "Going through the Toku Council's\n"
	.string "challenge is not an easy undertaking,\l"
	.string "but I can feel your spirit overflowing\l"
	.string "with determination.\p"
	.string "Good luck, {PLAYER}.$"

MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_0:
# 54 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "{PLAYER} received the Flowing\n"
	.string "Token\n"
	.string "from Koishi.$"

MaguroHarbor_Dojo_EventScript_KoishiDefeated_Text_1:
# 61 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "I applaud your skill. You are still a\n"
	.string "child, yet you obviously have a\l"
	.string "natural aptitude for battle.\p"
	.string "With the Token I just gave you, your\n"
	.string "Pokémon will obey you without\l"
	.string "question, even those you trade with\l"
	.string "others.\p"
	.string "I am also supposed to give you this.$"

MaguroHarbor_Dojo_EventScript_Izumi_Text_0:
# 85 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "My Pokémon is the daintiest there is!$"

MaguroHarbor_Dojo_EventScript_Izumi_Text_1:
# 86 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "My poor Goldeen!$"

MaguroHarbor_Dojo_EventScript_Izumi_Text_2:
# 89 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "You'll go far. I can tell.$"

MaguroHarbor_Dojo_EventScript_Ren_Text_0:
# 96 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Come in! The water's nice and toasty!$"

MaguroHarbor_Dojo_EventScript_Ren_Text_1:
# 97 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Nooo!$"

MaguroHarbor_Dojo_EventScript_Ren_Text_2:
# 100 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "I l-lied. I'm f-f-freezing in h-here.$"

MaguroHarbor_Dojo_EventScript_Mizu_Text_0:
# 107 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Do not disturb the koi pond!$"

MaguroHarbor_Dojo_EventScript_Mizu_Text_1:
# 108 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "Stop making so much noise!$"

MaguroHarbor_Dojo_EventScript_Mizu_Text_2:
# 111 "data/maps/MaguroHarbor_Dojo/scripts.pory"
	.string "These are sophisticated fish. They\n"
	.string "need peace and quiet to thrive.$"
