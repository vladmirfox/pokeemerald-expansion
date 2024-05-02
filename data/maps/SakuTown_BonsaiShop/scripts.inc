SakuTown_BonsaiShop_MapScripts::
# 4 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_EventScript_SetupNpcs
	.byte 0


SakuTown_EventScript_SetupNpcs::
# 9 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_unset FLAG_HIDE_BONSAI_SHOP_OWNER, SakuTown_EventScript_SetupNpcs_1
	return

SakuTown_EventScript_SetupNpcs_1:
# 10 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 11 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	setobjectxyperm 1, 9, 3
	return


SakuTown_BonsaiShop_EventScript_ClayPots::
# 16 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_ClayPots_Text_0, MSGBOX_AUTOCLOSE
	return


SakuTown_BonsaiShop_EventScript_Bonsai::
# 22 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Bonsai_Text_0, MSGBOX_AUTOCLOSE
	return


SakuTown_BonsaiShop_EventScript_Water::
# 28 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Water_Text_0, MSGBOX_AUTOCLOSE
	return


SakuTown_BonsaiShop_EventScript_FlowerBasket::
# 34 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_FlowerBasket_Text_0, MSGBOX_AUTOCLOSE
	return


SakuTown_BonsaiShop_EventScript_WateringCan::
# 40 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_WateringCan_Text_0, MSGBOX_AUTOCLOSE
	return


SakuTown_BonsaiShop_EventScript_Painting::
# 46 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Painting_Text_0, MSGBOX_AUTOCLOSE
	return


SakuTown_EventScript_BonsaiShop_LittleSister::
# 52 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	lock
# 53 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	faceplayer
# 55 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	getgamestat GAME_STAT_PLANTED_BERRIES
# 57 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ACROBATICS, SakuTown_EventScript_BonsaiShop_LittleSister_2
# 63 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	special GetPlayerMrMrsString
# 64 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_1
# 68 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt SakuTown_EventScript_BonsaiShop_LittleSister_5
# 75 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt SakuTown_EventScript_BonsaiShop_LittleSister_6
# 82 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	compare VAR_RESULT, 30
	goto_if_lt SakuTown_EventScript_BonsaiShop_LittleSister_7
# 91 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt SakuTown_EventScript_BonsaiShop_LittleSister_8
# 99 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_ge SakuTown_EventScript_BonsaiShop_LittleSister_9
SakuTown_EventScript_BonsaiShop_LittleSister_1:
# 124 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	release
	return

SakuTown_EventScript_BonsaiShop_LittleSister_2:
# 58 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_0
	goto SakuTown_EventScript_BonsaiShop_LittleSister_1

SakuTown_EventScript_BonsaiShop_LittleSister_5:
# 69 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_2
# 74 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
	goto SakuTown_EventScript_BonsaiShop_LittleSister_1

SakuTown_EventScript_BonsaiShop_LittleSister_6:
# 76 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_3
# 81 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
	goto SakuTown_EventScript_BonsaiShop_LittleSister_1

SakuTown_EventScript_BonsaiShop_LittleSister_7:
# 83 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_4
# 90 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
	goto SakuTown_EventScript_BonsaiShop_LittleSister_1

SakuTown_EventScript_BonsaiShop_LittleSister_8:
# 92 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_5
# 98 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
	goto SakuTown_EventScript_BonsaiShop_LittleSister_1

SakuTown_EventScript_BonsaiShop_LittleSister_9:
# 100 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_6
# 107 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
# 109 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 110 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 111 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_BonsaiShop_LittleSister_Text_7
# 119 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
# 120 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	setflag FLAG_RECEIVED_TM_ACROBATICS
	goto SakuTown_EventScript_BonsaiShop_LittleSister_1


SakuTown_BonsaiShop_EventScript_Assistant::
# 128 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	lock
# 129 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	faceplayer
# 132 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	compare VAR_BONSAI_SHOP_STATE, 1
	goto_if_eq SakuTown_BonsaiShop_EventScript_Assistant_2
# 153 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_PAIL, SakuTown_BonsaiShop_EventScript_Assistant_9
# 172 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Assistant_Text_4
# 181 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
# 182 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 183 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 185 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Assistant_Text_5
# 190 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
# 191 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 192 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 194 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Assistant_Text_6
SakuTown_BonsaiShop_EventScript_Assistant_8:
# 200 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	setvar VAR_BONSAI_SHOP_STATE, 1
SakuTown_BonsaiShop_EventScript_Assistant_1:
# 203 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	release
	return

