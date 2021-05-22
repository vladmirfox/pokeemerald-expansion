TestTown_MapScripts::
	.byte 0


TestTown_Sign1::
	lock
	msgbox TestTown_Sign1_Text_0, MSGBOX_SIGN
	release
	end


TestTown_EventScript_EnableQuestMenu::
	lockall
	faceplayer
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, TestTown_EventScript_EnableQuestMenu_2
	goto_if_set FLAG_SYS_QUEST_MENU_GET, TestTown_EventScript_EnableQuestMenu_3
TestTown_EventScript_EnableQuestMenu_1:
	releaseall
	end

TestTown_EventScript_EnableQuestMenu_2:
	msgbox TestTown_Text_EnabledQuestMenu
	setflag FLAG_SYS_QUEST_MENU_GET
	goto TestTown_EventScript_EnableQuestMenu_1

TestTown_EventScript_EnableQuestMenu_3:
	msgbox TestTown_Text_DisableQuestQuestion, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq TestTown_EventScript_EnableQuestMenu_6
	msgbox TestTown_Text_QuestMenuFlagNotChanged
	goto TestTown_EventScript_EnableQuestMenu_1

TestTown_EventScript_EnableQuestMenu_6:
	msgbox TestTown_Text_DisabledQuestMenu
	clearflag FLAG_SYS_QUEST_MENU_GET
	goto TestTown_EventScript_EnableQuestMenu_1


TestTown_Sign1_Text_0:
	.string "Welcome to TestTown$"

TestTown_Text_DisableQuestQuestion::
	.string "Should I disable the quest\n"
	.string "menu?$"

TestTown_Text_EnabledQuestMenu::
	.string "Quest menu flag is enabled.$"

TestTown_Text_DisabledQuestMenu::
	.string "Quest menu was disabled.$"

TestTown_Text_QuestMenuFlagNotChanged::
	.string "The quest menu flag was not changed.$"
