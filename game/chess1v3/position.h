#ifndef POSITION_H
#define POSITION_H

#include "QChar"
#include <QString>

struct steps
{
    char n;        // вперед
    char s;        // назад
    char e;        // вправо
    char w;        // влево
};


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
    Position(char x = 'A', short y = 1);
    Position(const QString &obj);//
    Position(const Position& obj);

    Position getPos() const;
    void setPos(const Position& obj);
    void setPosStr(QString obj);
    QString toString();

    void move(struct steps &offset);//
    Position operator+(struct steps &offset);//
    struct steps operator-(const Position& obj);
    Position& operator=(const Position& obj);
    bool operator==(const Position& obj);
    bool operator==(const QString& obj);

    bool checkPos(const struct steps &offs) const;
    static struct steps makeSteps(int N, int S, int W, int E);//
};

#endif // POSITION_H
