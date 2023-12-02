#include "global.h"
#include "battle.h"
#include "battle_ai_main.h"
#include "battle_ai_util.h"
#include "constants/battle_ai.h"
#include "battle_anim.h"
#include "battle_arena.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_interface.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_tv.h"
#include "battle_z_move.h"
#include "bg.h"
#include "data.h"
#include "frontier_util.h"
#include "item.h"
#include "link.h"
#include "main.h"
#include "m4a.h"
#include "palette.h"
#include "party_menu.h"
#include "pokeball.h"
#include "pokemon.h"
#include "random.h"
#include "reshow_battle_screen.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "util.h"
#include "window.h"
#include "constants/battle_anim.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "trainer_hill.h"
#include "test_runner.h"

static void OpponentHandleLoadMonSprite(u32 battler);
static void OpponentHandleSwitchInAnim(u32 battler);
static void OpponentHandleDrawTrainerPic(u32 battler);
static void OpponentHandleTrainerSlide(u32 battler);
static void OpponentHandleTrainerSlideBack(u32 battler);
static void OpponentHandleMoveAnimation(u32 battler);
static void OpponentHandlePrintString(u32 battler);
static void OpponentHandleChooseAction(u32 battler);
static void OpponentHandleChooseMove(u32 battler);
static bool32 CheckIfPartnerIsNaturalEnemy(u32 battler);
static bool32 IsMonNaturalEnemy(u32 i, u16 speciesAttacker, u16 speciesTarget);
static void OpponentHandleChooseItem(u32 battler);
static void OpponentHandleChoosePokemon(u32 battler);
static void OpponentHandleHealthBarUpdate(u32 battler);
static void OpponentHandleIntroTrainerBallThrow(u32 battler);
static void OpponentHandleDrawPartyStatusSummary(u32 battler);
static void OpponentHandleBattleAnimation(u32 battler);
static void OpponentHandleEndLinkBattle(u32 battler);
static u8 CountAIAliveNonEggMonsExcept(u8 slotToIgnore);

static void OpponentBufferRunCommand(u32 battler);
static void OpponentBufferExecCompleted(u32 battler);
static void SwitchIn_HandleSoundAndEnd(u32 battler);

static void (*const sOpponentBufferCommands[CONTROLLER_CMDS_COUNT])(u32 battler) =
{
    [CONTROLLER_GETMONDATA]               = BtlController_HandleGetMonData,
    [CONTROLLER_GETRAWMONDATA]            = BtlController_HandleGetRawMonData,
    [CONTROLLER_SETMONDATA]               = BtlController_HandleSetMonData,
    [CONTROLLER_SETRAWMONDATA]            = BtlController_HandleSetRawMonData,
    [CONTROLLER_LOADMONSPRITE]            = OpponentHandleLoadMonSprite,
    [CONTROLLER_SWITCHINANIM]             = OpponentHandleSwitchInAnim,
    [CONTROLLER_RETURNMONTOBALL]          = BtlController_HandleReturnMonToBall,
    [CONTROLLER_DRAWTRAINERPIC]           = OpponentHandleDrawTrainerPic,
    [CONTROLLER_TRAINERSLIDE]             = OpponentHandleTrainerSlide,
    [CONTROLLER_TRAINERSLIDEBACK]         = OpponentHandleTrainerSlideBack,
    [CONTROLLER_FAINTANIMATION]           = BtlController_HandleFaintAnimation,
    [CONTROLLER_PALETTEFADE]              = BtlController_Empty,
    [CONTROLLER_SUCCESSBALLTHROWANIM]     = BtlController_Empty,
    [CONTROLLER_BALLTHROWANIM]            = BtlController_Empty,
    [CONTROLLER_PAUSE]                    = BtlController_Empty,
    [CONTROLLER_MOVEANIMATION]            = OpponentHandleMoveAnimation,
    [CONTROLLER_PRINTSTRING]              = OpponentHandlePrintString,
    [CONTROLLER_PRINTSTRINGPLAYERONLY]    = BtlController_Empty,
    [CONTROLLER_CHOOSEACTION]             = OpponentHandleChooseAction,
    [CONTROLLER_YESNOBOX]                 = BtlController_Empty,
    [CONTROLLER_CHOOSEMOVE]               = OpponentHandleChooseMove,
    [CONTROLLER_OPENBAG]                  = OpponentHandleChooseItem,
    [CONTROLLER_CHOOSEPOKEMON]            = OpponentHandleChoosePokemon,
    [CONTROLLER_23]                       = BtlController_Empty,
    [CONTROLLER_HEALTHBARUPDATE]          = OpponentHandleHealthBarUpdate,
    [CONTROLLER_EXPUPDATE]                = BtlController_Empty,
    [CONTROLLER_STATUSICONUPDATE]         = BtlController_HandleStatusIconUpdate,
    [CONTROLLER_STATUSANIMATION]          = BtlController_HandleStatusAnimation,
    [CONTROLLER_STATUSXOR]                = BtlController_Empty,
    [CONTROLLER_DATATRANSFER]             = BtlController_Empty,
    [CONTROLLER_DMA3TRANSFER]             = BtlController_Empty,
    [CONTROLLER_PLAYBGM]                  = BtlController_Empty,
    [CONTROLLER_32]                       = BtlController_Empty,
    [CONTROLLER_TWORETURNVALUES]          = BtlController_Empty,
    [CONTROLLER_CHOSENMONRETURNVALUE]     = BtlController_Empty,
    [CONTROLLER_ONERETURNVALUE]           = BtlController_Empty,
    [CONTROLLER_ONERETURNVALUE_DUPLICATE] = BtlController_Empty,
    [CONTROLLER_CLEARUNKVAR]              = BtlController_HandleClearUnkVar,
    [CONTROLLER_SETUNKVAR]                = BtlController_HandleSetUnkVar,
    [CONTROLLER_CLEARUNKFLAG]             = BtlController_HandleClearUnkFlag,
    [CONTROLLER_TOGGLEUNKFLAG]            = BtlController_HandleToggleUnkFlag,
    [CONTROLLER_HITANIMATION]             = BtlController_HandleHitAnimation,
    [CONTROLLER_CANTSWITCH]               = BtlController_Empty,
    [CONTROLLER_PLAYSE]                   = BtlController_HandlePlaySE,
    [CONTROLLER_PLAYFANFAREORBGM]         = BtlController_HandlePlayFanfareOrBGM,
    [CONTROLLER_FAINTINGCRY]              = BtlController_HandleFaintingCry,
    [CONTROLLER_INTROSLIDE]               = BtlController_HandleIntroSlide,
    [CONTROLLER_INTROTRAINERBALLTHROW]    = OpponentHandleIntroTrainerBallThrow,
    [CONTROLLER_DRAWPARTYSTATUSSUMMARY]   = OpponentHandleDrawPartyStatusSummary,
    [CONTROLLER_HIDEPARTYSTATUSSUMMARY]   = BtlController_HandleHidePartyStatusSummary,
    [CONTROLLER_ENDBOUNCE]                = BtlController_Empty,
    [CONTROLLER_SPRITEINVISIBILITY]       = BtlController_HandleSpriteInvisibility,
    [CONTROLLER_BATTLEANIMATION]          = OpponentHandleBattleAnimation,
    [CONTROLLER_LINKSTANDBYMSG]           = BtlController_Empty,
    [CONTROLLER_RESETACTIONMOVESELECTION] = BtlController_Empty,
    [CONTROLLER_ENDLINKBATTLE]            = OpponentHandleEndLinkBattle,
    [CONTROLLER_DEBUGMENU]                = BtlController_Empty,
    [CONTROLLER_TERMINATOR_NOP]           = BtlController_TerminatorNop
};

