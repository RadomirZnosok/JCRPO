QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    binfile.cpp \
    deskplace.cpp \
    figure.cpp \
    infoplayer.cpp \
    main.cpp \
    mainwindow.cpp \
    movecounter.cpp \
    position.cpp

HEADERS += \
    binfile.h \
    deskplace.h \
    figure.h \
    header.h \
    infoplayer.h \
    mainwindow.h \
    movecounter.h \
    position.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resources/b0.png \
    resources/b1.png \
    resources/b2.png \
    resources/b3.png \
    resources/b4.png \
    resources/b5.png \
    resources/backgnd.png \
    resources/desk.png \
    resources/g0.png \
    resources/g1.png \
    resources/g2.png \
    resources/g3.png \
    resources/g4.png \
    resources/g5.png \
    resources/o0.png \
    resources/o1.png \
    resources/o2.png \
    resources/o3.png \
    resources/o4.png \
    resources/o5.png
