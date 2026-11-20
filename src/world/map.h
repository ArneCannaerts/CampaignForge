#ifndef MAP_H
#define MAP_H

#include <QObject>
#include "poi.h"

class Map : public QObject
{
    Q_OBJECT
public:
    Map();

private:
    QList<POI*> poi;
};

#endif // MAP_H
