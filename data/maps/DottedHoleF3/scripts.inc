DottedHoleF3_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DottedHoleF3_OnResume
	.byte 0

DottedHoleF3_OnResume:
	setdivewarp MAP_DOTTED_HOLE_F4, 11, 40
	end