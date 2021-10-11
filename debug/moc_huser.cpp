/****************************************************************************
** Meta object code from reading C++ file 'huser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../huser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'huser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HUser_t {
    QByteArrayData data[21];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HUser_t qt_meta_stringdata_HUser = {
    {
QT_MOC_LITERAL(0, 0, 5), // "HUser"
QT_MOC_LITERAL(1, 6, 11), // "setUserName"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "uname"
QT_MOC_LITERAL(4, 25, 7), // "setRole"
QT_MOC_LITERAL(5, 33, 4), // "role"
QT_MOC_LITERAL(6, 38, 7), // "getRole"
QT_MOC_LITERAL(7, 46, 9), // "setActive"
QT_MOC_LITERAL(8, 56, 8), // "isActive"
QT_MOC_LITERAL(9, 65, 5), // "setID"
QT_MOC_LITERAL(10, 71, 2), // "ID"
QT_MOC_LITERAL(11, 74, 5), // "getID"
QT_MOC_LITERAL(12, 80, 12), // "getCanUpdate"
QT_MOC_LITERAL(13, 93, 12), // "setCanUpdate"
QT_MOC_LITERAL(14, 106, 3), // "upd"
QT_MOC_LITERAL(15, 110, 16), // "setCanUpdateAnag"
QT_MOC_LITERAL(16, 127, 16), // "getCanUpdateAnag"
QT_MOC_LITERAL(17, 144, 11), // "getUsername"
QT_MOC_LITERAL(18, 156, 7), // "setNome"
QT_MOC_LITERAL(19, 164, 5), // "pnome"
QT_MOC_LITERAL(20, 170, 7) // "getName"

    },
    "HUser\0setUserName\0\0uname\0setRole\0role\0"
    "getRole\0setActive\0isActive\0setID\0ID\0"
    "getID\0getCanUpdate\0setCanUpdate\0upd\0"
    "setCanUpdateAnag\0getCanUpdateAnag\0"
    "getUsername\0setNome\0pnome\0getName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HUser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x0a /* Public */,
       6,    0,   85,    2, 0x0a /* Public */,
       7,    1,   86,    2, 0x0a /* Public */,
       9,    1,   89,    2, 0x0a /* Public */,
      11,    0,   92,    2, 0x0a /* Public */,
      12,    0,   93,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,
      16,    0,  100,    2, 0x0a /* Public */,
      17,    0,  101,    2, 0x0a /* Public */,
      18,    1,  102,    2, 0x0a /* Public */,
      20,    0,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::QString,

       0        // eod
};

void HUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setUserName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setRole((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { int _r = _t->getRole();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { int _r = _t->getID();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->getCanUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setCanUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setCanUpdateAnag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { bool _r = _t->getCanUpdateAnag();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->getUsername();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setNome((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: { QString _r = _t->getName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HUser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HUser.data,
    qt_meta_data_HUser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HUser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
