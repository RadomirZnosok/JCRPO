#include "infoplayer.h"



InfoPlayer::InfoPlayer(QString newName, QString startPos, int numplayer)
    :playerName(newName)
{
    Figure obj = Figure(true);
    this->playerName = newName;

    if (numplayer == 0){
        obj = Figure::makeFigure(fignames[0], "A2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "B2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "C2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "D2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "E2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "F2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "G2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "H2", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[1], "A1", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[1], "H1", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[2], "B1", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[2], "G1", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[3], "C1", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[3], "F1", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[4], "D1", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[5], "E1", numplayer);
        this->listFigure.append(obj);
    }
    else if (numplayer == 1){
        obj = Figure::makeFigure(fignames[0], "A7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "B7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "C7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "D7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "E7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "F7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "G7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "H7", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[1], "A8", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[1], "H8", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[2], "B8", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[2], "G8", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[3], "C8", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[3], "F8", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[4], "E8", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[5], "D8", numplayer);
        this->listFigure.append(obj);
    }
    else if (numplayer == 2){
        obj = Figure::makeFigure(fignames[0], "A11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "B11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "C11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "D11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "E11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "F11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "G11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[0], "H11", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[1], "A12", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[1], "H12", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[2], "B12", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[2], "G12", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[3], "C12", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[3], "F12", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[4], "E12", numplayer);
        this->listFigure.append(obj);
        obj = Figure::makeFigure(fignames[5], "D12", numplayer);
        this->listFigure.append(obj);
    }

    this->score = 0;
}

InfoPlayer::InfoPlayer(InfoPlayer* player){
    if (player && player != this){
        this->playerName = player->getName();
        listFigure.clear();
        for (int i = 0; i < 16; i++){
            this->listFigure.append(player->getFigure(i));
        }
        score = player->score;
    }
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
    listFigure.clear();
    for (int i = 0; i < 16; i++){
        this->listFigure.append(obj.listFigure.at(i));
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
    listFigure.takeAt(num);
    this->listFigure.insert(num, figure);

}

QList<Figure> InfoPlayer::getListFigure() const
{
    return listFigure;
}

void InfoPlayer::setListFigure(const QList<Figure> &newListFigure)
{
    listFigure = newListFigure;
}





