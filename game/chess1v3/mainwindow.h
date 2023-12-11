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


private slots:
    void clickedButton(QString dest);// gameWin
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

    void on_nextturn_pb_clicked();

    void on_check_pb_clicked();

    void on_checkmate_pb_clicked();

private:
    int stage;                      // 1 - create game()from startPage, 2 создание новой игры() from gamePage
        //
    Ui::MainWindow *ui;

    InfoPlayer players[3];          // информация игроков1
    bool checkmate_players[3];      // шах и мат королю
    bool check_player1[3];          // шах королю
    MoveCounter moveHistory;        // история ходов
    int sequence;                   // очередность хода
    bool isCurPlace;                // true - нажата фигура, false - не нажата
    QString curPlace;                // место активированной кнопки
    DeskPlace* A1[8][12];
    QMap<QString, DeskPlace*> mapOffsets;
    //-----------------------------------------------------------------------------------------
    // loadWidget
    QString m_directoryPath;
    //-----------------------------------------------------------------------------------------

    void loadGame();
    void createNewGame();                        // возникла ошибка, выход за область памяти!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    void populateFileList();
    void setIconFigure(DeskPlace* ob, const QString& figName);
    bool makeStep(DeskPlace* ob);
    bool makeHit(DeskPlace* ob);
    bool isEndPlace(QString cmped);
    void nextPlayerTurn();                      // передача очередности хода
    void enablePlayerPlaces();      //
//    void enableStepPlaces(int col, int row);    // ошибка адресации кнопок для игроков 2,3
    QString changeFig();
    void enableAllButtons();
//    void enableForFigButtons(DeskPlace* ob);
    void blockAllButtons();
    void setPlayerFig(int i);
    int dial_event_check();
};
#endif // MAINWINDOW_H
