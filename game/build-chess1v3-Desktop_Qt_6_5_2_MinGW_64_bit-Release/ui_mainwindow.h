/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        action_6 = new QAction(MainWindow);
        action_6->setObjectName("action_6");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 160, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(300, 490, 211, 62));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_4);
        label_7->setObjectName("label_7");

        gridLayout_4->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_4);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_4);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralwidget);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(610, 20, 160, 51));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget_5);
        label_9->setObjectName("label_9");

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_5);
        label_10->setObjectName("label_10");

        gridLayout_5->addWidget(label_10, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_5);
        label_11->setObjectName("label_11");

        gridLayout_5->addWidget(label_11, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 90, 461, 381));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\245\320\276\320\264 \320\275\320\260\320\267\320\260\320\264", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\245\320\276\320\264 \320\262\320\277\320\265\321\200\321\221\320\264", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\205\320\276\320\264\320\276\320\262", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<\320\230\320\274\321\217>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\276\320\272 2", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<\320\230\320\274\321\217>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\272\320\270", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\276\320\272 1", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\276\320\272 3", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<\320\230\320\274\321\217>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\272\320\270", nullptr));
        label_2->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
