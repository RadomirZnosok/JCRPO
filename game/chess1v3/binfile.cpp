#include "binfile.h"

#include "QString"





BinFile::BinFile(QString filename)
    :filename(filename)
{


}

BinFile::~BinFile(){

}

void BinFile::setFilename(const QString &newFilename)
{
    filename = newFilename;
}


void BinFile::writeProgress(){
    QFile file(filename);
    if (!file.exists()){

        return;
    }
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)){

    }
}


void BinFile::readProgress(){
    QFile file(filename);
    if (!file.exists()){

        return;
    }
}


void BinFile::writeFigures(){
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        QTextStream out(&file);
        Q_FOREACH(Figure elemFig, this->listFigure){
            writeFigure(out, elemFig);
            out << "\n";
        }
        file.close();
    }
}

void BinFile::readFigures(){
    QFile file(filename);
    if (!file.exists()){

        return;
    }
    if (file.open(QIODevice::ReadOnly)){
        this->listFigure.clear();
        QTextStream in(&file);
        QString line;
        while (!(line = in.readLine(0)).isEmpty()){
            QStringList figureStr = line.split(" ");
//            Figure newFig(Figure::fromQStringList(figureStr));
//            this->listFigure.append(newFig);
            line.clear();
        }
        file.close();
    }
}

void BinFile::writeFigure(QTextStream& out, const Figure& obj){
/*    out << obj.getName() << " ";
    if (obj.exist){
        out << "1 ";
    }
    else {
        out << "0 ";
    }
    Q_FOREACH(short elemStep, obj.getSteps()){
        out << elemStep << " ";
    }
    QList<short> list = obj.getAttack();
    for (int i = 0; i < list.size() - 1; i++){
        out << list.at(i) << " ";
    }
    out << list.at(list.size() - 1);*/
}

void BinFile::writePlayers(){
    QFile file(filename);
    if (!file.exists()){

        return;
    }
    if (file.open(QIODevice::ReadWrite)){
        QTextStream out(&file);
        Q_FOREACH(InfoPlayer player, players){
            out << player.getName() << "}";
            QList<Figure> list = player.getListFigure();
            for (int i = 0; i < list.size() - 1; i++){
                writeFigure(out, list.at(i));
                out << "|";
            }
            writeFigure(out, list.at(list.size() - 1));
            out << "\n";
        }
        file.close();
    }
}

void BinFile::readPlayers(){
/*    QFile file(filename);
    if (!file.exists()){

        return;
    }
    if (file.open(QIODevice::ReadOnly)){
        this->players.clear();
        QTextStream in(&file);
        QString line;
        while (!(line = in.readLine(0)).isEmpty()){
            QStringList playerStr = line.split("}");
            InfoPlayer newPlayer(playerStr[0]);
            QStringList playerFigures = playerStr[1].split("|");
            for (int i = 1; i < 17; i++) {
                QString elemFig = playerFigures[i];
                QStringList figureStr = elemFig.split(" ");
                Figure newFig(Figure::fromQStringList(figureStr));
                newPlayer.setFigure(newFig, i-1);
            }
            QStringList playerFigPositions = playerStr[2].split("|");

            this->players.append(newPlayer);
            line.clear();
        }
        file.close();
    }
*/
}

QList<Figure> BinFile::getListFigure() const
{
    return listFigure;
}

void BinFile::setListFigure(const QList<Figure> &newListFigure)
{
    listFigure = newListFigure;
}

MoveCounter BinFile::getHistory() const
{
    return this->history;
}

void BinFile::setHistory(const MoveCounter &newHistory)
{
    this->history = newHistory;
}

InfoPlayer BinFile::getPlayer(int i) const {
    return this->players[i];
}

void BinFile::setPlayer(const InfoPlayer &newPlayer, int i)
{
    this->players.insert(i, newPlayer);
}




