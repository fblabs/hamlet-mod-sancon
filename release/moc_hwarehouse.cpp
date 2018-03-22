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
    QByteArrayData data[20];
    char stringdata0[339];
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
QT_MOC_LITERAL(3, 19, 21), // "on_rbNoFilter_toggled"
QT_MOC_LITERAL(4, 41, 7), // "checked"
QT_MOC_LITERAL(5, 49, 23), // "on_rbProdFilter_toggled"
QT_MOC_LITERAL(6, 73, 19), // "setOperazioniFilter"
QT_MOC_LITERAL(7, 93, 4), // "tipo"
QT_MOC_LITERAL(8, 98, 12), // "updateFilter"
QT_MOC_LITERAL(9, 111, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 133, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 157, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 181, 13), // "updateDataSlt"
QT_MOC_LITERAL(13, 195, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(14, 219, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(15, 246, 5), // "index"
QT_MOC_LITERAL(16, 252, 25), // "on_deDateFrom_dateChanged"
QT_MOC_LITERAL(17, 278, 4), // "date"
QT_MOC_LITERAL(18, 283, 23), // "on_deDateTo_dateChanged"
QT_MOC_LITERAL(19, 307, 31) // "on_cbFilter_currentIndexChanged"

    },
    "HWarehouse\0update\0\0on_rbNoFilter_toggled\0"
    "checked\0on_rbProdFilter_toggled\0"
    "setOperazioniFilter\0tipo\0updateFilter\0"
    "on_pushButton_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_2_clicked\0updateDataSlt\0"
    "on_pushButton_5_clicked\0"
    "on_tableView_doubleClicked\0index\0"
    "on_deDateFrom_dateChanged\0date\0"
    "on_deDateTo_dateChanged\0"
    "on_cbFilter_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HWarehouse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       6,    1,   91,    2, 0x08 /* Private */,
       8,    0,   94,    2, 0x08 /* Private */,
       9,    0,   95,    2, 0x08 /* Private */,
      10,    0,   96,    2, 0x08 /* Private */,
      11,    0,   97,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,
      18,    1,  106,    2, 0x08 /* Private */,
      19,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void, QMetaType::QDate,   17,
    QMetaType::Void, QMetaType::QDate,   17,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void HWarehouse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HWarehouse *_t = static_cast<HWarehouse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->on_rbNoFilter_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_rbProdFilter_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setOperazioniFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateFilter(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->updateDataSlt(); break;
        case 9: _t->on_pushButton_5_clicked(); break;
        case 10: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->on_deDateFrom_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 12: _t->on_deDateTo_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 13: _t->on_cbFilter_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
QT_END_MOC_NAMESPACE
