Grotto2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Grotto2_OnLoad
	.byte 0

Grotto2_OnLoad::
	call Grotto_EventScript_GetReturnWarp
	call Grotto_Layout2_CloseLeftTreeArea
	call Grotto_Layout2_CloseRightTreeArea
	end
