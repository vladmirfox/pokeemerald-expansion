FuchsiaGuardianHouse_MapScripts::
	.byte 0

FuchsiaGuardianHouse_Warden::
	msgbox FuchsiaGuardianHouse_Text_Warden, MSGBOX_NPC
	end

FuchsiaGuardianHouse_Text_Warden:
	.string "Thanks again for your help!\n"
	.string "Please take a look around, you might\l"
	.string "find something useful!$"

FuchsiaGuardianHouse_WardenFossil::
	msgbox FuchsiaGuardianHouse_Text_WardenFossil, MSGBOX_SIGN
	end

FuchsiaGuardianHouse_Text_WardenFossil:
	.string "It looks like the FOSSIL of a small\n"
	.string "POKéMON.$"