# JSON files are run through jsonproc, which is a tool that converts JSON data to an output file
# based on an Inja template. https://github.com/pantor/inja

include regions_config.mk

# TODO(@traeighsea): Convert data/<region>/layout/(maps|border).json to data/<region>layout/(maps|border).bin in this step

# TODO(@traeighsea): Compile all data/<region>/wild_encounters.json files to a single master list in data/wild_encounters.json
region_temp := hoenn
$(DATA_SRC_SUBDIR)/wild_encounters.json: $(DATA_ASM_SUBDIR)/$(region_temp)/wild_encounters.json
	@cp $< $@
$(DATA_SRC_SUBDIR)/wild_encounters.json.txt: $(DATA_ASM_SUBDIR)/$(region_temp)/wild_encounters.json.txt
	@cp $< $@

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/wild_encounters.h
$(DATA_SRC_SUBDIR)/wild_encounters.h: $(DATA_ASM_SUBDIR)/wild_encounters.json $(DATA_ASM_SUBDIR)/wild_encounters.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/wild_encounter.o: c_dep += $(DATA_SRC_SUBDIR)/wild_encounters.h

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h
$(DATA_SRC_SUBDIR)/region_map/region_map_entries.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/region_map.o: c_dep += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h
