/****************************************************************************
** Meta object code from reading C++ file 'hgestioneutenti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hgestioneutenti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hgestioneutenti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HGestioneUtenti_t {
    QByteArrayData data[14];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HGestioneUtenti_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HGestioneUtenti_t qt_meta_stringdata_HGestioneUtenti = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HGestioneUtenti"
QT_MOC_LITERAL(1, 16, 14), // "updatePassword"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 56, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 78, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(6, 98, 7), // "checked"
QT_MOC_LITERAL(7, 106, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 130, 26), // "on_pbNuovaPassword_clicked"
QT_MOC_LITERAL(9, 157, 9), // "getGruppo"
QT_MOC_LITERAL(10, 167, 11), // "getIdUtente"
QT_MOC_LITERAL(11, 179, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(12, 211, 5), // "index"
QT_MOC_LITERAL(13, 217, 23) // "on_pushButton_4_clicked"

    },
    "HGestioneUtenti\0updatePassword\0\0"
    "on_pushButton_3_clicked\0on_pushButton_clicked\0"
    "on_checkBox_toggled\0checked\0"
    "on_pushButton_2_clicked\0"
    "on_pbNuovaPassword_clicked\0getGruppo\0"
    "getIdUtente\0on_comboBox_currentIndexChanged\0"
    "index\0on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HGestioneUtenti[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void HGestioneUtenti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HGestioneUtenti *_t = static_cast<HGestioneUtenti *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->updatePassword();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pbNuovaPassword_clicked(); break;
        case 6: { int _r = _t->getGruppo();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->getIdUtente(); break;
        case 8: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject HGestioneUtenti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HGestioneUtenti.data,
      qt_meta_data_HGestioneUtenti,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HGestioneUtenti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HGestioneUtenti::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HGestioneUtenti.stringdata0))
        return static_cast<void*>(const_cast< HGestioneUtenti*>(this));
    return QWidget::qt_metacast(_clname);
}

int HGestioneUtenti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
