BasementTunnel_MapScripts::
	.byte 0


BasementTunnel_EventScript_GetMei::
	lockall
	showmonpic SPECIES_MEI, 10, 3
	msgbox BasementTunnel_EventScript_GetMei_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BasementTunnel_EventScript_GetMei_2
	msgbox BasementTunnel_EventScript_GetMei_Text_2
BasementTunnel_EventScript_GetMei_1:
	hidemonpic
	waitmessage
	releaseall
	end

BasementTunnel_EventScript_GetMei_2:
	givemon SPECIES_MEI, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BasementTunnel_EventScript_GetMei_5
	goto BasementTunnel_EventScript_GetMei_1

BasementTunnel_EventScript_GetMei_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox BasementTunnel_EventScript_GetMei_Text_1
	removeobject 1
	setflag FLAG_PICK_UP_MEI
	setvar VAR_LITTLEROOT_LEAVE, 2
	setflag FLAG_SYS_POKEMON_GET
	goto BasementTunnel_EventScript_GetMei_1


BasementTunnel_EventScript_GetMei_Text_0:
	.string "Would you like to rescue Mei Mei?$"

BasementTunnel_EventScript_GetMei_Text_1:
	.string "Best Friend Obtained!$"

BasementTunnel_EventScript_GetMei_Text_2:
	.string "Seems like a bad decision, but ok$"
