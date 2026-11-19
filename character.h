#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include "character_enums.h"


class Character : public QObject
{
    Q_OBJECT
public:
    Character();

private:
    CharacterRace race;
    CharacterClass characterclass;
};

#endif // CHARACTER_H
