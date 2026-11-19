#ifndef LOCATION_H
#define LOCATION_H

struct coordinate {
    int x;
    int y;
};

class Location
{
public:
    Location();

private:
    coordinate start;
    coordinate end;
};

#endif // LOCATION_H
