#include "mainwindow.h"
#include "startwindow.h"
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
    StartWindow w1;
    w1.setWindowTitle("Chess1v3");
    w1.show();
//    MainWindow w1;
//    w1.setWindowTitle("Chess1v3");
//    w1.show();
    return a.exec();
}


void initRun(){



    printf("Initialisation is finished\n");
}