void SetControllerToOpponent(u32 battler)
{
    gBattlerControllerEndFuncs[battler] = OpponentBufferExecCompleted;
    gBattlerControllerFuncs[battler] = OpponentBufferRunCommand;
}

static void OpponentBufferRunCommand(u32 battler)
{
    if (gBattleControllerExecFlags & gBitTable[battler])
    {
        if (gBattleResources->bufferA[battler][0] < ARRAY_COUNT(sOpponentBufferCommands))
            sOpponentBufferCommands[gBattleResources->bufferA[battler][0]](battler);
        else
            OpponentBufferExecCompleted(battler);
    }
}

static void Intro_DelayAndEnd(u32 battler)
{
    if (--gBattleSpritesDataPtr->healthBoxesData[battler].introEndDelay == (u8)-1)
    {
        gBattleSpritesDataPtr->healthBoxesData[battler].introEndDelay = 0;
        OpponentBufferExecCompleted(battler);
    }
}

static void Intro_WaitForShinyAnimAndHealthbox(u32 battler)
{
    bool8 healthboxAnimDone = FALSE;
    bool8 twoMons;

    twoMons = TwoOpponentIntroMons(battler);
    if (!twoMons || ((twoMons && (gBattleTypeFlags & BATTLE_TYPE_MULTI) && !BATTLE_TWO_VS_ONE_OPPONENT) || (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)))
    {
        if (gSprites[gHealthboxSpriteIds[battler]].callback == SpriteCallbackDummy)
            healthboxAnimDone = TRUE;
        twoMons = FALSE;
    }
    else
    {
        if (gSprites[gHealthboxSpriteIds[battler]].callback == SpriteCallbackDummy
         && gSprites[gHealthboxSpriteIds[BATTLE_PARTNER(battler)]].callback == SpriteCallbackDummy)
            healthboxAnimDone = TRUE;
        twoMons = TRUE;
    }

    gBattleControllerOpponentHealthboxData = &gBattleSpritesDataPtr->healthBoxesData[battler];
    gBattleControllerOpponentFlankHealthboxData = &gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)];

    if (healthboxAnimDone)
    {
        if (twoMons == TRUE)
        {
            if (gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim
             && gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].finishedShinyMonAnim)
            {
                gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim = FALSE;
                gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim = FALSE;
                gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].triedShinyMonAnim = FALSE;
                gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].finishedShinyMonAnim = FALSE;
                FreeSpriteTilesByTag(ANIM_TAG_GOLD_STARS);
                FreeSpritePaletteByTag(ANIM_TAG_GOLD_STARS);
            }
            else
                return;
        }
        else if (gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim)
        {
            if (GetBattlerPosition(battler) == 3)
            {
                if (!gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].triedShinyMonAnim
                 && !gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].finishedShinyMonAnim)
                {
                    FreeSpriteTilesByTag(ANIM_TAG_GOLD_STARS);
                    FreeSpritePaletteByTag(ANIM_TAG_GOLD_STARS);
                }
                else
                    return;
            }
                gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim = FALSE;
                gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim = FALSE;
        }
        else
            return;

        gBattleSpritesDataPtr->healthBoxesData[battler].introEndDelay = 3;
        gBattlerControllerFuncs[battler] = Intro_DelayAndEnd;
    }
}

