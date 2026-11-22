
#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include "character_enums.h"
#include "characterstat.h"
#include "inventory/inventory.h"

struct CharacterInfo
{
    std::string name = "";
    int age = 0;
    int level = 0;
    int xp = 0;
    int health = 0;
    int maxhealth = 0;
    bool isalive = true;
};

class Character : public QObject
{
    Q_OBJECT

public:
    explicit Character(QObject *parent = nullptr);

    // Stats
    int GetStat(CharacterStats stat) const;
    void SetStat(CharacterStats stat, int value);

    // Race
    CharacterRace GetRace() const;
    void SetRace(CharacterRace race);

    // Class
    CharacterClass GetCharacterClass() const;
    void SetCharacterClass(CharacterClass characterClass);

    // Inventory
    Inventory& GetInventory();
    const Inventory& GetInventory() const;

    // Info
    CharacterInfo& GetInfo();
    const CharacterInfo& GetInfo() const;

    //Health
    int GetHealth() const;  //returns health
    int Heal(int amount);   //returns health after healing
    int DamageCharacter(int amount);
    bool IsAlive();

private:
    CharacterRace race;
    CharacterClass characterclass;
    CharacterStat stats;
    Inventory inventory;
    CharacterInfo characterinfo;
};

#endif // CHARACTER_H
