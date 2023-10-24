#include "position.h"

Position::Position(char newX, short newY)
    :x(newX), y(newY)
{

}


Position Position::getPos()
{
    return Position(x, y);
}

void Position::setX(char newX)
{
    this->x = newX;
}

void Position::setY(short newY)
{
    this->y = newY;
}

bool Position::checkPos(const Position &newPos)
{
    if (newPos.x > Position::xmax || newPos.x < Position::xmin){
        return false;
    }
    if (newPos.y > Position::ymax || newPos.y < Position::ymin) {
        return false;
    }
    return true;
}

Position Position::operator+(const Position& offset)
{
    return Position(this->x + offset.x, this->y + offset.y);
}

Position& Position::operator=(const Position& obj)
{
    this->x = obj.x;
    this->y = obj.y;
    return *this;
}




