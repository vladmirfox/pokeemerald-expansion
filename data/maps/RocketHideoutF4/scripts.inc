RocketHideoutF4_MapScripts::
	.byte 0

RocketHideoutF4_Silver_Room::
	warp MAP_SILVER_ROOM, 2, 2,
	waitstate
	release
	end

RocketHideoutF4_Silver::
	msgbox RocketHideoutF4_Text_Silver, MSGBOX_NPC
	end

RocketHideoutF4_Text_Silver:
	.string "Hey, this is my room!\n"
	.string "How did you get in?!\p"
	.string "Well, never mind, do you want to play?$"

RocketHideoutF4_Lifter::
	msgbox RocketHideoutF4_Text_Lifter, MSGBOX_NPC
	end

RocketHideoutF4_Text_Lifter:
	.string "It's locked!\n"
	.string "It needs a KEY$"

RocketHideoutF4_EventScript_Guard::
	msgbox RocketHideoutF4_Text_Guard, MSGBOX_DEFAULT
	closemessage
	release
	end

RocketHideoutF4_Text_Guard:
	.string "Hey you can't stay here!\n"
	.string "Go play somewhere else.$"