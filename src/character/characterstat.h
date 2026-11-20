#ifndef CHARACTERSTAT_H
#define CHARACTERSTAT_H

#include <array>
#include <cstddef>

enum class CharacterStats
{
    Strength,
    Dexterity,
    Constitution,
    Intelligence,
    Wisdom,
    Charisma,
    Count
};

class CharacterStat
{
public:
    CharacterStat();

    int getStat(CharacterStats stat) const;
    void setStat(CharacterStats stat, int value);

private:
    std::array<int, static_cast<std::size_t>(CharacterStats::Count)> stats{};
};

#endif // CHARACTERSTAT_H