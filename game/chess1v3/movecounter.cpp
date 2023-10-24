#include "movecounter.h"



MoveCounter::MoveCounter()
{

}

MoveCounter::MoveCounter(const MoveCounter& obj){
    this->list = obj.list;
}

void MoveCounter::put(QString move)
{
    list.append(move);
}

bool MoveCounter::retMove()
{
    if (list.isEmpty() != false){
        list.removeLast();
        return true;
    }
    else return false;
}

MoveCounter& MoveCounter::operator=(const MoveCounter& obj)
{
    this->list.clear();
    this->list = obj.list;
    return *this;
}

void MoveCounter::clear()
{
    list.clear();
}

QVector<QString> MoveCounter::getList() const
{
    return list;
}

void MoveCounter::setList(const QVector<QString> &newList)
{
    list = newList;
}
