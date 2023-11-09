#include "global.h"
#include "constants/expansion.h"

// Similar to the GF ROM header, this struct allows external programs to
// detect details about Expansion.
// For this structure to be useful we have to maintain backwards binary
// compatibility. This means that we should only ever append data to the
// end. If there are any structs as members then those structs should
// not be modified after being introduced.
struct RHHRomHeader
{
    char rhh_magic[4]; // 'PORY'. Useful to locate the header if it shifts.
    u8 expansionVersionMajor;
    u8 expansionVersionMinor;
    u8 expansionVersionPatch;
    bool8 expansionVersionTagged;
};

static const struct RHHRomHeader sRHHRomHeader =
{
    .rhh_magic = { 'P', 'O', 'R', 'Y' },
    .expansionVersionMajor = EXPANSION_VERSION_MAJOR,
    .expansionVersionMinor = EXPANSION_VERSION_MINOR,
    .expansionVersionPatch = EXPANSION_VERSION_PATCH,
    .expansionVersionTagged = EXPANSION_TAGGED_RELEASE,
};
