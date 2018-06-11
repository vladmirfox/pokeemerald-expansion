#ifndef GUARD_FIELD_MAP_OBJ_H
#define GUARD_FIELD_MAP_OBJ_H

#define NUM_OBJECT_GRAPHICS_INFO 239
#define SPRITE_VAR 240

// Exported struct declarations

enum SpinnerRunnerFollowPatterns {
    RUNFOLLOW_ANY,
    RUNFOLLOW_NORTH_SOUTH,
    RUNFOLLOW_EAST_WEST,
    RUNFOLLOW_NORTH_WEST,
    RUNFOLLOW_NORTH_EAST,
    RUNFOLLOW_SOUTH_WEST,
    RUNFOLLOW_SOUTH_EAST,
    RUNFOLLOW_NORTH_SOUTH_WEST,
    RUNFOLLOW_NORTH_SOUTH_EAST,
    RUNFOLLOW_NORTH_EAST_WEST,
    RUNFOLLOW_SOUTH_EAST_WEST
};

#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_SPAWN   (1 << 0)
#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_MOVE    (1 << 1)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_SPAWN   (1 << 2)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_MOVE    (1 << 3)
#define GROUND_EFFECT_FLAG_ICE_REFLECTION        (1 << 4)
#define GROUND_EFFECT_FLAG_REFLECTION            (1 << 5)
#define GROUND_EFFECT_FLAG_SHALLOW_FLOWING_WATER (1 << 6)
#define GROUND_EFFECT_FLAG_SAND                  (1 << 7)
#define GROUND_EFFECT_FLAG_DEEP_SAND             (1 << 8)
#define GROUND_EFFECT_FLAG_RIPPLES               (1 << 9)
#define GROUND_EFFECT_FLAG_PUDDLE                (1 << 10)
#define GROUND_EFFECT_FLAG_SAND_PILE             (1 << 11)
#define GROUND_EFFECT_FLAG_LAND_IN_TALL_GRASS    (1 << 12)
#define GROUND_EFFECT_FLAG_LAND_IN_LONG_GRASS    (1 << 13)
#define GROUND_EFFECT_FLAG_LAND_IN_SHALLOW_WATER (1 << 14)
#define GROUND_EFFECT_FLAG_LAND_IN_DEEP_WATER    (1 << 15)
#define GROUND_EFFECT_FLAG_LAND_ON_NORMAL_GROUND (1 << 16)
#define GROUND_EFFECT_FLAG_SHORT_GRASS           (1 << 17)
#define GROUND_EFFECT_FLAG_HOT_SPRINGS           (1 << 18)
#define GROUND_EFFECT_FLAG_SEAWEED               (1 << 19)

// Exported RAM declarations

// Exported ROM declarations

