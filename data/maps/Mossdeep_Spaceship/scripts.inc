Mossdeep_Spaceship_MapScripts::
	.byte 0

Mossdeep_Spaceship_EventScript_GotoMoon::
	lock
	faceplayer
	msgbox Mossdeep_Spaceship_EventScript_DowantFly, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Mossdeep_Spaceship_EventScript_Fly
	goto_if_eq VAR_RESULT, NO, Mossdeep_Spaceship_EventScript_NoFly
	end

Mossdeep_Spaceship_EventScript_Fly::
	warp MAP_SPACESHIP_MOON, 7, 7,
	end

Mossdeep_Spaceship_EventScript_NoFly::
	msgbox Mossdeep_Spaceship_EventScript_Comeback, MSGBOX_DEFAULT
	release
	end

Mossdeep_Spaceship_EventScript_DowantFly:
	.string "So.\n"
	.string "Do you want to fly to the MOON?$"


Mossdeep_Spaceship_EventScript_Comeback:
	.string "Come back when you're ready.$"