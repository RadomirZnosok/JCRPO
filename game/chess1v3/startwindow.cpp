#include "startwindow.h"
#include "ui_startwindow.h"

StartWindow::StartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);


}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::on_pb_loadGame_clicked()
{

}


void StartWindow::on_pb_createGame_clicked()
{

}

