#ifndef BINFILE_H
#define BINFILE_H

#include "infoplayer.h"
#include "movecounter.h"
#include <QString>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QStringList>

class BinFile
{
private:
    QString filename;
    QList<InfoPlayer> players;
    MoveCounter history;
    QList<Figure> listFigure;

public:
    BinFile(QString filename = "");
    ~BinFile();

    void writeProgress();
    void readProgress();
    void writeFigures();
    void readFigures();
    void writePlayers();
    void readPlayers();

    InfoPlayer createPlayer(QString name = "");

    void writeFigure(QTextStream& out, const Figure& obj);
//    void readFigure();

    void setFilename(const QString &newFilename);

    QList<Figure> getListFigure() const;
    void setListFigure(const QList<Figure> &newListFigure);

    MoveCounter getHistory() const;
    void setHistory(const MoveCounter &newHistory);

    InfoPlayer getPlayer(int i) const;
    void setPlayer(const InfoPlayer &newPlayer, int i);
};

#endif // BINFILE_H
