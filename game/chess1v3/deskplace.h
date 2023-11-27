#ifndef DESKPLACE_H
#define DESKPLACE_H

#include <QPushButton>
#include "figure.h"


class MainWindow;

class DeskPlace: public QPushButton
{
private:
    Figure* figure;
    int player;
    MainWindow* fd;

public:
    DeskPlace(QWidget* parent, QPushButton* button, MainWindow* window);
    bool isEmpty();
    void setVisible(bool flag = true);
    void setFigure(Figure* obj, int player = -1);
    Figure* getFigure();
    int getPlayer() const;
    void setPlayer(int newPlayer);
};

#endif // DESKPLACE_H




