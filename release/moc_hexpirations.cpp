/****************************************************************************
** Meta object code from reading C++ file 'hexpirations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hexpirations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hexpirations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HExpirations_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HExpirations_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HExpirations_t qt_meta_stringdata_HExpirations = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HExpirations"
QT_MOC_LITERAL(1, 13, 14), // "getExpirations"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 51, 22), // "on_deLimit_dateChanged"
QT_MOC_LITERAL(5, 74, 4), // "date"
QT_MOC_LITERAL(6, 79, 22), // "on_sbDays_valueChanged"
QT_MOC_LITERAL(7, 102, 4), // "arg1"
QT_MOC_LITERAL(8, 107, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 131, 5) // "print"

    },
    "HExpirations\0getExpirations\0\0"
    "on_pushButton_clicked\0on_deLimit_dateChanged\0"
    "date\0on_sbDays_valueChanged\0arg1\0"
    "on_pushButton_2_clicked\0print"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HExpirations[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HExpirations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HExpirations *_t = static_cast<HExpirations *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getExpirations(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_deLimit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->on_sbDays_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->print(); break;
        default: ;
        }
    }
}

const QMetaObject HExpirations::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HExpirations.data,
      qt_meta_data_HExpirations,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HExpirations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HExpirations::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HExpirations.stringdata0))
        return static_cast<void*>(const_cast< HExpirations*>(this));
    return QWidget::qt_metacast(_clname);
}

int HExpirations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
