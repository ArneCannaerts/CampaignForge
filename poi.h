#ifndef POI_H
#define POI_H

#include <QObject>
#include "location.h"

class Biome;

class POI
{
    Q_OBJECT
public:
    POI();

private:
    Biome* biome = nullptr;
    Location location;
};

#endif // POI_H
