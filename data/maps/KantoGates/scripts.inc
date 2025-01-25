KantoGates_MapScripts::
	.byte 0

KantoGates_Guard::
	lock
	msgbox KantoGates_Text_HiHowsItGoing, MSGBOX_DEFAULT
	closemessage
	release
	return

KantoGates_NoTeaFromCerulean::
	lock
	goto_if_set FLAG_ITEM_TEA, KantoGates_TeaFromCerulean
	msgbox KantoGates_Text_ShallNotPass, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_Up
	waitmovement 0
	release
	return

KantoGates_NoTeaFromVermilion::
	lock
	goto_if_set FLAG_ITEM_TEA, KantoGates_TeaFromVermilion
	msgbox KantoGates_Text_ShallNotPass, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_Down
	waitmovement 0
	release
	return

KantoGates_NoTeaFromCeladon::
	lock
	goto_if_set FLAG_ITEM_TEA, KantoGates_TeaFromCeladon
	msgbox KantoGates_Text_ShallNotPass, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_Left
	waitmovement 0
	release
	return

KantoGates_NoTeaFromLavender::
	lock
	goto_if_set FLAG_ITEM_TEA, KantoGates_TeaFromLavender
	msgbox KantoGates_Text_ShallNotPass, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_Right
	waitmovement 0
	release
	return

KantoGates_TeaFromCerulean::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_FaceLeft
	waitmovement 0
	msgbox KantoGates_Text_GiveMeDrink, MSGBOX_DEFAULT
	closemessage
	setvar VAR_GIVE_TEA, 1
	removeitem ITEM_TEA
	release
	return

KantoGates_TeaFromVermilion::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_FaceLeft
	waitmovement 0
	msgbox KantoGates_Text_GiveMeDrink, MSGBOX_DEFAULT
	closemessage
	setvar VAR_GIVE_TEA, 1
	removeitem ITEM_TEA
	release
	return

KantoGates_TeaFromCeladon::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_FaceDown
	waitmovement 0
	msgbox KantoGates_Text_GiveMeDrink, MSGBOX_DEFAULT
	closemessage
	setvar VAR_GIVE_TEA, 1
	removeitem ITEM_TEA
	release
	return

KantoGates_TeaFromLavender::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, KantoGates_Movement_FaceDown
	waitmovement 0
	msgbox KantoGates_Text_GiveMeDrink, MSGBOX_DEFAULT
	closemessage
	setvar VAR_GIVE_TEA, 1
	removeitem ITEM_TEA
	release
	return

KantoGates_Movement_Up:
	walk_up
	step_end

KantoGates_Movement_Down:
	walk_down
	step_end

KantoGates_Movement_Left:
	walk_left
	step_end

KantoGates_Movement_Right:
	walk_right
	step_end

KantoGates_Movement_FaceDown:
	face_down
	step_end

KantoGates_Movement_FaceLeft:
	face_left
	step_end

KantoGates_Text_ShallNotPass::
    .string "I'm on guard duty.\n"
    .string "Gee, I'm thirsty, though!\p"
    .string "Oh, wait there, the road's closed.$"

KantoGates_Text_HiHowsItGoing::
    .string "Hi, how's it going?$"

KantoGates_Text_GiveMeDrink::
    .string "Huh? I can have this drink?\n"
    .string "Gee, thanks!\l"
    .string "… …\l"
    .string "Glug, glug…\l"
    .string "… …\l"
    .string "Gulp…\l"
    .string "If you want to go to SAFFRON\l"
    .string "CITY…\l"
    .string "… …\l"
    .string "You can go on through.\p"
    .string "I'll share this TEA with the other\n"
    .string "guards!$"