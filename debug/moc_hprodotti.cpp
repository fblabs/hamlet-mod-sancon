/****************************************************************************
** Meta object code from reading C++ file 'hprodotti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hprodotti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hprodotti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HProdotti_t {
    QByteArrayData data[18];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HProdotti_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HProdotti_t qt_meta_stringdata_HProdotti = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HProdotti"
QT_MOC_LITERAL(1, 10, 7), // "setMain"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "MainWindow*"
QT_MOC_LITERAL(4, 31, 1), // "w"
QT_MOC_LITERAL(5, 33, 13), // "setConnection"
QT_MOC_LITERAL(6, 47, 4), // "conn"
QT_MOC_LITERAL(7, 52, 6), // "HUser*"
QT_MOC_LITERAL(8, 59, 5), // "puser"
QT_MOC_LITERAL(9, 65, 13), // "productSearch"
QT_MOC_LITERAL(10, 79, 8), // "showType"
QT_MOC_LITERAL(11, 88, 7), // "setForm"
QT_MOC_LITERAL(12, 96, 8), // "setImage"
QT_MOC_LITERAL(13, 105, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 127, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(15, 151, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(16, 175, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(17, 199, 23) // "on_pushButton_5_clicked"

    },
    "HProdotti\0setMain\0\0MainWindow*\0w\0"
    "setConnection\0conn\0HUser*\0puser\0"
    "productSearch\0showType\0setForm\0setImage\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HProdotti[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    2,   72,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
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

void HProdotti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HProdotti *_t = static_cast<HProdotti *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMain((*reinterpret_cast< MainWindow*(*)>(_a[1]))); break;
        case 1: _t->setConnection((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< HUser*(*)>(_a[2]))); break;
        case 2: _t->productSearch(); break;
        case 3: _t->showType(); break;
        case 4: _t->setForm(); break;
        case 5: _t->setImage(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        case 9: _t->on_pushButton_4_clicked(); break;
        case 10: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainWindow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HUser* >(); break;
            }
            break;
        }
    }
}

const QMetaObject HProdotti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HProdotti.data,
      qt_meta_data_HProdotti,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HProdotti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HProdotti::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HProdotti.stringdata0))
        return static_cast<void*>(const_cast< HProdotti*>(this));
    return QWidget::qt_metacast(_clname);
}

int HProdotti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
