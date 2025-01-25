.set LOCALID_EGG, 3

Route30Indoors_MapScripts::
	.byte 0

Route30Indoors_EventScript_MrPokemon::
	call_if_eq VAR_ELMEGGQUEST, 0, Route30Indoors_MrPokemonLifeisdelightful
	call_if_eq VAR_ELMEGGQUEST, 1, Route30Indoors_EventScript_MrPokemonEgg
	call_if_eq VAR_ELMEGGQUEST, 2, Route30Indoors_MrPokemonWhatareyouwaitingfor
	call_if_eq VAR_ELMEGGQUEST, 3, Route30Indoors_MrPokemonLifeisdelightful
	call_if_eq VAR_ELMEGGQUEST, 4, Route30Indoors_MrPokemonLifeisdelightful
	end

Route30Indoors_Egg::
	call_if_eq VAR_ELMEGGQUEST, 0, Route30Indoors_Egg_Look
	call_if_eq VAR_ELMEGGQUEST, 1, Route30Indoors_Egg_Look
	call_if_eq VAR_ELMEGGQUEST, 2, Route30Indoors_Egg_Receive
	end

Route30Indoors_EventScript_MrPokemonEgg::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ELM_EGG, Route30Indoors_EventScript_ReceivedEgg
	msgbox Route30Indoors_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route30Indoors_EventScript_DeclineEgg
	getpartysize
	msgbox Route30Indoors_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	setvar VAR_ELMEGGQUEST, 2
	release
	end

Route30Indoors_EventScript_ReceivedEgg::
	msgbox Route30Indoors_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
	release
	end

Route30Indoors_EventScript_NoRoomForEgg::
	msgbox Route30Indoors_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release
	end

Route30Indoors_EventScript_DeclineEgg::
	msgbox Route30Indoors_Text_AsYouWishThen, MSGBOX_DEFAULT
	release
	end

Route30Indoors_Text_HaveEggWillYouTakeIt:
	.string "Hello, hello!\n"
	.string "PROF.ELM said that you would visit.\p"
	.string "I know a couple who run a POKéMON\n"
	.string "DAY-CARE service.\p"
	.string "They gave me that EGG.\l"
	.string "I was intrigued, so I sent mail to\n"
	.string "PROF.ELM.\p"
	.string "Could you please bring it to him?$"

Route30Indoors_Text_HopeYoullWalkPlentyWithEgg:
	.string "Good! the EGG is on the table,\n"
	.string "take it with you!$"

Route30Indoors_Text_ReceivedTheEgg:
	.string "{PLAYER} received the EGG.$"

Route30Indoors_Text_NoRoomForThisEgg:
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

Route30Indoors_Text_AsYouWishThen:
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "carrying this EGG, I will be here.$"

Route30Indoors_Text_EverySoOftenEggFoundAtDayCare:
	.string "Every so often, an EGG will be found at\n"
	.string "the POKéMON DAY CARE.\p"
	.string "Or at least that's how the rumor goes.$"

Route30Indoors_MrPokemonLifeisdelightful::
	lock
	faceplayer
	msgbox Route30Indoors_Text_MrPokemonLifeisdelightful, MSGBOX_DEFAULT
	release
	end

Route30Indoors_Text_MrPokemonLifeisdelightful:
	.string "Life is delightful!\n"
	.string "Always, new discoveries to be made!$"

Route30Indoors_MrPokemonWhatareyouwaitingfor::
	lock
	faceplayer
	msgbox Route30Indoors_Text_MrPokemonWhatareyouwaitingfor, MSGBOX_DEFAULT
	release
	end

Route30Indoors_Text_MrPokemonWhatareyouwaitingfor:
	.string "What are you waiting for?\n"
	.string "Take the EGG!$"

Route30Indoors_Egg_Look::
	lock
	msgbox Route30Indoors_Text_Egg_Look, MSGBOX_DEFAULT
	release
	end

Route30Indoors_Text_Egg_Look:
	.string "It's a POKéMON EGG.\n"
	.string "His pattern is curious.$"

Route30Indoors_Egg_Receive::
	goto_if_eq VAR_RESULT, PARTY_SIZE, Route30Indoors_EventScript_NoRoomForEgg
	applymovement LOCALID_EGG, Route30Indoors_Egg_Invisible
	setflag FLAG_RECEIVED_ELM_EGG
	setvar VAR_ELMEGGQUEST, 3
	playfanfare MUS_OBTAIN_ITEM
	message Route30Indoors_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_TOGEPI
	closemessage
	end

Route30Indoors_Egg_Invisible:
	set_invisible
	step_end