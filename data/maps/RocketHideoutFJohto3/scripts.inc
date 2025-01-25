RocketHideoutFJohto3_MapScripts::
	.byte 0

RocketHideoutFJohto3_Electrode::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ELECTRODE, CRY_MODE_NORMAL
	msgbox RocketHideoutFJohto3_Electrode_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RocketHideoutFJohto3_Electrode_Text:
	.string "ELECTRODE: Zzzzzzz!$"