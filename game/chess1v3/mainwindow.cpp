#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(const QString& directoryPath, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_directoryPath(directoryPath)
{
    ui->setupUi(this);

    // init gameWidget
    // инициализация массива указателей на кнопки
    {

        buttons[0][0] = new DeskPlace(ui->a1_pb->parentWidget(), ui->a1_pb, this);
        buttons[0][1] = new DeskPlace(ui->a2_pb->parentWidget(), ui->a2_pb, this);
        buttons[0][2] = new DeskPlace(ui->a3_pb->parentWidget(), ui->a3_pb, this);
        buttons[0][3] = new DeskPlace(ui->a4_pb->parentWidget(), ui->a4_pb, this);
        buttons[0][4] = new DeskPlace(ui->a5_pb->parentWidget(), ui->a5_pb, this);
        buttons[0][5] = new DeskPlace(ui->a6_pb->parentWidget(), ui->a6_pb, this);
        buttons[0][6] = new DeskPlace(ui->a7_pb->parentWidget(), ui->a7_pb, this);
        buttons[0][7] = new DeskPlace(ui->a8_pb->parentWidget(), ui->a8_pb, this);
        buttons[0][8] = new DeskPlace(ui->a9_pb->parentWidget(), ui->a9_pb, this);
        buttons[0][9] = new DeskPlace(ui->a10_pb->parentWidget(), ui->a10_pb, this);
        buttons[0][10] = new DeskPlace(ui->a11_pb->parentWidget(), ui->a11_pb, this);
        buttons[0][11] = new DeskPlace(ui->a12_pb->parentWidget(), ui->a12_pb, this);

        buttons[1][0] = new DeskPlace(ui->b1_pb->parentWidget(), ui->b1_pb, this);
        buttons[1][1] = new DeskPlace(ui->b2_pb->parentWidget(), ui->b2_pb, this);
        buttons[1][2] = new DeskPlace(ui->b3_pb->parentWidget(), ui->b3_pb, this);
        buttons[1][3] = new DeskPlace(ui->b4_pb->parentWidget(), ui->b4_pb, this);
        buttons[1][4] = new DeskPlace(ui->b5_pb->parentWidget(), ui->b5_pb, this);
        buttons[1][5] = new DeskPlace(ui->b6_pb->parentWidget(), ui->b6_pb, this);
        buttons[1][6] = new DeskPlace(ui->b7_pb->parentWidget(), ui->b7_pb, this);
        buttons[1][7] = new DeskPlace(ui->b8_pb->parentWidget(), ui->b8_pb, this);
        buttons[1][8] = new DeskPlace(ui->b9_pb->parentWidget(), ui->b9_pb, this);
        buttons[1][9] = new DeskPlace(ui->b10_pb->parentWidget(), ui->b10_pb, this);
        buttons[1][10] = new DeskPlace(ui->b11_pb->parentWidget(), ui->b11_pb, this);
        buttons[1][11] = new DeskPlace(ui->b12_pb->parentWidget(), ui->b12_pb, this);

        buttons[2][0] = new DeskPlace(ui->c1_pb->parentWidget(), ui->c1_pb, this);
        buttons[2][1] = new DeskPlace(ui->c2_pb->parentWidget(), ui->c2_pb, this);
        buttons[2][2] = new DeskPlace(ui->c3_pb->parentWidget(), ui->c3_pb, this);
        buttons[2][3] = new DeskPlace(ui->c4_pb->parentWidget(), ui->c4_pb, this);
        buttons[2][4] = new DeskPlace(ui->c5_pb->parentWidget(), ui->c5_pb, this);
        buttons[2][5] = new DeskPlace(ui->c6_pb->parentWidget(), ui->c6_pb, this);
        buttons[2][6] = new DeskPlace(ui->c7_pb->parentWidget(), ui->c7_pb, this);
        buttons[2][7] = new DeskPlace(ui->c8_pb->parentWidget(), ui->c8_pb, this);
        buttons[2][8] = new DeskPlace(ui->c9_pb->parentWidget(), ui->c9_pb, this);
        buttons[2][9] = new DeskPlace(ui->c10_pb->parentWidget(), ui->c10_pb, this);
        buttons[2][10] = new DeskPlace(ui->c11_pb->parentWidget(), ui->c11_pb, this);
        buttons[2][11] = new DeskPlace(ui->c12_pb->parentWidget(), ui->c12_pb, this);

        buttons[3][0] = new DeskPlace(ui->d1_pb->parentWidget(), ui->d1_pb, this);
        buttons[3][1] = new DeskPlace(ui->d2_pb->parentWidget(), ui->d2_pb, this);
        buttons[3][2] = new DeskPlace(ui->d3_pb->parentWidget(), ui->d3_pb, this);
        buttons[3][3] = new DeskPlace(ui->d4_pb->parentWidget(), ui->d4_pb, this);
        buttons[3][4] = new DeskPlace(ui->d5_pb->parentWidget(), ui->d5_pb, this);
        buttons[3][5] = new DeskPlace(ui->d6_pb->parentWidget(), ui->d6_pb, this);
        buttons[3][6] = new DeskPlace(ui->d7_pb->parentWidget(), ui->d7_pb, this);
        buttons[3][7] = new DeskPlace(ui->d8_pb->parentWidget(), ui->d8_pb, this);
        buttons[3][8] = new DeskPlace(ui->d9_pb->parentWidget(), ui->d9_pb, this);
        buttons[3][9] = new DeskPlace(ui->d10_pb->parentWidget(), ui->d10_pb, this);
        buttons[3][10] = new DeskPlace(ui->d11_pb->parentWidget(), ui->d11_pb, this);
        buttons[3][11] = new DeskPlace(ui->d12_pb->parentWidget(), ui->d12_pb, this);

        buttons[4][0] = new DeskPlace(ui->e1_pb->parentWidget(), ui->e1_pb, this);
        buttons[4][1] = new DeskPlace(ui->e2_pb->parentWidget(), ui->e2_pb, this);
        buttons[4][2] = new DeskPlace(ui->e3_pb->parentWidget(), ui->e3_pb, this);
        buttons[4][3] = new DeskPlace(ui->e4_pb->parentWidget(), ui->e4_pb, this);
        buttons[4][4] = new DeskPlace(ui->e5_pb->parentWidget(), ui->e5_pb, this);
        buttons[4][5] = new DeskPlace(ui->e6_pb->parentWidget(), ui->e6_pb, this);
        buttons[4][6] = new DeskPlace(ui->e7_pb->parentWidget(), ui->e7_pb, this);
        buttons[4][7] = new DeskPlace(ui->e8_pb->parentWidget(), ui->e8_pb, this);
        buttons[4][8] = new DeskPlace(ui->e9_pb->parentWidget(), ui->e9_pb, this);
        buttons[4][9] = new DeskPlace(ui->e10_pb->parentWidget(), ui->e10_pb, this);
        buttons[4][10] = new DeskPlace(ui->e11_pb->parentWidget(), ui->e11_pb, this);
        buttons[4][11] = new DeskPlace(ui->e12_pb->parentWidget(), ui->e12_pb, this);

        buttons[5][0] = new DeskPlace(ui->f1_pb->parentWidget(), ui->f1_pb, this);
        buttons[5][1] = new DeskPlace(ui->f2_pb->parentWidget(), ui->f2_pb, this);
        buttons[5][2] = new DeskPlace(ui->f3_pb->parentWidget(), ui->f3_pb, this);
        buttons[5][3] = new DeskPlace(ui->f4_pb->parentWidget(), ui->f4_pb, this);
        buttons[5][4] = new DeskPlace(ui->f5_pb->parentWidget(), ui->f5_pb, this);
        buttons[5][5] = new DeskPlace(ui->f6_pb->parentWidget(), ui->f6_pb, this);
        buttons[5][6] = new DeskPlace(ui->f7_pb->parentWidget(), ui->f7_pb, this);
        buttons[5][7] = new DeskPlace(ui->f8_pb->parentWidget(), ui->f8_pb, this);
        buttons[5][8] = new DeskPlace(ui->f9_pb->parentWidget(), ui->f9_pb, this);
        buttons[5][9] = new DeskPlace(ui->f10_pb->parentWidget(), ui->f10_pb, this);
        buttons[5][10] = new DeskPlace(ui->f11_pb->parentWidget(), ui->f11_pb, this);
        buttons[5][11] = new DeskPlace(ui->f12_pb->parentWidget(), ui->f12_pb, this);

        buttons[6][0] = new DeskPlace(ui->g1_pb->parentWidget(), ui->g1_pb, this);
        buttons[6][1] = new DeskPlace(ui->g2_pb->parentWidget(), ui->g2_pb, this);
        buttons[6][2] = new DeskPlace(ui->g3_pb->parentWidget(), ui->g3_pb, this);
        buttons[6][3] = new DeskPlace(ui->g4_pb->parentWidget(), ui->g4_pb, this);
        buttons[6][4] = new DeskPlace(ui->g5_pb->parentWidget(), ui->g5_pb, this);
        buttons[6][5] = new DeskPlace(ui->g6_pb->parentWidget(), ui->g6_pb, this);
        buttons[6][6] = new DeskPlace(ui->g7_pb->parentWidget(), ui->g7_pb, this);
        buttons[6][7] = new DeskPlace(ui->g8_pb->parentWidget(), ui->g8_pb, this);
        buttons[6][8] = new DeskPlace(ui->g9_pb->parentWidget(), ui->g9_pb, this);
        buttons[6][9] = new DeskPlace(ui->g10_pb->parentWidget(), ui->g10_pb, this);
        buttons[6][10] = new DeskPlace(ui->g11_pb->parentWidget(), ui->g11_pb, this);
        buttons[6][11] = new DeskPlace(ui->g12_pb->parentWidget(), ui->g12_pb, this);

        buttons[7][0] = new DeskPlace(ui->h1_pb->parentWidget(), ui->h1_pb, this);
        buttons[7][1] = new DeskPlace(ui->h2_pb->parentWidget(), ui->h2_pb, this);
        buttons[7][2] = new DeskPlace(ui->h3_pb->parentWidget(), ui->h3_pb, this);
        buttons[7][3] = new DeskPlace(ui->h4_pb->parentWidget(), ui->h4_pb, this);
        buttons[7][4] = new DeskPlace(ui->h5_pb->parentWidget(), ui->h5_pb, this);
        buttons[7][5] = new DeskPlace(ui->h6_pb->parentWidget(), ui->h6_pb, this);
        buttons[7][6] = new DeskPlace(ui->h7_pb->parentWidget(), ui->h7_pb, this);
        buttons[7][7] = new DeskPlace(ui->h8_pb->parentWidget(), ui->h8_pb, this);
        buttons[7][8] = new DeskPlace(ui->h9_pb->parentWidget(), ui->h9_pb, this);
        buttons[7][9] = new DeskPlace(ui->h10_pb->parentWidget(), ui->h10_pb, this);
        buttons[7][10] = new DeskPlace(ui->h11_pb->parentWidget(), ui->h11_pb, this);
        buttons[7][11] = new DeskPlace(ui->h12_pb->parentWidget(), ui->h12_pb, this);
    }
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 12; j++){
            connect(buttons[i][j], &QPushButton::clicked, this, [this, i, j](){
                qDebug() << "button clicked\n";
                clickedButton(i, j);
            });
            buttons[i][j]->setVisible(false);
        }
    }
    // инициализация массива указателей на объект с изображением фигуры
    {
        pictures[0][0] = ui->a1_l;
        pictures[0][1] = ui->a2_l;
        pictures[0][2] = ui->a3_l;
        pictures[0][3] = ui->a4_l;
        pictures[0][4] = ui->a5_l;
        pictures[0][5] = ui->a6_l;
        pictures[0][6] = ui->a7_l;
        pictures[0][7] = ui->a8_l;
        pictures[0][8] = ui->a9_l;
        pictures[0][9] = ui->a10_l;
        pictures[0][10] = ui->a11_l;
        pictures[0][11] = ui->a12_l;

        pictures[1][0] = ui->b1_l;
        pictures[1][1] = ui->b2_l;
        pictures[1][2] = ui->b3_l;
        pictures[1][3] = ui->b4_l;
        pictures[1][4] = ui->b5_l;
        pictures[1][5] = ui->b6_l;
        pictures[1][6] = ui->b7_l;
        pictures[1][7] = ui->b8_l;
        pictures[1][8] = ui->b9_l;
        pictures[1][9] = ui->b10_l;
        pictures[1][10] = ui->b11_l;
        pictures[1][11] = ui->b12_l;

        pictures[2][0] = ui->c1_l;
        pictures[2][1] = ui->c2_l;
        pictures[2][2] = ui->c3_l;
        pictures[2][3] = ui->c4_l;
        pictures[2][4] = ui->c5_l;
        pictures[2][5] = ui->c6_l;
        pictures[2][6] = ui->c7_l;
        pictures[2][7] = ui->c8_l;
        pictures[2][8] = ui->c9_l;
        pictures[2][9] = ui->c10_l;
        pictures[2][10] = ui->c11_l;
        pictures[2][11] = ui->c12_l;

        pictures[3][0] = ui->d1_l;
        pictures[3][1] = ui->d2_l;
        pictures[3][2] = ui->d3_l;
        pictures[3][3] = ui->d4_l;
        pictures[3][4] = ui->d5_l;
        pictures[3][5] = ui->d6_l;
        pictures[3][6] = ui->d7_l;
        pictures[3][7] = ui->d8_l;
        pictures[3][8] = ui->d9_l;
        pictures[3][9] = ui->d10_l;
        pictures[3][10] = ui->d11_l;
        pictures[3][11] = ui->d12_l;

        pictures[4][0] = ui->e1_l;
        pictures[4][1] = ui->e2_l;
        pictures[4][2] = ui->e3_l;
        pictures[4][3] = ui->e4_l;
        pictures[4][4] = ui->e5_l;
        pictures[4][5] = ui->e6_l;
        pictures[4][6] = ui->e7_l;
        pictures[4][7] = ui->e8_l;
        pictures[4][8] = ui->e9_l;
        pictures[4][9] = ui->e10_l;
        pictures[4][10] = ui->e11_l;
        pictures[4][11] = ui->e12_l;

        pictures[5][0] = ui->f1_l;
        pictures[5][1] = ui->f2_l;
        pictures[5][2] = ui->f3_l;
        pictures[5][3] = ui->f4_l;
        pictures[5][4] = ui->f5_l;
        pictures[5][5] = ui->f6_l;
        pictures[5][6] = ui->f7_l;
        pictures[5][7] = ui->f8_l;
        pictures[5][8] = ui->f9_l;
        pictures[5][9] = ui->f10_l;
        pictures[5][10] = ui->f11_l;
        pictures[5][11] = ui->f12_l;

        pictures[6][0] = ui->g1_l;
        pictures[6][1] = ui->g2_l;
        pictures[6][2] = ui->g3_l;
        pictures[6][3] = ui->g4_l;
        pictures[6][4] = ui->g5_l;
        pictures[6][5] = ui->g6_l;
        pictures[6][6] = ui->g7_l;
        pictures[6][7] = ui->g8_l;
        pictures[6][8] = ui->g9_l;
        pictures[6][9] = ui->g10_l;
        pictures[6][10] = ui->g11_l;
        pictures[6][11] = ui->g12_l;

        pictures[7][0] = ui->h1_l;
        pictures[7][1] = ui->h2_l;
        pictures[7][2] = ui->h3_l;
        pictures[7][3] = ui->h4_l;
        pictures[7][4] = ui->h5_l;
        pictures[7][5] = ui->h6_l;
        pictures[7][6] = ui->h7_l;
        pictures[7][7] = ui->h8_l;
        pictures[7][8] = ui->h9_l;
        pictures[7][9] = ui->h10_l;
        pictures[7][10] = ui->h11_l;
        pictures[7][11] = ui->h12_l;
    }

    sequence = 0;
    isCurPlace = false;
    curPlace[0] = -1; curPlace[1] = -1;


    // init startWidget


    // init dialogWidget
    ui->NP1->clear();
    ui->NP2->clear();
    ui->NP3->clear();

    // init loadWidget

    // init saveWIdget
    //"C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png"
    ui->l_backgnd_startPage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));
    ui->l_backgnd_dialogPage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));
    ui->l_backgnd_loadPage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));
    ui->l_backgnd_savePage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));
    ui->l_backgnd_gamePage->setPixmap(QPixmap(QString("C:\\Programms\\5 semester\\JCRPO\\game\\chess1v3\\resources\\backgnd.png")));


    ui->stackedWidget->setCurrentIndex(0);
}


MainWindow::~MainWindow()
{
    delete ui;
}

// передача очередности хода
void MainWindow::nextPlayerTurn(){
    if (sequence == 2){
        sequence = 0;
    }
    else {
        sequence ++;
    }
    if (this->checkmate_players[sequence]){
        nextPlayerTurn();
    }
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 12; j++){
            buttons[i][j]->setVisible(false);
        }
    }
    isCurPlace = false;
    curPlace[0] = -1; curPlace[1] = -1;
    enablePlayerPlaces();
}

// Обработка нажатия кнопки
void MainWindow::clickedButton(int col, int row){
    if (this->isCurPlace){
        if (this->curPlace[0] == col && this->curPlace[1] == row){
            isCurPlace = false;
            for (int i = 0; i < 8; i++){
                for (int j = 0; j < 12; j++){
                    buttons[i][j]->setVisible(false);
                }
            }
            enablePlayerPlaces();
        }
        else {
            isCurPlace = false;
            Figure* movedFig = buttons[curPlace[0]][curPlace[1]]->getFigure();
            buttons[curPlace[0]][curPlace[1]]->setFigure(nullptr);
            this->setIconFigure(curPlace[0], curPlace[1], ""); // очистка
            if (buttons[col][row]->getFigure()){
                buttons[col][row]->setVisible(false);
                buttons[col][row]->getFigure()->exist = false;
            }
            buttons[col][row]->setFigure(movedFig, sequence);
            this->setIconFigure(col, row, movedFig->getName());                 // вставка
            nextPlayerTurn();
            if (check_player1[sequence]){
                // если вам шах, то ...
            }
        }
    }
    else {
        isCurPlace = true;
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 12; j++){
                buttons[i][j]->setVisible(false);
            }
        }
        buttons[col][row]->setVisible();
        enableStepPlaces(col, row);
    }

}

void MainWindow::enablePlayerPlaces(){
    QList<Figure> list = players[sequence].getListFigure();
    for (int i = 0; i < 16; i++){
        if (list[0].exist){
            // сделать видимыми кнопки на фигуры
        }
    }
}

// включить кнопки, куда можно походить
void MainWindow::enableStepPlaces(int col, int row){
    Figure* fig = buttons[col][row]->getFigure();
    QList<struct steps> hits = fig->getAttack();
    QList<struct steps> steps = fig->getSteps();
    for (int i = 0; i < steps.size(); i++){

    }
    for (int i = 0; i < hits.size(); i++){

    }
}




void MainWindow::actNewGame(){

}      // gameWidget

void MainWindow::actSaveGame(){

}     // gameWidget

void MainWindow::actLoadGame(){

}     // gameWidget

void MainWindow::actStepBack(){

}     // gameWidget

void MainWindow::actStepForward(){

}  // gameWidget

void MainWindow::actListSteps(){

}    // gameWidget


void MainWindow::populateFileList() {
    QDir directory(m_directoryPath);
    QStringList fileList = directory.entryList(QDir::Files | QDir::NoDotAndDotDot);
    ui->lw_loadPage->clear();
    ui->lw_loadPage->addItems(fileList);
}

void MainWindow::setIconFigure(int i, int j, const QString &figName)
{
    if (figName.isEmpty()){
        this->pictures[i][j]->setIcon(QIcon());
    }
    else if (!figName.compare(fignames[0])){     // пешка
        this->pictures[i][j]->setIcon(QIcon());
    }
    else if (!figName.compare(fignames[1])){
        this->pictures[i][j]->setIcon(QIcon());
    }
    else if(!figName.compare(fignames[2])){
        this->pictures[i][j]->setIcon(QIcon());
    }
    else if(!figName.compare(fignames[3])){
        this->pictures[i][j]->setIcon(QIcon());
    }
    else if(!figName.compare(fignames[4])){
        this->pictures[i][j]->setIcon(QIcon());
    }
    else if(!figName.compare(fignames[5])){
        this->pictures[i][j]->setIcon(QIcon());
    }
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
        ui->stackedWidget->setCurrentIndex(4);
        return;
    }
    /*    else if (){

    }*/
}

// отмена ввода имен
void MainWindow::on_cancelDialog_clicked()
{
    if (stage == 1 || stage == 2){
        stage = 0;
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }/*
    else if (){

    }*/
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


void MainWindow::on_pb_OK_loadPage_clicked()
{
    QListWidgetItem* selectedItem = ui->lw_loadPage->currentItem();
    if (selectedItem) {
        QString selectedFileName = selectedItem->text();

        // do
        loadGame();
        //qDebug() << "Selected file: " << selectedFileName;
    }
}


void MainWindow::on_pb_back_loadPage_clicked()
{
    if (stage == 1 || stage == 2){
        stage = 0;
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }
    // else if (){}
}

void MainWindow::loadGame(){


}

void MainWindow::createNewGame(){
    players[0] = InfoPlayer(ui->NP1->text(), "A01");
    players[1] = InfoPlayer(ui->NP2->text(), "H08");
    players[2] = InfoPlayer(ui->NP3->text(), "H12");
    ui->l_PName1->setText(ui->NP1->text());
    ui->l_PName2->setText(ui->NP2->text());
    ui->l_PName3->setText(ui->NP3->text());
    ui->l_PScore1->setText("0");
    ui->l_PScore1->setText("0");
    ui->l_PScore1->setText("0");

    moveHistory = MoveCounter();
    sequence = 0;

    isCurPlace = false;
    curPlace[0] = -1; curPlace[1] = -1;
    for (int i = 0; i < 3; i++){
        check_player1[i] = false;
        checkmate_players[i] = false;
    }
}





