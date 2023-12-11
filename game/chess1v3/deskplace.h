#ifndef DESKPLACE_H
#define DESKPLACE_H

#include <QPushButton>


class MainWindow;

class DeskPlace: public QPushButton
{
private:
    int figure;
    QPushButton* picture;
    int player;
    QString name;


public:
    DeskPlace(QWidget* parent, QPushButton* button, QPushButton* pict, QString nname);
    void setPicture(QString path);
    bool isEmpty();
    void set_Visible(bool flag = true);
    void setFigure(int obj = -1, int player = -1);
    int getFigure();
    int getPlayer() const;
    void setPlayer(int newPlayer);

    bool checkPlace(struct steps offs);
    QString getName() const;
};

#endif // DESKPLACE_H




