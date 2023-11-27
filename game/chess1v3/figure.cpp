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

