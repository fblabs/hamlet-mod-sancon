/****************************************************************************
** Meta object code from reading C++ file 'hmagazzino.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hmagazzino.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hmagazzino.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HMagazzino_t {
    QByteArrayData data[17];
    char stringdata[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HMagazzino_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HMagazzino_t qt_meta_stringdata_HMagazzino = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 11),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 21),
QT_MOC_LITERAL(4, 46, 23),
QT_MOC_LITERAL(5, 70, 8),
QT_MOC_LITERAL(6, 79, 19),
QT_MOC_LITERAL(7, 99, 23),
QT_MOC_LITERAL(8, 123, 23),
QT_MOC_LITERAL(9, 147, 7),
QT_MOC_LITERAL(10, 155, 23),
QT_MOC_LITERAL(11, 179, 19),
QT_MOC_LITERAL(12, 199, 17),
QT_MOC_LITERAL(13, 217, 12),
QT_MOC_LITERAL(14, 230, 23),
QT_MOC_LITERAL(15, 254, 7),
QT_MOC_LITERAL(16, 262, 23)
    },
    "HMagazzino\0dataUpdated\0\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0cercaLot\0"
    "on_btsearch_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_3_clicked\0refresh\0"
    "on_pushButton_5_clicked\0onConnectionNameSet\0"
    "on_rbprod_clicked\0updateFilter\0"
    "on_pushButton_6_toggled\0checked\0"
    "on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HMagazzino[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void HMagazzino::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HMagazzino *_t = static_cast<HMagazzino *>(_o);
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->cercaLot(); break;
        case 4: _t->on_btsearch_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->refresh(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->onConnectionNameSet(); break;
        case 10: _t->on_rbprod_clicked(); break;
        case 11: _t->updateFilter(); break;
        case 12: _t->on_pushButton_6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HMagazzino::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HMagazzino::dataUpdated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HMagazzino::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HMagazzino.data,
      qt_meta_data_HMagazzino,  qt_static_metacall, 0, 0}
};


const QMetaObject *HMagazzino::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HMagazzino::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HMagazzino.stringdata))
        return static_cast<void*>(const_cast< HMagazzino*>(this));
    return QWidget::qt_metacast(_clname);
}

int HMagazzino::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void HMagazzino::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
