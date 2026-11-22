
#include "character.h"

Character::Character(QObject *parent)
    : QObject(parent)
{
}

// Stats
int Character::GetStat(CharacterStats stat) const
{
    return stats.getStat(stat);
}

void Character::SetStat(CharacterStats stat, int value)
{
    stats.setStat(stat, value);
}

// Race
CharacterRace Character::GetRace() const
{
    return race;
}

void Character::SetRace(CharacterRace r)
{
    race = r;
}

// Class
CharacterClass Character::GetCharacterClass() const
{
    return characterclass;
}

void Character::SetCharacterClass(CharacterClass c)
{
    characterclass = c;
}

// Inventory
Inventory& Character::GetInventory()
{
    return inventory;
}

const Inventory& Character::GetInventory() const
{
    return inventory;
}
