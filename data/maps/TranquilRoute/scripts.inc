TranquilRoute_MapScripts::
	.byte 0


TranquilRoute_EventScript_Chikao::
# 10 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_CHIKAO, TranquilRoute_EventScript_Chikao_Text_0, TranquilRoute_EventScript_Chikao_Text_1
# 15 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Chikao_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Takeshi::
# 20 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_TAKESHI, TranquilRoute_EventScript_Takeshi_Text_0, TranquilRoute_EventScript_Takeshi_Text_1
# 25 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Takeshi_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Hana::
# 30 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_HIINA, TranquilRoute_EventScript_Hana_Text_0, TranquilRoute_EventScript_Hana_Text_1
# 35 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Hana_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Kenji::
# 40 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_KENJI, TranquilRoute_EventScript_Kenji_Text_0, TranquilRoute_EventScript_Kenji_Text_1
# 45 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Kenji_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_MysteriousSamurai::
# 54 "data/maps/TranquilRoute/scripts.pory"
	lock
# 56 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_MysteriousSamurai_Text_0
# 63 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 65 "data/maps/TranquilRoute/scripts.pory"
	applymovement 9, TranquilRoute_Movement_MysteriousSamuraiWalksAway
# 66 "data/maps/TranquilRoute/scripts.pory"
	removeobject 9
# 68 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_MYSTERIOUS_SAMURAI_TRANQUIL_ROUTE
# 69 "data/maps/TranquilRoute/scripts.pory"
	release
	end


# 73 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_MysteriousSamuraiWalksAway:
# 74 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 74 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 74 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 74 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 74 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 74 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

TranquilRoute_EventScript_Girl::
# 78 "data/maps/TranquilRoute/scripts.pory"
	lock
# 79 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Girl_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/TranquilRoute/scripts.pory"
	release
	end


TranquilRoute_EventScript_Shellos::
# 85 "data/maps/TranquilRoute/scripts.pory"
	lock
# 86 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 87 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_SHELLOS, CRY_MODE_NORMAL
# 88 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Shellos_Text_0
# 91 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 92 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 93 "data/maps/TranquilRoute/scripts.pory"
	release
	end


TranquilRoute_EventScript_BerryWoman::
# 98 "data/maps/TranquilRoute/scripts.pory"
	lock
# 99 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 101 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_PAIL, TranquilRoute_EventScript_BerryWoman_2
# 105 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_1
# 106 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 107 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 108 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 109 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 110 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 111 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 112 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_2
# 119 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 120 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 121 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 123 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_3
# 128 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 129 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 130 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 132 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_4
# 138 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
TranquilRoute_EventScript_BerryWoman_1:
# 140 "data/maps/TranquilRoute/scripts.pory"
	release
	end

TranquilRoute_EventScript_BerryWoman_2:
# 102 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_0
	goto TranquilRoute_EventScript_BerryWoman_1


TranquilRoute_EventScript_Mareep::
# 145 "data/maps/TranquilRoute/scripts.pory"
	lock
# 146 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 147 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep_Text_0, MSGBOX_AUTOCLOSE
# 148 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 149 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_Mareep2::
# 153 "data/maps/TranquilRoute/scripts.pory"
	lock
# 154 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 155 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep2_Text_0, MSGBOX_AUTOCLOSE
# 156 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 157 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_TrainerTips1::
# 161 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips1_Text_0, MSGBOX_SIGN
	return


TranquilRoute_TrainerTips2::
# 170 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips2_Text_0, MSGBOX_SIGN
	return


TranquilRoute_DirectionSign::
# 177 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, TranquilRoute_DirectionSign_1
# 184 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_1, MSGBOX_SIGN
	return

TranquilRoute_DirectionSign_1:
# 178 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_0, MSGBOX_SIGN
	return


TranquilRoute_EventScript_Chikao_Text_0:
# 12 "data/maps/TranquilRoute/scripts.pory"
	.string "I've been studying Pokémon at school! I\n"
	.string "can't lose!$"

TranquilRoute_EventScript_Chikao_Text_1:
# 13 "data/maps/TranquilRoute/scripts.pory"
	.string "I should have listened in class…$"

TranquilRoute_EventScript_Chikao_Text_2:
# 15 "data/maps/TranquilRoute/scripts.pory"
	.string "Some Pokémon have more attack, and some have more special attack!\p What's the difference? Uhh… It's too complicated to explain.$"

TranquilRoute_EventScript_Takeshi_Text_0:
# 22 "data/maps/TranquilRoute/scripts.pory"
	.string "Stay right there! I'll defeat you with\n"
	.string "my ninja skills!$"

TranquilRoute_EventScript_Takeshi_Text_1:
# 23 "data/maps/TranquilRoute/scripts.pory"
	.string "I had the sun in my eyes!$"

