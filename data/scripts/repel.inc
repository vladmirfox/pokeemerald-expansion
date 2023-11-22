EventScript_BufferSprayName::
	specialvar VAR_0x8009, GetLastUsedSprayType
	compare VAR_0x8009, ITEM_REPEL
	goto_if_eq EventScript_BufferSprayName_2
	bufferitemname STR_VAR_1, ITEM_LURE
EventScript_BufferSprayName_1:
	return

EventScript_BufferSprayName_2:
	bufferitemname STR_VAR_1, ITEM_REPEL
	goto EventScript_BufferSprayName_1


EventScript_SprayWoreOff::
	lock
	call EventScript_BufferSprayName
	specialvar VAR_0x8005, GetNumberSprayStrength
	switch VAR_0x8005
	case 0, EventScript_SprayWoreOff_2
	case 1, EventScript_SprayWoreOff_3
	goto EventScript_ChooseWhichSpray
	return

EventScript_SprayWoreOff_2:
	goto EventScript_SprayWoreOffMessage
	return

EventScript_SprayWoreOff_3:
	goto EventScript_UseSingleSpray
	return


EventScript_SprayWoreOffMessage::
	msgbox Text_SprayWoreOff, MSGBOX_SIGN
	releaseall
	end


EventScript_UseSingleSpray::
	checkitem VAR_LAST_REPEL_LURE_USED, 1
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_UseSingleSpray_2
	call EventScript_UseDifferentSpray
EventScript_UseSingleSpray_1:
	closemessage
	releaseall
	end

EventScript_UseSingleSpray_2:
	call EventScript_UseLastUsedSpray
	goto EventScript_UseSingleSpray_1


EventScript_SetSingleSprayAndUse::
	setvar VAR_RESULT, 0
	call EventScript_UseSpray
	return


EventScript_UseDifferentSpray::
	specialvar VAR_0x8007, GetSprayId
	bufferitemname STR_VAR_2, VAR_0x8007
	msgbox Text_SprayWoreOffAskUseX, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_UseDifferentSpray_2
EventScript_UseDifferentSpray_1:
	return

EventScript_UseDifferentSpray_2:
	copyvar VAR_0x8004, VAR_0x8007
	call EventScript_SetSingleSprayAndUse
	goto EventScript_UseDifferentSpray_1


EventScript_UseLastUsedSpray::
	msgbox Text_SprayWoreOffAskUseAnother, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_UseLastUsedSpray_2
EventScript_UseLastUsedSpray_1:
	return

EventScript_UseLastUsedSpray_2:
	copyvar VAR_0x8004, VAR_LAST_REPEL_LURE_USED
	call EventScript_SetSingleSprayAndUse
	goto EventScript_UseLastUsedSpray_1


EventScript_ChooseWhichSpray::
	message Text_SprayWoreOffAskUseAnother
	waitmessage
	callnative DrawSprayMenu
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne EventScript_ChooseWhichSpray_3
EventScript_ChooseWhichSpray_1:
	closemessage
	releaseall
	end

EventScript_ChooseWhichSpray_2:
	call EventScript_UseSpray
	goto EventScript_ChooseWhichSpray_1

EventScript_ChooseWhichSpray_3:
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne EventScript_ChooseWhichSpray_2
	goto EventScript_ChooseWhichSpray_1


EventScript_UseSpray::
	playse SE_REPEL
	waitse
	callnative HandleSprayMenuChoice
	removeitem VAR_0x8004, 1
	bufferitemname STR_VAR_2, VAR_0x8004
	msgbox Text_SprayWoreOffUseX, MSGBOX_SIGN
	return


Text_SprayWoreOff::
	.string "{STR_VAR_1}'s effect wore off…$"

Text_SprayWoreOffAskUseAnother::
	.string "{STR_VAR_1}'s effect wore off!\n"
	.string "Use another?$"

Text_SprayWoreOffAskUseX::
	.string "{STR_VAR_1}'s effect wore off…\n"
	.string "Use a {STR_VAR_2}?$"

Text_SprayWoreOffUseX::
	.string "{PLAYER} used the\n"
	.string "{STR_VAR_2}.$"

