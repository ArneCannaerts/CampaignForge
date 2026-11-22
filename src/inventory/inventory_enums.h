#ifndef INVENTORY_ENUMS_H
#define INVENTORY_ENUMS_H

enum class EquipmentCategory
{
    TOOL,
    TOOLKIT,
    LIGHT_SOURCE,
    CONTAINER,
    CLOTHING,
    ACCESSORY,
    MUSICAL_INSTRUMENT,
    CAMPING_GEAR,
    OTHER
};

enum class EquipmentSlot
{
    HEAD,
    CHEST,
    HANDS,
    FEET,
    BACK,
    BELT,
    ACCESSORY,
    NONE
};

enum class ArmorSlot
{
    HEAD,
    CHEST,
    LEGS,
    HANDS,
    FEET,
    SHIELD
};

enum class ArmorCategory
{
    LIGHT,
    MEDIUM,
    HEAVY,
    SHIELD
};

#endif // INVENTORY_ENUMS_H
