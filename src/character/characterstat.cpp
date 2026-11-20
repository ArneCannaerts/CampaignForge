#include "characterstat.h"


CharacterStat::CharacterStat() = default;

int CharacterStat::getStat(CharacterStats stat) const
{
    return stats.at(static_cast<std::size_t>(stat));
}

void CharacterStat::setStat(CharacterStats stat, int value)
{
    stats.at(static_cast<std::size_t>(stat)) = value;
}