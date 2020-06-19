/****************************************************************************
** Meta object code from reading C++ file 'hnewsheet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hnewsheet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hnewsheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HNewSheet_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HNewSheet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HNewSheet_t qt_meta_stringdata_HNewSheet = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HNewSheet"
QT_MOC_LITERAL(1, 10, 2), // "OK"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 7), // "p_linea"
QT_MOC_LITERAL(4, 22, 6), // "p_data"
QT_MOC_LITERAL(5, 29, 15), // "on_pbOK_clicked"
QT_MOC_LITERAL(6, 45, 19) // "on_pbCancel_clicked"

    },
    "HNewSheet\0OK\0\0p_linea\0p_data\0"
    "on_pbOK_clicked\0on_pbCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HNewSheet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x08 /* Private */,
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::QDate,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HNewSheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HNewSheet *_t = static_cast<HNewSheet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->OK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->on_pbOK_clicked(); break;
        case 2: _t->on_pbCancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (HNewSheet::*_t)(int , QDate );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HNewSheet::OK)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HNewSheet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HNewSheet.data,
      qt_meta_data_HNewSheet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HNewSheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HNewSheet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HNewSheet.stringdata0))
        return static_cast<void*>(const_cast< HNewSheet*>(this));
    return QWidget::qt_metacast(_clname);
}

int HNewSheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
int HNewSheet::OK(int _t1, QDate _t2)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
