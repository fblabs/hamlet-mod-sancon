/****************************************************************************
** Meta object code from reading C++ file 'hpackagesunload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hpackagesunload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hpackagesunload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HPackagesUnload_t {
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HPackagesUnload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HPackagesUnload_t qt_meta_stringdata_HPackagesUnload = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HPackagesUnload"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "getClients"
QT_MOC_LITERAL(4, 35, 11), // "getProducts"
QT_MOC_LITERAL(5, 47, 12), // "loadPackages"
QT_MOC_LITERAL(6, 60, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 84, 32), // "on_cbClienti_currentIndexChanged"
QT_MOC_LITERAL(8, 117, 5), // "index"
QT_MOC_LITERAL(9, 123, 7), // "scarica"
QT_MOC_LITERAL(10, 131, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 153, 15) // "setQuantitaText"

    },
    "HPackagesUnload\0update\0\0getClients\0"
    "getProducts\0loadPackages\0"
    "on_pushButton_2_clicked\0"
    "on_cbClienti_currentIndexChanged\0index\0"
    "scarica\0on_pushButton_clicked\0"
    "setQuantitaText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HPackagesUnload[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HPackagesUnload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HPackagesUnload *_t = static_cast<HPackagesUnload *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->getClients(); break;
        case 2: _t->getProducts(); break;
        case 3: _t->loadPackages(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_cbClienti_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { bool _r = _t->scarica();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->setQuantitaText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HPackagesUnload::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HPackagesUnload::update)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HPackagesUnload::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HPackagesUnload.data,
      qt_meta_data_HPackagesUnload,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HPackagesUnload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HPackagesUnload::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HPackagesUnload.stringdata0))
        return static_cast<void*>(const_cast< HPackagesUnload*>(this));
    return QWidget::qt_metacast(_clname);
}

int HPackagesUnload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HPackagesUnload::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
