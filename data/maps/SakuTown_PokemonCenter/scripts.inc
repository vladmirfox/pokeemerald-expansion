SakuTown_PokemonCenter_MapScripts::
# 4 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SakuTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SakuTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SAKU_TOWN
	return


SakuTown_PokemonCenter_EventScript_Nurse::
# 10 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 11 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse_CutTheBullshit
# 12 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	waitmessage
# 13 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	release
	end


SakuTown_PokemonCenter_EventScript_Traveler::
# 19 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	lock
# 20 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	faceplayer
# 21 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	speakername SakuTown_PokemonCenter_EventScript_Traveler_Text_0
# 22 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	msgbox SakuTown_PokemonCenter_EventScript_Traveler_Text_1
# 27 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	closemessage
# 28 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	release
	end


SakuTown_PokemonCenter_EventScript_Pushing::
# 33 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	delay 30
# 35 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	faceplayer
# 36 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	speakername SakuTown_PokemonCenter_EventScript_Pushing_Text_0
# 37 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	msgbox SakuTown_PokemonCenter_EventScript_Pushing_Text_1
# 40 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	closemessage
# 42 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	switch VAR_FACING
# 43 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	case DIR_EAST, SakuTown_PokemonCenter_EventScript_Pushing_3
# 46 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	case DIR_SOUTH, SakuTown_PokemonCenter_EventScript_Pushing_4
SakuTown_PokemonCenter_EventScript_Pushing_1:
# 51 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	waitmovement 3
# 52 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return

SakuTown_PokemonCenter_EventScript_Pushing_3:
# 44 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	applymovement 3, SakuTown_PokemonCenter_Movement_PushesPlayer
# 45 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SakuTown_PokemonCenter_Movement_PlayerPushed
	goto SakuTown_PokemonCenter_EventScript_Pushing_1

SakuTown_PokemonCenter_EventScript_Pushing_4:
# 47 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	applymovement 3, SakuTown_PokemonCenter_Movement_PushesPlayerUp
# 48 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SakuTown_PokemonCenter_Movement_PlayerPushedUp
	goto SakuTown_PokemonCenter_EventScript_Pushing_1


SakuTown_PokemonCenter_EventScript_Grunt1::
# 56 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	lock
# 57 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	speakername SakuTown_PokemonCenter_EventScript_Pushing_Text_0
# 58 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	msgbox SakuTown_PokemonCenter_EventScript_Grunt1_Text_0
# 61 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	call SakuTown_PokemonCenter_EventScript_Pushing
# 65 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	release
	end


SakuTown_PokemonCenter_EventScript_Grunt2::
# 70 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	lock
# 71 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	speakername SakuTown_PokemonCenter_EventScript_Pushing_Text_0
# 72 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	msgbox SakuTown_PokemonCenter_EventScript_Grunt2_Text_0
# 75 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	closemessage
# 77 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	call SakuTown_PokemonCenter_EventScript_Pushing
# 79 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	release
	end


SakuTown_PokemonCenter_EventScript_Grunt3::
# 84 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	lock
# 85 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	speakername SakuTown_PokemonCenter_EventScript_Pushing_Text_0
# 86 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	msgbox SakuTown_PokemonCenter_EventScript_Grunt3_Text_0
# 89 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	closemessage
# 91 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	call SakuTown_PokemonCenter_EventScript_Pushing
# 93 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	release
	end


# 97 "data/maps/SakuTown_PokemonCenter/scripts.pory"
SakuTown_PokemonCenter_Movement_PlayerPushed:
# 98 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 99 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	jump_2_left
# 100 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

# 103 "data/maps/SakuTown_PokemonCenter/scripts.pory"
SakuTown_PokemonCenter_Movement_PushesPlayer:
# 104 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	walk_left
# 105 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	delay_16
# 106 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 109 "data/maps/SakuTown_PokemonCenter/scripts.pory"
SakuTown_PokemonCenter_Movement_PlayerPushedUp:
# 110 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 111 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	jump_2_up
# 112 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

# 115 "data/maps/SakuTown_PokemonCenter/scripts.pory"
SakuTown_PokemonCenter_Movement_PushesPlayerUp:
# 116 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	walk_up
# 117 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	delay_16
# 118 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

SakuTown_PokemonCenter_EventScript_Traveler_Text_0:
# 21 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	.string "Man$"

SakuTown_PokemonCenter_EventScript_Traveler_Text_1:
# 23 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	.string "This Pokémon refuge is brand-new,\n"
	.string "courtesy of the Pokémon League!\p"
	.string "As you can see, it's still being built.\n"
	.string "Watch out for the falling bricks, ha\l"
	.string "ha, just kidding!\p"
	.string "Seriously though, do watch out. We're\n"
	.string "held responsible if anything happens\l"
	.string "to you.$"

SakuTown_PokemonCenter_EventScript_Pushing_Text_0:
# 36 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	.string "Shady man$"

SakuTown_PokemonCenter_EventScript_Pushing_Text_1:
# 38 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	.string "Watchu lookin' at? Scram!$"

SakuTown_PokemonCenter_EventScript_Grunt1_Text_0:
# 59 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	.string "Great plan…$"

SakuTown_PokemonCenter_EventScript_Grunt2_Text_0:
# 73 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	.string "We should do this next…$"

SakuTown_PokemonCenter_EventScript_Grunt3_Text_0:
# 87 "data/maps/SakuTown_PokemonCenter/scripts.pory"
	.string "On Beachbound Route…$"
