KuraTown_Dojo_MapScripts::
# 2 "data/maps/KuraTown_Dojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KuraTown_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KuraTown_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, KuraTown_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

KuraTown_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/KuraTown_Dojo/scripts.pory"
	clearflag FLAG_TEMP_1
# 6 "data/maps/KuraTown_Dojo/scripts.pory"
	clearflag FLAG_TEMP_2
# 7 "data/maps/KuraTown_Dojo/scripts.pory"
	clearflag FLAG_TEMP_3
# 8 "data/maps/KuraTown_Dojo/scripts.pory"
	clearflag FLAG_TEMP_5
# 9 "data/maps/KuraTown_Dojo/scripts.pory"
	clearflag FLAG_TEMP_6
# 10 "data/maps/KuraTown_Dojo/scripts.pory"
	clearflag FLAG_TEMP_8
# 11 "data/maps/KuraTown_Dojo/scripts.pory"
	clearflag FLAG_TEMP_9
	return


KuraTown_Dojo_EventScript_Takao::
# 17 "data/maps/KuraTown_Dojo/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, KuraTown_Dojo_EventScript_Takao_Text_0, KuraTown_Dojo_EventScript_Takao_Text_1
# 22 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Takao_Text_2, MSGBOX_AUTOCLOSE
	end


KuraTown_Dojo_EventScript_Jocelyn::
# 30 "data/maps/KuraTown_Dojo/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, KuraTown_Dojo_EventScript_Jocelyn_Text_0, KuraTown_Dojo_EventScript_Jocelyn_Text_1
# 35 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Jocelyn_Text_2, MSGBOX_AUTOCLOSE
	end


KuraTown_Dojo_EventScript_Laura::
# 43 "data/maps/KuraTown_Dojo/scripts.pory"
	trainerbattle_single TRAINER_LAURA, KuraTown_Dojo_EventScript_Laura_Text_0, KuraTown_Dojo_EventScript_Laura_Text_1
# 48 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Laura_Text_2, MSGBOX_AUTOCLOSE
	end


KuraTown_Dojo_EventScript_Brenden::
# 53 "data/maps/KuraTown_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, KuraTown_Dojo_EventScript_Brenden_Text_0, KuraTown_Dojo_EventScript_Brenden_Text_1
# 58 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Brenden_Text_2, MSGBOX_AUTOCLOSE
	end


KuraTown_Dojo_EventScript_Cristian::
# 63 "data/maps/KuraTown_Dojo/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, KuraTown_Dojo_EventScript_Cristian_Text_0, KuraTown_Dojo_EventScript_Cristian_Text_1
# 68 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Cristian_Text_2, MSGBOX_AUTOCLOSE
	end


KuraTown_Dojo_EventScript_Lilith::
# 73 "data/maps/KuraTown_Dojo/scripts.pory"
	trainerbattle_single TRAINER_LILITH, KuraTown_Dojo_EventScript_Lilith_Text_0, KuraTown_Dojo_EventScript_Lilith_Text_1
# 78 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, KuraTown_Dojo_EventScript_Lilith_2
# 84 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Lilith_Text_3, MSGBOX_AUTOCLOSE
KuraTown_Dojo_EventScript_Lilith_1:
	end

KuraTown_Dojo_EventScript_Lilith_2:
# 79 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Lilith_Text_2, MSGBOX_AUTOCLOSE
	goto KuraTown_Dojo_EventScript_Lilith_1


KuraTown_Dojo_EventScript_Hana::
# 90 "data/maps/KuraTown_Dojo/scripts.pory"
	trainerbattle_single TRAINER_HANA_1, KuraTown_Dojo_EventScript_Hana_Text_0, KuraTown_Dojo_EventScript_Hana_Text_1, KuraTown_Dojo_EventScript_HanaDefeated, NO_MUSIC
# 105 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULLDOZE, KuraTown_Dojo_EventScript_Hana_2
# 108 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Hana_Text_2, MSGBOX_DEFAULT
KuraTown_Dojo_EventScript_Hana_1:
# 115 "data/maps/KuraTown_Dojo/scripts.pory"
	release
	end

