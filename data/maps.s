#include "constants/global.h"
#include "constants/layouts.h"
#include "constants/map_types.h"
#include "constants/maps.h"
#include "constants/weather.h"
#include "constants/region_map_sections.h"
#include "constants/songs.h"
#include "constants/trainer_hill.h"
	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

	.include "data/hoenn/layouts/layouts.inc"
	.include "data/hoenn/layouts/layouts_table.inc"
	.include "data/hoenn/maps/headers.inc"
	.include "data/hoenn/maps/groups.inc"
	.include "data/hoenn/maps/connections.inc"
