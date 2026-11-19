#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>

typedef enum {
    HUMAN,
    ELVE,
    DWARVE,
    ORC,
    DEMON
} Race;

typedef enum {
    WIZARD,
    DRUID,
    THIEF,
    PRIEST,
    BARBARIAN,
    VIKING,
    HERBALIST
} CharacterClass;

class Character
{
    Q_OBJECT
public:
    Character();

private:
    Race race;
    CharacterClass characterclass;
};

#endif // CHARACTER_H
