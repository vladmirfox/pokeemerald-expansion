Route32_MapScripts::
	.byte 0

Route32_EventScript_GetSlowpokeTail::
	lock
	faceplayer
	msgbox Route32_EventScript_DowantSlowpokeTail, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route32_EventScript_Yes
	goto_if_eq VAR_RESULT, NO, Route32_EventScript_No
	end

Route32_EventScript_Yes::
	msgbox Route32_EventScript_Laugh, MSGBOX_DEFAULT
	release
	end

Route32_EventScript_No::
	msgbox Route32_EventScript_Comeback, MSGBOX_DEFAULT
	release
	end

Route32_EventScript_DowantSlowpokeTail:
	.string "How would you like to have this tasty,\n"
	.string "nutritious, SLOWPOKE TAIL?\p"
	.string "For you, right now, just for 1,000,000 ¥!$"


Route32_EventScript_Laugh:
	.string "Come back when you have enough\n"
	.string "money.$"

Route32_EventScript_Comeback:
	.string "You don't want it?\n"
	.string "Then scram, shoo!$"