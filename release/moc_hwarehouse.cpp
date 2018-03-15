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
    QByteArrayData data[24];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HWarehouse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HWarehouse_t qt_meta_stringdata_HWarehouse = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HWarehouse"
QT_MOC_LITERAL(1, 11, 4), // "init"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "conn"
QT_MOC_LITERAL(4, 22, 6), // "HUser*"
QT_MOC_LITERAL(5, 29, 6), // "utente"
QT_MOC_LITERAL(6, 36, 6), // "update"
QT_MOC_LITERAL(7, 43, 21), // "on_rbNoFilter_toggled"
QT_MOC_LITERAL(8, 65, 7), // "checked"
QT_MOC_LITERAL(9, 73, 23), // "on_rbProdFilter_toggled"
QT_MOC_LITERAL(10, 97, 19), // "setOperazioniFilter"
QT_MOC_LITERAL(11, 117, 4), // "tipo"
QT_MOC_LITERAL(12, 122, 12), // "updateFilter"
QT_MOC_LITERAL(13, 135, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 157, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(15, 181, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(16, 205, 13), // "updateDataSlt"
QT_MOC_LITERAL(17, 219, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(18, 243, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(19, 270, 5), // "index"
QT_MOC_LITERAL(20, 276, 25), // "on_deDateFrom_dateChanged"
QT_MOC_LITERAL(21, 302, 4), // "date"
QT_MOC_LITERAL(22, 307, 23), // "on_deDateTo_dateChanged"
QT_MOC_LITERAL(23, 331, 31) // "on_cbFilter_currentIndexChanged"

    },
    "HWarehouse\0init\0\0conn\0HUser*\0utente\0"
    "update\0on_rbNoFilter_toggled\0checked\0"
    "on_rbProdFilter_toggled\0setOperazioniFilter\0"
    "tipo\0updateFilter\0on_pushButton_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_2_clicked\0"
    "updateDataSlt\0on_pushButton_5_clicked\0"
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
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x0a /* Public */,
       6,    0,   94,    2, 0x0a /* Public */,
       7,    1,   95,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      10,    1,  101,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    1,  110,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,
      22,    1,  116,    2, 0x08 /* Private */,
      23,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   19,
    QMetaType::Void, QMetaType::QDate,   21,
    QMetaType::Void, QMetaType::QDate,   21,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void HWarehouse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HWarehouse *_t = static_cast<HWarehouse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< HUser*(*)>(_a[2]))); break;
        case 1: _t->update(); break;
        case 2: _t->on_rbNoFilter_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_rbProdFilter_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setOperazioniFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateFilter(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->updateDataSlt(); break;
        case 10: _t->on_pushButton_5_clicked(); break;
        case 11: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_deDateFrom_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 13: _t->on_deDateTo_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 14: _t->on_cbFilter_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HUser* >(); break;
            }
            break;
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
