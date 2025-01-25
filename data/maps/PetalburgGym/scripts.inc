PetalburgGym_MapScripts::
	.byte 0

PetalburgGym_DoyouWantToWork::
	faceplayer
	lock
	msgbox PetalburgGym_Text_DoyouWantToWork, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgGym_TakeyourPlace
	goto_if_eq VAR_RESULT, NO, PetalburgGym_ComeWhenReady
	release
	end

PetalburgGym_Text_DoyouWantToWork:
	.string "Hello {PLAYER}!\n"
	.string "Are you ready to face your challengers?$"

PetalburgGym_TakeyourPlace::
	lock
	msgbox PetalburgGym_Text_Takeyourplace, MSGBOX_DEFAULT
	setvar VAR_TITLE_DEFENSE_STATUS, 1
	closemessage
	goto PetalburgGym_Trainerroster
	waitstate
	release
	end

PetalburgGym_Text_Takeyourplace:
	.string "Very good, take your place!$"

PetalburgGym_ComeWhenReady::
	lock
	msgbox PetalburgGym_Text_ComeWhenReady, MSGBOX_DEFAULT
	closemessage
	release
	end

PetalburgGym_Text_ComeWhenReady:
	.string "Come back when you're ready.$"

PetalburgGym_Trainerroster::
    random 10
    goto_if_eq VAR_RESULT, 0, PetalburgGym_Warp_F1
    goto_if_eq VAR_RESULT, 1, PetalburgGym_Warp_F2
    goto_if_eq VAR_RESULT, 2, PetalburgGym_Warp_F3
    goto_if_eq VAR_RESULT, 3, PetalburgGym_Warp_F4
    goto_if_eq VAR_RESULT, 4, PetalburgGym_Warp_F5
    goto_if_eq VAR_RESULT, 5, PetalburgGym_Warp_F6
    goto_if_eq VAR_RESULT, 6, PetalburgGym_Warp_F7
    goto_if_eq VAR_RESULT, 7, PetalburgGym_Warp_F8
    goto_if_eq VAR_RESULT, 8, PetalburgGym_Warp_F9
    goto_if_eq VAR_RESULT, 9, PetalburgGym_Warp_F10
    return

PetalburgGym_EventScript_End::
	lockall
	playse SE_DING_DONG
	message PetalburgGym_Text_End
	waitmessage
	waitbuttonpress
	releaseall

PetalburgGym_Text_End:
	.string "Aaaand that's it for today!\n"
	.string "We could start again tomorrow!$"

PetalburgGym_EventScript_Comebacktomorrow::
	faceplayer
	lock
	message PetalburgGym_Text_Comebacktomorrow
	waitmessage
	waitbuttonpress
	release

PetalburgGym_Text_Comebacktomorrow:
	.string "That's it for today!\n"
	.string "Come back when you're ready to\l"
	.string "start over.$"

PetalburgGym_Warp_F1::
	warp MAP_PETALBURG_GYM_F1, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F2::
	warp MAP_PETALBURG_GYM_F2, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F3::
	warp MAP_PETALBURG_GYM_F3, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F4::
	warp MAP_PETALBURG_GYM_F4, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F5::
	warp MAP_PETALBURG_GYM_F5, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F6::
	warp MAP_PETALBURG_GYM_F6, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F7::
	warp MAP_PETALBURG_GYM_F7, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F8::
	warp MAP_PETALBURG_GYM_F8, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F9::
	warp MAP_PETALBURG_GYM_F9, 7, 2,
	waitstate
	release
	end

PetalburgGym_Warp_F10::
	warp MAP_PETALBURG_GYM_F10, 7, 2,
	waitstate
	release
	end

PetalburgGym_Movement_OpponentApproaches:
	walk_right
	walk_right
	walk_right
	set_visible
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgGym_Movement_OpponentApproachesRight:
	set_visible
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	
PetalburgGym_Movement_OpponentApproachesThird:
	set_visible
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgGym_Movement_OpponentGoesAway:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	walk_left
	walk_left
	walk_left
	step_end

PetalburgGym_Movement_OpponentGoesAwayRight:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	set_invisible
	step_end

PetalburgGym_Movement_OpponentGoesAwayThird:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	set_invisible
	step_end