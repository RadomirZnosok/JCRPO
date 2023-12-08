#include "deskplace.h"

int DeskPlace::getPlayer() const
{
    return player;
}

void DeskPlace::setPlayer(int newPlayer)
{
    player = newPlayer;
}


QString DeskPlace::getName() const
{
    return name;
}

DeskPlace::DeskPlace(QWidget* parent, QPushButton* mybutton, QPushButton* pict, QString nname)
{
    this->setParent(parent);
    picture = pict;
    name = nname;
    setObjectName(mybutton->objectName());
    setGeometry(mybutton->geometry());
    setText(mybutton->text());
    figure = nullptr;
    player = -1;
    up = nullptr;
    down = nullptr;
    right = nullptr;
    left = nullptr;

}

void DeskPlace::setPicture(QString path)
{
    if (path.isEmpty()){
        this->picture->setIcon(QIcon());
    }
    else {
        this->picture->setIcon(QIcon(path));
    }
}

bool DeskPlace::isEmpty(){
    if (!figure){
        return true;
    }
    else return false;
}


void DeskPlace::set_Visible(bool flag){
    setEnabled(flag);
    if (flag && !this->figure) {
        this->show();
    }
    else if (!flag){
        this->hide();
    }

}


void DeskPlace::setFigure(Figure* obj, int player){
    figure = obj;
    this->player = player;
}

Figure* DeskPlace::getFigure(){
    return this->figure;
}


