
#include "equipment.h"

Equipment::Equipment() = default;

// Category
EquipmentCategory Equipment::GetCategory() const
{
    return category;
}

void Equipment::SetCategory(EquipmentCategory c)
{
    category = c;
}

// Equipment slot
EquipmentSlot Equipment::GetSlot() const
{
    return slot;
}

void Equipment::SetSlot(EquipmentSlot s)
{
    slot = s;
}

// Equipped state
bool Equipment::IsEquipped() const
{
    return isEquipped;
}

void Equipment::SetEquipped(bool equipped)
{
    isEquipped = equipped;
}

void Equipment::Equip()
{
    isEquipped = true;
}

void Equipment::Unequip()
{
    isEquipped = false;
}

// Hand requirements
int Equipment::GetRequiredHands() const
{
    return requiredHands;
}

void Equipment::SetRequiredHands(int amount)
{
    requiredHands = amount;
}
