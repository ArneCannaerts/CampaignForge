
#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include "character_enums.h"
#include "characterstat.h"
#include "inventory/inventory.h"

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

private:
    CharacterRace race;
    CharacterClass characterclass;
    CharacterStat stats;
    Inventory inventory;
};

#endif // CHARACTER_H