static void Intro_TryShinyAnimShowHealthbox(u32 battler)
{
    bool32 bgmRestored = FALSE;
    bool32 battlerAnimsDone = FALSE;
    bool32 twoMons;

    if (!gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim
     && !gBattleSpritesDataPtr->healthBoxesData[battler].ballAnimActive
     && !gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim)
        TryShinyAnimation(battler, &gEnemyParty[gBattlerPartyIndexes[battler]]);

    twoMons = TwoOpponentIntroMons(battler);
    if (!(gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
     && (!(gBattleTypeFlags & BATTLE_TYPE_MULTI) || BATTLE_TWO_VS_ONE_OPPONENT)
     && twoMons
     && !gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].triedShinyMonAnim
     && !gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].ballAnimActive
     && !gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].finishedShinyMonAnim)
        TryShinyAnimation(BATTLE_PARTNER(battler), &gEnemyParty[gBattlerPartyIndexes[BATTLE_PARTNER(battler)]]);

    if (!gBattleSpritesDataPtr->healthBoxesData[battler].ballAnimActive && !gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].ballAnimActive)
    {
        if (!gBattleSpritesDataPtr->healthBoxesData[battler].healthboxSlideInStarted)
        {
            if (twoMons && (!(gBattleTypeFlags & BATTLE_TYPE_MULTI) || BATTLE_TWO_VS_ONE_OPPONENT))
            {
                UpdateHealthboxAttribute(gHealthboxSpriteIds[BATTLE_PARTNER(battler)], &gEnemyParty[gBattlerPartyIndexes[BATTLE_PARTNER(battler)]], HEALTHBOX_ALL);
                StartHealthboxSlideIn(BATTLE_PARTNER(battler));
                SetHealthboxSpriteVisible(gHealthboxSpriteIds[BATTLE_PARTNER(battler)]);
            }
            UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], &gEnemyParty[gBattlerPartyIndexes[battler]], HEALTHBOX_ALL);
            StartHealthboxSlideIn(battler);
            SetHealthboxSpriteVisible(gHealthboxSpriteIds[battler]);
        }
        gBattleSpritesDataPtr->healthBoxesData[battler].healthboxSlideInStarted = TRUE;
    }

    if (!gBattleSpritesDataPtr->healthBoxesData[battler].waitForCry
        && gBattleSpritesDataPtr->healthBoxesData[battler].healthboxSlideInStarted
        && !gBattleSpritesDataPtr->healthBoxesData[BATTLE_PARTNER(battler)].waitForCry
        && !IsCryPlayingOrClearCrySongs())
    {
        if (!gBattleSpritesDataPtr->healthBoxesData[battler].bgmRestored)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_MULTI && gBattleTypeFlags & BATTLE_TYPE_LINK)
            {
                if (GetBattlerPosition(battler) == 1)
                    m4aMPlayContinue(&gMPlayInfo_BGM);
            }
            else
                m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 0x100);
        }
        gBattleSpritesDataPtr->healthBoxesData[battler].bgmRestored = TRUE;
        bgmRestored = TRUE;
    }

    if (!twoMons || (twoMons && gBattleTypeFlags & BATTLE_TYPE_MULTI && !BATTLE_TWO_VS_ONE_OPPONENT))
    {
        if (gSprites[gBattleControllerData[battler]].callback == SpriteCallbackDummy
            && gSprites[gBattlerSpriteIds[battler]].callback == SpriteCallbackDummy)
        {
            battlerAnimsDone = TRUE;
        }
    }
    else
    {
        if (gSprites[gBattleControllerData[battler]].callback == SpriteCallbackDummy
            && gSprites[gBattlerSpriteIds[battler]].callback == SpriteCallbackDummy
            && gSprites[gBattleControllerData[BATTLE_PARTNER(battler)]].callback == SpriteCallbackDummy
            && gSprites[gBattlerSpriteIds[BATTLE_PARTNER(battler)]].callback == SpriteCallbackDummy)
        {
            battlerAnimsDone = TRUE;
        }
    }

    if (bgmRestored && battlerAnimsDone)
    {
        if (twoMons && (!(gBattleTypeFlags & BATTLE_TYPE_MULTI) || BATTLE_TWO_VS_ONE_OPPONENT))
        {
            DestroySprite(&gSprites[gBattleControllerData[BATTLE_PARTNER(battler)]]);
            SetBattlerShadowSpriteCallback(BATTLE_PARTNER(battler), GetMonData(&gEnemyParty[gBattlerPartyIndexes[BATTLE_PARTNER(battler)]], MON_DATA_SPECIES));
        }

        DestroySprite(&gSprites[gBattleControllerData[battler]]);
        SetBattlerShadowSpriteCallback(battler, GetMonData(&gEnemyParty[gBattlerPartyIndexes[battler]], MON_DATA_SPECIES));
        gBattleSpritesDataPtr->animationData->introAnimActive = FALSE;
        gBattleSpritesDataPtr->healthBoxesData[battler].bgmRestored = FALSE;
        gBattleSpritesDataPtr->healthBoxesData[battler].healthboxSlideInStarted = FALSE;

        gBattlerControllerFuncs[battler] = Intro_WaitForShinyAnimAndHealthbox;
    }
}

static void TryShinyAnimAfterMonAnim(u32 battler)
{
    if (gSprites[gBattlerSpriteIds[battler]].x2 == 0
        && !gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim
        && !gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim)
        TryShinyAnimation(battler, &gEnemyParty[gBattlerPartyIndexes[battler]]);

    if (gSprites[gBattlerSpriteIds[battler]].callback == SpriteCallbackDummy
     && gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim)
    {
        gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim = FALSE;
        gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim = FALSE;
        FreeSpriteTilesByTag(ANIM_TAG_GOLD_STARS);
        FreeSpritePaletteByTag(ANIM_TAG_GOLD_STARS);
        OpponentBufferExecCompleted(battler);
    }
}

static void SwitchIn_ShowSubstitute(u32 battler)
{
    if (gSprites[gHealthboxSpriteIds[battler]].callback == SpriteCallbackDummy)
    {
        if (gBattleSpritesDataPtr->battlerData[battler].behindSubstitute)
            InitAndLaunchSpecialAnimation(battler, battler, battler, B_ANIM_MON_TO_SUBSTITUTE);
        gBattlerControllerFuncs[battler] = SwitchIn_HandleSoundAndEnd;
    }
}

