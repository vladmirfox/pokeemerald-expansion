Route25Indoor_MapScripts::
	.byte 0

Route25Indoor_EventScript_BillsPc::
	lockall
	msgbox Route25Indoor_Text_BillsPc, MSGBOX_DEFAULT
	releaseall
	end

Route25Indoor_Text_BillsPc:
	.string "It's BILL's PC.\p"
	.string "It's full of rare POKéMON!$"