#ifndef POI_H
#define POI_H

#include "location.h"

class Biome;

class POI
{
public:
    POI();

private:
    Biome* biome = nullptr;
    Location location;
};

#endif // POI_H
