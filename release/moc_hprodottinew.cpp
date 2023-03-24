/****************************************************************************
** Meta object code from reading C++ file 'hprodottinew.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hprodottinew.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hprodottinew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HProdottiNew_t {
    QByteArrayData data[21];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HProdottiNew_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HProdottiNew_t qt_meta_stringdata_HProdottiNew = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HProdottiNew"
QT_MOC_LITERAL(1, 13, 8), // "getTypes"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "save"
QT_MOC_LITERAL(4, 28, 5), // "print"
QT_MOC_LITERAL(5, 34, 3), // "pdf"
QT_MOC_LITERAL(6, 38, 13), // "reloadProduct"
QT_MOC_LITERAL(7, 52, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 76, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 98, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(10, 118, 7), // "checked"
QT_MOC_LITERAL(11, 126, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(12, 150, 4), // "arg1"
QT_MOC_LITERAL(13, 155, 27), // "on_tvProdotti_doubleClicked"
QT_MOC_LITERAL(14, 183, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 195, 5), // "index"
QT_MOC_LITERAL(16, 201, 16), // "on_pbMod_clicked"
QT_MOC_LITERAL(17, 218, 18), // "on_pbPrint_clicked"
QT_MOC_LITERAL(18, 237, 18), // "on_pbLoads_clicked"
QT_MOC_LITERAL(19, 256, 37), // "on_cbTipiProdotto_currentInde..."
QT_MOC_LITERAL(20, 294, 17) // "on_chbBio_toggled"

    },
    "HProdottiNew\0getTypes\0\0save\0print\0pdf\0"
    "reloadProduct\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_checkBox_toggled\0"
    "checked\0on_lineEdit_textChanged\0arg1\0"
    "on_tvProdotti_doubleClicked\0QModelIndex\0"
    "index\0on_pbMod_clicked\0on_pbPrint_clicked\0"
    "on_pbLoads_clicked\0"
    "on_cbTipiProdotto_currentIndexChanged\0"
    "on_chbBio_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HProdottiNew[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       4,    0,   94,    2, 0x28 /* Private | MethodCloned */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    1,  110,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void HProdottiNew::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HProdottiNew *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getTypes(); break;
        case 1: _t->save(); break;
        case 2: _t->print((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->print(); break;
        case 4: _t->reloadProduct(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_tvProdotti_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_pbMod_clicked(); break;
        case 11: _t->on_pbPrint_clicked(); break;
        case 12: _t->on_pbLoads_clicked(); break;
        case 13: _t->on_cbTipiProdotto_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_chbBio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HProdottiNew::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HProdottiNew.data,
    qt_meta_data_HProdottiNew,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HProdottiNew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HProdottiNew::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HProdottiNew.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HProdottiNew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
