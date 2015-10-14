/****************************************************************************
** Meta object code from reading C++ file 'hnuovaricetta.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hnuovaricetta.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hnuovaricetta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HNuovaRicetta_t {
    QByteArrayData data[17];
    char stringdata[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HNuovaRicetta_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HNuovaRicetta_t qt_meta_stringdata_HNuovaRicetta = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 12),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 17),
QT_MOC_LITERAL(4, 46, 4),
QT_MOC_LITERAL(5, 51, 21),
QT_MOC_LITERAL(6, 73, 23),
QT_MOC_LITERAL(7, 97, 23),
QT_MOC_LITERAL(8, 121, 15),
QT_MOC_LITERAL(9, 137, 13),
QT_MOC_LITERAL(10, 151, 11),
QT_MOC_LITERAL(11, 163, 23),
QT_MOC_LITERAL(12, 187, 16),
QT_MOC_LITERAL(13, 204, 7),
QT_MOC_LITERAL(14, 212, 23),
QT_MOC_LITERAL(15, 236, 23),
QT_MOC_LITERAL(16, 260, 21)
    },
    "HNuovaRicetta\0addRecipeRow\0\0"
    "creaNuovoProdotto\0nome\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_5_clicked\0"
    "getListProducts\0setRecipeName\0creaRicetta\0"
    "on_pushButton_4_clicked\0on_rbNew_toggled\0"
    "checked\0on_pushButton_3_clicked\0"
    "on_pushButton_8_clicked\0on_rbExisting_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HNuovaRicetta[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void HNuovaRicetta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HNuovaRicetta *_t = static_cast<HNuovaRicetta *>(_o);
        switch (_id) {
        case 0: _t->addRecipeRow(); break;
        case 1: { int _r = _t->creaNuovoProdotto((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_5_clicked(); break;
        case 5: _t->getListProducts(); break;
        case 6: _t->setRecipeName(); break;
        case 7: _t->creaRicetta(); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_rbNew_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        case 11: _t->on_pushButton_8_clicked(); break;
        case 12: _t->on_rbExisting_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HNuovaRicetta::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HNuovaRicetta.data,
      qt_meta_data_HNuovaRicetta,  qt_static_metacall, 0, 0}
};


const QMetaObject *HNuovaRicetta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HNuovaRicetta::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HNuovaRicetta.stringdata))
        return static_cast<void*>(const_cast< HNuovaRicetta*>(this));
    return QWidget::qt_metacast(_clname);
}

int HNuovaRicetta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
