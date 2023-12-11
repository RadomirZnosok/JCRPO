#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(const QString& directoryPath, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_directoryPath(directoryPath)
{
    ui->setupUi(this);
    QString dest;
    int i = 0;
    int j = 0;
    // init gameWidget
    // инициализация указателей на кнопки
    //  row 1

    {
        A1[i][j] = new DeskPlace(ui->a1_pb->parentWidget(), ui->a1_pb, ui->a1_l, "A1");
        dest = "A1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A1", A1[i++][j]);

        A1[i][j] = new DeskPlace(ui->b1_pb->parentWidget(), ui->b1_pb, ui->b1_l, "B1");
        dest = "B1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B1", A1[i++][j]);

        A1[i][j] = new DeskPlace(ui->c1_pb->parentWidget(), ui->c1_pb, ui->c1_l, "C1");
        dest = "C1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C1", A1[i++][j]);

        A1[i][j] = new DeskPlace(ui->d1_pb->parentWidget(), ui->d1_pb, ui->d1_l, "D1");
        dest = "D1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D1", A1[i++][j]);

        A1[i][j] = new DeskPlace(ui->e1_pb->parentWidget(), ui->e1_pb, ui->e1_l, "E1");
        dest = "E1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E1", A1[i++][j]);

        A1[i][j] = new DeskPlace(ui->f1_pb->parentWidget(), ui->f1_pb, ui->f1_l, "F1");
        dest = "F1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F1", A1[i++][j]);

        A1[i][j] = new DeskPlace(ui->g1_pb->parentWidget(), ui->g1_pb, ui->g1_l, "G1");
        dest = "G1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G1", A1[i++][j]);

        A1[i][j] = new DeskPlace(ui->h1_pb->parentWidget(), ui->h1_pb, ui->h1_l, "H1");
        dest = "H1";
        connect(A1[i][j], &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H1", A1[i][j]);
    }// row 2
    {
        i = 0;j++;
        A1[i][j] = new DeskPlace(ui->a2_pb->parentWidget(), ui->a2_pb, ui->a2_l, "A2");
        dest = "A2";
        connect(ui->a2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A2", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b2_pb->parentWidget(), ui->b2_pb, ui->b2_l, "B2");
        dest = "B2";
        connect(ui->b2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B2", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c2_pb->parentWidget(), ui->c2_pb, ui->c2_l, "C2");
        dest = "C2";
        connect(ui->c2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C2", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d2_pb->parentWidget(), ui->d2_pb, ui->d2_l, "D2");
        dest = "D2";
        connect(ui->d2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D2", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e2_pb->parentWidget(), ui->e2_pb, ui->e2_l, "E2");
        dest = "E2";
        connect(ui->e2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E2", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f2_pb->parentWidget(), ui->f2_pb, ui->f2_l, "F2");
        dest = "F2";
        connect(ui->f2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F2", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g2_pb->parentWidget(), ui->g2_pb, ui->g2_l, "G2");
        dest = "G2";
        connect(ui->g2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G2", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h2_pb->parentWidget(), ui->h2_pb, ui->h2_l, "H2");
        dest = "H2";
        connect(ui->h2_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H2", A1[i++][j]);
    }// row 3
    {
        i = 0; j++;

        A1[i][j] = new DeskPlace(ui->a3_pb->parentWidget(), ui->a3_pb, ui->a3_l, "A3");
        dest = "A3";
        connect(ui->a3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A3", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b3_pb->parentWidget(), ui->b3_pb, ui->b3_l, "B3");
        dest = "B3";
        connect(ui->b3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B3", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c3_pb->parentWidget(), ui->c3_pb, ui->c3_l, "C3");
        dest = "C3";
        connect(ui->c3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C3", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d3_pb->parentWidget(), ui->d3_pb, ui->d3_l, "D3");
        dest = "D3";
        connect(ui->d3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D3", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e3_pb->parentWidget(), ui->e3_pb, ui->e3_l, "E3");
        dest = "E3";
        connect(ui->e3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E3", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f3_pb->parentWidget(), ui->f3_pb, ui->f3_l, "F3");
        dest = "F3";
        connect(ui->f3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F3", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g3_pb->parentWidget(), ui->g3_pb, ui->g3_l, "G3");
        dest = "G3";
        connect(ui->g3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G3", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h3_pb->parentWidget(), ui->h3_pb, ui->h3_l, "H3");
        dest = "H3";
        connect(ui->h3_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H3", A1[i++][j]);
    }// row 4
    {
        i=0;j++;
        A1[i][j] = new DeskPlace(ui->a4_pb->parentWidget(), ui->a4_pb, ui->a4_l, "A4");
        dest = "A4";
        connect(ui->a4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A4", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b4_pb->parentWidget(), ui->b4_pb, ui->b4_l, "B4");
        dest = "B4";
        connect(ui->b4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B4", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c4_pb->parentWidget(), ui->c4_pb, ui->c4_l, "C4");
        dest = "C4";
        connect(ui->c4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C4", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d4_pb->parentWidget(), ui->d4_pb, ui->d4_l, "D4");
        dest = "D4";
        connect(ui->d4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D4", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e4_pb->parentWidget(), ui->e4_pb, ui->e4_l, "E4");
        dest = "E4";
        connect(ui->e4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E4", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f4_pb->parentWidget(), ui->f4_pb, ui->f4_l, "F4");
        dest = "F4";
        connect(ui->f4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F4", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g4_pb->parentWidget(), ui->g4_pb, ui->g4_l, "G4");
        dest = "G4";
        connect(ui->g4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G4", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h4_pb->parentWidget(), ui->h4_pb, ui->h4_l, "H4");
        dest = "H4";
        connect(ui->h4_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H4", A1[i++][j]);
    }// row 5
    {
        i=0;j++;

        A1[i][j] = new DeskPlace(ui->a5_pb->parentWidget(), ui->a5_pb, ui->a5_l, "A5");
        dest = "A5";
        connect(ui->a5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A5", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b5_pb->parentWidget(), ui->b5_pb, ui->b5_l, "B5");
        dest = "B5";
        connect(ui->b5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B5", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c5_pb->parentWidget(), ui->c5_pb, ui->c5_l, "C5");
        dest = "C5";
        connect(ui->c5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C5", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d5_pb->parentWidget(), ui->d5_pb, ui->d5_l, "D5");
        dest = "D5";
        connect(ui->d5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D5", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e5_pb->parentWidget(), ui->e5_pb, ui->e5_l, "E5");
        dest = "E5";
        connect(ui->e5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E5", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f5_pb->parentWidget(), ui->f5_pb, ui->f5_l, "F5");
        dest = "F5";
        connect(ui->f5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F5", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g5_pb->parentWidget(), ui->g5_pb, ui->g5_l, "G5");
        dest = "G5";
        connect(ui->g5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G5",A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h5_pb->parentWidget(), ui->h5_pb, ui->h5_l, "H5");
        dest = "H5";
        connect(ui->h5_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H5", A1[i++][j]);
    }// row 6
    {
        i=0;j++;

        A1[i][j] = new DeskPlace(ui->a6_pb->parentWidget(), ui->a6_pb, ui->a6_l, "A6");
        dest = "A6";
        connect(ui->a6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A6", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b6_pb->parentWidget(), ui->b6_pb, ui->b6_l, "B6");
        dest = "B6";
        connect(ui->b6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B6", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c6_pb->parentWidget(), ui->c6_pb, ui->c6_l, "C6");
        dest = "C6";
        connect(ui->c6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C6", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d6_pb->parentWidget(), ui->d6_pb, ui->d6_l, "D6");
        dest = "D6";
        connect(ui->d6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D6", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e6_pb->parentWidget(), ui->e6_pb, ui->e6_l, "E6");
        dest = "E6";
        connect(ui->e6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E6", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f6_pb->parentWidget(), ui->f6_pb, ui->f6_l, "F6");
        dest = "F6";
        connect(ui->f6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F6", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g6_pb->parentWidget(), ui->g6_pb, ui->g6_l, "G6");
        dest = "G6";
        connect(ui->g6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G6", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h6_pb->parentWidget(), ui->h6_pb, ui->h6_l, "H6");
        dest = "H6";
        connect(ui->h6_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H6", A1[i++][j]);
    }// row 7
    {
        i=0;j++;

        A1[i][j] = new DeskPlace(ui->a7_pb->parentWidget(), ui->a7_pb, ui->a7_l, "A7");
        dest = "A7";
        connect(ui->a7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A7", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b7_pb->parentWidget(), ui->b7_pb, ui->b7_l, "B7");
        dest = "B7";
        connect(ui->b7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B7", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c7_pb->parentWidget(), ui->c7_pb, ui->c7_l, "C7");
        dest = "C7";
        connect(ui->c7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C7", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d7_pb->parentWidget(), ui->d7_pb, ui->d7_l, "D7");
        dest = "D7";
        connect(ui->d7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D7", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e7_pb->parentWidget(), ui->e7_pb, ui->e7_l, "E7");
        dest = "E7";
        connect(ui->e7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E7", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f7_pb->parentWidget(), ui->f7_pb, ui->f7_l, "F7");
        dest = "F7";
        connect(ui->f7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F7", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g7_pb->parentWidget(), ui->g7_pb, ui->g7_l, "G7");
        dest = "G7";
        connect(ui->g7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G7",A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h7_pb->parentWidget(), ui->h7_pb, ui->h7_l, "H7");
        dest = "H7";
        connect(ui->h7_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H7", A1[i++][j]);
    }// row 8
    {
        i=0;j++;

        A1[i][j] = new DeskPlace(ui->a8_pb->parentWidget(), ui->a8_pb, ui->a8_l, "A8");
        dest = "A8";
        connect(ui->a8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A8", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b8_pb->parentWidget(), ui->b8_pb, ui->b8_l, "B8");
        dest = "B8";
        connect(ui->b8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B8", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c8_pb->parentWidget(), ui->c8_pb, ui->c8_l, "C8");
        dest = "C8";
        connect(ui->c8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C8", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d8_pb->parentWidget(), ui->d8_pb, ui->d8_l, "D8");
        dest = "D8";
        connect(ui->d8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D8", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e8_pb->parentWidget(), ui->e8_pb, ui->e8_l, "E8");
        dest = "E8";
        connect(ui->e8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E8", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f8_pb->parentWidget(), ui->f8_pb, ui->f8_l, "F8");
        dest = "F8";
        connect(ui->f8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F8", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g8_pb->parentWidget(), ui->g8_pb, ui->g8_l, "G8");
        dest = "G8";
        connect(ui->g8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G8", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h8_pb->parentWidget(), ui->h8_pb, ui->h8_l, "H8");
        dest = "H8";
        connect(ui->h8_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H8", A1[i++][j]);
    }// row 9
    {
        i=0;j++;
        A1[i][j] = new DeskPlace(ui->a9_pb->parentWidget(), ui->a9_pb, ui->a9_l, "A9");
        dest = "A9";
        connect(ui->a9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A9", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b9_pb->parentWidget(), ui->b9_pb, ui->b9_l, "B9");
        dest = "B9";
        connect(ui->b9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B9", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c9_pb->parentWidget(), ui->c9_pb, ui->c9_l, "C9");
        dest = "C9";
        connect(ui->c9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C9", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d9_pb->parentWidget(), ui->d9_pb, ui->d9_l, "D9");
        dest = "D9";
        connect(ui->d9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D9",A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e9_pb->parentWidget(), ui->e9_pb, ui->e9_l, "E9");
        dest = "E9";
        connect(ui->e9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E9", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f9_pb->parentWidget(), ui->f9_pb, ui->f9_l, "F9");
        dest = "F9";
        connect(ui->f9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F9", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g9_pb->parentWidget(), ui->g9_pb, ui->g9_l, "G9");
        dest = "G9";
        connect(ui->g9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G9", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h9_pb->parentWidget(), ui->h9_pb, ui->h9_l, "H9");
        dest = "H9";
        connect(ui->h9_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H9", A1[i++][j]);
    }//row 10
    {
        i=0;j++;
        A1[i][j] = new DeskPlace(ui->a10_pb->parentWidget(), ui->a10_pb, ui->a10_l, "A10");
        dest = "A10";
        connect(ui->a10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A10",A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b10_pb->parentWidget(), ui->b10_pb, ui->b10_l, "B10");
        dest = "B10";
        connect(ui->b10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B10", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c10_pb->parentWidget(), ui->c10_pb, ui->c10_l, "C10");
        dest = "C10";
        connect(ui->c10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C10", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d10_pb->parentWidget(), ui->d10_pb, ui->d10_l, "D10");
        dest = "D10";
        connect(ui->d10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D10", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e10_pb->parentWidget(), ui->e10_pb, ui->e10_l, "E10");
        dest = "E10";
        connect(ui->e10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E10", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f10_pb->parentWidget(), ui->f10_pb, ui->f10_l, "F10");
        dest = "F10";
        connect(ui->f10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F10",A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g10_pb->parentWidget(), ui->g10_pb, ui->g10_l, "G10");
        dest = "G10";
        connect(ui->g10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G10", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h10_pb->parentWidget(), ui->h10_pb, ui->h10_l, "H10");
        dest = "H10";
        connect(ui->h10_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H10",A1[i++][j]);
    }//row 11
    {
        i=0;j++;
        A1[i][j] = new DeskPlace(ui->a11_pb->parentWidget(), ui->a11_pb, ui->a11_l, "A11");
        dest = "A11";
        connect(ui->a11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A11", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b11_pb->parentWidget(), ui->b11_pb, ui->b11_l, "B11");
        dest = "B11";
        connect(ui->b11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B11", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c11_pb->parentWidget(), ui->c11_pb, ui->c11_l, "C11");
        dest = "C11";
        connect(ui->c11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C11", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d11_pb->parentWidget(), ui->d11_pb, ui->d11_l, "D11");
        dest = "D11";
        connect(ui->d11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D11", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e11_pb->parentWidget(), ui->e11_pb, ui->e11_l, "E11");
        dest = "E11";
        connect(ui->e11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E11", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f11_pb->parentWidget(), ui->f11_pb, ui->f11_l, "F11");
        dest = "F11";
        connect(ui->f11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F11", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g11_pb->parentWidget(), ui->g11_pb, ui->g11_l, "G11");
        dest = "G11";
        connect(ui->g11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G11", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h11_pb->parentWidget(), ui->h11_pb, ui->h11_l, "H11");
        dest = "H11";
        connect(ui->h11_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H11", A1[i++][j]);
    }//row 12
    {
        i=0;j++;
        A1[i][j] = new DeskPlace(ui->a12_pb->parentWidget(), ui->a12_pb, ui->a12_l, "A12");
        dest = "A12";
        connect(ui->a12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("A12",A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->b12_pb->parentWidget(), ui->b12_pb, ui->b12_l, "B12");
        dest = "B12";
        connect(ui->b12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("B12", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->c12_pb->parentWidget(), ui->c12_pb, ui->c12_l, "C12");
        dest = "C12";
        connect(ui->c12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("C12", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->d12_pb->parentWidget(), ui->d12_pb, ui->d12_l, "D12");
        dest = "D12";
        connect(ui->d12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("D12", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->e12_pb->parentWidget(), ui->e12_pb, ui->e12_l, "E12");
        dest = "E12";
        connect(ui->e12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("E12", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->f12_pb->parentWidget(), ui->f12_pb, ui->f12_l, "F12");
        dest = "F12";
        connect(ui->f12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("F12", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->g12_pb->parentWidget(), ui->g12_pb, ui->g12_l, "G12");
        dest = "G12";
        connect(ui->g12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("G12", A1[i++][j]);

        A1[i][j] = new DeskPlace (ui->h12_pb->parentWidget(), ui->h12_pb, ui->h12_l, "H12");
        dest = "H12";
        connect(ui->h12_pb, &QPushButton::clicked, this, [this, dest](){
            this->clickedButton(dest);
        });
        mapOffsets.insert("H12",A1[i++][j]);
    }

    sequence = 0;
    isCurPlace = false;
    curPlace.clear();

    ui->desk->setPixmap(QPixmap("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\desk.png"));
    ui->l_PScore1->setText("0");
    ui->l_PScore1->setText("0");
    ui->l_PScore1->setText("0");





    // init startWidget
    ui->l_backgnd_startPage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));

    // init dialogWidget
    ui->NP1->clear();
    ui->NP2->clear();
    ui->NP3->clear();

    // init loadWidget
    ui->l_backgnd_loadPage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));


    // init saveWIdget
    //"C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png"
    ui->l_backgnd_dialogPage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));
    ui->l_backgnd_savePage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));
    ui->l_backgnd_gamePage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));


    ui->stackedWidget->setCurrentIndex(0);
}


MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::actNewGame()
{

}      // gameWidget

void MainWindow::actSaveGame()
{

}     // gameWidget

void MainWindow::actLoadGame()
{

}     // gameWidget

void MainWindow::actStepBack()
{

}     // gameWidget

void MainWindow::actStepForward()
{

}  // gameWidget

void MainWindow::actListSteps()
{

}    // gameWidget


void MainWindow::on_pb_OK_loadPage_clicked()
{
    QListWidgetItem* selectedItem = ui->lw_loadPage->currentItem();
    if (selectedItem) {
        QString selectedFileName = selectedItem->text();

        // do
        loadGame();
        ui->stackedWidget->setCurrentIndex(4);
    }
}


void MainWindow::loadGame(){


}








//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



QString MainWindow::changeFig()
{
    QDialog dialog(this);
    dialog.setWindowTitle("Выбор фигуры");
    dialog.resize(70, 175);
    dialog.setModal(true); // Установка модального режима для блокировки MainWindow
    QPushButton *ladja = new QPushButton("", &dialog),
        *konj = new QPushButton("", &dialog),
            *clon = new QPushButton("", &dialog),
                *fercj = new QPushButton("", &dialog);
    ladja->setGeometry(10, 10, 35, 35);
    konj->setGeometry(10, 50, 35, 35);
    clon->setGeometry(10, 90, 35, 35);
    fercj->setGeometry(10, 130, 35, 35);
    QString str1 = "C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\#1.png",
        str2 = "C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\#2.png",
        str3 = "C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\#3.png",
        str4 = "C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\#4.png",
        retval = "";
    ladja->setIcon(QIcon(str1));
    konj->setIcon(QIcon(str2));
    clon->setIcon(QIcon(str3));
    fercj->setIcon(QIcon(str4));
    connect(ladja, &QPushButton::clicked, &dialog, [&dialog, str1, &retval](){
        retval = fignames[1];
        dialog.close();
    });
    connect(konj, &QPushButton::clicked, &dialog, [&dialog, str2, &retval](){
        retval = fignames[2];
        dialog.close();
    });
    connect(clon, &QPushButton::clicked, &dialog, [&dialog, str3, &retval](){
        retval = fignames[3];
        dialog.close();
    });
    connect(fercj, &QPushButton::clicked, &dialog, [&dialog, str4, &retval](){
        retval = fignames[4];
        dialog.close();
    });
    dialog.exec(); // Запуск диалогового окна в модальном режиме
    return retval;
}








//-----------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------




void MainWindow::createNewGame(){

    QString str1 = QString(ui->NP1->text()),
        str2 = QString(ui->NP2->text()),
        str3 = QString(ui->NP3->text());
    players[0] = InfoPlayer(str1, "A1", 0);
    players[1] = InfoPlayer(str2, "H8", 1);
    players[2] = InfoPlayer(str3, "H12", 2);
    ui->l_PName1->setText(ui->NP1->text());
    ui->l_PName2->setText(ui->NP2->text());
    ui->l_PName3->setText(ui->NP3->text());

    moveHistory = MoveCounter();
    sequence = 0;

    isCurPlace = false;
    curPlace.clear();
    for (int i = 0; i < 3; i++){
        check_player1[i] = false;
        checkmate_players[i] = false;
    }

    for (int i = 0; i < 3;i++){
        setPlayerFig(i);
    }
    //setpixmap for figures
    for (int m = 0; m < 3; m++) {
        QList<Figure> list = players[m].getListFigure();
        for (int i = 0; i < 16; i++){
            if (list[i].exist){
                DeskPlace* ob = mapOffsets.value(list[i].toString());
                this->setIconFigure(ob, list[i].getName());
            }
        }
    }
}


bool MainWindow::makeStep(DeskPlace* ob)
{
    int movedFig = mapOffsets.value(curPlace)->getFigure();

    DeskPlace * asd = mapOffsets.value(curPlace);
    asd->setFigure();
    mapOffsets.insert(curPlace, asd);
    this->setIconFigure(asd, QString(""));

    ob->setFigure(movedFig, sequence);
    this->setIconFigure(ob, players[sequence].getFigure(movedFig).getName());
    QString str = ob->getName();
    if (players[sequence].getFigure(movedFig).getName() == fignames[0] && isEndPlace(str)){
        return true;
    }
    return false;
}

bool MainWindow::makeHit(DeskPlace* ob)
{
    int movedFig = mapOffsets.value(curPlace)->getFigure();
    int numplayer = ob->getPlayer();
    Figure obj = players[numplayer].getFigure(movedFig);
    obj.exist = false;
    players[numplayer].setFigure(obj, movedFig);

    DeskPlace * asd = mapOffsets.value(curPlace);
    asd->setFigure();
    mapOffsets.insert(curPlace, asd);
\
    this->setIconFigure(asd, QString(""));  // очистка
    ob->setFigure(movedFig, sequence);
    this->setIconFigure(ob, players[sequence].getFigure(movedFig).getName());                 // вставка
    QString str = ob->getName();
    if (players[sequence].getFigure(movedFig).getName() == fignames[0] && isEndPlace(str)){
        return true;
    }
    return false;
}


void MainWindow::setIconFigure(DeskPlace* ob, const QString &figName)
{
    if (figName.isEmpty()){
        ob->setPicture(QString(""));
    }
    else if (!figName.compare(fignames[0])){     // пешка
        if (ob->getPlayer() == 0){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\g0.png");
        }
        else if (ob->getPlayer() == 1){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\o0.png");
        }
        else if (ob->getPlayer() == 2){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\b0.png");
        }
    }
    else if (!figName.compare(fignames[1])){
        if (ob->getPlayer() == 0){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\g1.png");
        }
        else if (ob->getPlayer() == 1){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\o1.png");
        }
        else if (ob->getPlayer() == 2){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\b1.png");
        }
    }
    else if(!figName.compare(fignames[2])){
        if (ob->getPlayer() == 0){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\g2.png");
        }
        else if (ob->getPlayer() == 1){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\o2.png");
        }
        else if (ob->getPlayer() == 2){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\b2.png");
        }
    }
    else if(!figName.compare(fignames[3])){
        if (ob->getPlayer() == 0){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\g3.png");
        }
        else if (ob->getPlayer() == 1){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\o3.png");
        }
        else if (ob->getPlayer() == 2){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\b3.png");
        }
    }
    else if(!figName.compare(fignames[4])){
        if (ob->getPlayer() == 0){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\g4.png");
        }
        else if (ob->getPlayer() == 1){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\o4.png");
        }
        else if (ob->getPlayer() == 2){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\b4.png");
        }
    }
    else if(!figName.compare(fignames[5])){
        if (ob->getPlayer() == 0){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\g5.png");
        }
        else if (ob->getPlayer() == 1){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\o5.png");
        }
        else if (ob->getPlayer() == 2){
            ob->setPicture("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\b5.png");
        }
    }
}


bool MainWindow::isEndPlace(QString cmped)
{
    if (sequence == 0){
        if (cmped == QString("A8") || cmped == QString("B8") || cmped == QString("C8") || cmped == QString("D8")
            || cmped == QString("E8") || cmped == QString("F8") || cmped == QString("G8") || cmped == QString("H8")
            || cmped == QString("A12") || cmped == QString("B12") || cmped == QString("C12") || cmped == QString("D12")
            || cmped == QString("E12") || cmped == QString("F12") || cmped == QString("G12") || cmped == QString("H12")){
            return true;
        }
        return false;
    }
    else if (sequence == 1){
        if (cmped == QString("A1") || cmped == QString("B1") || cmped == QString("C1") || cmped == QString("D1")
            || cmped == QString("E1") || cmped == QString("F1") || cmped == QString("G1") || cmped == QString("H1")
            || cmped == QString("A12") || cmped == QString("B12") || cmped == QString("C12") || cmped == QString("D12")
            || cmped == QString("E12") || cmped == QString("F12") || cmped == QString("G12") || cmped == QString("H12")){
            return true;
        }
        return false;
    }
    else if (sequence == 2){
        if (cmped == QString("A8") || cmped == QString("B8") || cmped == QString("C8") || cmped == QString("D8")
            || cmped == QString("E8") || cmped == QString("F8") || cmped == QString("G8") || cmped == QString("H8")
            || cmped == QString("A1") || cmped == QString("B1") || cmped == QString("C1") || cmped == QString("D1")
            || cmped == QString("E1") || cmped == QString("F1") || cmped == QString("G1") || cmped == QString("H1")){
            return true;
        }
        return false;
    }
    return false;
}

// отмена ввода имен
void MainWindow::on_cancelDialog_clicked()
{
    if (stage == 1){
        stage = 0;
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }
    else if (stage == 2){
        stage = 0;
        ui->stackedWidget->setCurrentIndex(4);
        return;
    }
}


void MainWindow::on_pb_createGame_2_clicked()
{
    stage = 1;
    ui->NP1->clear();
    ui->NP2->clear();
    ui->NP3->clear();
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pb_loadGame_2_clicked()
{
    stage = 2;
    populateFileList();
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pb_back_loadPage_clicked()
{
    if (stage == 1){
        stage = 0;
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }
    else if (stage == 2){
        stage = 0;
        ui->stackedWidget->setCurrentIndex(4);
        return;
    }
}


void MainWindow::populateFileList()
{
    QDir directory(m_directoryPath);
    QStringList fileList = directory.entryList(QDir::Files | QDir::NoDotAndDotDot);
    ui->lw_loadPage->clear();
    ui->lw_loadPage->addItems(fileList);
}

// сохранение ввода имен
void MainWindow::on_okDialog_clicked()
{
    if (ui->NP1->text().size() == 0 || ui->NP2->text().size() == 0 || ui->NP3->text().size() == 0){
        QMessageBox::critical(nullptr, "Information", "Вы ввели не всех игроков.");
        return;
    }
    if (stage == 1){
        stage = 0;
        createNewGame();
        blockAllButtons();
        enablePlayerPlaces();
        QString str;
        if (sequence == 0){
            str = "1";
            ui->label_5->setText(str);
        }
        else if (sequence == 1){
            str = "2";
            ui->label_5->setText(str);
        }
        else if (sequence == 2){
            str = "3";
            ui->label_5->setText(str);
        }
        ui->stackedWidget->setCurrentIndex(4);
        return;
    }
    else if (stage == 2){
        stage = 0;
        createNewGame();
        blockAllButtons();
        enablePlayerPlaces();
        QString str;
        if (sequence == 0){
            str = "1";
            ui->label_5->setText(str);
        }
        else if (sequence == 1){
            str = "2";
            ui->label_5->setText(str);
        }
        else if (sequence == 2){
            str = "3";
            ui->label_5->setText(str);
        }
        ui->stackedWidget->setCurrentIndex(4);
        return;
    }
}

void MainWindow::enableAllButtons(){
    QList<DeskPlace*> list = mapOffsets.values();
    for (int i = 0; i < list.size(); i++){
        list[i]->set_Visible();
    }
}

void MainWindow::blockAllButtons()
{
    QList<DeskPlace*> list = mapOffsets.values();
    for (int i = 0; i < list.size(); i++){
        list[i]->set_Visible(false);
    }
}

void MainWindow::setPlayerFig(int num)
{
    QList<Figure> list = players[num].getListFigure();
    for (int i = 0; i < list.size(); i++){
        DeskPlace* ob = mapOffsets.value(list[i].toString());
        ob->setFigure(i, num);
        mapOffsets.insert(list[i].toString(), ob);
    }
}

int MainWindow::dial_event_check()
{
    QDialog dialog(this);
    dialog.setWindowTitle("Выбор фигуры");
    dialog.resize(70, 135);
    dialog.setModal(true); // Установка модального режима для блокировки MainWindow
    QPushButton *player1 = new QPushButton("1", &dialog),
        *player2 = new QPushButton("2", &dialog),
        *player3 = new QPushButton("3", &dialog);
    player1->setGeometry(10, 10, 35, 35);
    player2->setGeometry(10, 50, 35, 35);
    player3->setGeometry(10, 90, 35, 35);
    int retval = -1;
    connect(player1, &QPushButton::clicked, &dialog, [&dialog, &retval](){
        retval = 0;
        dialog.close();
    });
    connect(player2, &QPushButton::clicked, &dialog, [&dialog, &retval](){
        retval = 1;
        dialog.close();
    });
    connect(player3, &QPushButton::clicked, &dialog, [&dialog, &retval](){
        retval = 2;
        dialog.close();
    });
    dialog.exec(); // Запуск диалогового окна в модальном режиме
    return retval;
}

// Обработка нажатия кнопки
void MainWindow::clickedButton(QString dest){
    if (this->isCurPlace){
        if (!dest.compare(curPlace)){
            isCurPlace = false;
            enablePlayerPlaces();
        }
        else {
            DeskPlace* ad = mapOffsets.value(dest);
            if (ad->getFigure() == -1){
                isCurPlace = false;
                if (makeStep(ad)){
                    // вызвать окно для выбора фигуры, на которую заменить пешку
                    QString changed = this->changeFig();
                    Figure newfig = Figure::makeFigure(changed, dest, sequence);
                    players[sequence].setFigure(newfig, ad->getFigure());
                    setIconFigure(ad, changed);
                }
            }
            else {
                isCurPlace = false;
                if (ad->getPlayer() != sequence){
                    if (makeHit(ad)){
                        // вызвать окно для выбора фигуры, на которую заменить пешку
                        QString changed = this->changeFig();
                        Figure newfig = Figure::makeFigure(changed, dest, sequence);
                        players[sequence].setFigure(newfig, ad->getFigure());
                        setIconFigure(ad, changed);
                    }
                }
                else {
                    enablePlayerPlaces();
                }
            }
            mapOffsets.insert(dest, ad);
            enablePlayerPlaces();
            //    blockAllButtons();
        }
    }
    else {
        isCurPlace = true;
        curPlace = dest;
        enableAllButtons();
    }
}

// передача очередности хода
void MainWindow::nextPlayerTurn(){

    if (sequence == 0){
        if (checkmate_players[1] && checkmate_players[2]){
            blockAllButtons();
            QString str = "Выйграл игрок " + ui->l_PName1->text();
            QMessageBox::information(nullptr, "Победа", str);
            // Окно : 1-ый выйграл
            return;
        }
    }
    else if (sequence == 1){
        if (checkmate_players[0] && checkmate_players[2]){
            blockAllButtons();
            QString str = "Выйграл игрок " + ui->l_PName2->text();
            QMessageBox::information(nullptr, "Победа", str);
            // Окно : 2-ой выйграл
            return;
        }
    }else if (sequence == 2){
        if (checkmate_players[0] && checkmate_players[1]){
            blockAllButtons();
            QString str = "Выйграл игрок " + ui->l_PName3->text();
            QMessageBox::information(nullptr, "Победа", str);
            // Окно : 3-ий выйграл
            return;
        }
    }
    if (sequence == 2){
        sequence = 0;
    }
    else {
        sequence ++;
    }

    QString str;
    if (sequence == 0){
        str = "1";
        ui->label_5->setText(str);
    }
    else if (sequence == 1){
        str = "2";
        ui->label_5->setText(str);
    }
    else if (sequence == 2){
        str = "3";
        ui->label_5->setText(str);
    }


    if (this->checkmate_players[sequence]){
        nextPlayerTurn();
    }
    isCurPlace = false;
    curPlace.clear();
    enablePlayerPlaces();
}

void MainWindow::enablePlayerPlaces(){
    blockAllButtons();
    QList<Figure> list;
    list = players[sequence].getListFigure();

    bool isKing;
    check_player1[sequence] && list[15].getName().compare(fignames[5]) == 0 ? isKing = true : isKing = false;
    if (!isKing){
        for (int i = 0; i < 16; i++){
            if (list[i].exist){
                mapOffsets.value(list[i].toString())->set_Visible();
            }
        }
    }
    else {
        mapOffsets.value(list[15].toString())->set_Visible();
    }
}


void MainWindow::on_nextturn_pb_clicked()
{
    nextPlayerTurn();
}


void MainWindow::on_check_pb_clicked()
{
    int val = dial_event_check();
    check_player1[val] = true;
}


void MainWindow::on_checkmate_pb_clicked()
{
    int val = dial_event_check();
    checkmate_players[val] = true;
}

