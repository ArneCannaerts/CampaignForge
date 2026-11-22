
#include "material.h"

Material::Material() = default;

// Category
MaterialCategory Material::GetCategory() const
{
    return category;
}

void Material::SetCategory(MaterialCategory c)
{
    category = c;
}

// Rarity
MaterialRarity Material::GetRarity() const
{
    return rarity;
}

void Material::SetRarity(MaterialRarity r)
{
    rarity = r;
}

// Crafting
int Material::GetCraftingValue() const
{
    return craftingValue;
}

void Material::SetCraftingValue(int value)
{
    craftingValue = value;
}
