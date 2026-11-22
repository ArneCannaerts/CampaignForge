
#ifndef MATERIAL_H
#define MATERIAL_H

#include "item.h"
#include <string>

enum class MaterialCategory
{
    METAL,
    WOOD,
    STONE,
    LEATHER,
    CLOTH,
    HERB,
    MONSTER_PART,
    GEMSTONE,
    OTHER
};

enum class MaterialRarity
{
    COMMON,
    UNCOMMON,
    RARE,
    EPIC,
    LEGENDARY
};

class Material : public Item
{
public:
    Material();

    // Category
    MaterialCategory GetCategory() const;
    void SetCategory(MaterialCategory category);

    // Rarity
    MaterialRarity GetRarity() const;
    void SetRarity(MaterialRarity rarity);

    // Crafting
    int GetCraftingValue() const;
    void SetCraftingValue(int value);

private:
    MaterialCategory category = MaterialCategory::OTHER;
    MaterialRarity rarity = MaterialRarity::COMMON;
    int craftingValue = 0;
};

#endif // MATERIAL_H
