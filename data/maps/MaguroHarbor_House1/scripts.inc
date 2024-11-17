MaguroHarbor_House1_MapScripts::
	.byte 0


MaguroHarbor_House1_EventScript_PokedexRiddler::
# 6 "data/maps/MaguroHarbor_House1/scripts.pory"
	lock
# 7 "data/maps/MaguroHarbor_House1/scripts.pory"
	faceplayer
# 9 "data/maps/MaguroHarbor_House1/scripts.pory"
	goto_if_set FLAG_DAILY_MON_DEX_RIDDLE, MaguroHarbor_House1_EventScript_PokedexRiddler_2
# 19 "data/maps/MaguroHarbor_House1/scripts.pory"
	msgbox MaguroHarbor_House1_EventScript_PokedexRiddler_Text_1
# 26 "data/maps/MaguroHarbor_House1/scripts.pory"
	closemessage
# 28 "data/maps/MaguroHarbor_House1/scripts.pory"
	randomdexmsgbox
# 30 "data/maps/MaguroHarbor_House1/scripts.pory"
	msgbox MaguroHarbor_House1_EventScript_PokedexRiddler_Text_2
# 31 "data/maps/MaguroHarbor_House1/scripts.pory"
	closemessage
# 33 "data/maps/MaguroHarbor_House1/scripts.pory"
	special EnterDexRiddleGuess
# 34 "data/maps/MaguroHarbor_House1/scripts.pory"
	waitstate
# 35 "data/maps/MaguroHarbor_House1/scripts.pory"
	special GetDexRiddleFeedback
# 37 "data/maps/MaguroHarbor_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MaguroHarbor_House1_EventScript_PokedexRiddler_5
# 55 "data/maps/MaguroHarbor_House1/scripts.pory"
	msgbox MaguroHarbor_House1_EventScript_PokedexRiddler_Text_5
MaguroHarbor_House1_EventScript_PokedexRiddler_4:
# 62 "data/maps/MaguroHarbor_House1/scripts.pory"
	setflag FLAG_DAILY_MON_DEX_RIDDLE
# 64 "data/maps/MaguroHarbor_House1/scripts.pory"
	release
	end

MaguroHarbor_House1_EventScript_PokedexRiddler_2:
# 11 "data/maps/MaguroHarbor_House1/scripts.pory"
	msgbox MaguroHarbor_House1_EventScript_PokedexRiddler_Text_0
# 14 "data/maps/MaguroHarbor_House1/scripts.pory"
	closemessage
# 15 "data/maps/MaguroHarbor_House1/scripts.pory"
	release
	end

MaguroHarbor_House1_EventScript_PokedexRiddler_5:
# 39 "data/maps/MaguroHarbor_House1/scripts.pory"
	msgbox MaguroHarbor_House1_EventScript_PokedexRiddler_Text_3
# 47 "data/maps/MaguroHarbor_House1/scripts.pory"
	closemessage
# 50 "data/maps/MaguroHarbor_House1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 51 "data/maps/MaguroHarbor_House1/scripts.pory"
	msgbox MaguroHarbor_House1_EventScript_PokedexRiddler_Text_4
	goto MaguroHarbor_House1_EventScript_PokedexRiddler_4


MaguroHarbor_House1_EventScript_PokedexRiddler_Text_0:
# 12 "data/maps/MaguroHarbor_House1/scripts.pory"
	.string "Come back tomorrow for more Pokémon\n"
	.string "riddles… Hehe…$"

MaguroHarbor_House1_EventScript_PokedexRiddler_Text_1:
# 20 "data/maps/MaguroHarbor_House1/scripts.pory"
	.string "Hehe… Hullo, kid…\n"
	.string "People call me the Pokémon Nerd.\p"
	.string "(Not sure why…)\p"
	.string "I know a whole lot about Pokémon…\n"
	.string "Wanna play a game?\p"
	.string "If you can guess what Pokémon I'm\n"
	.string "talking about, I'll share my knowledge\l"
	.string "with you.\p"
	.string "Hehe… Think you can solve my riddle?\n"
	.string "Ahem…$"

MaguroHarbor_House1_EventScript_PokedexRiddler_Text_2:
# 30 "data/maps/MaguroHarbor_House1/scripts.pory"
	.string "Well? What Pokémon am I talking about?$"

MaguroHarbor_House1_EventScript_PokedexRiddler_Text_3:
# 40 "data/maps/MaguroHarbor_House1/scripts.pory"
	.string "Woah, you… You solved my riddle!\p"
	.string "Could you… be a true Pokémon Nerd?\p"
	.string "You have bested me today. Can you\n"
	.string "feel the rush of pure knowledge\l"
	.string "that's coursing through your veins?\p"
	.string "Your Pokémon… They will gain more\n"
	.string "experience for a while.\p"
	.string "Knowledge is power, after all, hehe…\p"
	.string "Come back another time for another\n"
	.string "riddle…$"

MaguroHarbor_House1_EventScript_PokedexRiddler_Text_4:
# 51 "data/maps/MaguroHarbor_House1/scripts.pory"
	.string "come back tomorrow$"

MaguroHarbor_House1_EventScript_PokedexRiddler_Text_5:
# 56 "data/maps/MaguroHarbor_House1/scripts.pory"
	.string "Wrong, wrong, WRONG!\n"
	.string "You are wrong!\p"
	.string "I'm honestly disappointed.\p"
	.string "Come back tomorrow, or when you've\n"
	.string "accumulated more Pokémon knowledge.$"
