AgrivillePkmnCenter_MapScripts::
	.byte 0


NurseHealAgriville::
# 6 "data/maps/AgrivillePkmnCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 7 "data/maps/AgrivillePkmnCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 8 "data/maps/AgrivillePkmnCenter/scripts.pory"
	waitmessage
# 9 "data/maps/AgrivillePkmnCenter/scripts.pory"
	waitbuttonpress
# 10 "data/maps/AgrivillePkmnCenter/scripts.pory"
	release
	end

