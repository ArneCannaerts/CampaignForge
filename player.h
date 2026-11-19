#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "playercharacter.h"

class Player
{
    Q_OBJECT
public:
    Player();

private:
    PlayerCharacter player;
};

#endif // PLAYER_H
