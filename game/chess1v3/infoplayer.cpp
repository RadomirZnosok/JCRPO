#include "infoplayer.h"



InfoPlayer::InfoPlayer(QString newName, QString startPos)
    :playerName(newName)
{
    bool a1 = startPos.compare("A01") == 0 ? true : false;
    QChar idY = startPos.at(2), idX = startPos.at(0);
    QList<struct steps> list;
    Figure obj = Figure(true);
    this->playerName = newName;

    obj.setName(fignames[0]);
    if (a1){
        list.append(Position::makeSteps(2,0,0,0));
        list.append(Position::makeSteps(1,0,0,0));
    }
    else {
        list.append(Position::makeSteps(0,2,0,0));
        list.append(Position::makeSteps(0,1,0,0));
    }
    obj.setSteps(list);
    list.clear();
    if (a1){
        list.append(Position::makeSteps(1,0,1,0));
        list.append(Position::makeSteps(1,0,0,1));
    }
    else {
        list.append(Position::makeSteps(0,1,1,0));
        list.append(Position::makeSteps(0,1,0,1));
    }
    obj.setAttack(list);
    list.clear();
    {
        QChar X = idX, Y = a1 ? QChar(idY.unicode()+1) : QChar(idY.unicode()-1);
        for (int i = 0; i < 8; i++){
            obj.setPosStr(QString("") + X + startPos.at(1) + Y);
            this->listFigure.append(obj);
            a1 ? X = QChar(X.unicode()+1) : X = QChar(X.unicode()-1);
        }
    }

    obj.setName(fignames[1]);
    list.append(Position::makeSteps(1,0,0,0));
    list.append(Position::makeSteps(2,0,0,0));
    list.append(Position::makeSteps(3,0,0,0));
    list.append(Position::makeSteps(4,0,0,0));
    list.append(Position::makeSteps(5,0,0,0));
    list.append(Position::makeSteps(6,0,0,0));
    list.append(Position::makeSteps(7,0,0,0));
    list.append(Position::makeSteps(8,0,0,0));
    list.append(Position::makeSteps(9,0,0,0));
    list.append(Position::makeSteps(10,0,0,0));
    list.append(Position::makeSteps(11,0,0,0));
    list.append(Position::makeSteps(0,1,0,0));
    list.append(Position::makeSteps(0,2,0,0));
    list.append(Position::makeSteps(0,3,0,0));
    list.append(Position::makeSteps(0,4,0,0));
    list.append(Position::makeSteps(0,5,0,0));
    list.append(Position::makeSteps(0,6,0,0));
    list.append(Position::makeSteps(0,7,0,0));
    list.append(Position::makeSteps(0,8,0,0));
    list.append(Position::makeSteps(0,9,0,0));
    list.append(Position::makeSteps(0,10,0,0));
    list.append(Position::makeSteps(0,11,0,0));
    list.append(Position::makeSteps(0,0,1,0));
    list.append(Position::makeSteps(0,0,2,0));
    list.append(Position::makeSteps(0,0,3,0));
    list.append(Position::makeSteps(0,0,4,0));
    list.append(Position::makeSteps(0,0,5,0));
    list.append(Position::makeSteps(0,0,6,0));
    list.append(Position::makeSteps(0,0,7,0));
    list.append(Position::makeSteps(0,0,8,0));
    list.append(Position::makeSteps(0,0,9,0));
    list.append(Position::makeSteps(0,0,10,0));
    list.append(Position::makeSteps(0,0,11,0));
    list.append(Position::makeSteps(0,0,0,1));
    list.append(Position::makeSteps(0,0,0,2));
    list.append(Position::makeSteps(0,0,0,3));
    list.append(Position::makeSteps(0,0,0,4));
    list.append(Position::makeSteps(0,0,0,5));
    list.append(Position::makeSteps(0,0,0,6));
    list.append(Position::makeSteps(0,0,0,7));
    list.append(Position::makeSteps(0,0,0,8));
    list.append(Position::makeSteps(0,0,0,9));
    list.append(Position::makeSteps(0,0,0,10));
    list.append(Position::makeSteps(0,0,0,11));
    obj.setSteps(list);
    obj.setAttack(list);
    list.clear();
    {
        QChar X1 = 'A', X2 = 'H';
        obj.setPosStr(QString("") + X1 + startPos.at(1) + idY);
        this->listFigure.append(obj);
        obj.setPosStr(QString("") + X2 + startPos.at(1) + idY);
        this->listFigure.append(obj);
    }

    obj.setName(fignames[2]);
    list.append(Position::makeSteps(2,0,1,0));
    list.append(Position::makeSteps(2,0,0,1));
    list.append(Position::makeSteps(0,2,1,0));
    list.append(Position::makeSteps(0,2,0,1));
    list.append(Position::makeSteps(1,0,2,0));
    list.append(Position::makeSteps(0,1,2,0));
    list.append(Position::makeSteps(1,0,0,2));
    list.append(Position::makeSteps(0,1,0,2));
    obj.setSteps(list);
    obj.setAttack(list);
    list.clear();
    {
        QChar X1 = 'B', X2 = 'G';
        obj.setPosStr(QString("") + X1 + startPos.at(1) + idY);
        this->listFigure.append(obj);
        obj.setPosStr(QString("") + X2 + startPos.at(1) + idY);
        this->listFigure.append(obj);
    }

    obj.setName(fignames[3]);
    list.append(Position::makeSteps(1,0,1,0));
    list.append(Position::makeSteps(2,0,2,0));
    list.append(Position::makeSteps(3,0,3,0));
    list.append(Position::makeSteps(4,0,4,0));
    list.append(Position::makeSteps(5,0,5,0));
    list.append(Position::makeSteps(6,0,6,0));
    list.append(Position::makeSteps(7,0,7,0));
    list.append(Position::makeSteps(8,0,8,0));
    list.append(Position::makeSteps(9,0,9,0));
    list.append(Position::makeSteps(10,0,10,0));
    list.append(Position::makeSteps(11,0,11,0));
    list.append(Position::makeSteps(0,1,1,0));
    list.append(Position::makeSteps(0,2,2,0));
    list.append(Position::makeSteps(0,3,3,0));
    list.append(Position::makeSteps(0,4,4,0));
    list.append(Position::makeSteps(0,5,5,0));
    list.append(Position::makeSteps(0,6,6,0));
    list.append(Position::makeSteps(0,7,7,0));
    list.append(Position::makeSteps(0,8,8,0));
    list.append(Position::makeSteps(0,9,9,0));
    list.append(Position::makeSteps(0,10,10,0));
    list.append(Position::makeSteps(0,11,11,0));
    list.append(Position::makeSteps(1,0,0,1));
    list.append(Position::makeSteps(2,0,0,2));
    list.append(Position::makeSteps(3,0,0,3));
    list.append(Position::makeSteps(4,0,0,4));
    list.append(Position::makeSteps(5,0,0,5));
    list.append(Position::makeSteps(6,0,0,6));
    list.append(Position::makeSteps(7,0,0,7));
    list.append(Position::makeSteps(8,0,0,8));
    list.append(Position::makeSteps(9,0,0,9));
    list.append(Position::makeSteps(10,0,0,10));
    list.append(Position::makeSteps(11,0,0,11));
    list.append(Position::makeSteps(1,0,0,1));
    list.append(Position::makeSteps(2,0,0,2));
    list.append(Position::makeSteps(3,0,0,3));
    list.append(Position::makeSteps(4,0,0,4));
    list.append(Position::makeSteps(5,0,0,5));
    list.append(Position::makeSteps(6,0,0,6));
    list.append(Position::makeSteps(7,0,0,7));
    list.append(Position::makeSteps(8,0,0,8));
    list.append(Position::makeSteps(9,0,0,9));
    list.append(Position::makeSteps(10,0,0,10));
    list.append(Position::makeSteps(11,0,0,11));
    obj.setSteps(list);
    obj.setAttack(list);
    list.clear();
    {
        QChar X1 = 'C', X2 = 'F';
        obj.setPosStr(QString("") + X1 + startPos.at(1) + idY);
        this->listFigure.append(obj);
        obj.setPosStr(QString("") + X2 + startPos.at(1) + idY);
        this->listFigure.append(obj);
    }

    obj.setName(fignames[4]);
    list.append(Position::makeSteps(1,0,0,0));
    list.append(Position::makeSteps(2,0,0,0));
    list.append(Position::makeSteps(3,0,0,0));
    list.append(Position::makeSteps(4,0,0,0));
    list.append(Position::makeSteps(5,0,0,0));
    list.append(Position::makeSteps(6,0,0,0));
    list.append(Position::makeSteps(7,0,0,0));
    list.append(Position::makeSteps(8,0,0,0));
    list.append(Position::makeSteps(9,0,0,0));
    list.append(Position::makeSteps(10,0,0,0));
    list.append(Position::makeSteps(11,0,0,0));
    list.append(Position::makeSteps(0,1,0,0));
    list.append(Position::makeSteps(0,2,0,0));
    list.append(Position::makeSteps(0,3,0,0));
    list.append(Position::makeSteps(0,4,0,0));
    list.append(Position::makeSteps(0,5,0,0));
    list.append(Position::makeSteps(0,6,0,0));
    list.append(Position::makeSteps(0,7,0,0));
    list.append(Position::makeSteps(0,8,0,0));
    list.append(Position::makeSteps(0,9,0,0));
    list.append(Position::makeSteps(0,10,0,0));
    list.append(Position::makeSteps(0,11,0,0));
    list.append(Position::makeSteps(0,0,1,0));
    list.append(Position::makeSteps(0,0,2,0));
    list.append(Position::makeSteps(0,0,3,0));
    list.append(Position::makeSteps(0,0,4,0));
    list.append(Position::makeSteps(0,0,5,0));
    list.append(Position::makeSteps(0,0,6,0));
    list.append(Position::makeSteps(0,0,7,0));
    list.append(Position::makeSteps(0,0,8,0));
    list.append(Position::makeSteps(0,0,9,0));
    list.append(Position::makeSteps(0,0,10,0));
    list.append(Position::makeSteps(0,0,11,0));
    list.append(Position::makeSteps(0,0,0,1));
    list.append(Position::makeSteps(0,0,0,2));
    list.append(Position::makeSteps(0,0,0,3));
    list.append(Position::makeSteps(0,0,0,4));
    list.append(Position::makeSteps(0,0,0,5));
    list.append(Position::makeSteps(0,0,0,6));
    list.append(Position::makeSteps(0,0,0,7));
    list.append(Position::makeSteps(0,0,0,8));
    list.append(Position::makeSteps(0,0,0,9));
    list.append(Position::makeSteps(0,0,0,10));
    list.append(Position::makeSteps(0,0,0,11));
    list.append(Position::makeSteps(1,0,1,0));
    list.append(Position::makeSteps(2,0,2,0));
    list.append(Position::makeSteps(3,0,3,0));
    list.append(Position::makeSteps(4,0,4,0));
    list.append(Position::makeSteps(5,0,5,0));
    list.append(Position::makeSteps(6,0,6,0));
    list.append(Position::makeSteps(7,0,7,0));
    list.append(Position::makeSteps(8,0,8,0));
    list.append(Position::makeSteps(9,0,9,0));
    list.append(Position::makeSteps(10,0,10,0));
    list.append(Position::makeSteps(11,0,11,0));
    list.append(Position::makeSteps(0,1,1,0));
    list.append(Position::makeSteps(0,2,2,0));
    list.append(Position::makeSteps(0,3,3,0));
    list.append(Position::makeSteps(0,4,4,0));
    list.append(Position::makeSteps(0,5,5,0));
    list.append(Position::makeSteps(0,6,6,0));
    list.append(Position::makeSteps(0,7,7,0));
    list.append(Position::makeSteps(0,8,8,0));
    list.append(Position::makeSteps(0,9,9,0));
    list.append(Position::makeSteps(0,10,10,0));
    list.append(Position::makeSteps(0,11,11,0));
    list.append(Position::makeSteps(1,0,0,1));
    list.append(Position::makeSteps(2,0,0,2));
    list.append(Position::makeSteps(3,0,0,3));
    list.append(Position::makeSteps(4,0,0,4));
    list.append(Position::makeSteps(5,0,0,5));
    list.append(Position::makeSteps(6,0,0,6));
    list.append(Position::makeSteps(7,0,0,7));
    list.append(Position::makeSteps(8,0,0,8));
    list.append(Position::makeSteps(9,0,0,9));
    list.append(Position::makeSteps(10,0,0,10));
    list.append(Position::makeSteps(11,0,0,11));
    list.append(Position::makeSteps(1,0,0,1));
    list.append(Position::makeSteps(2,0,0,2));
    list.append(Position::makeSteps(3,0,0,3));
    list.append(Position::makeSteps(4,0,0,4));
    list.append(Position::makeSteps(5,0,0,5));
    list.append(Position::makeSteps(6,0,0,6));
    list.append(Position::makeSteps(7,0,0,7));
    list.append(Position::makeSteps(8,0,0,8));
    list.append(Position::makeSteps(9,0,0,9));
    list.append(Position::makeSteps(10,0,0,10));
    list.append(Position::makeSteps(11,0,0,11));
    obj.setSteps(list);
    obj.setAttack(list);
    list.clear();
    {
        QChar X = a1 ? QChar('D') : QChar('E');
        obj.setPosStr(QString("") + X + startPos.at(1) + idY);
        this->listFigure.append(obj);
    }

    this->listFigure.append(obj);
    obj.setName(fignames[5]);
    list.append(Position::makeSteps(1,0,0,0));
    list.append(Position::makeSteps(0,1,0,0));
    list.append(Position::makeSteps(0,0,1,0));
    list.append(Position::makeSteps(0,0,0,1));
    list.append(Position::makeSteps(1,0,1,0));
    list.append(Position::makeSteps(1,0,0,1));
    list.append(Position::makeSteps(0,1,1,0));
    list.append(Position::makeSteps(0,1,0,1));
    obj.setAttack(list);
    list.append(Position::makeSteps(0,0,2,0));
    list.append(Position::makeSteps(0,0,0,2));
    obj.setSteps(list);
    {
        QChar X = a1 ? QChar('E') : QChar('D');
        obj.setPosStr(QString("") + X + startPos.at(1) + idY);
        this->listFigure.append(obj);
    }
    this->listFigure.append(obj);

    this->score = 0;
}

InfoPlayer::InfoPlayer(InfoPlayer* player){
    if (player && player != this){
        this->playerName = player->getName();
        for (int i = 0; i < 16; i++){
            this->listFigure[i] = player->getFigure(i);
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





