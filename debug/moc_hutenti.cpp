/****************************************************************************
** Meta object code from reading C++ file 'hutenti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hutenti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hutenti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HUtenti_t {
    QByteArrayData data[15];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HUtenti_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HUtenti_t qt_meta_stringdata_HUtenti = {
    {
QT_MOC_LITERAL(0, 0, 7), // "HUtenti"
QT_MOC_LITERAL(1, 8, 13), // "productSearch"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "hidesubclienti"
QT_MOC_LITERAL(4, 38, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 62, 8), // "addreset"
QT_MOC_LITERAL(6, 71, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 95, 19), // "onConnectionNameSet"
QT_MOC_LITERAL(8, 115, 18), // "selectMasterClient"
QT_MOC_LITERAL(9, 134, 15), // "updateSubclient"
QT_MOC_LITERAL(10, 150, 4), // "save"
QT_MOC_LITERAL(11, 155, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 177, 35), // "on_cbxMasterCli_currentIndexC..."
QT_MOC_LITERAL(13, 213, 5), // "index"
QT_MOC_LITERAL(14, 219, 23) // "on_pushButton_5_clicked"

    },
    "HUtenti\0productSearch\0\0hidesubclienti\0"
    "on_pushButton_3_clicked\0addreset\0"
    "on_pushButton_2_clicked\0onConnectionNameSet\0"
    "selectMasterClient\0updateSubclient\0"
    "save\0on_pushButton_clicked\0"
    "on_cbxMasterCli_currentIndexChanged\0"
    "index\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HUtenti[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void HUtenti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HUtenti *_t = static_cast<HUtenti *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->productSearch(); break;
        case 1: _t->hidesubclienti(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->addreset(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->onConnectionNameSet(); break;
        case 6: _t->selectMasterClient(); break;
        case 7: _t->updateSubclient(); break;
        case 8: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_cbxMasterCli_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject HUtenti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HUtenti.data,
      qt_meta_data_HUtenti,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HUtenti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HUtenti::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HUtenti.stringdata0))
        return static_cast<void*>(const_cast< HUtenti*>(this));
    return QWidget::qt_metacast(_clname);
}

int HUtenti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE