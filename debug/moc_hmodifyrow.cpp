/****************************************************************************
** Meta object code from reading C++ file 'hmodifyrow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hmodifyrow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hmodifyrow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HModifyRow_t {
    QByteArrayData data[17];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HModifyRow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HModifyRow_t qt_meta_stringdata_HModifyRow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HModifyRow"
QT_MOC_LITERAL(1, 11, 4), // "done"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 10), // "getClients"
QT_MOC_LITERAL(4, 28, 11), // "getProducts"
QT_MOC_LITERAL(5, 40, 15), // "initSanityModel"
QT_MOC_LITERAL(6, 56, 7), // "loadRow"
QT_MOC_LITERAL(7, 64, 32), // "on_cbCliente_currentIndexChanged"
QT_MOC_LITERAL(8, 97, 5), // "index"
QT_MOC_LITERAL(9, 103, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(10, 122, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(11, 140, 10), // "calcTotale"
QT_MOC_LITERAL(12, 151, 24), // "on_leTotal_returnPressed"
QT_MOC_LITERAL(13, 176, 7), // "saveRow"
QT_MOC_LITERAL(14, 184, 14), // "setPermissions"
QT_MOC_LITERAL(15, 199, 6), // "HUser*"
QT_MOC_LITERAL(16, 206, 6) // "p_user"

    },
    "HModifyRow\0done\0\0getClients\0getProducts\0"
    "initSanityModel\0loadRow\0"
    "on_cbCliente_currentIndexChanged\0index\0"
    "on_pbClose_clicked\0on_pbSave_clicked\0"
    "calcTotale\0on_leTotal_returnPressed\0"
    "saveRow\0setPermissions\0HUser*\0p_user"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HModifyRow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

       0        // eod
};

void HModifyRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HModifyRow *_t = static_cast<HModifyRow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->done();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->getClients(); break;
        case 2: _t->getProducts(); break;
        case 3: _t->initSanityModel(); break;
        case 4: _t->loadRow(); break;
        case 5: _t->on_cbCliente_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pbClose_clicked(); break;
        case 7: _t->on_pbSave_clicked(); break;
        case 8: { double _r = _t->calcTotale();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: _t->on_leTotal_returnPressed(); break;
        case 10: _t->saveRow(); break;
        case 11: _t->setPermissions((*reinterpret_cast< HUser*(*)>(_a[1]))); break;
        case 12: _t->setPermissions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HUser* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (HModifyRow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HModifyRow::done)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HModifyRow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HModifyRow.data,
      qt_meta_data_HModifyRow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HModifyRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HModifyRow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HModifyRow.stringdata0))
        return static_cast<void*>(const_cast< HModifyRow*>(this));
    return QWidget::qt_metacast(_clname);
}

int HModifyRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
int HModifyRow::done()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
