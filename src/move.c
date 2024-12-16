#include "global.h"
#include "move.h"

#include "data/moves_info.h"

static u32 SanitizeMoveId(u32 moveId)
{
    if (moveId >= MOVES_COUNT_ALL)
        return MOVE_NONE;
    else
        return moveId;
}

const u8 *GetMoveName(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].name;
}

const u8 *GetMoveAnimationScript(u32 moveId)
{
    moveId = SanitizeMoveId(moveId);
    if (gMovesInfo[moveId].battleAnimScript == NULL)
    {
        DebugPrintfLevel(MGBA_LOG_WARN, "No animation for moveId=%u", moveId);
        return gMovesInfo[MOVE_NONE].battleAnimScript;
    }
    return gMovesInfo[moveId].battleAnimScript;
}
