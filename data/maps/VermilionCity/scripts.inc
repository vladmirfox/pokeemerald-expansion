VermilionCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
	.byte 0

VermilionCity_OnTransition:
	setflag FLAG_VISITED_VERMILION
	end

	Vermilion_Machop::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox Vermilion_Machop_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VermilionCity_Truck::
	checkitem ITEM_SECRET_KEY
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_TruckTeleport
	release
	end

VermilionCity_TruckTeleport::
	warp MAP_VERMILION_TRUCK, 4, 2,
	setdynamicwarp MAP_VERMILION_CITY, 40, 46
	waitstate
	release
	end

Vermilion_Machop_Text:
	.string "MACHOP: Chop chop!$"

Vermilion_Persian::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PERSIAN, CRY_MODE_NORMAL
	msgbox Vermilion_Persian_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Vermilion_Persian_Text:
	.string "PERSIAN: Purrrrr!$"