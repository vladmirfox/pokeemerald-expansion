NewbarkInteriors_MapScripts::
	.byte 0

NewbarkInteriors_Gold::
	lock
	faceplayer
	msgbox NewbarkInteriors_Text_Gold, MSGBOX_DEFAULT
	release
	end

NewbarkInteriors_Text_Gold:
	.string "Hi! My name is GOLD!\l"
	.string "Do you have time for a game on\n"
	.string "GameCube?$"

NewbarkInteriors_Krys::
	lock
	faceplayer
	msgbox NewbarkInteriors_Text_Krys, MSGBOX_DEFAULT
	release
	end

NewbarkInteriors_Text_Krys:
	.string "Hi there! Have you come to bring\n"
	.string "us your POKéMON?\p"
	.string "I'll take care of them personally!$"