ProvingTrialEntrance_MapScripts::
# 2 "data/maps/ProvingTrialEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProvingTrial
	.byte 0


ProvingTrial::
# 6 "data/maps/ProvingTrialEntrance/scripts.pory"
	compare VAR_WYRMSHIRE_STATE, 0
	goto_if_eq ProvingTrial_3
ProvingTrial_2:
	end

ProvingTrial_1:
# 7 "data/maps/ProvingTrialEntrance/scripts.pory"
	setflag FLAG_PROVINGTRIAL
# 8 "data/maps/ProvingTrialEntrance/scripts.pory"
	setvar VAR_WYRMSHIRE_STATE, 1
	return

ProvingTrial_3:
# 6 "data/maps/ProvingTrialEntrance/scripts.pory"
	goto_if_unset FLAG_PROVINGTRIAL, ProvingTrial_1
	goto ProvingTrial_2


ProvingTrialStart::
# 16 "data/maps/ProvingTrialEntrance/scripts.pory"
	compare VAR_WYRMSHIRE_STATE, 1
	goto_if_eq ProvingTrialStart_1
	end

ProvingTrialStart_1:
# 17 "data/maps/ProvingTrialEntrance/scripts.pory"
	msgbox ProvingTrialStart_Text_0, MSGBOX_YESNO
# 18 "data/maps/ProvingTrialEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProvingTrialStart_4
# 23 "data/maps/ProvingTrialEntrance/scripts.pory"
	closemessage
# 24 "data/maps/ProvingTrialEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RefuseTrial
	return

ProvingTrialStart_4:
# 19 "data/maps/ProvingTrialEntrance/scripts.pory"
	closemessage
# 20 "data/maps/ProvingTrialEntrance/scripts.pory"
	call ElderLiSpeech
	return


ProvingTrialInProgress::
# 33 "data/maps/ProvingTrialEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NoLeave
	return


ElderLiSpeech::
# 37 "data/maps/ProvingTrialEntrance/scripts.pory"
	applymovement 1, ElderLiFacing
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


# 53 "data/maps/ProvingTrialEntrance/scripts.pory"
RefuseTrial:
# 54 "data/maps/ProvingTrialEntrance/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/ProvingTrialEntrance/scripts.pory"
NoLeave:
# 58 "data/maps/ProvingTrialEntrance/scripts.pory"
	walk_up
# 58 "data/maps/ProvingTrialEntrance/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/ProvingTrialEntrance/scripts.pory"
ElderLiFacing:
# 62 "data/maps/ProvingTrialEntrance/scripts.pory"
	face_left
	step_end

ProvingTrialStart_Text_0:
# 17 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "Are you ready to face the Proving Trial?$"

ElderLiSpeech_Text_0:
# 47 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "You already have your Supplies Aspirant.$"

ElderLiWelcome::
# 65 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Elder Li: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Welcome Aspirant, I am Elder Li\n"
	.string "and I shall oversee your Proving Trial.\l"
	.string "You will be tasked with finding and\l"
	.string "capturing a worthy Dragon-Type for\l"
	.string "your future challenges.$"

ElderLiSupplies::
# 72 "data/maps/ProvingTrialEntrance/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Elder Li: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}We shall provide you with\n"
	.string "Safari Balls and a Fishing Rod for your\l"
	.string "coming Trials.$"
