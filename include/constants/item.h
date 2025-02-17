#ifndef GUARD_ITEM_CONSTANTS_H
#define GUARD_ITEM_CONSTANTS_H

// These constants are used in gItemsInfo - also adds 3 extra pocket constants (Medicine, Power_up, and Battle_Items) when MORE_POCKETS is activated

#if (MORE_POCKETS == TRUE) 
#define POCKET_NONE         0
#define POCKET_ITEMS        1
#define POCKET_MEDICINE     2
#define POCKET_POKE_BALLS   3
#define POCKET_BATTLE_ITEMS 4
#define POCKET_BERRIES      5
#define POCKET_POWER_UP     6
#define POCKET_TM_HM        7
#define POCKET_KEY_ITEMS    8
    
#define ITEMS_POCKET       0
#define MEDICINE_POCKET    1
#define BALLS_POCKET       2
#define BATTLEITEMS_POCKET 3
#define BERRIES_POCKET     4
#define POWERUP_POCKET     5
#define TMHM_POCKET        6
#define KEYITEMS_POCKET    7
#define POCKETS_COUNT      8

#elif (MORE_POCKETS == MEDICINE_ONLY)
#define POCKET_NONE         0
#define POCKET_ITEMS        1
#define POCKET_MEDICINE     2
#define POCKET_POKE_BALLS   3
#define POCKET_BATTLE_ITEMS POCKET_ITEMS
#define POCKET_BERRIES      4
#define POCKET_POWER_UP     POCKET_ITEMS
#define POCKET_TM_HM        5
#define POCKET_KEY_ITEMS    6
    
#define ITEMS_POCKET       0
#define MEDICINE_POCKET    1
#define BALLS_POCKET       2
#define BATTLEITEMS_POCKET ITEMS_POCKET
#define BERRIES_POCKET     3
#define POWERUP_POCKET     ITEMS_POCKET
#define TMHM_POCKET        4
#define KEYITEMS_POCKET    5
#define POCKETS_COUNT      6
#else
#define POCKET_NONE         0
#define POCKET_ITEMS        1
#define POCKET_MEDICINE     POCKET_ITEMS
#define POCKET_POKE_BALLS   2
#define POCKET_BATTLE_ITEMS POCKET_ITEMS
#define POCKET_BERRIES      3
#define POCKET_POWER_UP     POCKET_ITEMS
#define POCKET_TM_HM        4
#define POCKET_KEY_ITEMS    5
    
#define ITEMS_POCKET       0
#define MEDICINE_POCKET    ITEMS_POCKET
#define BALLS_POCKET       1
#define BATTLEITEMS_POCKET ITEMS_POCKET
#define BERRIES_POCKET     2
#define POWERUP_POCKET     ITEMS_POCKET
#define TMHM_POCKET        3
#define KEYITEMS_POCKET    4
#define POCKETS_COUNT      5
#endif


#define REPEL_LURE_MASK         (1 << 15)
#define IS_LAST_USED_LURE(var)  (var & REPEL_LURE_MASK)
#define REPEL_LURE_STEPS(var)   (var & (REPEL_LURE_MASK - 1))
#define LURE_STEP_COUNT         (IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)
#define REPEL_STEP_COUNT        (!IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)

#endif // GUARD_ITEM_CONSTANTS_H
