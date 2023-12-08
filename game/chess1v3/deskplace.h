#ifndef DESKPLACE_H
#define DESKPLACE_H

#include <QPushButton>
#include "figure.h"


class MainWindow;

class DeskPlace: public QPushButton
{
private:
    Figure* figure;
    QPushButton* picture;
    int player;
    QString name;


public:
    DeskPlace(QWidget* parent, QPushButton* button, QPushButton* pict, QString nname);
    void setPicture(QString path);
    bool isEmpty();
    void set_Visible(bool flag = true);
    void setFigure(Figure* obj, int player = -1);
    Figure* getFigure();
    int getPlayer() const;
    void setPlayer(int newPlayer);

    bool checkPlace(struct steps offs);


    DeskPlace* up;
    DeskPlace* down;
    DeskPlace* right;
    DeskPlace* left;
    QString getName() const;
};

#endif // DESKPLACE_H




