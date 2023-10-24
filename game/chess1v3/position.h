#ifndef POSITION_H
#define POSITION_H

#include "QChar"

class Position
{
private:
    char x;
    short y;

    static const char xmin = 'A';
    static const char xmax = 'H';
    static const short ymin = 1;
    static const short ymax = 12;
public:
    Position(char x = '\0', short y = 0);

    Position getPos();
    void setX(char x);
    void setY(short y);

    Position operator+(const Position &offset);
    Position& operator=(const Position& obj);

    bool checkPos(const Position &newPos);

};

#endif // POSITION_H