SakuTown_BonsaiShop_EventScript_Assistant_2:
# 134 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_set FLAG_HIDE_BONSAI_SHOP_OWNER, SakuTown_BonsaiShop_EventScript_Assistant_5
# 144 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Assistant_Text_1
# 147 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
	goto SakuTown_BonsaiShop_EventScript_Assistant_1

SakuTown_BonsaiShop_EventScript_Assistant_5:
# 135 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Assistant_Text_0
# 141 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
	goto SakuTown_BonsaiShop_EventScript_Assistant_1

SakuTown_BonsaiShop_EventScript_Assistant_9:
# 154 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Assistant_Text_2
# 157 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	playse SE_PIN
# 158 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 159 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	waitmovement 0
# 160 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 161 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	waitmovement 0
# 162 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Assistant_Text_3
# 168 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
	goto SakuTown_BonsaiShop_EventScript_Assistant_8


SakuTown_BonsaiShop_EventScript_Owner::
# 207 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	lock
# 208 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	faceplayer
# 209 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, SakuTown_BonsaiShop_EventScript_Owner_2
# 223 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	special GetPlayerBroSisString
# 224 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Owner_Text_2
SakuTown_BonsaiShop_EventScript_Owner_1:
# 229 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	release
	return

SakuTown_BonsaiShop_EventScript_Owner_2:
# 211 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SakuTown_BonsaiShop_EventScript_Owner_5
# 217 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Owner_Text_1
	goto SakuTown_BonsaiShop_EventScript_Owner_1

SakuTown_BonsaiShop_EventScript_Owner_5:
# 212 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_BonsaiShop_EventScript_Owner_Text_0
	goto SakuTown_BonsaiShop_EventScript_Owner_1


SakuTown_EventScript_Man::
# 233 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	lock
# 234 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	faceplayer
# 235 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	msgbox SakuTown_EventScript_Man_Text_0
# 240 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	closemessage
# 241 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	release
	return


SakuTown_BonsaiShop_EventScript_ClayPots_Text_0:
# 17 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Some clay pots, neatly stacked.$"

SakuTown_BonsaiShop_EventScript_Bonsai_Text_0:
# 23 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "It's a bonsai. It has obviously been\n"
	.string "nurtured with love.$"

SakuTown_BonsaiShop_EventScript_Water_Text_0:
# 29 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "It's filled to the brim with rainwater.$"

SakuTown_BonsaiShop_EventScript_FlowerBasket_Text_0:
# 35 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "A small basket of freshly picked\n"
	.string "flowers.$"

SakuTown_BonsaiShop_EventScript_WateringCan_Text_0:
# 41 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "A cute Wailmer-shaped watering can. You\n"
	.string "have one exactly like it!$"

SakuTown_BonsaiShop_EventScript_Painting_Text_0:
# 47 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "A dainty painting of a flower.$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_0:
# 59 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "What's up, berry master?\p"
	.string "$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_1:
# 65 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hi there {STR_VAR_1} Grownup! Have\n"
	.string "you planted many berries on your\l"
	.string "travels?$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_2:
# 70 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hmm…\p"
	.string "Your face still has “berry amateur”\n"
	.string "written all over it.\p"
	.string "Come back when you're less of an\n"
	.string "embarrassment.$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_3:
# 77 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hmm…\p"
	.string "I'd say it's less terrible than before.\p"
	.string "Still not great though. You need to\n"
	.string "plant way more berries.$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_4:
# 84 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hmm…\p"
	.string "Hey, I'm actually impressed at the berry\n"
	.string "skills I'm sensing!\p"
	.string "… … Kidding!\p"
	.string "You're getting better at it though.$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_5:
# 93 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hmm…\p"
	.string "I'd say you're almost there…\p"
	.string "There's a fine line between being\n"
	.string "“almost good” at berries, and being\l"
	.string "“actually good” at berries.\p"
	.string "So, you know, keep it up, or whatever.$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_6:
