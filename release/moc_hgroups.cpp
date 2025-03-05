/****************************************************************************
** Meta object code from reading C++ file 'hgroups.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hgroups.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hgroups.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HGroups_t {
    QByteArrayData data[16];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HGroups_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HGroups_t qt_meta_stringdata_HGroups = {
    {
QT_MOC_LITERAL(0, 0, 7), // "HGroups"
QT_MOC_LITERAL(1, 8, 19), // "permissions_updated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "getGroups"
QT_MOC_LITERAL(4, 39, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(5, 55, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(6, 74, 31), // "on_cbGruppi_currentIndexChanged"
QT_MOC_LITERAL(7, 106, 5), // "index"
QT_MOC_LITERAL(8, 112, 20), // "setup_permissions_ui"
QT_MOC_LITERAL(9, 133, 3), // "mod"
QT_MOC_LITERAL(10, 137, 18), // "update_permissions"
QT_MOC_LITERAL(11, 156, 6), // "gruppo"
QT_MOC_LITERAL(12, 163, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(13, 181, 24), // "on_pbCreateGroup_clicked"
QT_MOC_LITERAL(14, 206, 18), // "refreshGroupsModel"
QT_MOC_LITERAL(15, 225, 19) // "on_pbDelete_clicked"

    },
    "HGroups\0permissions_updated\0\0getGroups\0"
    "QSqlTableModel*\0on_pbClose_clicked\0"
    "on_cbGruppi_currentIndexChanged\0index\0"
    "setup_permissions_ui\0mod\0update_permissions\0"
    "gruppo\0on_pbSave_clicked\0"
    "on_pbCreateGroup_clicked\0refreshGroupsModel\0"
    "on_pbDelete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HGroups[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       5,    0,   76,    2, 0x08 /* Private */,
       6,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x28 /* Private | MethodCloned */,
      10,    1,   84,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x28 /* Private | MethodCloned */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 4,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HGroups::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HGroups *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->permissions_updated(); break;
        case 1: { QSqlTableModel* _r = _t->getGroups();
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_pbClose_clicked(); break;
        case 3: _t->on_cbGruppi_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setup_permissions_ui((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 5: _t->setup_permissions_ui(); break;
        case 6: _t->update_permissions((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->update_permissions(); break;
        case 8: _t->on_pbSave_clicked(); break;
        case 9: _t->on_pbCreateGroup_clicked(); break;
        case 10: _t->refreshGroupsModel(); break;
        case 11: _t->on_pbDelete_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HGroups::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HGroups::permissions_updated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HGroups::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HGroups.data,
    qt_meta_data_HGroups,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HGroups::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HGroups::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HGroups.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HGroups::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void HGroups::permissions_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
