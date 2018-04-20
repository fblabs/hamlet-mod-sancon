/****************************************************************************
** Meta object code from reading C++ file 'hwarehousedetails.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hwarehousedetails.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwarehousedetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HWarehouseDetails_t {
    QByteArrayData data[8];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HWarehouseDetails_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HWarehouseDetails_t qt_meta_stringdata_HWarehouseDetails = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HWarehouseDetails"
QT_MOC_LITERAL(1, 18, 7), // "confirm"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "getLotdefData"
QT_MOC_LITERAL(4, 41, 17), // "on_pbUndo_clicked"
QT_MOC_LITERAL(5, 59, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(6, 77, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(7, 96, 13) // "saveOperation"

    },
    "HWarehouseDetails\0confirm\0\0getLotdefData\0"
    "on_pbUndo_clicked\0on_pbSave_clicked\0"
    "on_pbClose_clicked\0saveOperation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HWarehouseDetails[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void HWarehouseDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HWarehouseDetails *_t = static_cast<HWarehouseDetails *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->confirm();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->getLotdefData(); break;
        case 2: _t->on_pbUndo_clicked(); break;
        case 3: _t->on_pbSave_clicked(); break;
        case 4: _t->on_pbClose_clicked(); break;
        case 5: { bool _r = _t->saveOperation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (HWarehouseDetails::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HWarehouseDetails::confirm)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HWarehouseDetails::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HWarehouseDetails.data,
      qt_meta_data_HWarehouseDetails,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HWarehouseDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HWarehouseDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HWarehouseDetails.stringdata0))
        return static_cast<void*>(const_cast< HWarehouseDetails*>(this));
    return QWidget::qt_metacast(_clname);
}

int HWarehouseDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
int HWarehouseDetails::confirm()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
