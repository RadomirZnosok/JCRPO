#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "binfile.h"
#include "infoplayer.h"
#include "movecounter.h"

#include<QPushButton>
#include<QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, InfoPlayer* player1 = nullptr, InfoPlayer* player2 = nullptr, InfoPlayer* player3 = nullptr, MoveCounter* moveHistory = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    InfoPlayer player1;             // информация игрока1
    InfoPlayer player2;             // информация игрока2
    InfoPlayer player3;             // информация игрока3

    MoveCounter moveHistory;        // история ходов
    bool busyPlace[8][12];          // busy - true; empty - false;
    bool isCurPlace;                // true - нажата фигура, false - не нажата
    int curPlace[2];                // место активированной кнопки

    QPushButton* buttons[8][12];    // ссылки на кнопки
    QLabel* labels[8][12];          // ссылки на объекты с изображениями фигур
};
#endif // MAINWINDOW_H
