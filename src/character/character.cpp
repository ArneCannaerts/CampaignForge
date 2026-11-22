#include "character.h"
#include <stdexcept>


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

int Character::GetMaxHealth() const
{
    return characterinfo.maxHealth;
}

int Character::Heal(int amount)
{
    if (amount<1)
    {
        throw std::invalid_argument("amount can't be 0 or below");
    }
    characterinfo.health += amount;
    if (characterinfo.health >= characterinfo.maxHealth)
    {
        characterinfo.health = characterinfo.maxHealth;
    }
    return characterinfo.health;
}    //returns health after healing

int Character::DamageCharacter(int amount)
{
    if (amount<1)
    {
        throw std::invalid_argument("amount can't be 0 or below");
    }
    characterinfo.health -= amount;
    if (characterinfo.health < 0)
    {
        characterinfo.health = 0;
        characterinfo.isAlive = false;
    }
    return characterinfo.health;
}

bool Character::IsAlive() const
{
    return characterinfo.isAlive;
}