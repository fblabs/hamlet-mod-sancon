/****************************************************************************
** Meta object code from reading C++ file 'hexpirations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hexpirations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hexpirations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HExpirations_t {
    QByteArrayData data[10];
    char stringdata0[155];
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
QT_MOC_LITERAL(6, 79, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 103, 5), // "print"
QT_MOC_LITERAL(8, 109, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 133, 21) // "on_deFrom_dateChanged"

    },
    "HExpirations\0getExpirations\0\0"
    "on_pushButton_clicked\0on_deLimit_dateChanged\0"
    "date\0on_pushButton_2_clicked\0print\0"
    "on_pushButton_3_clicked\0on_deFrom_dateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HExpirations[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    5,

       0        // eod
};

void HExpirations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HExpirations *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getExpirations(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_deLimit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->print(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_deFrom_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HExpirations::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HExpirations.data,
    qt_meta_data_HExpirations,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HExpirations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HExpirations::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HExpirations.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HExpirations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
