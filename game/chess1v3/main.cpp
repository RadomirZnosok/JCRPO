#include "mainwindow.h"
#include <QApplication>



void initRun();

int main(int argc, char *argv[])
{
    /*    if (argc > 1){
        char* runner;
        runner = *argv;
        for (; runner != nullptr; runner++){
            if (strcmp(runner, "init") == 0){
                initRun();
                break;
            }
        }
        return 0;
    }*/



    QApplication a(argc, argv);
    QString directoryPath = QDir::currentPath();//QString("C:\\Programms");//QDir::currentPath(); // Задайте путь к каталогу здесь
    MainWindow w1(directoryPath);
    w1.setWindowTitle("Chess1v3");
    w1.show();
    return a.exec();

}


void initRun(){

    printf("Initialisation is finished\n");
}