static void SwitchIn_HandleSoundAndEnd(u32 battler)
{
    if (!gBattleSpritesDataPtr->healthBoxesData[battler].specialAnimActive && !IsCryPlayingOrClearCrySongs())
    {
        if (gSprites[gBattlerSpriteIds[battler]].callback == SpriteCallbackDummy
         || gSprites[gBattlerSpriteIds[battler]].callback == SpriteCallbackDummy_2)
        {
            m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 0x100);
            OpponentBufferExecCompleted(battler);
        }
    }
}

static void SwitchIn_ShowHealthbox(u32 battler)
{
    if (gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim
     && gSprites[gBattlerSpriteIds[battler]].callback == SpriteCallbackDummy)
    {
        gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim = FALSE;
        gBattleSpritesDataPtr->healthBoxesData[battler].finishedShinyMonAnim = FALSE;
        FreeSpriteTilesByTag(ANIM_TAG_GOLD_STARS);
        FreeSpritePaletteByTag(ANIM_TAG_GOLD_STARS);
        StartSpriteAnim(&gSprites[gBattlerSpriteIds[battler]], 0);
        UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], &gEnemyParty[gBattlerPartyIndexes[battler]], HEALTHBOX_ALL);
        StartHealthboxSlideIn(battler);
        SetHealthboxSpriteVisible(gHealthboxSpriteIds[battler]);
        CopyBattleSpriteInvisibility(battler);
        gBattlerControllerFuncs[battler] = SwitchIn_ShowSubstitute;
    }
}

static void SwitchIn_TryShinyAnim(u32 battler)
{
    if (!gBattleSpritesDataPtr->healthBoxesData[battler].triedShinyMonAnim
     && !gBattleSpritesDataPtr->healthBoxesData[battler].ballAnimActive)
        TryShinyAnimation(battler, &gEnemyParty[gBattlerPartyIndexes[battler]]);

    if (gSprites[gBattleControllerData[battler]].callback == SpriteCallbackDummy
     && !gBattleSpritesDataPtr->healthBoxesData[battler].ballAnimActive)
    {
        DestroySprite(&gSprites[gBattleControllerData[battler]]);
        SetBattlerShadowSpriteCallback(battler, GetMonData(&gEnemyParty[gBattlerPartyIndexes[battler]], MON_DATA_SPECIES));
        gBattlerControllerFuncs[battler] = SwitchIn_ShowHealthbox;
    }
}

static void OpponentBufferExecCompleted(u32 battler)
{
    gBattlerControllerFuncs[battler] = OpponentBufferRunCommand;
    if (gBattleTypeFlags & BATTLE_TYPE_LINK)
    {
        u8 playerId = GetMultiplayerId();

        PrepareBufferDataTransferLink(battler, 2, 4, &playerId);
        gBattleResources->bufferA[battler][0] = CONTROLLER_TERMINATOR_NOP;
    }
    else
    {
        gBattleControllerExecFlags &= ~gBitTable[battler];
    }
}

static void OpponentHandleLoadMonSprite(u32 battler)
{
    BtlController_HandleLoadMonSprite(battler, TryShinyAnimAfterMonAnim);
}

static void OpponentHandleSwitchInAnim(u32 battler)
{
    gBattleStruct->monToSwitchIntoId[battler] = PARTY_SIZE;
    BtlController_HandleSwitchInAnim(battler, FALSE, SwitchIn_TryShinyAnim);
}

static u32 OpponentGetTrainerPicId(u32 battlerId)
{
    u32 trainerPicId;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
    {
        trainerPicId = GetSecretBaseTrainerPicIndex();
    }
    else if (gTrainerBattleOpponent_A == TRAINER_FRONTIER_BRAIN)
    {
        trainerPicId = GetFrontierBrainTrainerPicIndex();
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
        {
            if (battlerId == 1)
                trainerPicId = GetTrainerHillTrainerFrontSpriteId(gTrainerBattleOpponent_A);
            else
                trainerPicId = GetTrainerHillTrainerFrontSpriteId(gTrainerBattleOpponent_B);
        }
        else
        {
            trainerPicId = GetTrainerHillTrainerFrontSpriteId(gTrainerBattleOpponent_A);
        }
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
    {
        if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_TOWER_LINK_MULTI))
        {
            if (battlerId == 1)
                trainerPicId = GetFrontierTrainerFrontSpriteId(gTrainerBattleOpponent_A);
            else
                trainerPicId = GetFrontierTrainerFrontSpriteId(gTrainerBattleOpponent_B);
        }
        else
        {
            trainerPicId = GetFrontierTrainerFrontSpriteId(gTrainerBattleOpponent_A);
        }
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
    {
        trainerPicId = GetEreaderTrainerFrontSpriteId();
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (battlerId != 1)
            trainerPicId = gTrainers[gTrainerBattleOpponent_B].trainerPic;
        else
            trainerPicId = gTrainers[gTrainerBattleOpponent_A].trainerPic;
    }
    else
    {
        trainerPicId = gTrainers[gTrainerBattleOpponent_A].trainerPic;
    }

    return trainerPicId;
}

static void OpponentHandleDrawTrainerPic(u32 battler)
{
    s16 xPos;
    u32 trainerPicId = OpponentGetTrainerPicId(battler);

    if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_TWO_OPPONENTS) && !BATTLE_TWO_VS_ONE_OPPONENT)
    {
        if ((GetBattlerPosition(battler) & BIT_FLANK) != 0) // second mon
            xPos = 152;
        else // first mon
            xPos = 200;
    }
    else
    {
        xPos = 176;
    }

    BtlController_HandleDrawTrainerPic(battler, trainerPicId, TRUE,
                                       xPos, 40 + 4 * (8 - gTrainerFrontPicCoords[trainerPicId].size),
                                       -1);
}

