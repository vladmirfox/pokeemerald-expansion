SlateportCity_StorageShed_MapScripts::
	.byte 0

SlateportCity_StorageShed_EventScript_Bin::
	goto_if_set FLAG_CHECKED_SLATEPORT_BIN, EventScript_EmptyTrashCan
	random 9
	goto_if_eq VAR_RESULT, 0, SlateportCity_StorageShed_EventScript_Trubbish
	goto_if_eq VAR_RESULT, 1, SlateportCity_StorageShed_EventScript_Trubbish
	goto_if_eq VAR_RESULT, 2, SlateportCity_StorageShed_EventScript_Trubbish
	goto_if_eq VAR_RESULT, 3, SlateportCity_StorageShed_EventScript_EscapeRope
	goto_if_eq VAR_RESULT, 4, SlateportCity_StorageShed_EventScript_EscapeRope
	goto_if_eq VAR_RESULT, 5, SlateportCity_StorageShed_EventScript_SuperRepel
	goto_if_eq VAR_RESULT, 6, SlateportCity_StorageShed_EventScript_SuperRepel
	goto_if_eq VAR_RESULT, 7, SlateportCity_StorageShed_EventScript_HPUp
	goto_if_eq VAR_RESULT, 8, SlateportCity_StorageShed_EventScript_Iron
	goto EventScript_EmptyTrashCan
	release
	end

SlateportCity_StorageShed_EventScript_Trubbish::
	setwildbattle SPECIES_TRUBBISH, 12
	waitse
	playmoncry SPECIES_TRUBBISH, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	dowildbattle
	setflag FLAG_CHECKED_SLATEPORT_BIN
	release
	end

SlateportCity_StorageShed_EventScript_EscapeRope::
	giveitem ITEM_ESCAPE_ROPE
	setflag FLAG_CHECKED_SLATEPORT_BIN
	release
	end

SlateportCity_StorageShed_EventScript_SuperRepel::
	giveitem ITEM_SUPER_REPEL
	setflag FLAG_CHECKED_SLATEPORT_BIN
	release
	end

SlateportCity_StorageShed_EventScript_HPUp::
	giveitem ITEM_HP_UP
	setflag FLAG_CHECKED_SLATEPORT_BIN
	release
	end

SlateportCity_StorageShed_EventScript_Iron::
	giveitem ITEM_IRON
	setflag FLAG_CHECKED_SLATEPORT_BIN
	release
	end

