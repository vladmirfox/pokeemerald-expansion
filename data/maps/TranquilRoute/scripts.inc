TranquilRoute_MapScripts::
# 8 "data/maps/TranquilRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TranquilRoute_CheckCutGrass
	.byte 0


TranquilRoute_CheckCutGrass::
# 13 "data/maps/TranquilRoute/scripts.pory"
	call_if_set FLAG_COMPLETED_CUT_QUEST, TranquilRoute_EventScript_CutGrass
	end


TranquilRoute_EventScript_CutGrass::
# 23 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 31, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 25 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 30, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 27 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 29, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 28 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 29, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 30 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 28, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 31 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 28, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 32 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 28, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 34 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 27, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 35 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 27, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 36 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 27, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 38 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 26, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 39 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 26, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 41 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 25, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 43 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 24, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 45 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 23, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 46 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 23, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 48 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 49 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 50 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 51 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 53 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 54 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 55 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 56 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 57 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 58 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 59 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 60 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 62 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 63 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 64 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 65 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 66 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 67 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 68 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 69 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 71 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 72 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 73 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 74 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 75 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 76 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 77 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 78 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 79 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 49, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 81 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 82 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 83 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 84 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 85 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 86 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 87 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
	return


TranquilRoute_EventScript_Chikao::
# 92 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_CHIKAO, TranquilRoute_EventScript_Chikao_Text_0, TranquilRoute_EventScript_Chikao_Text_1
# 97 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Chikao_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Takeshi::
# 102 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_TAKESHI, TranquilRoute_EventScript_Takeshi_Text_0, TranquilRoute_EventScript_Takeshi_Text_1
# 107 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Takeshi_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Hana::
# 112 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_HIINA, TranquilRoute_EventScript_Hana_Text_0, TranquilRoute_EventScript_Hana_Text_1
# 117 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Hana_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Kenji::
# 122 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_KENJI, TranquilRoute_EventScript_Kenji_Text_0, TranquilRoute_EventScript_Kenji_Text_1
# 127 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Kenji_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_MysteriousSamurai::
# 136 "data/maps/TranquilRoute/scripts.pory"
	lock
# 138 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_MysteriousSamurai_Text_0
# 145 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 147 "data/maps/TranquilRoute/scripts.pory"
	applymovement 9, TranquilRoute_Movement_MysteriousSamuraiWalksAway
# 148 "data/maps/TranquilRoute/scripts.pory"
	removeobject 9
# 150 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_MYSTERIOUS_SAMURAI_TRANQUIL_ROUTE
# 151 "data/maps/TranquilRoute/scripts.pory"
	release
	end


# 155 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_MysteriousSamuraiWalksAway:
# 156 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 156 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 156 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 156 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 156 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 156 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

TranquilRoute_EventScript_Girl::
# 160 "data/maps/TranquilRoute/scripts.pory"
	lock
# 161 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Girl_Text_0, MSGBOX_AUTOCLOSE
# 162 "data/maps/TranquilRoute/scripts.pory"
	release
	end


TranquilRoute_EventScript_Shellos::
# 167 "data/maps/TranquilRoute/scripts.pory"
	lock
# 168 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 169 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_SHELLOS, CRY_MODE_NORMAL
# 170 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Shellos_Text_0
# 173 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 174 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 175 "data/maps/TranquilRoute/scripts.pory"
	release
	end


TranquilRoute_EventScript_BerryWoman::
# 180 "data/maps/TranquilRoute/scripts.pory"
	lock
# 181 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 183 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_PAIL, TranquilRoute_EventScript_BerryWoman_2
# 187 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_1
# 188 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 189 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 190 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 191 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 192 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 193 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 194 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_2
# 201 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 202 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 203 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 205 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_3
# 210 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 211 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 212 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 214 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_4
# 220 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
TranquilRoute_EventScript_BerryWoman_1:
# 222 "data/maps/TranquilRoute/scripts.pory"
	release
	end

TranquilRoute_EventScript_BerryWoman_2:
# 184 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_0
	goto TranquilRoute_EventScript_BerryWoman_1


TranquilRoute_EventScript_Mareep::
# 227 "data/maps/TranquilRoute/scripts.pory"
	lock
# 228 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 229 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep_Text_0, MSGBOX_AUTOCLOSE
# 230 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 231 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_Mareep2::
# 235 "data/maps/TranquilRoute/scripts.pory"
	lock
# 236 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 237 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep2_Text_0, MSGBOX_AUTOCLOSE
# 238 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 239 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_TrainerTips1::
# 243 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips1_Text_0, MSGBOX_SIGN
	return


TranquilRoute_TrainerTips2::
# 252 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips2_Text_0, MSGBOX_SIGN
	return


TranquilRoute_DirectionSign::
# 259 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, TranquilRoute_DirectionSign_1
# 266 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_1, MSGBOX_SIGN
	return

TranquilRoute_DirectionSign_1:
# 260 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_0, MSGBOX_SIGN
	return


TranquilRoute_EventScript_Chikao_Text_0:
# 94 "data/maps/TranquilRoute/scripts.pory"
	.string "I've been studying Pokémon at school! I\n"
	.string "can't lose!$"

