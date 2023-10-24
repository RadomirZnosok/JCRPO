#ifndef FIGURE_H
#define FIGURE_H

#include <QString>
#include <QList>

#include <QTextStream>

struct steps
{
    short n;        // север // вперед
    short ne;       // северо-восток
    short nw;       // северо-запад
    short s;        // юг // назад
    short se;       // юго-восток
    short sw;       // юго-запад
    short e;        // восток // вправо
    short w;        // запад // влево
};


struct attack{
    short n;        // север // вперед
    short ne;       // северо-восток
    short nw;       // северо-запад
    short s;        // юг // назад
    short se;       // юго-восток
    short sw;       // юго-запад
    short e;        // восток // вправо
    short w;        // запад // влево
};


class Figure
{
private:
    QString name;       // имя
    struct steps move;  // движение
    struct attack hit;  // атака

public:
    bool exist;
    Figure(bool exist = false, QString nname = "");
    Figure(const Figure& obj);
    ~Figure();

    Figure& operator=(const Figure& obj);
    QString getName() const;
    void setName(QString newName);
    QList<short> getSteps() const;
    void setSteps(QList<short> list);
    QList<short> getAttack() const;
    void setAttack(QList<short> list);

    static Figure fromQStringList(const QStringList& list);
};




#endif // FIGURE_H
