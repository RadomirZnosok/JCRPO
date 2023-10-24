#include "figure.h"

Figure::Figure(bool exist, QString nname)
    :name(nname), exist(exist)
{

}

Figure::Figure(const Figure& obj)
    :name(obj.name)
{
    this->setSteps(obj.getSteps());
    this->setAttack(obj.getAttack());
}

Figure::~Figure(){

}

Figure& Figure::operator=(const Figure& obj){
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

QList<short> Figure::getSteps() const {
    QList<short> list = QList<short>(move.n);
    list.append(move.ne);
    list.append(move.nw);
    list.append(move.s);
    list.append(move.se);
    list.append(move.sw);
    list.append(move.e);
    list.append(move.w);
    return list;
}

void Figure::setSteps(QList<short> list){
    move.n = list.at(0);
    move.ne = list.at(1);
    move.nw = list.at(2);
    move.s = list.at(3);
    move.se = list.at(4);
    move.sw = list.at(5);
    move.e = list.at(6);
    move.w = list.at(7);
}

QList<short> Figure::getAttack() const {
    QList<short> list = QList<short>(move.n);
    list.append(move.ne);
    list.append(move.nw);
    list.append(move.s);
    list.append(move.se);
    list.append(move.sw);
    list.append(move.e);
    list.append(move.w);
    return list;
}

void Figure::setAttack(QList<short> list){
    hit.n = list.at(0);
    hit.ne = list.at(1);
    hit.nw = list.at(2);
    hit.s = list.at(3);
    hit.se = list.at(4);
    hit.sw = list.at(5);
    hit.e = list.at(6);
    hit.w = list.at(7);
}

Figure Figure::fromQStringList(const QStringList& figureStr){
    Figure newFig;
    newFig.setName(figureStr.at(0));
    if (figureStr.at(1) == "1"){
        newFig.exist = true;
    }
    else {
        newFig.exist = false;
    }
    QList<short> list;
    list.append(figureStr.at(2).toShort(nullptr, 10));
    list.append(figureStr.at(3).toShort(nullptr, 10));
    list.append(figureStr.at(4).toShort(nullptr, 10));
    list.append(figureStr.at(5).toShort(nullptr, 10));
    list.append(figureStr.at(6).toShort(nullptr, 10));
    list.append(figureStr.at(7).toShort(nullptr, 10));
    list.append(figureStr.at(8).toShort(nullptr, 10));
    list.append(figureStr.at(9).toShort(nullptr, 10));
    newFig.setSteps(list);
    list.clear();
    list.append(figureStr.at(10).toShort(nullptr, 10));
    list.append(figureStr.at(11).toShort(nullptr, 10));
    list.append(figureStr.at(12).toShort(nullptr, 10));
    list.append(figureStr.at(13).toShort(nullptr, 10));
    list.append(figureStr.at(14).toShort(nullptr, 10));
    list.append(figureStr.at(15).toShort(nullptr, 10));
    list.append(figureStr.at(16).toShort(nullptr, 10));
    list.append(figureStr.at(17).toShort(nullptr, 10));
    newFig.setAttack(list);
    return newFig;
}

