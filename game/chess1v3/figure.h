#ifndef FIGURE_H
#define FIGURE_H

#include <QString>
#include <QList>
#include "position.h"
#include "header.h"

#include <QTextStream>




class Figure: public Position
{
private:
    QString name;       // имя
    QList<struct steps> moves;  // движения
    QList<struct steps> hits;  // атаки

public:
    bool exist;

    Figure(Position pos, QString nname = "", bool exist = true);
    Figure(const Figure& obj);
    ~Figure();

    Figure& operator=(const Figure& obj);
    QString getName() const;
    void setName(QString newName);

    QList<struct steps> getSteps() const;
    void setSteps(QList<struct steps> list);
    QList<struct steps> getAttack() const;
    void setAttack(QList<struct steps> list);

    bool getExist() const;
    void setExist(bool newExist);
    static Figure makeFigure(QString name, QString Pos, int player);
};




#endif // FIGURE_H
