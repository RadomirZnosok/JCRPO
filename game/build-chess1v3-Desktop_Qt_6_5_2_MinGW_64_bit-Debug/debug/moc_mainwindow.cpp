/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chess1v3/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "clickedButton",
    "",
    "col",
    "row",
    "actNewGame",
    "actSaveGame",
    "actLoadGame",
    "actStepBack",
    "actStepForward",
    "actListSteps",
    "on_okDialog_clicked",
    "on_cancelDialog_clicked",
    "on_pb_createGame_2_clicked",
    "on_pb_loadGame_2_clicked",
    "on_pb_OK_loadPage_clicked",
    "on_pb_back_loadPage_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[4];
    char stringdata5[11];
    char stringdata6[12];
    char stringdata7[12];
    char stringdata8[12];
    char stringdata9[15];
    char stringdata10[13];
    char stringdata11[20];
    char stringdata12[24];
    char stringdata13[27];
    char stringdata14[25];
    char stringdata15[26];
    char stringdata16[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 13),  // "clickedButton"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 3),  // "col"
        QT_MOC_LITERAL(30, 3),  // "row"
        QT_MOC_LITERAL(34, 10),  // "actNewGame"
        QT_MOC_LITERAL(45, 11),  // "actSaveGame"
        QT_MOC_LITERAL(57, 11),  // "actLoadGame"
        QT_MOC_LITERAL(69, 11),  // "actStepBack"
        QT_MOC_LITERAL(81, 14),  // "actStepForward"
        QT_MOC_LITERAL(96, 12),  // "actListSteps"
        QT_MOC_LITERAL(109, 19),  // "on_okDialog_clicked"
        QT_MOC_LITERAL(129, 23),  // "on_cancelDialog_clicked"
        QT_MOC_LITERAL(153, 26),  // "on_pb_createGame_2_clicked"
        QT_MOC_LITERAL(180, 24),  // "on_pb_loadGame_2_clicked"
        QT_MOC_LITERAL(205, 25),  // "on_pb_OK_loadPage_clicked"
        QT_MOC_LITERAL(231, 27)   // "on_pb_back_loadPage_clicked"
    },
    "MainWindow",
    "clickedButton",
    "",
    "col",
    "row",
    "actNewGame",
    "actSaveGame",
    "actLoadGame",
    "actStepBack",
    "actStepForward",
    "actListSteps",
    "on_okDialog_clicked",
    "on_cancelDialog_clicked",
    "on_pb_createGame_2_clicked",
    "on_pb_loadGame_2_clicked",
    "on_pb_OK_loadPage_clicked",
    "on_pb_back_loadPage_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   92,    2, 0x08,    1 /* Private */,
       5,    0,   97,    2, 0x08,    4 /* Private */,
       6,    0,   98,    2, 0x08,    5 /* Private */,
       7,    0,   99,    2, 0x08,    6 /* Private */,
       8,    0,  100,    2, 0x08,    7 /* Private */,
       9,    0,  101,    2, 0x08,    8 /* Private */,
      10,    0,  102,    2, 0x08,    9 /* Private */,
      11,    0,  103,    2, 0x08,   10 /* Private */,
      12,    0,  104,    2, 0x08,   11 /* Private */,
      13,    0,  105,    2, 0x08,   12 /* Private */,
      14,    0,  106,    2, 0x08,   13 /* Private */,
      15,    0,  107,    2, 0x08,   14 /* Private */,
      16,    0,  108,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'clickedButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'actNewGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actSaveGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actLoadGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actStepBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actStepForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actListSteps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_okDialog_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelDialog_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_createGame_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_loadGame_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_OK_loadPage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_back_loadPage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clickedButton((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->actNewGame(); break;
        case 2: _t->actSaveGame(); break;
        case 3: _t->actLoadGame(); break;
        case 4: _t->actStepBack(); break;
        case 5: _t->actStepForward(); break;
        case 6: _t->actListSteps(); break;
        case 7: _t->on_okDialog_clicked(); break;
        case 8: _t->on_cancelDialog_clicked(); break;
        case 9: _t->on_pb_createGame_2_clicked(); break;
        case 10: _t->on_pb_loadGame_2_clicked(); break;
        case 11: _t->on_pb_OK_loadPage_clicked(); break;
        case 12: _t->on_pb_back_loadPage_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
