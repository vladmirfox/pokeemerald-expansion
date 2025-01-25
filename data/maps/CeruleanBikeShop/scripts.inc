CeruleanBikeShop_MapScripts::
	.byte 0

CeruleanBikeShop_EventScript_GetBike::
	lock
	faceplayer
	msgbox CeruleanBikeShop_EventScript_DowantBike, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CeruleanBikeShop_EventScript_Yes
	goto_if_eq VAR_RESULT, NO, CeruleanBikeShop_EventScript_No
	end

CeruleanBikeShop_EventScript_Yes::
	msgbox CeruleanBikeShop_EventScript_Laugh, MSGBOX_DEFAULT
	release
	end

CeruleanBikeShop_EventScript_No::
	msgbox CeruleanBikeShop_EventScript_Comeback, MSGBOX_DEFAULT
	release
	end

CeruleanBikeShop_EventScript_DowantBike:
	.string "Hi!\n"
	.string "Welcome to the CERULEAN BIKE SHOP!\p"
	.string "Have we got just the BIKE for you!\n"
	.string "Only 1,000,000 ¥!$"


CeruleanBikeShop_EventScript_Laugh:
	.string "Come back when you have enough\n"
	.string "money.$"

CeruleanBikeShop_EventScript_Comeback:
	.string "Come back again!$"