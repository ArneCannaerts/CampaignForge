
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

CharacterInfo& Character::GetInfo()
{
    return characterinfo;
}
const CharacterInfo& Character::GetInfo() const
{
    return characterinfo;
}

int Character::GetHealth() const
{
    return characterinfo.health;
}    //returns health

int Character::Heal(int amount)
{
    characterinfo.health += amount;
    if (characterinfo.health >= characterinfo.maxhealth)
    {
        characterinfo.health = characterinfo.maxhealth;
    }
    return characterinfo.health;
}    //returns health after healing

int Character::DamageCharacter(int amount)
{
    characterinfo.health -= amount;
    if (characterinfo.health < 0)
    {
        characterinfo.health = 0;
        characterinfo.isalive = false;
    }
    return characterinfo.health;
}

bool Character::IsAlive()
{
    return characterinfo.isalive;
}