Route25_MapScripts::
	.byte 0

Route25_Worker::
	lock
	faceplayer
	msgbox Route25_Worker_Text, MSGBOX_DEFAULT
	release
	end

Route25_Worker_Text:
	.string "Im sorry, this place is still\n"
	.string "under construction!$"