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
    getNames dialog;
    if (dialog.exec() == QDialog::Accepted) {
        QString string1 = dialog.string1();
        QString string2 = dialog.string2();
        QString string3 = dialog.string3();

        if (string1.isEmpty() || string2.isEmpty() || string3.isEmpty()){
            QMessageBox::warning(this, "Ошибка", "Были введены не все имена игроков.");
            return;
        }
    }
    // read progress
    // run game
}


void StartWindow::on_pb_createGame_clicked()
{
    getNames dialog;
    QString string1;
    QString string2;
    QString string3;
    if (dialog.exec() == QDialog::Accepted) {
        string1 = dialog.string1();
        string2 = dialog.string2();
        string3 = dialog.string3();

        if (string1.isEmpty() || string2.isEmpty() || string3.isEmpty()){
            QMessageBox::warning(this, "Ошибка", "Были введены не все имена игроков.");
            return;
        }
    }
    InfoPlayer player1(string1);
    InfoPlayer player2(string2);
    InfoPlayer player3(string3);
    // run game
}