KuraTown_Dojo_EventScript_Hana_2:
# 106 "data/maps/KuraTown_Dojo/scripts.pory"
	call KuraTown_Dojo_EventScript_GiveBulldoze
	goto KuraTown_Dojo_EventScript_Hana_1


KuraTown_Dojo_EventScript_HanaDefeated::
# 120 "data/maps/KuraTown_Dojo/scripts.pory"
	message KuraTown_Dojo_EventScript_HanaDefeated_Text_0
# 124 "data/maps/KuraTown_Dojo/scripts.pory"
	waitmessage
# 125 "data/maps/KuraTown_Dojo/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 126 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_HanaDefeated_Text_1, MSGBOX_DEFAULT
# 133 "data/maps/KuraTown_Dojo/scripts.pory"
	setflag FLAG_BADGE02_GET
# 134 "data/maps/KuraTown_Dojo/scripts.pory"
	setvar VAR_0x8008, 2
# 135 "data/maps/KuraTown_Dojo/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 136 "data/maps/KuraTown_Dojo/scripts.pory"
	call KuraTown_Dojo_EventScript_GiveBulldoze
# 137 "data/maps/KuraTown_Dojo/scripts.pory"
	closemessage
# 144 "data/maps/KuraTown_Dojo/scripts.pory"
	release
	end


KuraTown_Dojo_EventScript_GiveBulldoze::
# 149 "data/maps/KuraTown_Dojo/scripts.pory"
	giveitem ITEM_TM_BULLDOZE
# 150 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 151 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_GiveBulldoze_Text_0, MSGBOX_DEFAULT
# 158 "data/maps/KuraTown_Dojo/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLDOZE
	return


KuraTown_Dojo_EventScript_Advice::
# 163 "data/maps/KuraTown_Dojo/scripts.pory"
	lock
# 164 "data/maps/KuraTown_Dojo/scripts.pory"
	faceplayer
# 165 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, KuraTown_Dojo_EventScript_Advice_2
# 170 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, KuraTown_Dojo_EventScript_Advice_7
KuraTown_Dojo_EventScript_Advice_6:
# 179 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, KuraTown_Dojo_EventScript_Advice_10
# 186 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Advice_Text_3
KuraTown_Dojo_EventScript_Advice_1:
# 196 "data/maps/KuraTown_Dojo/scripts.pory"
	release
	return

KuraTown_Dojo_EventScript_Advice_2:
# 166 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Advice_Text_0
	goto KuraTown_Dojo_EventScript_Advice_1

KuraTown_Dojo_EventScript_Advice_5:
# 171 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Advice_Text_1
	goto KuraTown_Dojo_EventScript_Advice_1

KuraTown_Dojo_EventScript_Advice_7:
# 170 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, KuraTown_Dojo_EventScript_Advice_5
	goto KuraTown_Dojo_EventScript_Advice_6

KuraTown_Dojo_EventScript_Advice_10:
# 180 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_Advice_Text_2
	goto KuraTown_Dojo_EventScript_Advice_1


KuraTown_Dojo_EventScript_DojoStatue::
# 200 "data/maps/KuraTown_Dojo/scripts.pory"
	lockall
# 201 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, KuraTown_Dojo_EventScript_DojoStatue_2
# 210 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_DojoStatue_Text_1, MSGBOX_SIGN
KuraTown_Dojo_EventScript_DojoStatue_1:
# 217 "data/maps/KuraTown_Dojo/scripts.pory"
	releaseall
	return

KuraTown_Dojo_EventScript_DojoStatue_2:
# 202 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_DojoStatue_Text_0, MSGBOX_SIGN
	goto KuraTown_Dojo_EventScript_DojoStatue_1


KuraTown_Dojo_EventScript_KuraDojoTree_CanCut::
# 221 "data/maps/KuraTown_Dojo/scripts.pory"
	lock
# 222 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_4
KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_3:
# 231 "data/maps/KuraTown_Dojo/scripts.pory"
	call KuraTown_Dojo_EventScript_KuraDojoTree_CantCut
KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_1:
# 233 "data/maps/KuraTown_Dojo/scripts.pory"
	release
	return

KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_2:
# 223 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_Text_0, MSGBOX_DEFAULT
# 224 "data/maps/KuraTown_Dojo/scripts.pory"
	closemessage
# 225 "data/maps/KuraTown_Dojo/scripts.pory"
	playse SE_M_CUT
# 226 "data/maps/KuraTown_Dojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 227 "data/maps/KuraTown_Dojo/scripts.pory"
	waitse
# 228 "data/maps/KuraTown_Dojo/scripts.pory"
	waitmovement 0
# 229 "data/maps/KuraTown_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_1

KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_4:
# 222 "data/maps/KuraTown_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_2
	goto KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_3


KuraTown_Dojo_EventScript_KuraDojoTree_CantCut::
# 237 "data/maps/KuraTown_Dojo/scripts.pory"
	msgbox KuraTown_Dojo_EventScript_KuraDojoTree_CantCut_Text_0, MSGBOX_SIGN
	return


KuraTown_Dojo_EventScript_Takao_Text_0:
# 19 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Ho ho ho… It seems you have taken a\n"
	.string "wrong turn…$"

KuraTown_Dojo_EventScript_Takao_Text_1:
# 20 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Very impressive skills!$"

KuraTown_Dojo_EventScript_Takao_Text_2:
# 23 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Not all paths lead to the master.$"

KuraTown_Dojo_EventScript_Jocelyn_Text_0:
# 32 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Is the maze giving you trouble?$"

KuraTown_Dojo_EventScript_Jocelyn_Text_1:
# 33 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "At least I didn't give you any\n"
	.string "trouble…$"

KuraTown_Dojo_EventScript_Jocelyn_Text_2:
# 36 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "You're wondering why you can't just\n"
	.string "cut down all the trees?\p"
	.string "Uhhh… It's a secret!$"

KuraTown_Dojo_EventScript_Laura_Text_0:
# 45 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "No! Don't cut down that tree! It's my\n"
	.string "favorite tree!$"

KuraTown_Dojo_EventScript_Laura_Text_1:
# 46 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Sniffle…$"

KuraTown_Dojo_EventScript_Laura_Text_2:
# 48 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "It's okay, go ahead. They're all my\n"
	.string "favorite tree anyway.$"

KuraTown_Dojo_EventScript_Brenden_Text_0:
# 55 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Take a deep breath! The air is so rich\n"
	.string "and flowery here!$"

KuraTown_Dojo_EventScript_Brenden_Text_1:
# 56 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "A-tchoo!$"

KuraTown_Dojo_EventScript_Brenden_Text_2:
# 58 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Sniff… By zeazonal allergiez are\n"
	.string "agdig up agaid…$"

KuraTown_Dojo_EventScript_Cristian_Text_0:
# 65 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Did you know any tree can be\n"
	.string "bonsaified by pruning its leaves\l"
	.string "regularly?$"

KuraTown_Dojo_EventScript_Cristian_Text_1:
# 66 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "You're not here because you're\n"
	.string "particularly interested in bonsai, are\l"
	.string "you?$"

KuraTown_Dojo_EventScript_Cristian_Text_2:
# 68 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "I feel bad sometimes, not letting the\n"
	.string "tree grow like it wants.$"

KuraTown_Dojo_EventScript_Lilith_Text_0:
# 75 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Hana may look frail, but she's\n"
	.string "actually way tougher than you!$"

KuraTown_Dojo_EventScript_Lilith_Text_1:
# 76 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Stop it! I'm a delicate flower!$"

KuraTown_Dojo_EventScript_Lilith_Text_2:
# 80 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "I saw your fight peeking through the\n"
	.string "leaves! That was amazing!\p"
	.string "I'm officially a fan!$"

KuraTown_Dojo_EventScript_Lilith_Text_3:
# 84 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "I wish I could see you two fight! Good\n"
	.string "luck!$"

