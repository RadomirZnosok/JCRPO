#include "position.h"

Position::Position(char newX, short newY)
    :x(newX), y(newY)
{

}

Position::Position(const Position& obj){
    this->x = obj.x;
    this->y = obj.y;
}


Position Position::getPos() const
{
    return Position(x, y);
}

bool Position::checkPos(const Position &newPos) const
{
    if (newPos.x > Position::xmax || newPos.x < Position::xmin){
        return false;
    }
    if (newPos.y > Position::ymax || newPos.y < Position::ymin) {
        return false;
    }
    return true;
}

Position Position::operator+(struct steps &offset)
{
    return Position(this->x + offset.e - offset.w, this->y + offset.n - offset.s);
}

struct steps Position::operator-(const Position& obj){
    struct steps result;
    int offx = (int)(this->x - obj.x),
        offy = (int)(this->y - obj.y);
    offx > 0 ? result.e = offx : result.w = offx;
    offy > 0 ? result.n = offy : result.s = offy;
    return result;
}

Position& Position::operator=(const Position& obj)
{
    if (!(obj.x < xmin || obj.x > xmax) && !(obj.y < ymin || obj.y > ymax)) {
        this->x = obj.x;
        this->y = obj.y;
    }
    else {
        Position val;
        return val;
    }
    return *this;
}

void Position::setPos(const Position& obj){
    this->x = obj.x;
    this->y = obj.y;
}


void Position::move(struct steps &offset){
    char newX = this->x + (offset.e-'A') - (offset.w - 'A');
    short newY = this->y + offset.n - offset.s;
    *this = Position(newX, newY);
}


struct steps Position::makeSteps(int N, int S, int W, int E){
    struct steps obj;
    obj.n = N;
    obj.s = S;
    obj.w = W;
    obj.e = E;
    return obj;
}

void Position::setPosStr(QString obj){
    QChar newX = obj[0];
    short newY = obj.mid(1).toShort(nullptr, 10);
    if (!(newX > xmax || newX < xmin) && !(newY > ymax || newY < ymin)){
        x = newX.unicode();
        y = newY;
    }
}
