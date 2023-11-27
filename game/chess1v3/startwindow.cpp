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
    else return;
    InfoPlayer *player1 = new InfoPlayer(string1, "A1");
    InfoPlayer *player2 = new InfoPlayer(string2, "H8");
    InfoPlayer *player3 = new InfoPlayer(string3, "H12");
    // run game
    MainWindow game(0, player1, player2, player3);
    game.setWindowTitle("Chess1v3");
    game.show();

    delete player1;
    delete player2;
    delete player3;
}

