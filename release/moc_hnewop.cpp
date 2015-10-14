/****************************************************************************
** Meta object code from reading C++ file 'hnewop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hnewop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hnewop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HNewOp_t {
    QByteArrayData data[20];
    char stringdata[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HNewOp_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HNewOp_t qt_meta_stringdata_HNewOp = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 7),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 9),
QT_MOC_LITERAL(4, 26, 9),
QT_MOC_LITERAL(5, 36, 12),
QT_MOC_LITERAL(6, 49, 13),
QT_MOC_LITERAL(7, 63, 23),
QT_MOC_LITERAL(8, 87, 15),
QT_MOC_LITERAL(9, 103, 17),
QT_MOC_LITERAL(10, 121, 19),
QT_MOC_LITERAL(11, 141, 13),
QT_MOC_LITERAL(12, 155, 19),
QT_MOC_LITERAL(13, 175, 4),
QT_MOC_LITERAL(14, 180, 16),
QT_MOC_LITERAL(15, 197, 6),
QT_MOC_LITERAL(16, 204, 13),
QT_MOC_LITERAL(17, 218, 21),
QT_MOC_LITERAL(18, 240, 24),
QT_MOC_LITERAL(19, 265, 7)
    },
    "HNewOp\0trigger\0\0elabLeLot\0setupForm\0"
    "cbTipiLotSet\0cbunitaMisura\0"
    "on_pushButton_2_clicked\0productSelected\0"
    "fornitoreSelected\0onConnectionNameSet\0"
    "createUmModel\0saveOperationString\0"
    "plot\0saveNewLotString\0isLoad\0saveOperation\0"
    "on_pushButton_clicked\0on_radioButton_2_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HNewOp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    2,   99,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,   13,    2,
    QMetaType::QString, QMetaType::Bool,   15,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void HNewOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HNewOp *_t = static_cast<HNewOp *>(_o);
        switch (_id) {
        case 0: _t->trigger(); break;
        case 1: _t->elabLeLot(); break;
        case 2: _t->setupForm(); break;
        case 3: _t->cbTipiLotSet(); break;
        case 4: _t->cbunitaMisura(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->productSelected(); break;
        case 7: _t->fornitoreSelected(); break;
        case 8: _t->onConnectionNameSet(); break;
        case 9: _t->createUmModel(); break;
        case 10: { QString _r = _t->saveOperationString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->saveNewLotString((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->saveOperation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->on_pushButton_clicked(); break;
        case 14: _t->on_radioButton_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HNewOp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HNewOp::trigger)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HNewOp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HNewOp.data,
      qt_meta_data_HNewOp,  qt_static_metacall, 0, 0}
};


const QMetaObject *HNewOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HNewOp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HNewOp.stringdata))
        return static_cast<void*>(const_cast< HNewOp*>(this));
    return QWidget::qt_metacast(_clname);
}

int HNewOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void HNewOp::trigger()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
