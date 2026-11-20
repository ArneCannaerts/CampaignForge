#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "character/playercharacter.h"

class Player
{
    Q_OBJECT
public:
    Player();

private:
    PlayerCharacter player;
};

#endif // PLAYER_H
