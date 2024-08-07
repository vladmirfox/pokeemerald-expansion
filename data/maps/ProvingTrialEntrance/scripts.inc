ProvingTrialEntrance_MapScripts::
	.byte 0


ElderLiSpeech::
# 6 "data/maps/ProvingTrialEntrance/scripts.pory"
	lockall
# 7 "data/maps/ProvingTrialEntrance/scripts.pory"
	msgbox ElderLiWelcome
# 8 "data/maps/ProvingTrialEntrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 9 "data/maps/ProvingTrialEntrance/scripts.pory"
	msgbox ElderLiSupplies
# 10 "data/maps/ProvingTrialEntrance/scripts.pory"
	giveitem ITEM_OLD_ROD
# 11 "data/maps/ProvingTrialEntrance/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 12 "data/maps/ProvingTrialEntrance/scripts.pory"
	releaseall
	end


ElderLiWelcome::
# 16 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Elder Li: {COLOR DARK_GRAY}{COLOR LIGHT_GRAY}Welcome Aspirant, I am Elder Li\n"
	.string "and I shall oversee your Proving Trial.\l"
	.string "You will be tasked with finding and\l"
	.string "capturing a worthy Dragon-Type for\l"
	.string "your future challenges.$"

ElderLiSupplies::
# 23 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Elder Li: {COLOR DARK_GRAY}{COLOR LIGHT_GRAY}We shall provide you with\n"
	.string "Safari Balls and a Fishing Rod for your\l"
	.string "coming Trials.$"
