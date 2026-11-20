#ifndef CHARACTER_ENUMS_H
#define CHARACTER_ENUMS_H

enum class CharacterRace{
    HUMAN,
    ELVE,
    DWARVE,
    ORC,
    DEMON
};

enum class CharacterClass{
    WIZARD,
    DRUID,
    THIEF,
    PRIEST,
    BARBARIAN,
    VIKING,
    HERBALIST
};

enum class CharacterStat{
    STRENGTH,           // increase physical damage
    INTELLIGENCE,       // increase magical damage
    STEALTH,            // increase sneaking ability
    CHARISMA,           // increase persuasion ability
    SPEED,              // fastest character moves first
    THOUGHNESS,         // reduce physical damage taken
    MAGIC_RESISTANCE,    // reduce magical damage taken
    Count
};

#endif // CHARACTER_ENUMS_H
