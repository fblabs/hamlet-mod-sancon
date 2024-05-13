/****************************************************************************
** Meta object code from reading C++ file 'hloads.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hloads.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hloads.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HLoads_t {
    QByteArrayData data[15];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HLoads_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HLoads_t qt_meta_stringdata_HLoads = {
    {
QT_MOC_LITERAL(0, 0, 6), // "HLoads"
QT_MOC_LITERAL(1, 7, 8), // "getLoads"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 10), // "getUnloads"
QT_MOC_LITERAL(4, 28, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(5, 47, 18), // "on_rbLoads_toggled"
QT_MOC_LITERAL(6, 66, 7), // "checked"
QT_MOC_LITERAL(7, 74, 19), // "on_pbSearch_clicked"
QT_MOC_LITERAL(8, 94, 8), // "getTypes"
QT_MOC_LITERAL(9, 103, 12), // "loadProducts"
QT_MOC_LITERAL(10, 116, 8), // "tosearch"
QT_MOC_LITERAL(11, 125, 8), // "get_data"
QT_MOC_LITERAL(12, 134, 25), // "on_deFrom_userDateChanged"
QT_MOC_LITERAL(13, 160, 4), // "date"
QT_MOC_LITERAL(14, 165, 23) // "on_deTo_userDateChanged"

    },
    "HLoads\0getLoads\0\0getUnloads\0"
    "on_pbClose_clicked\0on_rbLoads_toggled\0"
    "checked\0on_pbSearch_clicked\0getTypes\0"
    "loadProducts\0tosearch\0get_data\0"
    "on_deFrom_userDateChanged\0date\0"
    "on_deTo_userDateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HLoads[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
       9,    0,   80,    2, 0x28 /* Private | MethodCloned */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   13,
    QMetaType::Void, QMetaType::QDate,   13,

       0        // eod
};

void HLoads::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HLoads *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getLoads(); break;
        case 1: _t->getUnloads(); break;
        case 2: _t->on_pbClose_clicked(); break;
        case 3: _t->on_rbLoads_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_pbSearch_clicked(); break;
        case 5: _t->getTypes(); break;
        case 6: _t->loadProducts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->loadProducts(); break;
        case 8: _t->get_data(); break;
        case 9: _t->on_deFrom_userDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 10: _t->on_deTo_userDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HLoads::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HLoads.data,
    qt_meta_data_HLoads,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HLoads::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HLoads::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HLoads.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HLoads::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