void sub_808D438(void);
u8 get_go_image_anim_num(u8);
u8 GetFieldObjectIdByLocalIdAndMap(u8, u8, u8);
bool8 TryGetFieldObjectIdByLocalIdAndMap(u8, u8, u8, u8 *);
u8 GetFieldObjectIdByXY(s16, s16);
void FieldObjectSetDirection(struct MapObject *, u8);
u8 sub_808D4F4(void);
void RemoveFieldObjectByLocalIdAndMap(u8, u8, u8);
void npc_load_two_palettes__no_record(u16, u8);
void npc_load_two_palettes__and_record(u16, u8);
void sub_808EBA8(u8, u8, u8, s16, s16);
void pal_patch_for_npc(u16, u8);
void sub_808E16C(s16, s16);
void sub_808F28C(u8 localId, u8 mapNum, u8 mapGroup, u8 decorCat);
void sub_8092FF0(s16, s16, s16 *, s16 *);
u8 FieldObjectDirectionToImageAnimId(u8);
void sub_80930E0(s16 *, s16 *, s16, s16);
void FieldObjectClearAnim(struct MapObject *);
void FieldObjectClearAnimIfSpecialAnimActive(struct MapObject *);
void SpawnFieldObjectsInView(s16, s16);
u8 sprite_new(u8, u8, s16, s16, u8, u8);
u8 AddPseudoFieldObject(u16, void (*)(struct Sprite *), s16, s16, u8);
u8 show_sprite(u8, u8, u8);
u8 SpawnSpecialFieldObjectParametrized(u8, u8, u8, s16, s16, u8);
u8 SpawnSpecialFieldObject(struct MapObjectTemplate *);
void sub_8093038(s16, s16, s16 *, s16 *);
void CameraObjectReset1(void);
void FieldObjectSetGraphicsId(struct MapObject *, u8);
void FieldObjectTurn(struct MapObject *, u8);
void FieldObjectTurnByLocalIdAndMap(u8, u8, u8, u8);
const struct MapObjectGraphicsInfo *GetFieldObjectGraphicsInfo(u8);
void npc_by_local_id_and_map_set_field_1_bit_x20(u8, u8, u8, u8);
void gpu_pal_allocator_reset__manage_upper_four(void);
void sub_808E82C(u8, u8, u8, s16, s16);
void sub_808E7E4(u8, u8, u8);
void sub_808E78C(u8, u8, u8, u8);
void sub_808E75C(s16, s16);
void FieldObjectGetLocalIdAndMap(struct MapObject *mapObject, void *localId, void *mapNum, void *mapGroup);
void npc_coords_shift(struct MapObject *, s16, s16);
void sub_808EB08(struct MapObject *, s16, s16);
void sub_808F254(u8, u8, u8);
void FieldObjectStep(struct MapObject *, struct Sprite *, bool8(struct MapObject *, struct Sprite *));
u8 FieldObjectFaceOppositeDirection(struct MapObject *, u8);
u8 GetOppositeDirection(u8);
u8 GetStepInPlaceDelay4AnimId(u32);
u8 GetStepInPlaceDelay8AnimId(u32);
u8 GetStepInPlaceDelay16AnimId(u32);
u8 GetStepInPlaceDelay32AnimId(u32);
u8 npc_block_way(struct MapObject *, s16, s16, u32);
void MoveCoords(u8, s16 *, s16 *);
bool8 FieldObjectIsSpecialAnimActive(struct MapObject *);
u8 FieldObjectClearAnimIfSpecialAnimFinished(struct MapObject *);
u8 GetFieldObjectIdByXYZ(u16 x, u16 y, u8 z);
void npc_set_running_behaviour_etc(struct MapObject *mapObject, u8 movementType);
u8 npc_running_behaviour_by_direction(u8 direction);
const u8 *GetFieldObjectScriptPointerByFieldObjectId(u8 mapObjectId);
u8 sub_8092C8C(struct MapObject *mapObject, s16 x, s16 y, u8 direction);
u8 GetFaceDirectionAnimId(u32);
u8 GetGoSpeed0AnimId(u32);
u8 sub_80934BC(u32);
bool8 FieldObjectSetSpecialAnim(struct MapObject *mapObject, u8 specialAnimId);
bool8 FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(struct MapObject *mapObject);
u8 FieldObjectCheckIfSpecialAnimFinishedOrInactive(struct MapObject *mapObject);
void sub_808F23C(const struct MapObject *mapObject, u8 movementType);
void sub_808F208(const struct MapObject *mapObject);
void npc_coords_shift_still(struct MapObject *pObject);
void FieldObjectMoveDestCoords(struct MapObject *pObject, u32 unk_19, s16 *pInt, s16 *pInt1);
u8 AddCameraObject(u8 linkedSpriteId);
void UpdateFieldObjectsForCameraUpdate(s16 x, s16 y);
u8 GetSimpleGoAnimId(u32);
u8 sub_8093514(u32);
bool8 AreZCoordsCompatible(u8, u8);
u8 ZCoordToPriority(u8);
void FieldObjectUpdateZCoord(struct MapObject *pObject);
void SetObjectSubpriorityByZCoord(u8, struct Sprite *, u8);
bool8 IsZCoordMismatchAt(u8, s16, s16);

// Exported data declarations

extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

#endif //GUARD_FIELD_MAP_OBJ_H
