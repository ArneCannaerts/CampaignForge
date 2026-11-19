#ifndef BIOME_H
#define BIOME_H

#include <QObject>
#include "location.h"
#include "poi.h"

class Biome : POI
{
    Q_OBJECT
public:
    Biome();
    Location location;
};

#endif // BIOME_H
