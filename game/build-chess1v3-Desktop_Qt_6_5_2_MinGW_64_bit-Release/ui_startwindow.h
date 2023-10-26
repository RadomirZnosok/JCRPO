/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *gameName;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_createGame;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_loadGame;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName("StartWindow");
        StartWindow->resize(457, 276);
        StartWindow->setMinimumSize(QSize(457, 276));
        StartWindow->setMaximumSize(QSize(457, 276));
        centralwidget = new QWidget(StartWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 461, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gameName = new QLabel(verticalLayoutWidget);
        gameName->setObjectName("gameName");
        QFont font;
        font.setPointSize(17);
        gameName->setFont(font);
        gameName->setLayoutDirection(Qt::LeftToRight);
        gameName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(gameName);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pb_createGame = new QPushButton(verticalLayoutWidget);
        pb_createGame->setObjectName("pb_createGame");
        pb_createGame->setMinimumSize(QSize(60, 30));

        horizontalLayout->addWidget(pb_createGame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pb_loadGame = new QPushButton(verticalLayoutWidget);
        pb_loadGame->setObjectName("pb_loadGame");
        pb_loadGame->setMinimumSize(QSize(60, 30));

        horizontalLayout->addWidget(pb_loadGame);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 491, 261));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Users/USER/OneDrive/\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217/\320\224\320\273\321\217 \321\200\320\260\320\261\320\276\321\202\321\213/\320\221\320\223\320\243\320\230\320\240_3\320\272\321\203\321\200\321\201_\320\226\320\246\320\240\320\237\320\236/green-checkered-free-stock-photo--public-domain-pictures-templates.png")));
        StartWindow->setCentralWidget(centralwidget);
        label->raise();
        verticalLayoutWidget->raise();
        menubar = new QMenuBar(StartWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 457, 21));
        StartWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StartWindow);
        statusbar->setObjectName("statusbar");
        StartWindow->setStatusBar(statusbar);

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartWindow)
    {
        StartWindow->setWindowTitle(QCoreApplication::translate("StartWindow", "MainWindow", nullptr));
        gameName->setText(QCoreApplication::translate("StartWindow", "Chess1v3", nullptr));
        pb_createGame->setText(QCoreApplication::translate("StartWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        pb_loadGame->setText(QCoreApplication::translate("StartWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