KuraTown_Dojo_EventScript_Hana_Text_0:
# 94 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Welcome to my humble Dojo. I am Hana.\n"
	.string "Did you enjoy my little maze?\p"
	.string "Tending to my bonsai and fighting\n"
	.string "alongside my Pokémon are my favorite\l"
	.string "pastimes. With the Dojo, I can do\l"
	.string "both!\p"
	.string "A Pokémon battle can be graceful like\n"
	.string "a budding flower, strong like the\l"
	.string "deepest roots, powerful like a\l"
	.string "windswept pine tree, all at once.\p"
	.string "I want you to show me all the grace,\n"
	.string "strength and power you are capable\l"
	.string "of!$"

KuraTown_Dojo_EventScript_Hana_Text_1:
# 99 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Amazing.$"

KuraTown_Dojo_EventScript_Hana_Text_2:
# 110 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "The slow-growing tree becomes the\n"
	.string "sturdiest. Take your time on your\l"
	.string "journey, {PLAYER}.$"

KuraTown_Dojo_EventScript_HanaDefeated_Text_0:
# 121 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "{PLAYER} received the Bonsai badge\n"
	.string "from Hana.$"

KuraTown_Dojo_EventScript_HanaDefeated_Text_1:
# 128 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Thanks to the Bonsai badge, your\n"
	.string "Pokémon will obey you without\l"
	.string "question, even those you trade with\l"
	.string "others.\p"
	.string "Here, let me also give you this.$"

KuraTown_Dojo_EventScript_GiveBulldoze_Text_0:
# 153 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "This scroll contains Bulldoze, a\n"
	.string "powerful ground-type move that slows\l"
	.string "down the enemy.\p"
	.string "I invented that technique myself! I\n"
	.string "needed a way to soften the ground\l"
	.string "when repotting bonsai, heh heh.\p"
	.string "$"

KuraTown_Dojo_EventScript_Advice_Text_0:
# 167 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "That was a beautiful fight! You're\n"
	.string "going to blossom into an excellent\l"
	.string "Pokémon wielder, I can just feel it!$"

KuraTown_Dojo_EventScript_Advice_Text_1:
# 172 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Hello, young challenger, and welcome\n"
	.string "to the official Dojo of Kura Village!\p"
	.string "Lady Hana, the Dojo master, is an\n"
	.string "expert in all things bonsai. She\l"
	.string "designed this place and grew these\l"
	.string "trees, of course!\p"
	.string "She tends to favor ground-type\n"
	.string "moves, but she's got other tricks up\l"
	.string "her sleeve, too. Be on your guard!\p"
	.string "Now, pay attention: only some of\n"
	.string "these pretty trees can be cut down.\p"
	.string "Figure out which, and you'll reach the\n"
	.string "master!$"

KuraTown_Dojo_EventScript_Advice_Text_2:
# 181 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Hello, young challenger, and welcome\n"
	.string "to the official Dojo of Kura Village!\p"
	.string "All these trees are blocking your way,\n"
	.string "aren't they?\p"
	.string "You should come back once you've\n"
	.string "figured out a way to cut them!$"

KuraTown_Dojo_EventScript_Advice_Text_3:
# 187 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Hello, young challenger, and welcome\n"
	.string "to the official Dojo of Kura Village!\p"
	.string "All these trees are blocking your way,\n"
	.string "aren't they?\p"
	.string "You should come back once you've\n"
	.string "figured out a way to cut them!\p"
	.string "If you're itching for a challenge, why\n"
	.string "not try your skills at the Dojo in\l"
	.string "Maguro Harbor first?\p"
	.string "It's not very far east from here!$"

KuraTown_Dojo_EventScript_DojoStatue_Text_0:
# 203 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Dojo of Kura Village\p"
	.string "Certified wielders:\n"
	.string "{RIVAL},"
	.string "{PLAYER}$"

KuraTown_Dojo_EventScript_DojoStatue_Text_1:
# 211 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "Dojo of Kura Village\p"
	.string "Certified wielders:\n"
	.string "{RIVAL}$"

KuraTown_Dojo_EventScript_KuraDojoTree_CanCut_Text_0:
# 223 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "…Oh? This tree can be cut down!$"

KuraTown_Dojo_EventScript_KuraDojoTree_CantCut_Text_0:
# 237 "data/maps/KuraTown_Dojo/scripts.pory"
	.string "A gorgeous and well-nurtured tree.$"
