#ifndef MOVECOUNTER_H
#define MOVECOUNTER_H

#include "QList"
#include "QString"
#include "qstringlist.h"

class MoveCounter
{
private:
    QVector<QString> list;

public:
    MoveCounter();
    MoveCounter(const MoveCounter& obj);

    MoveCounter& operator=(const MoveCounter& obj);
    void put(QString move);
    bool retMove();
    void clear();

    QVector<QString> getList() const;
    void setList(const QVector<QString> &newList);
};

#endif // MOVECOUNTER_H
