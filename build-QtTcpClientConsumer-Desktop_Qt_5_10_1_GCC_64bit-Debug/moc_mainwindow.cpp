/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Consumidor02/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[12];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "enviardados"
QT_MOC_LITERAL(2, 23, 13), // "vector<float>"
QT_MOC_LITERAL(3, 37, 0), // ""
QT_MOC_LITERAL(4, 38, 7), // "getData"
QT_MOC_LITERAL(5, 46, 8), // "conectar"
QT_MOC_LITERAL(6, 55, 11), // "desconectar"
QT_MOC_LITERAL(7, 67, 7), // "getList"
QT_MOC_LITERAL(8, 75, 10), // "StartTimer"
QT_MOC_LITERAL(9, 86, 9), // "mudaTimer"
QT_MOC_LITERAL(10, 96, 4), // "stop"
QT_MOC_LITERAL(11, 101, 12) // "mudaIP_lista"

    },
    "MainWindow\0enviardados\0vector<float>\0"
    "\0getData\0conectar\0desconectar\0getList\0"
    "StartTimer\0mudaTimer\0stop\0mudaIP_lista"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   64,    3, 0x0a /* Public */,
       5,    0,   65,    3, 0x0a /* Public */,
       6,    0,   66,    3, 0x0a /* Public */,
       7,    0,   67,    3, 0x0a /* Public */,
       8,    0,   68,    3, 0x0a /* Public */,
       9,    0,   69,    3, 0x0a /* Public */,
      10,    0,   70,    3, 0x0a /* Public */,
      11,    0,   71,    3, 0x0a /* Public */,

 // signals: parameters
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2,    3,    3,

 // slots: parameters
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { vector<float> _r = _t->enviardados((*reinterpret_cast< vector<float>(*)>(_a[1])),(*reinterpret_cast< vector<float>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vector<float>*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->getData(); break;
        case 2: _t->conectar(); break;
        case 3: _t->desconectar(); break;
        case 4: _t->getList(); break;
        case 5: _t->StartTimer(); break;
        case 6: _t->mudaTimer(); break;
        case 7: _t->stop(); break;
        case 8: _t->mudaIP_lista(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef vector<float> (MainWindow::*_t)(vector<float> , vector<float> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::enviardados)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
vector<float> MainWindow::enviardados(vector<float> _t1, vector<float> _t2)
{
    vector<float> _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
