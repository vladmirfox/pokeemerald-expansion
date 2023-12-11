#include "global.h"
#include "test/test.h"

TEST("Form species ID tables are shared between all forms")
{
    u32 i;
    u32 species = SPECIES_NONE;
    for (i = 0; i < NUM_SPECIES; i++)
    {
        if (gSpeciesInfo[i].formSpeciesIdTable) PARAMETRIZE { species = i; }
    }

    const u16 *formSpeciesIdTable = gSpeciesInfo[species].formSpeciesIdTable;
    for (i = 0; formSpeciesIdTable[i] != FORM_SPECIES_END; i++)
    {
        u32 formSpeciesId = formSpeciesIdTable[i];
        EXPECT_EQ(gSpeciesInfo[formSpeciesId].formSpeciesIdTable, formSpeciesIdTable);
    }
}