static void OpponentHandleTrainerSlide(u32 battler)
{
    u32 trainerPicId = OpponentGetTrainerPicId(battler);
    BtlController_HandleTrainerSlide(battler, trainerPicId);
}

static void OpponentHandleTrainerSlideBack(u32 battler)
{
    BtlController_HandleTrainerSlideBack(battler, 35, FALSE);
}

static void OpponentHandleMoveAnimation(u32 battler)
{
    BtlController_HandleMoveAnimation(battler, FALSE);
}

static void OpponentHandlePrintString(u32 battler)
{
    BtlController_HandlePrintString(battler, FALSE, TRUE);
}

static void OpponentHandleChooseAction(u32 battler)
{
    AI_TrySwitchOrUseItem(battler);
    OpponentBufferExecCompleted(battler);
}

static void OpponentHandleChooseMove(u32 battler)
{
    u8 chosenMoveId;
    struct ChooseMoveStruct *moveInfo = (struct ChooseMoveStruct *)(&gBattleResources->bufferA[battler][4]);

    if (gBattleTypeFlags & (BATTLE_TYPE_TRAINER | BATTLE_TYPE_FIRST_BATTLE | BATTLE_TYPE_SAFARI | BATTLE_TYPE_ROAMER)
     || IsWildMonSmart())
    {
        if (gBattleTypeFlags & BATTLE_TYPE_PALACE)
        {
            BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, ChooseMoveAndTargetInBattlePalace(battler));
        }
        else
        {
            chosenMoveId = gBattleStruct->aiMoveOrAction[battler];
            gBattlerTarget = gBattleStruct->aiChosenTarget[battler];
            switch (chosenMoveId)
            {
            case AI_CHOICE_WATCH:
                BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_SAFARI_WATCH_CAREFULLY, 0);
                break;
            case AI_CHOICE_FLEE:
                BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_RUN, 0);
                break;
            case AI_CHOICE_SWITCH:
                BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, 0xFFFF);
                break;
            case 6:
                BtlController_EmitTwoReturnValues(battler, BUFFER_B, 15, gBattlerTarget);
                break;
            default:
                {
                    u16 chosenMove = moveInfo->moves[chosenMoveId];

                    if (GetBattlerMoveTargetType(battler, chosenMove) & (MOVE_TARGET_USER_OR_SELECTED | MOVE_TARGET_USER))
                        gBattlerTarget = battler;
                    if (GetBattlerMoveTargetType(battler, chosenMove) & MOVE_TARGET_BOTH)
                    {
                        gBattlerTarget = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
                        if (gAbsentBattlerFlags & gBitTable[gBattlerTarget])
                            gBattlerTarget = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);
                    }
                    if (ShouldUseZMove(battler, gBattlerTarget, chosenMove))
                        QueueZMove(battler, chosenMove);
                    // If opponent can Mega Evolve, do it.
                    if (CanMegaEvolve(battler))
                        BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (RET_MEGA_EVOLUTION) | (gBattlerTarget << 8));
                    // If opponent can Ultra Burst, do it.
                    else if (CanUltraBurst(battler))
                        BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (RET_ULTRA_BURST) | (gBattlerTarget << 8));
                    // If opponent can Dynamax and is on final Pokemon, do it.
                    else if (CanDynamax(battler) && CountAIAliveNonEggMonsExcept(gBattlerPartyIndexes[battler]) == 0)
                        BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (RET_DYNAMAX) | (gBattlerTarget << 8));
                    else
                        BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (gBattlerTarget << 8));
                }
                break;
            }
        }
        OpponentBufferExecCompleted(battler);
    }
    else // Wild pokemon - use random move
    {
        u16 move;
        u8 target;
        do
        {
            chosenMoveId = Random() & 3;
            move = moveInfo->moves[chosenMoveId];
        } while (move == MOVE_NONE);

        if (GetBattlerMoveTargetType(battler, move) & (MOVE_TARGET_USER_OR_SELECTED | MOVE_TARGET_USER))
            BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (battler << 8));
        else if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
        {
            do {
                target = GetBattlerAtPosition(Random() & 2);
            } while (!CanTargetBattler(battler, target, move));

            // Don't bother to loop through table if the move can't attack ally
            if (B_WILD_NATURAL_ENEMIES == TRUE && !(gBattleMoves[move].target & MOVE_TARGET_BOTH))
            {
                if (CheckIfPartnerIsNaturalEnemy(battler) && CanTargetBattler(battler, target, move))
                    BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (GetBattlerAtPosition(BATTLE_PARTNER(battler)) << 8));
                else
                    BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (target << 8));
            }
            else
            {
                BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (target << 8));
            }
        }
        else
            BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (chosenMoveId) | (GetBattlerAtPosition(B_POSITION_PLAYER_LEFT) << 8));

        OpponentBufferExecCompleted(battler);
    }
}

