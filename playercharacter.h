#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include <QObject>
#include "character.h"

class PlayerCharacter : public Character
{
    Q_OBJECT
public:
    PlayerCharacter();
};

#endif // PLAYERCHARACTER_H
