
#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "item.h"
#include "inventory_enums.h"

class Equipment : public Item
{
public:
    Equipment();

    // Category
    EquipmentCategory GetCategory() const;
    void SetCategory(EquipmentCategory category);

    // Equipment slot
    EquipmentSlot GetSlot() const;
    void SetSlot(EquipmentSlot slot);

    // Equipped state
    bool IsEquipped() const;
    void SetEquipped(bool equipped);
    void Equip();
    void Unequip();

    // Hand requirements
    int GetRequiredHands() const;
    void SetRequiredHands(int amount);

private:
    EquipmentCategory category = EquipmentCategory::OTHER;
    EquipmentSlot slot = EquipmentSlot::NONE;
    bool isEquipped = false;
    int requiredHands = 0;
};

#endif // EQUIPMENT_H
