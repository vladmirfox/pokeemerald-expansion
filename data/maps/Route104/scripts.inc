Route104_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	clearflag FLAG_SYS_REMOTE_POKEMON_STORAGE
	return


Route104_PathBlocker::
	checktrainerflag TRAINER_REF016_RT104_BOSS
	goto_if 1, Route104_PathBlocker_1
	msgbox Route104_PathBlocker_Text_0
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_104
	waitmovement 0
	release
	return

Route104_PathBlocker_1:
	release
	end


Movement_104:
	walk_down
	step_end

Route104_EventScript_Trainer_013::
	trainerbattle_single TRAINER_REF013_RT104, Intro_013, Outro_013
	msgbox Route104_EventScript_Trainer_013_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route104_EventScript_Trainer_014::
	trainerbattle_single TRAINER_REF014_RT104, Intro_014, Outro_014
	msgbox Route104_EventScript_Trainer_014_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route104_EventScript_Trainer_015::
	trainerbattle_single TRAINER_REF015_RT104, Intro_015, Outro_015
	msgbox Route104_EventScript_Trainer_015_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route104_EventScript_Trainer_016::
	trainerbattle_single TRAINER_REF016_RT104_BOSS, Intro_016, Outro_016
	msgbox Route104_EventScript_Trainer_016_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route104_EventScript_Trainer_017::
	trainerbattle_single TRAINER_REF017_RT104_GUARDIAN, Intro_017, Outro_017
	msgbox Route104_EventScript_Trainer_017_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route104_PathBlocker_Text_0:
	.string "I must defeat the ROUTE BOSS first.$"

Route104_EventScript_Trainer_013_Text_0:
	.string "I hope you brought some medicine.$"

Route104_EventScript_Trainer_014_Text_0:
	.string "You're just getting started.$"

Route104_EventScript_Trainer_015_Text_0:
	.string "Hmm, will you make it?$"

Route104_EventScript_Trainer_016_Text_0:
	.string "Congratulations on your win.$"

Route104_EventScript_Trainer_017_Text_0:
	.string "I am shocked with your performance.$"

Intro_013::
	.string "The gauntlet begins.$"

Outro_013::
	.string "Unbelievable.$"

Intro_014::
	.string "Getting tired yet?$"

Outro_014::
	.string "Wow, you're good.$"

Intro_015::
	.string "No turning back now.$"

Outro_015::
	.string "You must be tired after that one.$"

Intro_016::
	.string "Let me give you a break.$"

Outro_016::
	.string "I can't believe I lost.$"

Intro_017::
	.string "Impressive, you've decided to take on\n"
	.string "my challenge.$"

Outro_017::
	.string "Well done, you've earned passage.$"
