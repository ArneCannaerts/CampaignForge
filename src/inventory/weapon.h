#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"
#include <string>

enum class WeaponCategory
{
    MELEE,
    RANGED,
    MAGIC
};

class Weapon : public Item
{
public:
    Weapon();

    // Damage
    int GetDamage() const;
    void SetDamage(int damage);

    // Damage type
    std::string GetDamageType() const;
    void SetDamageType(const std::string& damageType);

    // Range
    int GetRange() const;
    void SetRange(int range);

    // Category
    WeaponCategory GetCategory() const;
    void SetCategory(WeaponCategory category);

    // Dual wielding
    bool CanDualWield() const;
    void SetCanDualWield(bool canDualWield);

private:
    int damage = 0;
    std::string damageType;
    int range = 0;
    WeaponCategory category = WeaponCategory::MELEE;
    bool canDualWield = false;
};

#endif // WEAPON_H