#ifndef CAMPAIGN_H
#define CAMPAIGN_H

#include <QObject>
#include "world/map.h"
#include "campaign/player.h"

class Campaign : public QObject
{
    Q_OBJECT
public:
    explicit Campaign(QObject *parent = nullptr);

private:
    std::string name;
    std::string description;
    Map map;
    QList<Player*> players;
signals:
};

#endif // CAMPAIGN_H
