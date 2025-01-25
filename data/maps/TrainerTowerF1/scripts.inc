TrainerTowerF1_MapScripts::
	.byte 0

TrainerTowerF1_Medic::
	lock
	msgbox TrainerTowerF1_Text_Medic, MSGBOX_DEFAULT
	closemessage
	release
	return

TrainerTowerF1_Text_Medic::
    .string "Kekeke what do you want?\n"
    .string "Don't tell me you want me to heal your\l"
    .string "POKéMON!$"