TranquilRoute_EventScript_Takeshi_Text_2:
# 25 "data/maps/TranquilRoute/scripts.pory"
	.string "I must hone my ninja skills!$"

TranquilRoute_EventScript_Hana_Text_0:
# 32 "data/maps/TranquilRoute/scripts.pory"
	.string "Ugh, how can Kenji paint a portrait of\n"
	.string "me if people keep walking between us?$"

TranquilRoute_EventScript_Hana_Text_1:
# 33 "data/maps/TranquilRoute/scripts.pory"
	.string "Great, now my hair is all messed up.$"

TranquilRoute_EventScript_Hana_Text_2:
# 35 "data/maps/TranquilRoute/scripts.pory"
	.string "Kenji really is an amazing artist. I feel\n"
	.string "very lucky.$"

TranquilRoute_EventScript_Kenji_Text_0:
# 42 "data/maps/TranquilRoute/scripts.pory"
	.string "You're interrupting my creative flow!!$"

TranquilRoute_EventScript_Kenji_Text_1:
# 43 "data/maps/TranquilRoute/scripts.pory"
	.string "Such beauty! What an artistic fight\n"
	.string "this was!$"

TranquilRoute_EventScript_Kenji_Text_2:
# 46 "data/maps/TranquilRoute/scripts.pory"
	.string "Hiina is the best subject I could dream\n"
	.string "of.\p"
	.string "…Hey, uh, please don't tell her I said\n"
	.string "that.$"

TranquilRoute_EventScript_MysteriousSamurai_Text_0:
# 57 "data/maps/TranquilRoute/scripts.pory"
	.string "So you are one of those new Pokémon\n"
	.string "wielders, right?\p"
	.string "You say Pokémon have been restless,\n"
	.string "lately?\p"
	.string "Interesting.\p"
	.string "I have the feeling we're going to meet\n"
	.string "again soon.\p"
	.string "Until then, farewell.$"

TranquilRoute_EventScript_Girl_Text_0:
# 79 "data/maps/TranquilRoute/scripts.pory"
	.string "What? Oh, I don't fight.\p"
	.string "My Pokémon and I are just strolling.$"

TranquilRoute_EventScript_Shellos_Text_0:
# 89 "data/maps/TranquilRoute/scripts.pory"
	.string "Clelel!$"

TranquilRoute_EventScript_BerryWoman_Text_0:
# 102 "data/maps/TranquilRoute/scripts.pory"
	.string "Enjoy gardening!$"

TranquilRoute_EventScript_BerryWoman_Text_1:
# 105 "data/maps/TranquilRoute/scripts.pory"
	.string "Hi, young one! See this?$"

TranquilRoute_EventScript_BerryWoman_Text_2:
# 113 "data/maps/TranquilRoute/scripts.pory"
	.string "You can plant berries in the ground in\n"
	.string "fertile spots like this.\p"
	.string "The seeds will eventually grow into a\n"
	.string "healthy berry tree, ready to be\l"
	.string "harvested!\p"
	.string "I see you're a wielder. Well, different\n"
	.string "berries have different effects when\l"
	.string "they're fed to Pokémon.\p"
	.string "I love berries, hopefully you'll soon\n"
	.string "learn to love them too!\p"
	.string "Here, try planting a few!$"

TranquilRoute_EventScript_BerryWoman_Text_3:
# 124 "data/maps/TranquilRoute/scripts.pory"
	.string "Oh, right, I was almost forgetting!\p"
	.string "You must remember to water them\n"
	.string "regularly, or they won't grow!\p"
	.string "I like you. Take this!$"

TranquilRoute_EventScript_BerryWoman_Text_4:
# 133 "data/maps/TranquilRoute/scripts.pory"
	.string "Isn't it cute? It's friend-shaped!\p"
	.string "Don't worry about it, I have a spare one.\p"
	.string "Have fun gardening!$"

TranquilRoute_EventScript_Mareep_Text_0:
# 147 "data/maps/TranquilRoute/scripts.pory"
	.string "Beeeeeh…$"

TranquilRoute_EventScript_Mareep2_Text_0:
# 155 "data/maps/TranquilRoute/scripts.pory"
	.string "Baaaaah…$"

TranquilRoute_TrainerTips1_Text_0:
# 162 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Some Pokémon only come out in the\n"
	.string "morning, in the evening, or at night.\p"
	.string "Visit the same spot at different times\n"
	.string "of day to have a chance of seeing rare\l"
	.string "Pokémon!$"

TranquilRoute_TrainerTips2_Text_0:
# 171 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Several items can be assigned to the\n"
	.string "SELECT button from your bag.$"

TranquilRoute_DirectionSign_Text_0:
# 179 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Sakura Village\p"
	.string "It looks like the sign has been written\n"
	.string "over recently…$"

TranquilRoute_DirectionSign_Text_1:
# 185 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Saku and Kura Villages$"
