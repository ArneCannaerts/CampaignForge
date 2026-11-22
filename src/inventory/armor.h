
#ifndef ARMOR_H
#define ARMOR_H

#include "item.h"
#include "inventory_enums.h"
#include "combat/damage_enums.h"
#include "character/characterstat.h"
#include <unordered_map>

class Armor : public Item
{
public:
    Armor();

    // Resistance
    void SetResistance(DamageTypes type, float amount);
    void RemoveResistance(DamageTypes type);
    float GetResistance(DamageTypes type) const;
    const std::unordered_map<DamageTypes, float>& GetResistances() const;

    // Armor slot
    ArmorSlot GetSlot() const;
    void SetSlot(ArmorSlot slot);

    // Armor category
    ArmorCategory GetCategory() const;
    void SetCategory(ArmorCategory category);

    // Requirements
    void SetRequirement(CharacterStats stat, int amount);
    void RemoveRequirement(CharacterStats stat);
    int GetRequirement(CharacterStats stat) const;
    const std::unordered_map<CharacterStats, int>& GetRequirements() const;

    bool MeetsRequirements(const CharacterStat& stats) const;

private:
    std::unordered_map<DamageTypes, float> resistance;
    ArmorSlot slot = ArmorSlot::CHEST;
    ArmorCategory category = ArmorCategory::LIGHT;
    std::unordered_map<CharacterStats, int> requirements;
};

#endif // ARMOR_H
