
#include "armor.h"

Armor::Armor() = default;

// Resistance
void Armor::SetResistance(DamageTypes type, float amount)
{
    resistance[type] = amount;
}

void Armor::RemoveResistance(DamageTypes type)
{
    resistance.erase(type);
}

float Armor::GetResistance(DamageTypes type) const
{
    auto it = resistance.find(type);

    if (it == resistance.end())
        return 0.0f;

    return it->second;
}

const std::unordered_map<DamageTypes, float>& Armor::GetResistances() const
{
    return resistance;
}

// Armor slot
ArmorSlot Armor::GetSlot() const
{
    return slot;
}

void Armor::SetSlot(ArmorSlot s)
{
    slot = s;
}

// Armor category
ArmorCategory Armor::GetCategory() const
{
    return category;
}

void Armor::SetCategory(ArmorCategory c)
{
    category = c;
}

// Requirements
void Armor::SetRequirement(CharacterStats stat, int amount)
{
    requirements[stat] = amount;
}

void Armor::RemoveRequirement(CharacterStats stat)
{
    requirements.erase(stat);
}

int Armor::GetRequirement(CharacterStats stat) const
{
    auto it = requirements.find(stat);

    if (it == requirements.end())
        return 0;

    return it->second;
}

const std::unordered_map<CharacterStats, int>& Armor::GetRequirements() const
{
    return requirements;
}

bool Armor::MeetsRequirements(const CharacterStat& stats) const
{
    for (const auto& requirement : requirements)
    {
        if (stats.getStat(requirement.first) < requirement.second)
            return false;
    }

    return true;
}
