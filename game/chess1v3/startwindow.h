#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include "mainwindow.h"
#include "getnames.h"
#include <QMessageBox>

#include "infoplayer.h"
#include "movecounter.h"

namespace Ui {
class StartWindow;
}

class StartWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartWindow(QWidget *parent = nullptr);
    ~StartWindow();

private slots:
    void on_pb_loadGame_clicked();

    void on_pb_createGame_clicked();

private:
    Ui::StartWindow *ui;
};

#endif // STARTWINDOW_H
