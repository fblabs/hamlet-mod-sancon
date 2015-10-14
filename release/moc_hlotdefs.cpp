/****************************************************************************
** Meta object code from reading C++ file 'hlotdefs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hlotdefs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hlotdefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HLotti_t {
    QByteArrayData data[18];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HLotti_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HLotti_t qt_meta_stringdata_HLotti = {
    {
QT_MOC_LITERAL(0, 0, 6), // "HLotti"
QT_MOC_LITERAL(1, 7, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 54, 13), // "searchProduct"
QT_MOC_LITERAL(5, 68, 19), // "onConnectionNameSet"
QT_MOC_LITERAL(6, 88, 9), // "resetData"
QT_MOC_LITERAL(7, 98, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(8, 122, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(9, 146, 9), // "setFilter"
QT_MOC_LITERAL(10, 156, 15), // "on_chbT_toggled"
QT_MOC_LITERAL(11, 172, 7), // "checked"
QT_MOC_LITERAL(12, 180, 15), // "on_chbP_toggled"
QT_MOC_LITERAL(13, 196, 15), // "showContextMenu"
QT_MOC_LITERAL(14, 212, 3), // "pos"
QT_MOC_LITERAL(15, 216, 9), // "copyField"
QT_MOC_LITERAL(16, 226, 5), // "print"
QT_MOC_LITERAL(17, 232, 23) // "on_pushButton_6_clicked"

    },
    "HLotti\0on_pushButton_clicked\0\0"
    "on_pushButton_3_clicked\0searchProduct\0"
    "onConnectionNameSet\0resetData\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "setFilter\0on_chbT_toggled\0checked\0"
    "on_chbP_toggled\0showContextMenu\0pos\0"
    "copyField\0print\0on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HLotti[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HLotti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HLotti *_t = static_cast<HLotti *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->searchProduct(); break;
        case 3: _t->onConnectionNameSet(); break;
        case 4: _t->resetData(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->setFilter(); break;
        case 8: _t->on_chbT_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_chbP_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->copyField(); break;
        case 12: _t->print(); break;
        case 13: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject HLotti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HLotti.data,
      qt_meta_data_HLotti,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HLotti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HLotti::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HLotti.stringdata0))
        return static_cast<void*>(const_cast< HLotti*>(this));
    return QWidget::qt_metacast(_clname);
}

int HLotti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
