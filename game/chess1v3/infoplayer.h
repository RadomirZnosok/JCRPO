#ifndef INFOPLAYER_H
#define INFOPLAYER_H

#include <QList>
#include <QString>
#include "figure.h"
#include "position.h"
#include "header.h"

class InfoPlayer
{
private:
    QString playerName;
    QList<Figure> listFigure;
    short score;

public:
    InfoPlayer(QString player, QString startPos, int numplayer);
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
};

#endif // INFOPLAYER_H
