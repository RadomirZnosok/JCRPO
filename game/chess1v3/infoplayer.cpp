#include "infoplayer.h"







InfoPlayer::InfoPlayer(QString newName)
    :playerName(newName)
{
    Figure obj = Figure(true);
    this->playerName = newName;
    obj.setName("пешка");
    for (int i = 0; i < 8; i++){
        this->listFigure.append(obj);
    }
    obj.setName("ладья");
    for (int i = 0; i < 2; i++){
        this->listFigure.append(obj);
    }
    obj.setName("конь");
    for (int i = 0; i < 2; i++){
        this->listFigure.append(obj);
    }
    obj.setName("слон");
    for (int i = 0; i < 2; i++){
        this->listFigure.append(obj);
    }
    obj.setName("ферзь");
    this->listFigure.append(obj);
    obj.setName("король");
    this->listFigure.append(obj);

    this->score = 0;
}

InfoPlayer::InfoPlayer(const InfoPlayer& obj)
    :playerName(obj.getName()), listFigure(obj.listFigure)
{
    score = 0;
}

InfoPlayer::~InfoPlayer(){
    this->listFigure.clear();
}

InfoPlayer& InfoPlayer::operator=(const InfoPlayer& obj){
    this->playerName = obj.playerName;
    for (int i = 0; i < 16; i++){
        this->listFigure[i] = obj.listFigure.at(i);
    }
    score = obj.score;
    return *this;
}

QString InfoPlayer::getName() const {
    return this->playerName;
}

void InfoPlayer::setName(const QString& newName){
    this->playerName = newName;
}

Figure InfoPlayer::getFigure(int i) const {
    return this->listFigure.at(i);
}

void InfoPlayer::setFigure(const Figure& figure, int num){
    this->listFigure[num] = figure;

}

QList<Figure> InfoPlayer::getListFigure() const
{
    return listFigure;
}

void InfoPlayer::setListFigure(const QList<Figure> &newListFigure)
{
    listFigure = newListFigure;
}

QList<Position> InfoPlayer::getListPos() const
{
    return listPos;
}

void InfoPlayer::setListPos(const QList<Position> &newListPos)
{
    listPos = newListPos;
}



