Silveridge_House1_MapScripts::
	.byte 0


Silveridge_House1_EventScript_Woman::
# 6 "data/maps/Silveridge_House1/scripts.pory"
	lock
# 7 "data/maps/Silveridge_House1/scripts.pory"
	faceplayer
# 8 "data/maps/Silveridge_House1/scripts.pory"
	speakername Silveridge_House1_EventScript_Woman_Text_0
# 9 "data/maps/Silveridge_House1/scripts.pory"
	msgbox Silveridge_House1_EventScript_Woman_Text_1
# 12 "data/maps/Silveridge_House1/scripts.pory"
	closemessage
# 13 "data/maps/Silveridge_House1/scripts.pory"
	release
	return


Silveridge_House1_EventScript_FirebringerFangirl::
# 17 "data/maps/Silveridge_House1/scripts.pory"
	lock
# 18 "data/maps/Silveridge_House1/scripts.pory"
	faceplayer
# 19 "data/maps/Silveridge_House1/scripts.pory"
	speakername Silveridge_House1_EventScript_FirebringerFangirl_Text_0
# 20 "data/maps/Silveridge_House1/scripts.pory"
	msgbox Silveridge_House1_EventScript_FirebringerFangirl_Text_1
# 26 "data/maps/Silveridge_House1/scripts.pory"
	closemessage
# 27 "data/maps/Silveridge_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 28 "data/maps/Silveridge_House1/scripts.pory"
	waitmovement 0
# 29 "data/maps/Silveridge_House1/scripts.pory"
	release
	return


Silveridge_House1_EventScript_Sandslash::
# 33 "data/maps/Silveridge_House1/scripts.pory"
	lock
# 34 "data/maps/Silveridge_House1/scripts.pory"
	faceplayer
# 35 "data/maps/Silveridge_House1/scripts.pory"
	playmoncry SPECIES_SANDSLASH, CRY_MODE_NORMAL
# 36 "data/maps/Silveridge_House1/scripts.pory"
	speakername Silveridge_House1_EventScript_Sandslash_Text_0
# 37 "data/maps/Silveridge_House1/scripts.pory"
	msgbox Silveridge_House1_EventScript_Sandslash_Text_1
# 40 "data/maps/Silveridge_House1/scripts.pory"
	waitmoncry
# 41 "data/maps/Silveridge_House1/scripts.pory"
	closemessage
# 42 "data/maps/Silveridge_House1/scripts.pory"
	release
	return


Silveridge_House1_EventScript_Man::
# 46 "data/maps/Silveridge_House1/scripts.pory"
	lock
# 47 "data/maps/Silveridge_House1/scripts.pory"
	faceplayer
# 48 "data/maps/Silveridge_House1/scripts.pory"
	speakername Silveridge_House1_EventScript_Man_Text_0
# 49 "data/maps/Silveridge_House1/scripts.pory"
	goto_if_set FLAG_OBTAINED_EVERSTONE, Silveridge_House1_EventScript_Man_2
# 55 "data/maps/Silveridge_House1/scripts.pory"
	msgbox Silveridge_House1_EventScript_Man_Text_2
# 60 "data/maps/Silveridge_House1/scripts.pory"
	closemessage
# 62 "data/maps/Silveridge_House1/scripts.pory"
	giveitem ITEM_EVERSTONE
# 63 "data/maps/Silveridge_House1/scripts.pory"
	setflag FLAG_OBTAINED_EVERSTONE
# 65 "data/maps/Silveridge_House1/scripts.pory"
	speakername Silveridge_House1_EventScript_Man_Text_0
# 66 "data/maps/Silveridge_House1/scripts.pory"
	msgbox Silveridge_House1_EventScript_Man_Text_3
# 70 "data/maps/Silveridge_House1/scripts.pory"
	closemessage
Silveridge_House1_EventScript_Man_1:
# 72 "data/maps/Silveridge_House1/scripts.pory"
	release
	return

Silveridge_House1_EventScript_Man_2:
# 50 "data/maps/Silveridge_House1/scripts.pory"
	msgbox Silveridge_House1_EventScript_Man_Text_1
# 53 "data/maps/Silveridge_House1/scripts.pory"
	closemessage
	goto Silveridge_House1_EventScript_Man_1


Silveridge_House1_EventScript_Woman_Text_0:
# 8 "data/maps/Silveridge_House1/scripts.pory"
	.string "Woman$"

Silveridge_House1_EventScript_Woman_Text_1:
# 10 "data/maps/Silveridge_House1/scripts.pory"
	.string "Oh, you came all the way from Kura\n"
	.string "Village? You have good legs!$"

Silveridge_House1_EventScript_FirebringerFangirl_Text_0:
# 19 "data/maps/Silveridge_House1/scripts.pory"
	.string "Girl$"

Silveridge_House1_EventScript_FirebringerFangirl_Text_1:
# 21 "data/maps/Silveridge_House1/scripts.pory"
	.string "This place gets pretty cold,\n"
	.string "especially when the winds blow strong\l"
	.string "into the valley.\p"
	.string "I don't know what we would do without\n"
	.string "those brave Firebringers.\p"
	.string "They carry live Slugma on their back\n"
	.string "all the way down Mt Kazan! I could\l"
	.string "never!\p"
	.string "Sigh… I hope a handsome Firebringer\n"
	.string "notices me one day…$"

Silveridge_House1_EventScript_Sandslash_Text_0:
# 36 "data/maps/Silveridge_House1/scripts.pory"
	.string "Sandslash$"

Silveridge_House1_EventScript_Sandslash_Text_1:
# 38 "data/maps/Silveridge_House1/scripts.pory"
	.string "Sahaaah!$"

Silveridge_House1_EventScript_Man_Text_0:
# 48 "data/maps/Silveridge_House1/scripts.pory"
	.string "Miner$"

Silveridge_House1_EventScript_Man_Text_1:
# 51 "data/maps/Silveridge_House1/scripts.pory"
	.string "You think some Pokémon prefer to\n"
	.string "remain small forever?$"

Silveridge_House1_EventScript_Man_Text_2:
# 56 "data/maps/Silveridge_House1/scripts.pory"
	.string "My job is to mine ore in Silver Tunnel,\n"
	.string "all day long.\p"
	.string "I love it! I wouldn't trade it for the\n"
	.string "world. I'm fine with being a simple\l"
	.string "miner forever.\p"
	.string "Speaking of… I often find interesting\n"
	.string "rocks in there. Look at this!$"

Silveridge_House1_EventScript_Man_Text_3:
# 67 "data/maps/Silveridge_House1/scripts.pory"
	.string "Apparently as long as a Pokémon holds\n"
	.string "on to this stone, it'll stop growing.\p"
	.string "My helper Sandslash is already fully\n"
	.string "grown, so I don't need it.$"
