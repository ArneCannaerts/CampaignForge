#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include "character_enums.h"
#include <array>
#include <cstddef>


class Character : public QObject
{
    Q_OBJECT
public:
    Character();
    int getStat(CharacterStat stat) const
    {
        return stats[static_cast<std::size_t>(stat)];
    }
    void setStat(CharacterStat stat, int value)
    {
        stats[static_cast<std::size_t>(stat)] = value;
    }

private:
    CharacterRace race;
    CharacterClass characterclass;
    std::array<int, static_cast<std::size_t>(CharacterStat::Count)> stats{};
};

#endif // CHARACTER_H
