/****************************************************************************
** Meta object code from reading C++ file 'hwpmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hwpmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwpmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HWpManager_t {
    QByteArrayData data[15];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HWpManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HWpManager_t qt_meta_stringdata_HWpManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HWpManager"
QT_MOC_LITERAL(1, 11, 8), // "rowAdded"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "getClients"
QT_MOC_LITERAL(4, 32, 11), // "getProducts"
QT_MOC_LITERAL(5, 44, 8), // "getTappi"
QT_MOC_LITERAL(6, 53, 15), // "initSanityModel"
QT_MOC_LITERAL(7, 69, 11), // "addSheetRow"
QT_MOC_LITERAL(8, 81, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(9, 100, 32), // "on_cbCliente_currentIndexChanged"
QT_MOC_LITERAL(10, 133, 5), // "index"
QT_MOC_LITERAL(11, 139, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(12, 157, 24), // "on_leTotal_returnPressed"
QT_MOC_LITERAL(13, 182, 24), // "on_leQuant_returnPressed"
QT_MOC_LITERAL(14, 207, 10) // "calcTotale"

    },
    "HWpManager\0rowAdded\0\0getClients\0"
    "getProducts\0getTappi\0initSanityModel\0"
    "addSheetRow\0on_pbClose_clicked\0"
    "on_cbCliente_currentIndexChanged\0index\0"
    "on_pbSave_clicked\0on_leTotal_returnPressed\0"
    "on_leQuant_returnPressed\0calcTotale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HWpManager[] = {

 // content:
       7,       // revision
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
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,

       0        // eod
};

void HWpManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HWpManager *_t = static_cast<HWpManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowAdded(); break;
        case 1: _t->getClients(); break;
        case 2: _t->getProducts(); break;
        case 3: _t->getTappi(); break;
        case 4: _t->initSanityModel(); break;
        case 5: _t->addSheetRow(); break;
        case 6: _t->on_pbClose_clicked(); break;
        case 7: _t->on_cbCliente_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pbSave_clicked(); break;
        case 9: _t->on_leTotal_returnPressed(); break;
        case 10: _t->on_leQuant_returnPressed(); break;
        case 11: { double _r = _t->calcTotale();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HWpManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HWpManager::rowAdded)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HWpManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HWpManager.data,
      qt_meta_data_HWpManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HWpManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HWpManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HWpManager.stringdata0))
        return static_cast<void*>(const_cast< HWpManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int HWpManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void HWpManager::rowAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE