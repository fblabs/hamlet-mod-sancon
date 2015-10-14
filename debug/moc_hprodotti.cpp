/****************************************************************************
** Meta object code from reading C++ file 'hprodotti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hprodotti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hprodotti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HProdotti_t {
    QByteArrayData data[16];
    char stringdata[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HProdotti_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HProdotti_t qt_meta_stringdata_HProdotti = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 11),
QT_MOC_LITERAL(4, 31, 1),
QT_MOC_LITERAL(5, 33, 13),
QT_MOC_LITERAL(6, 47, 4),
QT_MOC_LITERAL(7, 52, 13),
QT_MOC_LITERAL(8, 66, 8),
QT_MOC_LITERAL(9, 75, 7),
QT_MOC_LITERAL(10, 83, 8),
QT_MOC_LITERAL(11, 92, 21),
QT_MOC_LITERAL(12, 114, 23),
QT_MOC_LITERAL(13, 138, 23),
QT_MOC_LITERAL(14, 162, 23),
QT_MOC_LITERAL(15, 186, 23)
    },
    "HProdotti\0setMain\0\0MainWindow*\0w\0"
    "setConnection\0conn\0productSearch\0"
    "showType\0setForm\0setImage\0"
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
       5,    1,   72,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
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
        switch (_id) {
        case 0: _t->setMain((*reinterpret_cast< MainWindow*(*)>(_a[1]))); break;
        case 1: _t->setConnection((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        }
    }
}

const QMetaObject HProdotti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HProdotti.data,
      qt_meta_data_HProdotti,  qt_static_metacall, 0, 0}
};


const QMetaObject *HProdotti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HProdotti::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HProdotti.stringdata))
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
