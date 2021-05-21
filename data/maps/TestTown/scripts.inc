TestTown_MapScripts::
	.byte 0


TestTown_Sign1::
	lock
	msgbox TestTown_Sign1_Text_0, MSGBOX_SIGN
	release
	end


TestTown_Sign1_Text_0:
	.string "Welcome to TestTown$"
