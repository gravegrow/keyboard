#include "redox.h"
#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    {
        {  0,  9,  10,  19,  20,  29, 30 },
        {  1,  8,  11,  18,  21,  28, 31 },
        {  2,  7,  12,  17,  22,  27, 32 },
        {  3,  6,  13,  16,  23,  26, 33 },
        {  4,  5,  14,  15,  24,  25, 34 },

        { 35, 44, 45, 54, 55,  64,  65 },
        { 36, 43, 46, 53, 56,  63,  66 },
        { 37, 42, 47, 52, 57,  62,  67 },
        { 38, 41, 48, 51, 58,  61,  68 },
        { 39, 40, 49, 50, 59,  60,  69 },
    },
    {

        { 0,  0  }, { 0,    16 }, { 0,   32 }, { 0,   48 }, { 0, 64 }, 
        { 17, 64 }, { 17,   48 },  { 17, 32 }, { 17,  16 }, { 17, 0 }, 
        { 34, 0  }, { 34,   16 }, { 34,  32 }, { 34,  48 },   { 34, 64 }, 
        { 51, 64 }, { 51,   48 }, { 51,  32 }, { 51,  16 }, { 51, 0 }, 
        { 68, 0  }, { 68,   16 }, { 68,  32 }, { 68,  48 }, { 68, 64 }, 
        { 86, 64 }, { 86,   48 }, { 86,  32 }, { 86,  16 }, { 86, 0 }, 
        { 103, 12 }, { 103, 32 }, { 103, 48 }, { 103, 48 }, { 103, 64 }, 

        { 224, 0  }, { 224, 16 }, { 224, 32 }, { 224, 48 }, { 224, 64 },
        { 206, 64 }, { 206, 48 }, { 206, 32 }, { 206, 16 }, { 206, 0 },
        { 189, 0  }, { 189, 16 }, { 189, 32 }, { 189, 48 }, { 189, 64 },
        { 172, 64 }, { 172, 48 }, { 172, 32 }, { 172, 16 }, { 172, 0 },
        { 155, 0  }, { 155, 16 }, { 155, 32 }, { 155, 48 }, { 155, 64 },
        { 137, 64 }, { 137, 48 }, { 137, 32 }, { 137, 16 }, { 137, 0 }, 
        { 120, 0  }, { 120, 32 }, { 120, 48 }, { 120, 48 }, { 120, 64 }, 

    },
    {
        LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
        LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
        LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
        LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,

        LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
        LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
        LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER,
        LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    }
};
#endif
