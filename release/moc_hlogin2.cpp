/****************************************************************************
** Meta object code from reading C++ file 'hlogin2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hlogin2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hlogin2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HLogin2_t {
    QByteArrayData data[15];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HLogin2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HLogin2_t qt_meta_stringdata_HLogin2 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "HLogin2"
QT_MOC_LITERAL(1, 8, 10), // "userLogged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "HUser*"
QT_MOC_LITERAL(4, 27, 3), // "usr"
QT_MOC_LITERAL(5, 31, 12), // "QSqlDatabase"
QT_MOC_LITERAL(6, 44, 3), // "pdb"
QT_MOC_LITERAL(7, 48, 5), // "login"
QT_MOC_LITERAL(8, 54, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 76, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 100, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(11, 120, 7), // "checked"
QT_MOC_LITERAL(12, 128, 15), // "get_permissions"
QT_MOC_LITERAL(13, 144, 6), // "p_user"
QT_MOC_LITERAL(14, 151, 6) // "p_role"

    },
    "HLogin2\0userLogged\0\0HUser*\0usr\0"
    "QSqlDatabase\0pdb\0login\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_checkBox_toggled\0"
    "checked\0get_permissions\0p_user\0p_role"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HLogin2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      12,    2,   65,    2, 0x08 /* Private */,
      12,    1,   70,    2, 0x28 /* Private | MethodCloned */,
      12,    0,   73,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 3,   13,
    QMetaType::Void,

       0        // eod
};

void HLogin2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HLogin2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userLogged((*reinterpret_cast< HUser*(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2]))); break;
        case 1: _t->login(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->get_permissions((*reinterpret_cast< HUser*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 6: _t->get_permissions((*reinterpret_cast< HUser*(*)>(_a[1]))); break;
        case 7: _t->get_permissions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HUser* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HUser* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HUser* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HLogin2::*)(HUser * , QSqlDatabase );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HLogin2::userLogged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HLogin2::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HLogin2.data,
    qt_meta_data_HLogin2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HLogin2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HLogin2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HLogin2.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HLogin2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void HLogin2::userLogged(HUser * _t1, QSqlDatabase _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
