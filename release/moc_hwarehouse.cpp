/****************************************************************************
** Meta object code from reading C++ file 'hwarehouse.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hwarehouse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwarehouse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HWarehouse_t {
    QByteArrayData data[22];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HWarehouse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HWarehouse_t qt_meta_stringdata_HWarehouse = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HWarehouse"
QT_MOC_LITERAL(1, 11, 6), // "update"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 19), // "setOperazioniFilter"
QT_MOC_LITERAL(4, 39, 4), // "tipo"
QT_MOC_LITERAL(5, 44, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 68, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 92, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(8, 116, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(9, 143, 5), // "index"
QT_MOC_LITERAL(10, 149, 25), // "on_deDateFrom_dateChanged"
QT_MOC_LITERAL(11, 175, 4), // "date"
QT_MOC_LITERAL(12, 180, 23), // "on_deDateTo_dateChanged"
QT_MOC_LITERAL(13, 204, 12), // "on_Confirmed"
QT_MOC_LITERAL(14, 217, 16), // "on_pbMod_clicked"
QT_MOC_LITERAL(15, 234, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(16, 260, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(17, 284, 4), // "arg1"
QT_MOC_LITERAL(18, 289, 22), // "on_radioButton_toggled"
QT_MOC_LITERAL(19, 312, 7), // "checked"
QT_MOC_LITERAL(20, 320, 26), // "on_radioButtonProd_toggled"
QT_MOC_LITERAL(21, 347, 24) // "on_radioButton_2_toggled"

    },
    "HWarehouse\0update\0\0setOperazioniFilter\0"
    "tipo\0on_pushButton_4_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_5_clicked\0"
    "on_tableView_doubleClicked\0index\0"
    "on_deDateFrom_dateChanged\0date\0"
    "on_deDateTo_dateChanged\0on_Confirmed\0"
    "on_pbMod_clicked\0on_lineEdit_returnPressed\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_radioButton_toggled\0checked\0"
    "on_radioButtonProd_toggled\0"
    "on_radioButton_2_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HWarehouse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    1,   90,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
      10,    1,   99,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      18,    1,  111,    2, 0x08 /* Private */,
      20,    1,  114,    2, 0x08 /* Private */,
      21,    1,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void HWarehouse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HWarehouse *_t = static_cast<HWarehouse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->setOperazioniFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_5_clicked(); break;
        case 5: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_deDateFrom_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->on_deDateTo_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 8: _t->on_Confirmed(); break;
        case 9: _t->on_pbMod_clicked(); break;
        case 10: _t->on_lineEdit_returnPressed(); break;
        case 11: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_radioButtonProd_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_radioButton_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HWarehouse::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HWarehouse.data,
      qt_meta_data_HWarehouse,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HWarehouse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HWarehouse::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HWarehouse.stringdata0))
        return static_cast<void*>(const_cast< HWarehouse*>(this));
    return QWidget::qt_metacast(_clname);
}

int HWarehouse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