TranquilRoute_EventScript_Chikao_Text_1:
# 95 "data/maps/TranquilRoute/scripts.pory"
	.string "I should have listened in class…$"

TranquilRoute_EventScript_Chikao_Text_2:
# 97 "data/maps/TranquilRoute/scripts.pory"
	.string "Some Pokémon have more attack, and some have more special attack!\p What's the difference? Uhh… It's too complicated to explain.$"

TranquilRoute_EventScript_Takeshi_Text_0:
# 104 "data/maps/TranquilRoute/scripts.pory"
	.string "Stay right there! I'll defeat you with\n"
	.string "my ninja skills!$"

TranquilRoute_EventScript_Takeshi_Text_1:
# 105 "data/maps/TranquilRoute/scripts.pory"
	.string "I had the sun in my eyes!$"

TranquilRoute_EventScript_Takeshi_Text_2:
# 107 "data/maps/TranquilRoute/scripts.pory"
	.string "I must hone my ninja skills!$"

TranquilRoute_EventScript_Hana_Text_0:
# 114 "data/maps/TranquilRoute/scripts.pory"
	.string "Ugh, how can Kenji paint a portrait of\n"
	.string "me if people keep walking between us?$"

TranquilRoute_EventScript_Hana_Text_1:
# 115 "data/maps/TranquilRoute/scripts.pory"
	.string "Great, now my hair is all messed up.$"

TranquilRoute_EventScript_Hana_Text_2:
# 117 "data/maps/TranquilRoute/scripts.pory"
	.string "Kenji really is an amazing artist. I feel\n"
	.string "very lucky.$"

TranquilRoute_EventScript_Kenji_Text_0:
# 124 "data/maps/TranquilRoute/scripts.pory"
	.string "You're interrupting my creative flow!!$"

TranquilRoute_EventScript_Kenji_Text_1:
# 125 "data/maps/TranquilRoute/scripts.pory"
	.string "Such beauty! What an artistic fight\n"
	.string "this was!$"

TranquilRoute_EventScript_Kenji_Text_2:
# 128 "data/maps/TranquilRoute/scripts.pory"
	.string "Hiina is the best subject I could dream\n"
	.string "of.\p"
	.string "…Hey, uh, please don't tell her I said\n"
	.string "that.$"

TranquilRoute_EventScript_MysteriousSamurai_Text_0:
# 139 "data/maps/TranquilRoute/scripts.pory"
	.string "So you are one of those new Pokémon\n"
	.string "wielders, right?\p"
	.string "You say Pokémon have been restless,\n"
	.string "lately?\p"
	.string "Interesting.\p"
	.string "I have the feeling we're going to meet\n"
	.string "again soon.\p"
	.string "Until then, farewell.$"

TranquilRoute_EventScript_Girl_Text_0:
# 161 "data/maps/TranquilRoute/scripts.pory"
	.string "What? Oh, I don't fight.\p"
	.string "My Pokémon and I are just strolling.$"

TranquilRoute_EventScript_Shellos_Text_0:
# 171 "data/maps/TranquilRoute/scripts.pory"
	.string "Clelel!$"

TranquilRoute_EventScript_BerryWoman_Text_0:
# 184 "data/maps/TranquilRoute/scripts.pory"
	.string "Enjoy gardening!$"

TranquilRoute_EventScript_BerryWoman_Text_1:
# 187 "data/maps/TranquilRoute/scripts.pory"
	.string "Hi, young one! See this?$"

TranquilRoute_EventScript_BerryWoman_Text_2:
# 195 "data/maps/TranquilRoute/scripts.pory"
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
# 206 "data/maps/TranquilRoute/scripts.pory"
	.string "Oh, right, I was almost forgetting!\p"
	.string "You must remember to water them\n"
	.string "regularly, or they won't grow!\p"
	.string "I like you. Take this!$"

TranquilRoute_EventScript_BerryWoman_Text_4:
# 215 "data/maps/TranquilRoute/scripts.pory"
	.string "Isn't it cute? It's friend-shaped!\p"
	.string "Don't worry about it, I have a spare one.\p"
	.string "Have fun gardening!$"

TranquilRoute_EventScript_Mareep_Text_0:
# 229 "data/maps/TranquilRoute/scripts.pory"
	.string "Beeeeeh…$"

TranquilRoute_EventScript_Mareep2_Text_0:
# 237 "data/maps/TranquilRoute/scripts.pory"
	.string "Baaaaah…$"

TranquilRoute_TrainerTips1_Text_0:
# 244 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Some Pokémon only come out in the\n"
	.string "morning, in the evening, or at night.\p"
	.string "Visit the same spot at different times\n"
	.string "of day to have a chance of seeing rare\l"
	.string "Pokémon!$"

TranquilRoute_TrainerTips2_Text_0:
# 253 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Several items can be assigned to the\n"
	.string "SELECT button from your bag.$"

TranquilRoute_DirectionSign_Text_0:
# 261 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Sakura Village\p"
	.string "It looks like the sign has been written\n"
	.string "over recently…$"

TranquilRoute_DirectionSign_Text_1:
# 267 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Saku and Kura Villages$"
