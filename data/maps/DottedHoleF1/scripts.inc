DottedHoleF1_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DottedHoleF1_OnResume
	.byte 0

DottedHole_WarpF5::
	warp MAP_DOTTED_HOLE_F5, 1, 18,
	waitstate
	release
	end

DottedHole_WarpComeBack::
	warp MAP_DOTTED_HOLE_F1, 8, 10,
	waitstate
	release
	end

DottedHole_Wronghole::
	warp MAP_DOTTED_HOLE_F1, 7, 34,
	waitstate
	release
	end

DottedHole_Right_1::
	warp MAP_DOTTED_HOLE_F1, 31, 14,
	waitstate
	release
	end

DottedHole_Right_2::
	warp MAP_DOTTED_HOLE_F1, 31, 35,
	waitstate
	release
	end

DottedHole_Right_3::
	warp MAP_DOTTED_HOLE_F1, 7, 55,
	waitstate
	release
	end

DottedHole_Right_4::
	warp MAP_DOTTED_HOLE_F1, 31, 55,
	waitstate
	release
	end

DottedHoleF1_OnResume:
	setdivewarp MAP_DOTTED_HOLE_F2, 36, 59
	end