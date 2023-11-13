#ifndef INFOPLAYER_H
#define INFOPLAYER_H

#include <QList>
#include <QString>
#include "figure.h"
#include "position.h"

class InfoPlayer
{
private:
    QString playerName;
    QList<Figure> listFigure;
    QList<Position> listPos;
    short score;

public:
    InfoPlayer(QString player);
    InfoPlayer(InfoPlayer* player = nullptr);
    InfoPlayer(const InfoPlayer& obj);
    ~InfoPlayer();

    InfoPlayer& operator=(const InfoPlayer& obj);

    QString getName() const;
    void setName(const QString &newName);

    Figure getFigure(int i) const;
    void setFigure(const Figure& figure, int num);

    QList<Figure> getListFigure() const;
    void setListFigure(const QList<Figure> &newListFigure);
    QList<Position> getListPos() const;
    void setListPos(const QList<Position> &newListPos);
};

#endif // INFOPLAYER_H