static const u16 naturalEnemies[][3] =
{
    // Attacker              Target                 //Unofficial
    {SPECIES_ZANGOOSE,       SPECIES_SEVIPER,       FALSE},
    {SPECIES_HEATMOR,        SPECIES_DURANT,        FALSE},
    {SPECIES_SABLEYE,        SPECIES_CARBINK,       FALSE},
    {SPECIES_MAREANIE,       SPECIES_CORSOLA,       FALSE},
    {SPECIES_PIDGEY,         SPECIES_SEEDOT,        TRUE},
    {SPECIES_PIDGEOTTO,      SPECIES_MAGIKARP,      TRUE},
    {SPECIES_SPEAROW,        SPECIES_SUNKERN,       TRUE},
    {SPECIES_EKANS,          SPECIES_SPEAROW,       TRUE},
    {SPECIES_PERSIAN,        SPECIES_STARLY,        TRUE},
    {SPECIES_GRIMER,         SPECIES_TRUBBISH,      TRUE},
    {SPECIES_MUK,            SPECIES_TRUBBISH,      TRUE},
    {SPECIES_SHELLDER,       SPECIES_SLOWPOKE,      TRUE},
    {SPECIES_KINGLER,        SPECIES_SHELLDER,      TRUE},
    {SPECIES_MAROWAK,        SPECIES_MANDIBUZZ,     TRUE},
    {SPECIES_SCYTHER,        SPECIES_TAROUNTULA,    TRUE},
    {SPECIES_FURRET,         SPECIES_RATTATA,       TRUE},
    {SPECIES_LANTURN,        SPECIES_STARYU,        TRUE},
    {SPECIES_AIPOM,          SPECIES_BOUNSWEET,     TRUE},
    {SPECIES_SNEASEL,        SPECIES_PIDGEY,        TRUE},
    {SPECIES_SNEASEL,        SPECIES_DELIBIRD,      TRUE},
    {SPECIES_TAILLOW,        SPECIES_WURMPLE,       TRUE},
    {SPECIES_WINGULL,        SPECIES_FINNEON,       TRUE},
    {SPECIES_PELIPPER,       SPECIES_LUVDISC,       TRUE},
    {SPECIES_WAILMER,        SPECIES_WISHIWASHI,    TRUE},
    {SPECIES_GLALIE,         SPECIES_VANILLITE,     TRUE},
    {SPECIES_RAYQUAZA,       SPECIES_MINIOR,        TRUE},
    {SPECIES_STARLY,         SPECIES_CHERUBI,       TRUE},
    {SPECIES_LUMINEON,       SPECIES_STARYU,        TRUE},
    {SPECIES_WEAVILE,        SPECIES_SANDSHREW,     TRUE},
    {SPECIES_WEAVILE,        SPECIES_MAMOSWINE,     TRUE},
    {SPECIES_SANDILE,        SPECIES_TRAPINCH,      TRUE},
    {SPECIES_CARRACOSTA,     SPECIES_OMANYTE,       TRUE},
    {SPECIES_ARCHEOPS,       SPECIES_OMANYTE,       TRUE},
    {SPECIES_BEHEEYEM,       SPECIES_DUBWOOL,       TRUE},
    {SPECIES_DRUDDIGON,      SPECIES_DUGTRIO,       TRUE},
    {SPECIES_RUFFLET,        SPECIES_SPEWPA,        TRUE},
    {SPECIES_MANDIBUZZ,      SPECIES_CUBONE,        TRUE},
    {SPECIES_TALONFLAME,     SPECIES_WINGULL,       TRUE},
    {SPECIES_DRAGALGE,       SPECIES_FINIZEN,       TRUE},
    {SPECIES_TOUCANNON,      SPECIES_BOUNSWEET,     TRUE},
    {SPECIES_GUMSHOOS,       SPECIES_RATICATE,      TRUE},
    {SPECIES_CRABRAWLER,     SPECIES_EXEGGCUTE,     TRUE},
    {SPECIES_TOXAPEX,        SPECIES_CORSOLA,       TRUE},
    {SPECIES_SALANDIT,       SPECIES_SPINDA,        TRUE},
    {SPECIES_GOLISOPOD,      SPECIES_GRAPPLOCT,     TRUE},
    {SPECIES_BRUXISH,        SPECIES_MAREANIE,      TRUE},
    {SPECIES_DHELMISE,       SPECIES_WAILORD,       TRUE},
    {SPECIES_CORVISQUIRE,    SPECIES_STEENEE,       TRUE},
    {SPECIES_APPLETUN,       SPECIES_COMBEE,        TRUE},
    {SPECIES_SANDACONDA,     SPECIES_DURANT,        TRUE},
    {SPECIES_BARRASKEWDA,    SPECIES_WINGULL,       TRUE},
    {SPECIES_GRAPPLOCT,      SPECIES_GOLISOPOD,     TRUE},
    {SPECIES_DONDOZO,        SPECIES_BASCULIN,      TRUE},
    {SPECIES_BOMBIRDIER,     SPECIES_BASCULIN,      TRUE},
    {SPECIES_PIDGEOTTO,      SPECIES_EXEGGCUTE,     TRUE},
    {SPECIES_PIDGEOT,        SPECIES_MAGIKARP,      TRUE},
    {SPECIES_EKANS,          SPECIES_PIDGEY,        TRUE},
    {SPECIES_ARBOK,          SPECIES_WOOPER,        TRUE},
    {SPECIES_DEWGONG,        SPECIES_WISHIWASHI,    TRUE},
    {SPECIES_GRIMER,         SPECIES_GARBODOR,      TRUE},
    {SPECIES_MUK,            SPECIES_GARBODOR,      TRUE},
    {SPECIES_CLOYSTER,       SPECIES_SLOWPOKE,      TRUE},
    {SPECIES_KINGLER,        SPECIES_CLOYSTER,      TRUE},
    {SPECIES_WEEZING,        SPECIES_TRUBBISH,      TRUE},
    {SPECIES_OMASTAR,        SPECIES_SHELLDER,      TRUE},
    {SPECIES_SPINARAK,       SPECIES_CUTIEFLY,      TRUE},
    {SPECIES_LANTURN,        SPECIES_STARMIE,       TRUE},
    {SPECIES_PINECO,         SPECIES_CUTIEFLY,      TRUE},
    {SPECIES_SNEASEL,        SPECIES_SANDSHREW,     TRUE},
    {SPECIES_REMORAID,       SPECIES_BURMY,         TRUE},
    {SPECIES_SWELLOW,        SPECIES_WURMPLE,       TRUE},
    {SPECIES_WINGULL,        SPECIES_WISHIWASHI,    TRUE},
    {SPECIES_PELIPPER,       SPECIES_WISHIWASHI,    TRUE},
    {SPECIES_SHARPEDO,       SPECIES_WAILMER,       TRUE},
    {SPECIES_WAILORD,        SPECIES_WISHIWASHI,    TRUE},
    {SPECIES_METANG,         SPECIES_NOSEPASS,      TRUE},
    {SPECIES_STARLY,         SPECIES_WURMPLE,       TRUE},
    {SPECIES_STARLY,         SPECIES_SCATTERBUG,    TRUE},
    {SPECIES_LUMINEON,       SPECIES_STARMIE,       TRUE},
    {SPECIES_WEAVILE,        SPECIES_VULPIX,        TRUE},
    {SPECIES_SCOLIPEDE,      SPECIES_CENTISKORCH,   TRUE},
    {SPECIES_DARUMAKA,       SPECIES_SNOVER,        TRUE},
    {SPECIES_CARRACOSTA,     SPECIES_OMASTAR,       TRUE},
    {SPECIES_KARRABLAST,     SPECIES_SHELMET,       TRUE},
    {SPECIES_DRUDDIGON,      SPECIES_DIGLETT,       TRUE},
    {SPECIES_RUFFLET,        SPECIES_SHELLDER,      TRUE},
    {SPECIES_VULLABY,        SPECIES_HATENNA,       TRUE},
    {SPECIES_TALONFLAME,     SPECIES_PIKIPEK,       TRUE},
    {SPECIES_PIKIPEK,        SPECIES_METAPOD,       TRUE},
    {SPECIES_GUMSHOOS,       SPECIES_RATTATA,       TRUE},
    {SPECIES_GUMSHOOS,       SPECIES_SKWOVET,       TRUE},
    {SPECIES_LYCANROC,       SPECIES_DEERLING,      TRUE},
    {SPECIES_MAREANIE,       SPECIES_PINCURCHIN,    TRUE},
    {SPECIES_LURANTIS,       SPECIES_KRICKETOT,     TRUE},
    {SPECIES_SALANDIT,       SPECIES_COMBEE,        TRUE},
    {SPECIES_BRUXISH,        SPECIES_SHELLDER,      TRUE},
    {SPECIES_DHELMISE,       SPECIES_WAILMER,       TRUE},
    {SPECIES_GREEDENT,       SPECIES_BOUNSWEET,     TRUE},
    {SPECIES_CORVIKNIGHT,    SPECIES_BUNNELBY,      TRUE},
    {SPECIES_APPLETUN,       SPECIES_CUTIEFLY,      TRUE},
    {SPECIES_CRAMORANT,      SPECIES_ARROKUDA,      TRUE},
    {SPECIES_CENTISKORCH,    SPECIES_SCOLIPEDE,     TRUE},
    {SPECIES_WATTREL,        SPECIES_ARROKUDA,      TRUE},
    {SPECIES_VELUZA,         SPECIES_WIGLETT,       TRUE},
    {SPECIES_GRAFAIAI,       SPECIES_SCATTERBUG,    TRUE},
    // Rivals
    {SPECIES_CUTIEFLY,       SPECIES_BUTTERFREE,    TRUE},
    {SPECIES_SHIINOTIC,      SPECIES_PARASECT,      TRUE},
    {SPECIES_URSARING,       SPECIES_PRIMEAPE,      TRUE},
    {SPECIES_ROCKRUFF,       SPECIES_GROWLITHE,     TRUE},
    {SPECIES_KINGDRA,        SPECIES_DRAGONITE,     TRUE},
    {SPECIES_VIKAVOLT,       SPECIES_HERACROSS,     TRUE},
    {SPECIES_DEWPIDER,       SPECIES_SURSKIT,       TRUE},
    {SPECIES_BASCULIN,       SPECIES_CARVANHA,      TRUE},
    {SPECIES_PASSIMIAN,      SPECIES_AMBIPOM,       TRUE},
    {SPECIES_SQUAWKABILLY,   SPECIES_FLETCHLING,    TRUE},
    {SPECIES_BRUXISH,        SPECIES_TOXAPEX,       TRUE},
    {SPECIES_TEDDIURSA,      SPECIES_BEEDRILL,      TRUE},
    {SPECIES_MURKROW,        SPECIES_MEOWTH,        TRUE},
    {SPECIES_HAWLUCHA,       SPECIES_PRIMEAPE,      TRUE},
    {SPECIES_VIKAVOLT,       SPECIES_PINSIR,        TRUE},
    {SPECIES_LUMINEON,       SPECIES_LANTURN,       TRUE},
    {SPECIES_CORVIKNIGHT,    SPECIES_SKARMORY,      TRUE},
    {SPECIES_GABITE,         SPECIES_SABLEYE,       TRUE},
    {SPECIES_GARCHOMP,       SPECIES_SALAMENCE,     TRUE},
    {SPECIES_SIZZLIPEDE,     SPECIES_VENIPEDE,      TRUE},
    {SPECIES_FRIGIBAX,       SPECIES_BERGMITE,      TRUE},
    {SPECIES_FINIZEN,        SPECIES_BARRASKEWDA,   TRUE},
    //Parasite               //Prey
    {SPECIES_HYPNO,          SPECIES_KOMALA,        TRUE},
    {SPECIES_ELEKID,         SPECIES_TOGEDEMARU,    TRUE},
    {SPECIES_DWEBBLE,        SPECIES_ROGGENROLA,    TRUE},
    {SPECIES_DWEBBLE,        SPECIES_ROLYCOLY,      TRUE},
    {SPECIES_JOLTIK,         SPECIES_YAMPER,        TRUE},
    {SPECIES_CUTIEFLY,       SPECIES_GOSSIFLEUR,    TRUE},
    {SPECIES_TOGEDEMARU,     SPECIES_ELEKID,        TRUE},
    {SPECIES_LECHONK,        SPECIES_APPLETUN,      TRUE},
    {SPECIES_TINKATUFF,      SPECIES_PAWNIARD,      TRUE},
    {SPECIES_TINKATUFF,      SPECIES_BISHARP,       TRUE},
    {SPECIES_TINKATON,       SPECIES_CORVIKNIGHT,   TRUE},
};

