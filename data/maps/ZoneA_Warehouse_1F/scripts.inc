.set LOCALID_HEAD_SCIENTIST, 3

ZoneA_Warehouse_1F_MapScripts::
	.byte 0

@ Future: alternatively, have him run to player when returning from downstairs
@ after defeating magma admin, explain machine functions to user
ZoneA_Warehouse_1F_EventScript_HeadScientist::
	lock
	applymovement LOCALID_HEAD_SCIENTIST, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ZoneA_Warehouse_1F_Text_HeadScientistAnnoyed, MSGBOX_DEFAULT
	release
	end

ZoneA_Warehouse_1F_Text_HeadScientistAnnoyed:
	.string "All these grunts are slowing\n"
	.string "down my research.$"
