ProvingTrialEntrance_MapScripts::
# 2 "data/maps/ProvingTrialEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProvingTrial
	.byte 0


ProvingTrial::
# 6 "data/maps/ProvingTrialEntrance/scripts.pory"
	lockall
# 7 "data/maps/ProvingTrialEntrance/scripts.pory"
	compare VAR_WYRMSHIRE_STATE, 0
	goto_if_eq ProvingTrial_1
# 12 "data/maps/ProvingTrialEntrance/scripts.pory"
	releaseall
	end

ProvingTrial_1:
# 8 "data/maps/ProvingTrialEntrance/scripts.pory"
	setflag FLAG_PROVINGTRIAL
# 9 "data/maps/ProvingTrialEntrance/scripts.pory"
	setvar VAR_WYRMSHIRE_STATE, 1
	return


ProvingTrialStart::
# 18 "data/maps/ProvingTrialEntrance/scripts.pory"
	compare VAR_WYRMSHIRE_STATE, 1
	goto_if_eq ProvingTrialStart_1
	end

ProvingTrialStart_1:
# 19 "data/maps/ProvingTrialEntrance/scripts.pory"
	msgbox ProvingTrialStart_Text_0, MSGBOX_YESNO
# 20 "data/maps/ProvingTrialEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProvingTrialStart_4
# 24 "data/maps/ProvingTrialEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, walk_down
	return

ProvingTrialStart_4:
# 21 "data/maps/ProvingTrialEntrance/scripts.pory"
	call ElderLiSpeech
	return


ProvingTrialInProgress::
# 33 "data/maps/ProvingTrialEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, walk_up
	return


ElderLiSpeech::
# 37 "data/maps/ProvingTrialEntrance/scripts.pory"
	applymovement 1, face_player
# 38 "data/maps/ProvingTrialEntrance/scripts.pory"
	lockall
# 39 "data/maps/ProvingTrialEntrance/scripts.pory"
	msgbox ElderLiWelcome
# 40 "data/maps/ProvingTrialEntrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 41 "data/maps/ProvingTrialEntrance/scripts.pory"
	msgbox ElderLiSupplies
# 42 "data/maps/ProvingTrialEntrance/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, ElderLiSpeech_2
# 47 "data/maps/ProvingTrialEntrance/scripts.pory"
	msgbox ElderLiSpeech_Text_0
ElderLiSpeech_1:
# 49 "data/maps/ProvingTrialEntrance/scripts.pory"
	releaseall
	end

ElderLiSpeech_2:
# 43 "data/maps/ProvingTrialEntrance/scripts.pory"
	giveitem ITEM_OLD_ROD
# 44 "data/maps/ProvingTrialEntrance/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
	goto ElderLiSpeech_1


ProvingTrialStart_Text_0:
# 19 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "Are you ready to face the Proving Trial?$"

ElderLiSpeech_Text_0:
# 47 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "You already have your Supplies Aspirant.$"

ElderLiWelcome::
# 53 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Elder Li: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Welcome Aspirant, I am Elder Li\n"
	.string "and I shall oversee your Proving Trial.\l"
	.string "You will be tasked with finding and\l"
	.string "capturing a worthy Dragon-Type for\l"
	.string "your future challenges.$"

ElderLiSupplies::
# 60 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Elder Li: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}We shall provide you with\n"
	.string "Safari Balls and a Fishing Rod for your\l"
	.string "coming Trials.$"
