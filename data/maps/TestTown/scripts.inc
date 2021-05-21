TestTown_MapScripts::
	.byte 0


TestTown_Sign1::
	lock
	msgbox TestTown_Sign1_Text_0, MSGBOX_SIGN
	release
	end


TestTown_EventScript_EnableQuestMenuSign::
	lockall
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, TestTown_EventScript_EnableQuestMenuSign_2
	goto_if_set FLAG_SYS_QUEST_MENU_GET, TestTown_EventScript_EnableQuestMenuSign_3
TestTown_EventScript_EnableQuestMenuSign_1:
	releaseall
	end

TestTown_EventScript_EnableQuestMenuSign_2:
	msgbox TestTown_Text_EnabledQuestMenu
	setflag FLAG_SYS_QUEST_MENU_GET
	goto TestTown_EventScript_EnableQuestMenuSign_1

TestTown_EventScript_EnableQuestMenuSign_3:
	msgbox TestTown_Text_QuestMenuAlreadyEnabled
	clearflag FLAG_SYS_QUEST_MENU_GET
	goto TestTown_EventScript_EnableQuestMenuSign_1


TestTown_Sign1_Text_0:
	.string "Welcome to TestTown$"

TestTown_Text_EnabledQuestMenu::
	.string "Quest menu flag is enabled.$"

TestTown_Text_QuestMenuAlreadyEnabled::
	.string "The quest menu is already enabled.$"
