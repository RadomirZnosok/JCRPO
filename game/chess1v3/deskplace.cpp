#include "deskplace.h"

int DeskPlace::getPlayer() const
{
    return player;
}

void DeskPlace::setPlayer(int newPlayer)
{
    player = newPlayer;
}

DeskPlace::DeskPlace(QWidget* parent, QPushButton* mybutton, MainWindow* win)
{
    this->fd = win;
    setObjectName(mybutton->objectName());
    setGeometry(mybutton->geometry());
    setText(mybutton->text());
    figure = nullptr;
    player = -1;
}

bool DeskPlace::isEmpty(){
    if (!figure){
        return true;
    }
    else return false;
}


void DeskPlace::setVisible(bool flag){
    setEnabled(flag);
}


void DeskPlace::setFigure(Figure* obj, int player){
    figure = obj;
    this->player = player;
}

Figure* DeskPlace::getFigure(){
    return this->figure;
}


