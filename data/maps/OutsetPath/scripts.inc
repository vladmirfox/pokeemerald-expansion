OutsetPath_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OutsetPath_OnResume
	map_script MAP_SCRIPT_ON_RESUME, OutsetPath_OnResume
	.byte 0

OutsetPath_OnResume:
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 1, OutsetPath_OnResume_Night
	goto_if_eq VAR_RESULT, 0, OutsetPath_OnResume_Day
	end

OutsetPath_OnResume_Night:
	setweather WEATHER_SHADE
	end

OutsetPath_OnResume_Day:
	setweather WEATHER_SUNNY
	end
