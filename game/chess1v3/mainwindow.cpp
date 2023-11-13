#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, InfoPlayer* player1, InfoPlayer* player2, InfoPlayer* player3, MoveCounter* moveHistory)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , player1(player1)
    , player2(player2)
    , player3(player3)
    , moveHistory(moveHistory)
{
    ui->setupUi(this);
    // инициализация массива указателей на кнопки
    {
        buttons[0][0] = ui->a1_pb;
        buttons[0][1] = ui->a2_pb;
        buttons[0][2] = ui->a3_pb;
        buttons[0][3] = ui->a4_pb;
        buttons[0][4] = ui->a5_pb;
        buttons[0][5] = ui->a6_pb;
        buttons[0][6] = ui->a7_pb;
        buttons[0][7] = ui->a8_pb;
        buttons[0][8] = ui->a9_pb;
        buttons[0][9] = ui->a10_pb;
        buttons[0][10] = ui->a11_pb;
        buttons[0][11] = ui->a12_pb;

        buttons[1][0] = ui->b1_pb;
        buttons[1][1] = ui->b2_pb;
        buttons[1][2] = ui->b3_pb;
        buttons[1][3] = ui->b4_pb;
        buttons[1][4] = ui->b5_pb;
        buttons[1][5] = ui->b6_pb;
        buttons[1][6] = ui->b7_pb;
        buttons[1][7] = ui->b8_pb;
        buttons[1][8] = ui->b9_pb;
        buttons[1][9] = ui->b10_pb;
        buttons[1][10] = ui->b11_pb;
        buttons[1][11] = ui->b12_pb;

        buttons[2][0] = ui->c1_pb;
        buttons[2][1] = ui->c2_pb;
        buttons[2][2] = ui->c3_pb;
        buttons[2][3] = ui->c4_pb;
        buttons[2][4] = ui->c5_pb;
        buttons[2][5] = ui->c6_pb;
        buttons[2][6] = ui->c7_pb;
        buttons[2][7] = ui->c8_pb;
        buttons[2][8] = ui->c9_pb;
        buttons[2][9] = ui->c10_pb;
        buttons[2][10] = ui->c11_pb;
        buttons[2][11] = ui->c12_pb;

        buttons[3][0] = ui->d1_pb;
        buttons[3][1] = ui->d2_pb;
        buttons[3][2] = ui->d3_pb;
        buttons[3][3] = ui->d4_pb;
        buttons[3][4] = ui->d5_pb;
        buttons[3][5] = ui->d6_pb;
        buttons[3][6] = ui->d7_pb;
        buttons[3][7] = ui->d8_pb;
        buttons[3][8] = ui->d9_pb;
        buttons[3][9] = ui->d10_pb;
        buttons[3][10] = ui->d11_pb;
        buttons[3][11] = ui->d12_pb;

        buttons[4][0] = ui->e1_pb;
        buttons[4][1] = ui->e2_pb;
        buttons[4][2] = ui->e3_pb;
        buttons[4][3] = ui->e4_pb;
        buttons[4][4] = ui->e5_pb;
        buttons[4][5] = ui->e6_pb;
        buttons[4][6] = ui->e7_pb;
        buttons[4][7] = ui->e8_pb;
        buttons[4][8] = ui->e9_pb;
        buttons[4][9] = ui->e10_pb;
        buttons[4][10] = ui->e11_pb;
        buttons[4][11] = ui->e12_pb;

        buttons[5][0] = ui->f1_pb;
        buttons[5][1] = ui->f2_pb;
        buttons[5][2] = ui->f3_pb;
        buttons[5][3] = ui->f4_pb;
        buttons[5][4] = ui->f5_pb;
        buttons[5][5] = ui->f6_pb;
        buttons[5][6] = ui->f7_pb;
        buttons[5][7] = ui->f8_pb;
        buttons[5][8] = ui->f9_pb;
        buttons[5][9] = ui->f10_pb;
        buttons[5][10] = ui->f11_pb;
        buttons[5][11] = ui->f12_pb;

        buttons[6][0] = ui->g1_pb;
        buttons[6][1] = ui->g2_pb;
        buttons[6][2] = ui->g3_pb;
        buttons[6][3] = ui->g4_pb;
        buttons[6][4] = ui->g5_pb;
        buttons[6][5] = ui->g6_pb;
        buttons[6][6] = ui->g7_pb;
        buttons[6][7] = ui->g8_pb;
        buttons[6][8] = ui->g9_pb;
        buttons[6][9] = ui->g10_pb;
        buttons[6][10] = ui->g11_pb;
        buttons[6][11] = ui->g12_pb;

        buttons[7][0] = ui->h1_pb;
        buttons[7][1] = ui->h2_pb;
        buttons[7][2] = ui->h3_pb;
        buttons[7][3] = ui->h4_pb;
        buttons[7][4] = ui->h5_pb;
        buttons[7][5] = ui->h6_pb;
        buttons[7][6] = ui->h7_pb;
        buttons[7][7] = ui->h8_pb;
        buttons[7][8] = ui->h9_pb;
        buttons[7][9] = ui->h10_pb;
        buttons[7][10] = ui->h11_pb;
        buttons[7][11] = ui->h12_pb;

    }

    // инициализация массива указателей на объект с изображением фигуры
    /*{
        labels[0][0] = ui->a1_l;
        labels[0][1] = ui->a2_l;
        labels[0][2] = ui->a3_l;
        labels[0][3] = ui->a4_l;
        labels[0][4] = ui->a5_l;
        labels[0][5] = ui->a6_l;
        labels[0][6] = ui->a7_l;
        labels[0][7] = ui->a8_l;
        labels[0][8] = ui->a9_l;
        labels[0][9] = ui->a10_l;
        labels[0][10] = ui->a11_l;
        labels[0][11] = ui->a12_l;

        labels[1][0] = ui->b1_l;
        labels[1][1] = ui->b2_l;
        labels[1][2] = ui->b3_l;
        labels[1][3] = ui->b4_l;
        labels[1][4] = ui->b5_l;
        labels[1][5] = ui->b6_l;
        labels[1][6] = ui->b7_l;
        labels[1][7] = ui->b8_l;
        labels[1][8] = ui->b9_l;
        labels[1][9] = ui->b10_l;
        labels[1][10] = ui->b11_l;
        labels[1][11] = ui->b12_l;

        labels[2][0] = ui->c1_l;
        labels[2][1] = ui->c2_l;
        labels[2][2] = ui->c3_l;
        labels[2][3] = ui->c4_l;
        labels[2][4] = ui->c5_l;
        labels[2][5] = ui->c6_l;
        labels[2][6] = ui->c7_l;
        labels[2][7] = ui->c8_l;
        labels[2][8] = ui->c9_l;
        labels[2][9] = ui->c10_l;
        labels[2][10] = ui->c11_l;
        labels[2][11] = ui->c12_l;

        labels[3][0] = ui->d1_l;
        labels[3][1] = ui->d2_l;
        labels[3][2] = ui->d3_l;
        labels[3][3] = ui->d4_l;
        labels[3][4] = ui->d5_l;
        labels[3][5] = ui->d6_l;
        labels[3][6] = ui->d7_l;
        labels[3][7] = ui->d8_l;
        labels[3][8] = ui->d9_l;
        labels[3][9] = ui->d10_l;
        labels[3][10] = ui->d11_l;
        labels[3][11] = ui->d12_l;

        labels[4][0] = ui->e1_l;
        labels[4][1] = ui->e2_l;
        labels[4][2] = ui->e3_l;
        labels[4][3] = ui->e4_l;
        labels[4][4] = ui->e5_l;
        labels[4][5] = ui->e6_l;
        labels[4][6] = ui->e7_l;
        labels[4][7] = ui->e8_l;
        labels[4][8] = ui->e9_l;
        labels[4][9] = ui->e10_l;
        labels[4][10] = ui->e11_l;
        labels[4][11] = ui->e12_l;

        labels[5][0] = ui->f1_l;
        labels[5][1] = ui->f2_l;
        labels[5][2] = ui->f3_l;
        labels[5][3] = ui->f4_l;
        labels[5][4] = ui->f5_l;
        labels[5][5] = ui->f6_l;
        labels[5][6] = ui->f7_l;
        labels[5][7] = ui->f8_l;
        labels[5][8] = ui->f9_l;
        labels[5][9] = ui->f10_l;
        labels[5][10] = ui->f11_l;
        labels[5][11] = ui->f12_l;

        labels[6][0] = ui->g1_l;
        labels[6][1] = ui->g2_l;
        labels[6][2] = ui->g3_l;
        labels[6][3] = ui->g4_l;
        labels[6][4] = ui->g5_l;
        labels[6][5] = ui->g6_l;
        labels[6][6] = ui->g7_l;
        labels[6][7] = ui->g8_l;
        labels[6][8] = ui->g9_l;
        labels[6][9] = ui->g10_l;
        labels[6][10] = ui->g11_l;
        labels[6][11] = ui->g12_l;

        labels[6][0] = ui->h1_l;
        labels[6][1] = ui->h2_l;
        labels[6][2] = ui->h3_l;
        labels[6][3] = ui->h4_l;
        labels[6][4] = ui->h5_l;
        labels[6][5] = ui->h6_l;
        labels[6][6] = ui->h7_l;
        labels[6][7] = ui->h8_l;
        labels[6][8] = ui->h9_l;
        labels[6][9] = ui->h10_l;
        labels[6][10] = ui->h11_l;
        labels[6][11] = ui->h12_l;
    }*/

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 12; j++){
            this->busyPlace[i][j] = 0;
        }
    }
    isCurPlace = false;

    curPlace[0] = -1; curPlace[1] = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

