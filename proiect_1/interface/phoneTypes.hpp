#ifndef PHONE_TYPES_PHONETYPES_HPP 
#define PHONE_TYPES_PHONETYPES_HPP


typedef enum {
    IPHONE_12_MINI = 0,
    IPHONE_12,
    IPHONE_12_PRO,
    IPHONE_21_PRO_MAX,
    SAMSUNG_S21,
    SAMSUNG_S21_PLUS,
    SAMSUNG_S21_ULTRA,
    UNDEFINED_PHONE
} PhoneTypes;

typedef enum {
    BLACK = 0,
    WHITE,
    RED,
    GREEN,
    SILVER,
    GOLD,
    TITANIUM,
    GRAY,
    VIOLET,
    BROWN,
    BLUE,
    UNDEFINED_COLOR
} colorTypes;

typedef enum {
    SNAPDRAGON = 0,
    EXYNOS,
    QUALCOMM,
    UNDEFINED_PROCCESOR
} proccesorTypes;

typedef enum {
    GB_64 = 0,
    GB_128,
    GB_256,
    GB_512
} memoryTypes;

#endif