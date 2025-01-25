SpaceshipMoon_MapScripts::
	.byte 0

SpaceshipMoon_EventScript_GotoEarth::
	lock
	faceplayer
	msgbox SpaceshipMoon_EventScript_DowantFly, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SpaceshipMoon_EventScript_Fly
	goto_if_eq VAR_RESULT, NO, SpaceshipMoon_EventScript_NoFly
	end

SpaceshipMoon_EventScript_Fly::
	warp MAP_MOSSDEEP_SPACESHIP, 7, 7,
	end

SpaceshipMoon_EventScript_NoFly::
	msgbox SpaceshipMoon_EventScript_Comeback, MSGBOX_DEFAULT
	release
	end

SpaceshipMoon_EventScript_DowantFly:
	.string "So.\n"
	.string "Do you want to fly back the EARTH?$"


SpaceshipMoon_EventScript_Comeback:
	.string "Come back when you're ready.$"