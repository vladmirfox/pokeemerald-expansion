DottedHoleF4_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DottedHoleF4_OnResume
	.byte 0

DottedHole_WarpF4::
	warp MAP_DOTTED_HOLE_F5, 13, 18,
	waitstate
	release
	end

DottedHoleF4_OnResume:
	setdivewarp MAP_DOTTED_HOLE_F3, 3, 5
	end