#include "figure.h"



Figure::Figure(Position pos, QString nname, bool exist)
    :Position(pos), name(nname), exist(exist)
{

}

Figure::Figure(const Figure& obj)
    :Position(obj.getPos()), name(obj.name)
{
    this->setSteps(obj.getSteps());
    this->setAttack(obj.getAttack());
}

Figure::~Figure(){

}

Figure& Figure::operator=(const Figure& obj){
    this->setPos(obj.getPos());
    this->name = obj.name;

    this->setSteps(obj.getSteps());
    this->setAttack(obj.getAttack());
    this->exist = obj.exist;
    return *this;
}

QString Figure::getName() const {
    return this->name;
}

void Figure::setName(QString newName){
    this->name = newName;
}

QList<struct steps> Figure::getSteps() const {
    return this->moves;
}

void Figure::setSteps(QList<struct steps> list){
    this->moves.clear();
    this->moves = list;
}

QList<struct steps> Figure::getAttack() const {
    return this->hits;
}

void Figure::setAttack(QList<struct steps> list){
    this->hits.clear();
    this->hits = list;
}


bool Figure::getExist() const
{
    return exist;
}

void Figure::setExist(bool newExist)
{
    exist = newExist;
}

Figure Figure::makeFigure(QString name, QString pos, int player)
{
    Position ob = Position(pos[0].unicode(), pos.mid(1).toShort(0, 10));
    Figure obj = Figure(ob, name);
    QList<struct steps> list;
    obj.exist = true;
    if (name == fignames[0]){
        list.append(Position::makeSteps(1,0,0,0));
        list.append(Position::makeSteps(0,1,0,0));
        obj.setSteps(list);
        list.clear();
        list.append(Position::makeSteps(1,0,1,0));
        list.append(Position::makeSteps(1,0,0,1));
        list.append(Position::makeSteps(0,1,1,0));
        list.append(Position::makeSteps(0,1,0,1));
        obj.setAttack(list);
    }
    else if (name == fignames[1]){
        list.append(Position::makeSteps(1,0,0,0));
        list.append(Position::makeSteps(2,0,0,0));
        list.append(Position::makeSteps(3,0,0,0));
        list.append(Position::makeSteps(4,0,0,0));
        list.append(Position::makeSteps(5,0,0,0));
        list.append(Position::makeSteps(6,0,0,0));
        list.append(Position::makeSteps(7,0,0,0));
        list.append(Position::makeSteps(0,1,0,0));
        list.append(Position::makeSteps(0,2,0,0));
        list.append(Position::makeSteps(0,3,0,0));
        list.append(Position::makeSteps(0,4,0,0));
        list.append(Position::makeSteps(0,5,0,0));
        list.append(Position::makeSteps(0,6,0,0));
        list.append(Position::makeSteps(0,7,0,0));
        list.append(Position::makeSteps(0,0,1,0));
        list.append(Position::makeSteps(0,0,2,0));
        list.append(Position::makeSteps(0,0,3,0));
        list.append(Position::makeSteps(0,0,4,0));
        list.append(Position::makeSteps(0,0,5,0));
        list.append(Position::makeSteps(0,0,6,0));
        list.append(Position::makeSteps(0,0,7,0));
        list.append(Position::makeSteps(0,0,0,1));
        list.append(Position::makeSteps(0,0,0,2));
        list.append(Position::makeSteps(0,0,0,3));
        list.append(Position::makeSteps(0,0,0,4));
        list.append(Position::makeSteps(0,0,0,5));
        list.append(Position::makeSteps(0,0,0,6));
        list.append(Position::makeSteps(0,0,0,7));
        obj.setSteps(list);
        obj.setAttack(list);
    }
    else if (name == fignames[2]){
        list.append(Position::makeSteps(2,0,1,0));
        list.append(Position::makeSteps(2,0,0,1));
        list.append(Position::makeSteps(0,2,1,0));
        list.append(Position::makeSteps(0,2,0,1));
        list.append(Position::makeSteps(1,0,2,0));
        list.append(Position::makeSteps(0,1,2,0));
        list.append(Position::makeSteps(1,0,0,2));
        list.append(Position::makeSteps(0,1,0,2));
        obj.setSteps(list);
        obj.setAttack(list);
    }
    else if (name == fignames[3]){
        list.append(Position::makeSteps(1,0,1,0));
        list.append(Position::makeSteps(2,0,2,0));
        list.append(Position::makeSteps(3,0,3,0));
        list.append(Position::makeSteps(4,0,4,0));
        list.append(Position::makeSteps(5,0,5,0));
        list.append(Position::makeSteps(6,0,6,0));
        list.append(Position::makeSteps(7,0,7,0));
        list.append(Position::makeSteps(0,1,1,0));
        list.append(Position::makeSteps(0,2,2,0));
        list.append(Position::makeSteps(0,3,3,0));
        list.append(Position::makeSteps(0,4,4,0));
        list.append(Position::makeSteps(0,5,5,0));
        list.append(Position::makeSteps(0,6,6,0));
        list.append(Position::makeSteps(0,7,7,0));
        list.append(Position::makeSteps(1,0,0,1));
        list.append(Position::makeSteps(2,0,0,2));
        list.append(Position::makeSteps(3,0,0,3));
        list.append(Position::makeSteps(4,0,0,4));
        list.append(Position::makeSteps(5,0,0,5));
        list.append(Position::makeSteps(6,0,0,6));
        list.append(Position::makeSteps(7,0,0,7));
        list.append(Position::makeSteps(1,0,0,1));
        list.append(Position::makeSteps(2,0,0,2));
        list.append(Position::makeSteps(3,0,0,3));
        list.append(Position::makeSteps(4,0,0,4));
        list.append(Position::makeSteps(5,0,0,5));
        list.append(Position::makeSteps(6,0,0,6));
        list.append(Position::makeSteps(7,0,0,7));
        obj.setSteps(list);
        obj.setAttack(list);
    }
    else if (name == fignames[4]){
        list.append(Position::makeSteps(1,0,0,0));
        list.append(Position::makeSteps(2,0,0,0));
        list.append(Position::makeSteps(3,0,0,0));
        list.append(Position::makeSteps(4,0,0,0));
        list.append(Position::makeSteps(5,0,0,0));
        list.append(Position::makeSteps(6,0,0,0));
        list.append(Position::makeSteps(7,0,0,0));
        list.append(Position::makeSteps(0,1,0,0));
        list.append(Position::makeSteps(0,2,0,0));
        list.append(Position::makeSteps(0,3,0,0));
        list.append(Position::makeSteps(0,4,0,0));
        list.append(Position::makeSteps(0,5,0,0));
        list.append(Position::makeSteps(0,6,0,0));
        list.append(Position::makeSteps(0,7,0,0));
        list.append(Position::makeSteps(0,0,1,0));
        list.append(Position::makeSteps(0,0,2,0));
        list.append(Position::makeSteps(0,0,3,0));
        list.append(Position::makeSteps(0,0,4,0));
        list.append(Position::makeSteps(0,0,5,0));
        list.append(Position::makeSteps(0,0,6,0));
        list.append(Position::makeSteps(0,0,7,0));
        list.append(Position::makeSteps(0,0,0,1));
        list.append(Position::makeSteps(0,0,0,2));
        list.append(Position::makeSteps(0,0,0,3));
        list.append(Position::makeSteps(0,0,0,4));
        list.append(Position::makeSteps(0,0,0,5));
        list.append(Position::makeSteps(0,0,0,6));
        list.append(Position::makeSteps(0,0,0,7));
        list.append(Position::makeSteps(1,0,1,0));
        list.append(Position::makeSteps(2,0,2,0));
        list.append(Position::makeSteps(3,0,3,0));
        list.append(Position::makeSteps(4,0,4,0));
        list.append(Position::makeSteps(5,0,5,0));
        list.append(Position::makeSteps(6,0,6,0));
        list.append(Position::makeSteps(7,0,7,0));
        list.append(Position::makeSteps(0,1,1,0));
        list.append(Position::makeSteps(0,2,2,0));
        list.append(Position::makeSteps(0,3,3,0));
        list.append(Position::makeSteps(0,4,4,0));
        list.append(Position::makeSteps(0,5,5,0));
        list.append(Position::makeSteps(0,6,6,0));
        list.append(Position::makeSteps(0,7,7,0));
        list.append(Position::makeSteps(1,0,0,1));
        list.append(Position::makeSteps(2,0,0,2));
        list.append(Position::makeSteps(3,0,0,3));
        list.append(Position::makeSteps(4,0,0,4));
        list.append(Position::makeSteps(5,0,0,5));
        list.append(Position::makeSteps(6,0,0,6));
        list.append(Position::makeSteps(7,0,0,7));
        list.append(Position::makeSteps(1,0,0,1));
        list.append(Position::makeSteps(2,0,0,2));
        list.append(Position::makeSteps(3,0,0,3));
        list.append(Position::makeSteps(4,0,0,4));
        list.append(Position::makeSteps(5,0,0,5));
        list.append(Position::makeSteps(6,0,0,6));
        list.append(Position::makeSteps(7,0,0,7));
        obj.setSteps(list);
        obj.setAttack(list);
    }
    else if (name == fignames[5]){
        list.append(Position::makeSteps(1,0,0,0));
        list.append(Position::makeSteps(0,1,0,0));
        list.append(Position::makeSteps(0,0,1,0));
        list.append(Position::makeSteps(0,0,0,1));
        list.append(Position::makeSteps(1,0,1,0));
        list.append(Position::makeSteps(1,0,0,1));
        list.append(Position::makeSteps(0,1,1,0));
        list.append(Position::makeSteps(0,1,0,1));
        obj.setSteps(list);
        obj.setAttack(list);
    }
    return obj;
}




