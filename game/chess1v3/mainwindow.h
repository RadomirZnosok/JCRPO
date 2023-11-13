#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "binfile.h"
#include "infoplayer.h"
#include "movecounter.h"

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

    InfoPlayer player1;
    InfoPlayer player2;
    InfoPlayer player3;

    MoveCounter moveHistory;
};
#endif // MAINWINDOW_H
