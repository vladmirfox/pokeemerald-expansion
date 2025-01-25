.set LOCALID_WARDEN, 20

FuchsiaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
	.byte 0

FuchsiaCity_OnTransition:
	setflag FLAG_VISITED_FUCHSIA
	end

FuchsiaCity_GoldTeeth::
	lock
	faceplayer
	checkitem ITEM_GOLD_TEETH
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_GoldTeethHave
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_GoldTeethNothave
	release
	end

FuchsiaCity_GoldTeethHave::
	lock
	msgbox FuchsiaCity_Text_GoldTeethHave, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_GoldTeethFollowme
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_GoldTeethShame
	release
	end

FuchsiaCity_Text_GoldTeethHave:
    .string "Do you want to give GOLDEN TEETH\n"
    .string "to the WARDEN?$"

FuchsiaCity_GoldTeethShame::
	lock
	msgbox FuchsiaCity_Text_GoldTeethShame, MSGBOX_DEFAULT
	release
	end

FuchsiaCity_Text_GoldTeethShame:
    .string "Ha?\n"
    .string "He ohay heh ha hoo ee haheh!$"

FuchsiaCity_GoldTeethFollowme::
	lock
	removeitem ITEM_GOLD_TEETH
	msgbox FuchsiaCity_Text_GoldTeethFollowme, MSGBOX_DEFAULT
	applymovement LOCALID_WARDEN, FuchsiaCity_GoldTeethGoaway
	waitmovement 0
	setflag FLAG_WARDEN_IN_HOUSE
	release
	end

FuchsiaCity_GoldTeethNothave::
	msgbox FuchsiaCity_Text_GoldTeethNothave, MSGBOX_SIGN
	end

FuchsiaCity_Text_GoldTeethNothave:
    .string "Hif fuff hefifoo!\p"
    .string "Ha lof ha feef ee hafahi ho.\n"
    .string "Heff hee fwee!$"


FuchsiaCity_Text_GoldTeethFollowme:
    .string "WARDEN: Thanks, son!\n"
    .string "You're a real lifesaver!\p"
    .string "No one could understand a word\n"
    .string "that I said, not a one!\p"
    .string "I was too ashamed to show my face\n"
    .string "around the OFFICE, even.\p"
    .string "Farewell then!$"

FuchsiaCity_GoldTeethGoaway:
	walk_up
	set_invisible
	step_end

Fuchsia_Ivysaur::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IVYSAUR, CRY_MODE_NORMAL
	msgbox Fuchsia_Ivysaur_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Ivysaur_Text:
	.string "IVYSAUR: Iiiiivy!$"

Fuchsia_Fearow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
	msgbox Fuchsia_Fearow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Fearow_Text:
	.string "FEAROW: Piiiiii!$"

Fuchsia_Magikarp::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox Fuchsia_Magikarp_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Magikarp_Text:
	.string "MAGIKARP: Eugh$"

Fuchsia_Jigglypuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
	msgbox Fuchsia_Jigglypuff_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Jigglypuff_Text:
	.string "JIGGLYPUFF: Puff Puff!$"

Fuchsia_Chansey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox Fuchsia_Chansey_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Chansey_Text:
	.string "CHANSEY: Chan Chan!$"