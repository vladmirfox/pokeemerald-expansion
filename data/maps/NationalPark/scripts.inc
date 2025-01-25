NationalPark_MapScripts::
	.byte 0

NationalPark_Snorlax::
	checkitem ITEM_POKE_FLUTE
	goto_if_eq VAR_RESULT, TRUE, NationalPark_SnorlaxPokeflute
	goto_if_eq VAR_RESULT, FALSE, NationalPark_SnorlaxNoPokeflute
	release
	end

NationalPark_SnorlaxPokeflute::
	lock
	msgbox NationalPark_Text_SnorlaxPokeflute, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NationalPark_SnorlaxAwake
	goto_if_eq VAR_RESULT, NO, NationalPark_SnorlaxLeftSleep
	release
	end

NationalPark_Text_SnorlaxPokeflute:
    .string "A POKéMON is sprawled out in\n"
    .string "a deep and comfortable slumber.\p"
    .string "Want to use the POKé FLUTE?$"

NationalPark_SnorlaxLeftSleep::
	lock
	msgbox NationalPark_Text_SnorlaxLeftSleep, MSGBOX_DEFAULT
	release
	end

NationalPark_Text_SnorlaxLeftSleep:
	.string "The POKéMON continues to sleep.$"

NationalPark_SnorlaxNoPokeflute::
	msgbox NationalPark_Text_SnorlaxNoPokeflute, MSGBOX_SIGN
	end

NationalPark_Text_SnorlaxNoPokeflute:
    .string "A POKéMON is sprawled out in\n"
    .string "a deep and comfortable slumber.$"

NationalPark_SnorlaxAwake::
	lock
	faceplayer
    playfanfare MUS_RG_POKE_FLUTE
    waitfanfare
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox NationalPark_Text_SnorlaxAngry, MSGBOX_DEFAULT
	delay 20
	setwildbattle SPECIES_SNORLAX, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NationalPark_EventScript_DefeatedNationalParkSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, NationalPark_EventScript_DefeatedNationalParkSnorlax
	setflag FLAG_DEFEATED_NATPARKSNORLAX
	release
	end

NationalPark_Text_SnorlaxAngry::
    .string "SNORLAX woke up!\p"
    .string "It attacked in a grumpy rage!$"

NationalPark_EventScript_DefeatedNationalParkSnorlax::
	setflag FLAG_DEFEATED_NATPARKSNORLAX
	goto Common_EventScript_RemoveStaticPokemon
	end