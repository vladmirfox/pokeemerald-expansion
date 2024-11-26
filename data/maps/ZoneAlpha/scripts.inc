ZoneAlpha_MapScripts::
	.byte 0

ZoneAlpha_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_ZONE_ALPHA_1, ZoneAlpha_Text_SilentTreatment, ZoneAlpha_Text_SilentTreatment
	msgbox ZoneAlpha_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

ZoneAlpha_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_ZONE_ALPHA_2, ZoneAlpha_Text_SilentTreatment, ZoneAlpha_Text_SilentTreatment
	msgbox ZoneAlpha_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

@ ZoneAlpha_Text_

ZoneAlpha_Text_SilentTreatment:
	.string "…$"
