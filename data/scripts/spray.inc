EventScript_SprayWoreOff::
	lock
	call EventScript_BufferSprayName
	specialvar VAR_0x8005, GetNumberSprayStrength
	switch VAR_0x8005
	case 0, EventScript_SprayWoreOffMessage
	case 1, EventScript_UseSingleSpray
.if I_REPEL_LURE_MENU == TRUE
	goto EventScript_ChooseWhichSpray
.else
    goto EventScript_UseSingleSpray
.endif
	return

EventScript_BufferSprayName::
.if VAR_LAST_REPEL_LURE_USED != 0
    bufferitemname STR_VAR_1, VAR_LAST_REPEL_LURE_USED
.else
	specialvar VAR_0x8009, GetLastUsedSprayType
	compare VAR_0x8009, ITEM_REPEL
	goto_if_eq EventScript_BufferSprayName_Repel
	bufferitemname STR_VAR_1, ITEM_LURE
.endif
EventScript_BufferSprayName_EarlyReturn:
	return

EventScript_BufferSprayName_Repel:
	bufferitemname STR_VAR_1, ITEM_REPEL
	goto EventScript_BufferSprayName_EarlyReturn


EventScript_SprayWoreOffMessage::
	msgbox Text_SprayWoreOff, MSGBOX_SIGN
	releaseall
	end


EventScript_UseSingleSpray::
	checkitem VAR_LAST_REPEL_LURE_USED, 1
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_UseLastUsedSprayAndQuit
	call EventScript_UseDifferentSingleSpray
EventScript_SprayCloseMessageRelease:
	closemessage
	releaseall
	end

EventScript_UseLastUsedSprayAndQuit:
	call EventScript_UseLastUsedSpray
	goto EventScript_SprayCloseMessageRelease


EventScript_UseSpray::
	playse SE_REPEL
	waitse
	callnative HandleSprayMenuChoice
	removeitem VAR_0x8004, 1
	bufferitemname STR_VAR_2, VAR_0x8004
	msgbox Text_UsedNewRepelLure, MSGBOX_SIGN
	return


EventScript_UseLastUsedSpray::
	msgbox Text_UseNewSpray, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_UseDifferentSingleSprayAndQuit
	goto EventScript_BufferSprayName_EarlyReturn

EventScript_UseDifferentSingleSprayAndQuit:
	setvar VAR_RESULT, 0
	call EventScript_UseSpray
	goto EventScript_BufferSprayName_EarlyReturn

EventScript_UseDifferentSingleSpray::
	specialvar VAR_0x8007, GetSprayId
	bufferitemname STR_VAR_2, VAR_0x8007
	msgbox Text_UseAnotherSpray, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CopySprayUseDifferentSingleSprayAndQuit
	goto EventScript_BufferSprayName_EarlyReturn

EventScript_CopySprayUseDifferentSingleSprayAndQuit:
	copyvar VAR_0x8004, VAR_0x8007
	goto EventScript_UseDifferentSingleSprayAndQuit


EventScript_ChooseWhichSpray::
	message Text_UseNewSpray
	waitmessage
	callnative DrawSprayMenu
	waitstate
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne EventScript_ChooseWhichSpray_HandleInput
	goto EventScript_SprayCloseMessageRelease

EventScript_UseSprayAndQuit:
	call EventScript_UseSpray
	goto EventScript_SprayCloseMessageRelease

EventScript_ChooseWhichSpray_HandleInput:
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne EventScript_UseSprayAndQuit
	goto EventScript_SprayCloseMessageRelease

Text_SprayWoreOff::
	.string "{STR_VAR_1}'s effect wore off…$"

Text_UseNewSpray::
	.string "{STR_VAR_1}'s effect wore off!\n"
	.string "Use another?$"

Text_UseAnotherSpray::
	.string "{STR_VAR_1}'s effect wore off…\n"
	.string "Use a {STR_VAR_2}?$"

