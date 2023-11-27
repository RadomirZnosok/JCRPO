#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include "binfile.h"
#include "infoplayer.h"
#include "movecounter.h"
#include "deskplace.h"

#include<QPushButton>
#include<QLabel>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(int curSeq = 0, InfoPlayer* player1 = nullptr, InfoPlayer* player2 = nullptr, InfoPlayer* player3 = nullptr, MoveCounter* moveHistory = nullptr, QWidget *parent = nullptr);
    ~MainWindow();
    void nextPlayerTurn();          // передача очередности хода
    void enablePlayerPlaces();      //
    void enableStepPlaces(int col, int row);

private slots:
    void clickedButton(int col, int row);// A 1

private:
    Ui::MainWindow *ui;

    InfoPlayer players[3];          // информация игроков1
    bool checkmate_players[3];      // шах и мат королю
    bool check_player1[3];          // шах королю

    MoveCounter moveHistory;        // история ходов
    int sequence;                   // очередность хода
    bool isCurPlace;                // true - нажата фигура, false - не нажата
    int curPlace[2];                // место активированной кнопки

    DeskPlace* buttons[8][12];    // ссылки на кнопки
    QPushButton* pictures[8][12];   // ссылки на объекты с изображениями фигур
};
#endif // MAINWINDOW_H
