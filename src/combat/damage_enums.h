#ifndef DAMAGE_ENUMS_H
#define DAMAGE_ENUMS_H

enum class DamageTypes
{
    // Physical
    BLUDGEONING,
    PIERCING,
    SLASHING,

    // Elemental
    FIRE,
    COLD,
    LIGHTNING,
    THUNDER,

    // Magical / supernatural
    FORCE,
    NECROTIC,
    RADIANT,
    PSYCHIC,
    POISON,
    ACID,

    // Other
    EXPLOSIVE,
    TRUE_DAMAGE
};

#endif // DAMAGE_ENUMS_H
