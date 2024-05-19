# Map JSON data
MAPS_DIR := $(foreach region,$(REGIONS),$(DATA_ASM_SUBDIR)/$(region)/maps)
LAYOUTS_DIR := $(foreach region,$(REGIONS),$(DATA_ASM_SUBDIR)/$(region)/layouts)

#MAP_DIRS := $(foreach region,$(REGIONS),$(dir $(wildcard $(DATA_ASM_SUBDIR)/$(region)/*/map.json)))
MAP_DIRS := $(dir $(wildcard $(MAPS_DIR)/*/map.json))
MAP_JSONS := $(patsubst %,%map.json,$(MAP_DIRS))
MAP_CONNECTIONS := $(patsubst %,%connections.inc,$(MAP_DIRS))
MAP_EVENTS := $(patsubst %,%events.inc,$(MAP_DIRS))
MAP_HEADERS := $(patsubst %,%header.inc,$(MAP_DIRS))

$(DATA_ASM_BUILDDIR)/maps.o: $(DATA_ASM_SUBDIR)/maps.s $(DATA_ASM_SUBDIR)/layouts.inc $(DATA_ASM_SUBDIR)/layouts_table.inc $(DATA_ASM_SUBDIR)/headers.inc $(DATA_ASM_SUBDIR)/groups.inc $(DATA_ASM_SUBDIR)/connections.inc $(MAP_CONNECTIONS) $(MAP_HEADERS)
	$(PREPROC) $< charmap.txt | $(CPP) -I include - | $(AS) $(ASFLAGS) -o $@

$(DATA_ASM_BUILDDIR)/map_events.o: $(DATA_ASM_SUBDIR)/map_events.s $(DATA_ASM_SUBDIR)/events.inc $(MAP_EVENTS)
	$(PREPROC) $< charmap.txt | $(CPP) -I include - | $(AS) $(ASFLAGS) -o $@

region_temp := hoenn
# TODO(@traeighsea): Compile all data/<region>/layouts.json files to a single master list in data/layouts.json
$(DATA_ASM_SUBDIR)/layouts.json: $(DATA_ASM_SUBDIR)/$(region_temp)/layouts.json
	echo $<
	echo $@
	cp $< $@

# TODO(@traeighsea): Compile all data/<region>/map.json files to a single master list in data/map.json
$(DATA_ASM_SUBDIR)/map.json: $(DATA_ASM_SUBDIR)/$(region_temp)/map.json
	echo $<
	echo $@
	cp $< $@

# TODO(@traeighsea): Compile all data/<region>/map_groups.json files to a single master list in data/map_groups.json
$(DATA_ASM_SUBDIR)/map_groups.json: $(DATA_ASM_SUBDIR)/$(region_temp)/map_groups.json
	echo $<
	echo $@
	cp $< $@

$(filter %/header.inc,$(MAP_HEADERS)): %/header.inc: %/map.json $(DATA_ASM_SUBDIR)/layouts.json
%/header.inc: %/map.json $(DATA_ASM_SUBDIR)/layouts.json 
	$(MAPJSON) map emerald $< $(DATA_ASM_SUBDIR)/layouts.json

$(filter %/events.inc,$(MAP_EVENTS)): %/events.inc: %/header.inc
%/events.inc: %/header.inc ;

$(filter %/connections.inc,$(MAP_CONNECTIONS)): %/connections.inc: %/events.inc
%/connections.inc: %/events.inc ;

$(DATA_ASM_SUBDIR)/groups.inc: $(DATA_ASM_SUBDIR)/map_groups.json
	$(MAPJSON) groups emerald $<
$(DATA_ASM_SUBDIR)/connections.inc: $(DATA_ASM_SUBDIR)/groups.inc ;
$(DATA_ASM_SUBDIR)/events.inc: $(DATA_ASM_SUBDIR)/connections.inc ;
$(DATA_ASM_SUBDIR)/headers.inc: $(DATA_ASM_SUBDIR)/events.inc ;
include/constants/map_groups.h: $(DATA_ASM_SUBDIR)/headers.inc ;

$(DATA_ASM_SUBDIR)/layouts.inc: $(DATA_ASM_SUBDIR)/layouts.json
	$(MAPJSON) layouts emerald $<
$(DATA_ASM_SUBDIR)/layouts_table.inc: $(DATA_ASM_SUBDIR)/layouts.inc ;
include/constants/layouts.h: $(DATA_ASM_SUBDIR)/layouts_table.inc ;
