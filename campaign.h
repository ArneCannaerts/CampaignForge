#ifndef CAMPAIGN_H
#define CAMPAIGN_H

#include <QObject>
#include "map.h"

class Campaign : public QObject
{
    Q_OBJECT
public:
    explicit Campaign(QObject *parent = nullptr);

private:
    Map map;

signals:
};

#endif // CAMPAIGN_H
