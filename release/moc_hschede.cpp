/****************************************************************************
** Meta object code from reading C++ file 'hschede.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hschede.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hschede.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HSchede_t {
    QByteArrayData data[15];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HSchede_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HSchede_t qt_meta_stringdata_HSchede = {
    {
QT_MOC_LITERAL(0, 0, 7), // "HSchede"
QT_MOC_LITERAL(1, 8, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "on_pbMod_clicked"
QT_MOC_LITERAL(4, 45, 16), // "retrieveProducts"
QT_MOC_LITERAL(5, 62, 10), // "loadScheda"
QT_MOC_LITERAL(6, 73, 8), // "addImage"
QT_MOC_LITERAL(7, 82, 4), // "byte"
QT_MOC_LITERAL(8, 87, 4), // "name"
QT_MOC_LITERAL(9, 92, 5), // "width"
QT_MOC_LITERAL(10, 98, 6), // "height"
QT_MOC_LITERAL(11, 105, 11), // "resizeImage"
QT_MOC_LITERAL(12, 117, 2), // "wr"
QT_MOC_LITERAL(13, 120, 2), // "hr"
QT_MOC_LITERAL(14, 123, 11) // "addNewImage"

    },
    "HSchede\0on_pbClose_clicked\0\0"
    "on_pbMod_clicked\0retrieveProducts\0"
    "loadScheda\0addImage\0byte\0name\0width\0"
    "height\0resizeImage\0wr\0hr\0addNewImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HSchede[] = {

 // content:
       7,       // revision
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
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    4,   53,    2, 0x08 /* Private */,
      11,    3,   62,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString, QMetaType::Int, QMetaType::Int,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,   12,   13,
    QMetaType::Void,

       0        // eod
};

void HSchede::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HSchede *_t = static_cast<HSchede *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbClose_clicked(); break;
        case 1: _t->on_pbMod_clicked(); break;
        case 2: _t->retrieveProducts(); break;
        case 3: _t->loadScheda(); break;
        case 4: _t->addImage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->resizeImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->addNewImage(); break;
        default: ;
        }
    }
}

const QMetaObject HSchede::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HSchede.data,
      qt_meta_data_HSchede,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HSchede::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HSchede::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HSchede.stringdata0))
        return static_cast<void*>(const_cast< HSchede*>(this));
    return QWidget::qt_metacast(_clname);
}

int HSchede::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