# 101 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hmm…\p"
	.string "Oh?\p"
	.string "Now that's what I'm talking about!\p"
	.string "Congrats, {STR_VAR_1} Grownup. By\n"
	.string "achieving berry mastery, you have\l"
	.string "earned my respect.\p"
	.string "Take this!$"

SakuTown_EventScript_BonsaiShop_LittleSister_Text_7:
# 113 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "This scroll contains the move\n"
	.string "Acrobatics.\p"
	.string "Your Pokémon will strike harder if he\n"
	.string "isn't holding an item.\p"
	.string "Sounds like a good match for a Pokémon\n"
	.string "holding a berry, right?\p"
	.string "First eat a little snack, then\n"
	.string "mercilessly crush your opponent!$"

SakuTown_BonsaiShop_EventScript_Assistant_Text_0:
# 136 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hi, {PLAYER}!\p"
	.string "The shop owner is currently away. She's\n"
	.string "very busy.\p"
	.string "Busy with what, you ask?\p"
	.string "Um, I'm actually not sure.$"

SakuTown_BonsaiShop_EventScript_Assistant_Text_1:
# 145 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hi, {PLAYER}! Don't mind my sister.\n"
	.string "She's not as nice as she looks!$"

SakuTown_BonsaiShop_EventScript_Assistant_Text_2:
# 155 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hello, welcome to our bonsai shop…$"

SakuTown_BonsaiShop_EventScript_Assistant_Text_3:
# 163 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Oh, but I know you! We met on Tranquil\n"
	.string "route, remember?\p"
	.string "Have you used the watering can I gave\n"
	.string "you yet?\p"
	.string "Oh, yes, I work here. We sell bonsai and\n"
	.string "other potted flowers!\p"
	.string "I'm the owner's assistant! I also\n"
	.string "manage the shop whenever she's away.$"

SakuTown_BonsaiShop_EventScript_Assistant_Text_4:
# 173 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hello, welcome to our bonsai shop! I'm\n"
	.string "the owner's assistant.\p"
	.string "We sell bonsai and other potted\n"
	.string "flowers! Are you interested in plants?\p"
	.string "Have you ever seen strange patches of\n"
	.string "soil while on your journey?\p"
	.string "Those soil patches are incredibly\n"
	.string "fertile, which means any berry you plant\l"
	.string "in that soil will thrive and grow into a\l"
	.string "tree, ready to be harvested!\p"
	.string "I see you're a wielder. Well, different\n"
	.string "berries have different effects when\l"
	.string "they're fed to Pokémon.\p"
	.string "I love berries, hopefully you'll soon\n"
	.string "learn to love them too!\p"
	.string "Here, try planting a few!$"

SakuTown_BonsaiShop_EventScript_Assistant_Text_5:
# 186 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Oh, right, I was almost forgetting!\p"
	.string "You must remember to water them\n"
	.string "regularly, or they won't grow!\p"
	.string "I like you. Take this!$"

SakuTown_BonsaiShop_EventScript_Assistant_Text_6:
# 195 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Isn't it cute? It's friend-shaped!\p"
	.string "Don't worry about it, I have a spare one.\p"
	.string "Have fun gardening!$"

SakuTown_BonsaiShop_EventScript_Owner_Text_0:
# 213 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hello, {PLAYER}. Can I interest you in\n"
	.string "a little greenery?$"

SakuTown_BonsaiShop_EventScript_Owner_Text_1:
# 218 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hello, {PLAYER}. Can I interest you in\n"
	.string "a little greenery?\p"
	.string "Hmm… It looks like you wouldn't have\n"
	.string "anywhere to put bonsai. Come back when\l"
	.string "you do.$"

SakuTown_BonsaiShop_EventScript_Owner_Text_2:
# 225 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "Hello, young {STR_VAR_1}. Can I\n"
	.string "interest you in a little greenery?\p"
	.string "Hmm… It looks like you wouldn't have\n"
	.string "anywhere to put bonsai. Come back when\l"
	.string "you do.$"

SakuTown_EventScript_Man_Text_0:
# 236 "data/maps/SakuTown_BonsaiShop/scripts.pory"
	.string "I'm choosing flowers for my wife.\p"
	.string "I, uh… I didn't realize there'd be so\n"
	.string "many different types.\p"
	.string "Guess I'll be here for a while…$"
