#include "global.h"
#include "decompress.h"
#include "event_data.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fldeff.h"
#include "malloc.h"
#include "mirage_tower.h"
#include "palette.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "wild_encounter.h"
#include "util.h"
#include "constants/field_effects.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/weather.h"
#include "constants/battle_anim.h"

static void FieldCallback_Defog(void);
static void EndDefogTask(u8 taskId);

bool8 SetUpFieldMove_Defog(void)
{
    gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
    gPostMenuFieldCallback = FieldCallback_Defog;
    return TRUE;
}

static void FieldCallback_Defog(void)
{
    FieldEffectStart(FLDEFF_DEFOG);
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
}

bool8 FldEff_Defog(void)
{
    u8 taskId;

    SetWeatherScreenFadeOut();
    taskId = CreateFieldMoveTask();
    gTasks[taskId].data[8] = (u32)StartDefogFieldEffect >> 16;
    gTasks[taskId].data[9] = (u32)StartDefogFieldEffect;
    return FALSE;
}

void StartDefogFieldEffect(void)
{
    SetWeather(WEATHER_NONE);
    PlaySE12WithPanning(SE_M_SOLAR_BEAM, SOUND_PAN_ATTACKER);

    u32 taskId = CreateTask(EndDefogTask, 0);
    gTasks[taskId].data[0] = 0;
    FieldEffectActiveListRemove(FLDEFF_DEFOG);
}

static void EndDefogTask(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    gTasks[taskId].data[0]++;

    if (gTasks[taskId].data[0] != 60)
        return;

    DestroyTask(taskId);
    ScriptContext_Enable();
}

