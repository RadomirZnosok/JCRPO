#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include "binfile.h"
#include "infoplayer.h"
#include "movecounter.h"
#include "deskplace.h"
#include "header.h"

#include<QPushButton>
#include<QLabel>
#include<QMessageBox>

#include <QVBoxLayout>
#include <QListWidget>
#include <QDir>
#include <QStringList>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(const QString& directoryPath, QWidget *parent = nullptr);
    ~MainWindow();
    void nextPlayerTurn();          // передача очередности хода
    void enablePlayerPlaces();      //
    void enableStepPlaces(int col, int row);

private slots:
    void clickedButton(int col, int row);// gameWin
    void actNewGame();      // gameWidget
    void actSaveGame();     // gameWidget
    void actLoadGame();     // gameWidget
    void actStepBack();     // gameWidget
    void actStepForward();  // gameWidget
    void actListSteps();    // gameWidget


    void on_okDialog_clicked();         // dialogWidget
    void on_cancelDialog_clicked();     // dialogWidget





    void on_pb_createGame_2_clicked();// startWin
    void on_pb_loadGame_2_clicked();// startWin

    void on_pb_OK_loadPage_clicked();//loadWin

    void on_pb_back_loadPage_clicked();

private:
    int stage;                      // 1 - create game()from start,
        //
    Ui::MainWindow *ui;

    InfoPlayer players[3];          // информация игроков1
    bool checkmate_players[3];      // шах и мат королю
    bool check_player1[3];          // шах королю
    MoveCounter moveHistory;        // история ходов
    int sequence;                   // очередность хода
    bool isCurPlace;                // true - нажата фигура, false - не нажата
    int curPlace[2];                // место активированной кнопки
    DeskPlace* buttons[8][12];      // ссылки на кнопки
    QPushButton* pictures[8][12];   // ссылки на объекты с изображениями фигур
    //-----------------------------------------------------------------------------------------
    // loadWidget
    QString m_directoryPath;
    //-----------------------------------------------------------------------------------------

    void loadGame();
    void createNewGame();                               // возникла ошибка!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    void populateFileList();
    void setIconFigure(int i, int j, const QString& figName);
};
#endif // MAINWINDOW_H
