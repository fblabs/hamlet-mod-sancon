/****************************************************************************
** Meta object code from reading C++ file 'hnuovaoperazione.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hnuovaoperazione.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hnuovaoperazione.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HnuovaOperazione_t {
    QByteArrayData data[24];
    char stringdata[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HnuovaOperazione_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HnuovaOperazione_t qt_meta_stringdata_HnuovaOperazione = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 7),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 17),
QT_MOC_LITERAL(4, 44, 13),
QT_MOC_LITERAL(5, 58, 8),
QT_MOC_LITERAL(6, 67, 19),
QT_MOC_LITERAL(7, 87, 20),
QT_MOC_LITERAL(8, 108, 14),
QT_MOC_LITERAL(9, 123, 15),
QT_MOC_LITERAL(10, 139, 9),
QT_MOC_LITERAL(11, 149, 10),
QT_MOC_LITERAL(12, 160, 2),
QT_MOC_LITERAL(13, 163, 23),
QT_MOC_LITERAL(14, 187, 21),
QT_MOC_LITERAL(15, 209, 12),
QT_MOC_LITERAL(16, 222, 15),
QT_MOC_LITERAL(17, 238, 24),
QT_MOC_LITERAL(18, 263, 7),
QT_MOC_LITERAL(19, 271, 22),
QT_MOC_LITERAL(20, 294, 21),
QT_MOC_LITERAL(21, 316, 25),
QT_MOC_LITERAL(22, 342, 4),
QT_MOC_LITERAL(23, 347, 22)
    },
    "HnuovaOperazione\0trigger\0\0setFilterProdotti\0"
    "saveOperation\0isCarico\0saveOperationCarico\0"
    "saveOperationScarico\0setUiforCarico\0"
    "setUiForScarico\0getNewLot\0saveNewLot\0"
    "nl\0on_pushButton_4_clicked\0"
    "on_pushButton_clicked\0lastInsertID\0"
    "setProdottoText\0on_radioButton_2_toggled\0"
    "checked\0on_radioButton_toggled\0"
    "on_cbScadenza_toggled\0on_leProdotti_textChanged\0"
    "arg1\0on_leLotto_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HnuovaOperazione[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  105,    2, 0x08 /* Private */,
       4,    1,  106,    2, 0x08 /* Private */,
       6,    0,  109,    2, 0x08 /* Private */,
       7,    0,  110,    2, 0x08 /* Private */,
       8,    0,  111,    2, 0x08 /* Private */,
       9,    0,  112,    2, 0x08 /* Private */,
      10,    1,  113,    2, 0x08 /* Private */,
      11,    1,  116,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    0,  120,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,
      16,    0,  122,    2, 0x08 /* Private */,
      17,    1,  123,    2, 0x08 /* Private */,
      19,    1,  126,    2, 0x08 /* Private */,
      20,    1,  129,    2, 0x08 /* Private */,
      21,    1,  132,    2, 0x08 /* Private */,
      23,    1,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,    5,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,

       0        // eod
};

void HnuovaOperazione::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HnuovaOperazione *_t = static_cast<HnuovaOperazione *>(_o);
        switch (_id) {
        case 0: _t->trigger(); break;
        case 1: _t->setFilterProdotti(); break;
        case 2: { bool _r = _t->saveOperation((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->saveOperationCarico();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->saveOperationScarico();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setUiforCarico(); break;
        case 6: _t->setUiForScarico(); break;
        case 7: { QString _r = _t->getNewLot((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->saveNewLot((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->on_pushButton_4_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: { int _r = _t->lastInsertID();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->setProdottoText(); break;
        case 13: _t->on_radioButton_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_cbScadenza_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_leProdotti_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_leLotto_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HnuovaOperazione::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HnuovaOperazione::trigger)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HnuovaOperazione::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HnuovaOperazione.data,
      qt_meta_data_HnuovaOperazione,  qt_static_metacall, 0, 0}
};


const QMetaObject *HnuovaOperazione::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HnuovaOperazione::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HnuovaOperazione.stringdata))
        return static_cast<void*>(const_cast< HnuovaOperazione*>(this));
    return QWidget::qt_metacast(_clname);
}

int HnuovaOperazione::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void HnuovaOperazione::trigger()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
