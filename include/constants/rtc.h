#define TIME_DEAD_NIGHT   0    
#define TIME_EARLY        1
#define TIME_MORNING      2
#define TIME_LUNCHTIME    3
#define TIME_AFTERNOON    4 
#define TIME_EVENING      5
#define TIME_NIGHT        6

#define VAR_TIME_OF_DAY   VAR_0x8000
#define VAR_DAY_OF_WEEK   VAR_0x8000

#define VAR_DAY           VAR_0x8000
#define VAR_MONTH         VAR_0x8001
#define VAR_YEAR          VAR_0x8002

#define VAR_HOUR           VAR_0x8000
#define VAR_MINUTE         VAR_0x8001
#define VAR_SECOND         VAR_0x8002

#define DAY_SUNDAY          0
#define DAY_MONDAY          1
#define DAY_TUESDAY         2
#define DAY_WEDNESDAY       3
#define DAY_THURSDAY        4
#define DAY_FRIDAY          5
#define DAY_SATURDAY        6
#define DAYS_PER_WEEK       DAY_SATURDAY + 1

#define MONTH_ONE            1
#define MONTH_TWO            2
#define MONTH_THREE          3
#define MONTH_FOUR           4
#define MONTH_FIVE           5
#define MONTH_SIX            6
#define MONTH_SEVEN          7
#define MONTH_EIGHT          8
#define MONTH_NINE           9
#define MONTH_TEN            10
#define MONTH_ELEVEN         11
#define MONTH_TWELVE         12
#define MONTH_COUNT          MONTH_TWELVE

//The following defines what respective date and time the game starts on.
#define STARTING_YEAR                   1           
#define STARTING_MONTH                  MONTH_ONE
#define STARTING_DAY                    1
#define STARTING_HOUR                   8
#define STARTING_MINUTE                 0
#define STARTING_SECOND                 0