
#include "weapon.h"

Weapon::Weapon() = default;

// Damage
int Weapon::GetDamage() const
{
    return damage;
}

void Weapon::SetDamage(int d)
{
    damage = d;
}

// Damage type
DamageTypes Weapon::GetDamageType() const
{
    return damageType;
}

void Weapon::SetDamageType(DamageTypes d)
{
    damageType = d;
}

// Range
int Weapon::GetRange() const
{
    return range;
}

void Weapon::SetRange(int r)
{
    range = r;
}

// Category
WeaponCategory Weapon::GetCategory() const
{
    return category;
}

void Weapon::SetCategory(WeaponCategory c)
{
    category = c;
}

// Dual wielding
bool Weapon::CanDualWield() const
{
    return canDualWield;
}

void Weapon::SetCanDualWield(bool canDualWield)
{
    this->canDualWield = canDualWield;
}