static bool32 CheckIfPartnerIsNaturalEnemy(u32 battler)
{
    u32 i;
    u16 speciesAttacker = gBattleMons[battler].species;
    u16 speciesTarget = gBattleMons[GetBattlerAtPosition(BATTLE_PARTNER(battler))].species;

    if ((speciesAttacker == SPECIES_CARBINK) && (speciesTarget == SPECIES_SABLEYE))
        return FALSE;

    if ((speciesAttacker == SPECIES_CORSOLA) && (speciesTarget == SPECIES_MAREANIE))
        return FALSE;

    for (i = 0; i < ARRAY_COUNT(naturalEnemies); i++)
    {
        if (!IsMonNaturalEnemy(i, speciesAttacker, speciesTarget))
            continue;

        if ((B_WILD_NATURAL_ENEMIES_POKEDEX == FALSE) && (naturalEnemies[i][2] == TRUE))
            return FALSE;

        return TRUE;
    }
    return FALSE;
}

static bool32 IsMonNaturalEnemy(u32 i, u16 speciesAttacker, u16 speciesTarget)
{
    if ((speciesAttacker == naturalEnemies[i][0] && speciesTarget == naturalEnemies[i][1])
            || (speciesAttacker == naturalEnemies[i][1] && speciesTarget == naturalEnemies[i][0]))
        return TRUE;

    return FALSE;
}

