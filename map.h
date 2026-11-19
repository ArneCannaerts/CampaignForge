#ifndef MAP_H
#define MAP_H

#include <QObject>
#include "poi.h"

class Map
{
    Q_OBJECT
public:
    Map();

private:
    POI* poi;
};

#endif // MAP_H
