
#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include "character_enums.h"
#include "characterstat.h"

class Character : public QObject
{
    Q_OBJECT

public:
    Character();

    int getStat(CharacterStats stat) const
    {
        return stats.getStat(stat);
    }

    void setStat(CharacterStats stat, int value)
    {
        stats.setStat(stat, value);
    }

private:
    CharacterRace race;
    CharacterClass characterclass;
    CharacterStat stats;
};

#endif // CHARACTER_H
