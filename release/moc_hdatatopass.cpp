/****************************************************************************
** Meta object code from reading C++ file 'hdatatopass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hdatatopass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hdatatopass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HDataToPass_t {
    QByteArrayData data[9];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HDataToPass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HDataToPass_t qt_meta_stringdata_HDataToPass = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HDataToPass"
QT_MOC_LITERAL(1, 12, 7), // "setData"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "prow"
QT_MOC_LITERAL(4, 26, 7), // "pprodid"
QT_MOC_LITERAL(5, 34, 6), // "plotid"
QT_MOC_LITERAL(6, 41, 10), // "pallergene"
QT_MOC_LITERAL(7, 52, 12), // "pdescription"
QT_MOC_LITERAL(8, 65, 9) // "pquantity"

    },
    "HDataToPass\0setData\0\0prow\0pprodid\0"
    "plotid\0pallergene\0pdescription\0pquantity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HDataToPass[] = {

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
       1,    6,   49,    2, 0x0a /* Public */,
       1,    5,   62,    2, 0x2a /* Public | MethodCloned */,
       1,    4,   73,    2, 0x2a /* Public | MethodCloned */,
       1,    3,   82,    2, 0x2a /* Public | MethodCloned */,
       1,    2,   89,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   94,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   97,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::QString, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::QString,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void HDataToPass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HDataToPass *_t = static_cast<HDataToPass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->setData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 2: _t->setData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->setData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->setData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setData(); break;
        default: ;
        }
    }
}

const QMetaObject HDataToPass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HDataToPass.data,
      qt_meta_data_HDataToPass,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HDataToPass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HDataToPass::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HDataToPass.stringdata0))
        return static_cast<void*>(const_cast< HDataToPass*>(this));
    return QObject::qt_metacast(_clname);
}

int HDataToPass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
