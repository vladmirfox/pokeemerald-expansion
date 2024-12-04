SilverTunnel_2F_MapScripts::
	.byte 0


SilverTunnel_2F_EventScript_Trainer1::
# 8 "data/maps/SilverTunnel_2F/scripts.pory"
	trainerbattle_single TRAINER_DUMMY, SilverTunnel_2F_EventScript_Trainer1_Text_0, SilverTunnel_2F_EventScript_Trainer1_Text_1, BeachboundRoute_EventScript_Karu_PostBattle
# 14 "data/maps/SilverTunnel_2F/scripts.pory"
	speakername SilverTunnel_2F_EventScript_Trainer1_Text_2
# 15 "data/maps/SilverTunnel_2F/scripts.pory"
	msgbox SilverTunnel_2F_EventScript_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	end


SilverTunnel_2F_EventScript_Trainer2::
# 20 "data/maps/SilverTunnel_2F/scripts.pory"
	trainerbattle_single TRAINER_DUMMY, SilverTunnel_2F_EventScript_Trainer1_Text_0, SilverTunnel_2F_EventScript_Trainer1_Text_1, BeachboundRoute_EventScript_Karu_PostBattle
# 26 "data/maps/SilverTunnel_2F/scripts.pory"
	speakername SilverTunnel_2F_EventScript_Trainer1_Text_2
# 27 "data/maps/SilverTunnel_2F/scripts.pory"
	msgbox SilverTunnel_2F_EventScript_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	end


SilverTunnel_2F_EventScript_Sandslash::
# 32 "data/maps/SilverTunnel_2F/scripts.pory"
	lock
# 33 "data/maps/SilverTunnel_2F/scripts.pory"
	faceplayer
# 34 "data/maps/SilverTunnel_2F/scripts.pory"
	playmoncry SPECIES_SANDSLASH, CRY_MODE_NORMAL
# 35 "data/maps/SilverTunnel_2F/scripts.pory"
	speakername SilverTunnel_2F_EventScript_Sandslash_Text_0
# 36 "data/maps/SilverTunnel_2F/scripts.pory"
	msgbox SilverTunnel_2F_EventScript_Sandslash_Text_1
# 39 "data/maps/SilverTunnel_2F/scripts.pory"
	waitmoncry
# 40 "data/maps/SilverTunnel_2F/scripts.pory"
	closemessage
# 41 "data/maps/SilverTunnel_2F/scripts.pory"
	release
	return


SilverTunnel_2F_EventScript_Miner::
# 45 "data/maps/SilverTunnel_2F/scripts.pory"
	lock
# 46 "data/maps/SilverTunnel_2F/scripts.pory"
	faceplayer
# 47 "data/maps/SilverTunnel_2F/scripts.pory"
	speakername SilverTunnel_2F_EventScript_Miner_Text_0
# 48 "data/maps/SilverTunnel_2F/scripts.pory"
	msgbox SilverTunnel_2F_EventScript_Miner_Text_1
# 51 "data/maps/SilverTunnel_2F/scripts.pory"
	closemessage
# 52 "data/maps/SilverTunnel_2F/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
# 53 "data/maps/SilverTunnel_2F/scripts.pory"
	playmoncry SPECIES_SANDSLASH, CRY_MODE_NORMAL
# 54 "data/maps/SilverTunnel_2F/scripts.pory"
	applymovement 5, SilverTunnel_2F_EventScript_Miner_Movement_0
# 55 "data/maps/SilverTunnel_2F/scripts.pory"
	waitmoncry
# 56 "data/maps/SilverTunnel_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/SilverTunnel_2F/scripts.pory"
	release
	return


# 54 "data/maps/SilverTunnel_2F/scripts.pory"
SilverTunnel_2F_EventScript_Miner_Movement_0:
# 54 "data/maps/SilverTunnel_2F/scripts.pory"
	jump_in_place_right
	step_end

SilverTunnel_2F_EventScript_Trainer1_Text_0:
# 10 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Let's fight$"

SilverTunnel_2F_EventScript_Trainer1_Text_1:
# 11 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Oh no I lost$"

SilverTunnel_2F_EventScript_Trainer1_Text_2:
# 14 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "TODO$"

SilverTunnel_2F_EventScript_Trainer1_Text_3:
# 15 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Now I'm sad$"

SilverTunnel_2F_EventScript_Sandslash_Text_0:
# 35 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Sandslash$"

SilverTunnel_2F_EventScript_Sandslash_Text_1:
# 37 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Sahaaah!$"

SilverTunnel_2F_EventScript_Miner_Text_0:
# 47 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Miner$"

SilverTunnel_2F_EventScript_Miner_Text_1:
# 49 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "We're here mining all day, everyday!\n"
	.string "Ain't that right, Sandy?$"