static void OpponentHandleChooseItem(u32 battler)
{
    BtlController_EmitOneReturnValue(battler, BUFFER_B, gBattleStruct->chosenItem[battler]);
    OpponentBufferExecCompleted(battler);
}

static void OpponentHandleChoosePokemon(u32 battler)
{
    s32 chosenMonId;
    s32 pokemonInBattle = 1;

    // Choosing Revival Blessing target
    if ((gBattleResources->bufferA[battler][1] & 0xF) == PARTY_ACTION_CHOOSE_FAINTED_MON)
    {
        chosenMonId = gSelectedMonPartyId = GetFirstFaintedPartyIndex(battler);
    }
    // Switching out
    else if (*(gBattleStruct->AI_monToSwitchIntoId + battler) == PARTY_SIZE)
    {
        chosenMonId = GetMostSuitableMonToSwitchInto(battler, TRUE);
        if (chosenMonId == PARTY_SIZE)
        {
            s32 battler1, battler2, firstId, lastId;

            if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
            {
                battler2 = battler1 = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
            }
            else
            {
                battler1 = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
                battler2 = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);
                pokemonInBattle = 2;
            }

            GetAIPartyIndexes(battler, &firstId, &lastId);

            for (chosenMonId = (lastId-1); chosenMonId >= firstId; chosenMonId--)
            {
                if (IsValidForBattle(&gEnemyParty[chosenMonId])
                    && chosenMonId != gBattlerPartyIndexes[battler1]
                    && chosenMonId != gBattlerPartyIndexes[battler2]
                    && (!(AI_THINKING_STRUCT->aiFlags & AI_FLAG_ACE_POKEMON)
                        || chosenMonId != CalculateEnemyPartyCount() - 1
                        || CountAIAliveNonEggMonsExcept(PARTY_SIZE) == pokemonInBattle))
                {
                    break;
                }
            }
        }
        *(gBattleStruct->monToSwitchIntoId + battler) = chosenMonId;
    }
    else
    {
        chosenMonId = *(gBattleStruct->AI_monToSwitchIntoId + battler);
        *(gBattleStruct->AI_monToSwitchIntoId + battler) = PARTY_SIZE;
        *(gBattleStruct->monToSwitchIntoId + battler) = chosenMonId;
    }
    #if TESTING
    TestRunner_Battle_CheckSwitch(battler, chosenMonId);
    #endif // TESTING
    BtlController_EmitChosenMonReturnValue(battler, BUFFER_B, chosenMonId, NULL);
    OpponentBufferExecCompleted(battler);

}

static u8 CountAIAliveNonEggMonsExcept(u8 slotToIgnore)
{
    u16 i, count;

    for (i = 0, count = 0; i < PARTY_SIZE; i++)
    {
        if (i != slotToIgnore
            && IsValidForBattle(&gEnemyParty[i]))
        {
            count++;
        }
    }

    return count;
}

static void OpponentHandleHealthBarUpdate(u32 battler)
{
    BtlController_HandleHealthBarUpdate(battler, FALSE);
}

static void OpponentHandleIntroTrainerBallThrow(u32 battler)
{
    BtlController_HandleIntroTrainerBallThrow(battler, 0, NULL, 0, Intro_TryShinyAnimShowHealthbox);
}

static void OpponentHandleDrawPartyStatusSummary(u32 battler)
{
    BtlController_HandleDrawPartyStatusSummary(battler, B_SIDE_OPPONENT, TRUE);
}

static void OpponentHandleBattleAnimation(u32 battler)
{
    BtlController_HandleBattleAnimation(battler, FALSE, FALSE);
}

static void OpponentHandleEndLinkBattle(u32 battler)
{
    if (gBattleTypeFlags & BATTLE_TYPE_LINK && !(gBattleTypeFlags & BATTLE_TYPE_IS_MASTER))
    {
        gMain.inBattle = 0;
        gMain.callback1 = gPreBattleCallback1;
        SetMainCallback2(gMain.savedCallback);
    }
    OpponentBufferExecCompleted(battler);
}
