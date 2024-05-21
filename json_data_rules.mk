# JSON files are run through jsonproc, which is a tool that converts JSON data to an output file
# based on an Inja template. https://github.com/pantor/inja

include regions_config.mk

# TODO(@traeighsea): Convert data/<region>/layout/(maps|border).json to data/<region>layout/(maps|border).bin in this step

REGION_WILD_ENCOUNTERS := $(foreach region,$(REGIONS),$(DATA_ASM_SUBDIR)/$(region)/wild_encounters.json)

$(DATA_ASM_SUBDIR)/wild_encounters.json: $(REGION_WILD_ENCOUNTERS)
	$(JSONAMAL) $(DATA_ASM_SUBDIR)/wild_encounters.json $(REGION_WILD_ENCOUNTERS)

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/wild_encounters.h
$(DATA_SRC_SUBDIR)/wild_encounters.h: $(DATA_ASM_SUBDIR)/wild_encounters.json $(DATA_ASM_SUBDIR)/wild_encounters.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/wild_encounter.o: c_dep += $(DATA_SRC_SUBDIR)/wild_encounters.h

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h
$(DATA_SRC_SUBDIR)/region_map/region_map_entries.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/region_map.o: c_dep += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h
