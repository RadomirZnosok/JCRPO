#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, InfoPlayer* player1, InfoPlayer* player2, InfoPlayer* player3, MoveCounter* moveHistory)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if (player1){
        this->player1 = *player1;
        ui->l_PName1->setText(player1->getName());
    }
    else {

    }
    if (player2){
        this->player2 = *player2;
        ui->l_PName2->setText(player2->getName());
    }
    else {

    }
    if (player3){
        this->player3 = *player3;
        ui->l_PName3->setText(player3->getName());
    }
    else {

    }
    if (moveHistory){
        this->moveHistory = *moveHistory;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

