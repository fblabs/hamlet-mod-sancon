/****************************************************************************
** Meta object code from reading C++ file 'hcomposizionelotto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hcomposizionelotto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hcomposizionelotto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HComposizioneLotto_t {
    QByteArrayData data[16];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HComposizioneLotto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HComposizioneLotto_t qt_meta_stringdata_HComposizioneLotto = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HComposizioneLotto"
QT_MOC_LITERAL(1, 19, 17), // "getLotComposition"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "getLotUse"
QT_MOC_LITERAL(4, 48, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(5, 75, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 87, 5), // "index"
QT_MOC_LITERAL(7, 93, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 117, 5), // "print"
QT_MOC_LITERAL(9, 123, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 147, 16), // "on_pbUse_clicked"
QT_MOC_LITERAL(11, 164, 8), // "printUse"
QT_MOC_LITERAL(12, 173, 16), // "printComposition"
QT_MOC_LITERAL(13, 190, 7), // "getTipo"
QT_MOC_LITERAL(14, 198, 3), // "idl"
QT_MOC_LITERAL(15, 202, 10) // "getDetails"

    },
    "HComposizioneLotto\0getLotComposition\0"
    "\0getLotUse\0on_tableView_doubleClicked\0"
    "QModelIndex\0index\0on_pushButton_3_clicked\0"
    "print\0on_pushButton_2_clicked\0"
    "on_pbUse_clicked\0printUse\0printComposition\0"
    "getTipo\0idl\0getDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HComposizioneLotto[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    1,   80,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void HComposizioneLotto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HComposizioneLotto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getLotComposition(); break;
        case 1: _t->getLotUse(); break;
        case 2: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->print(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pbUse_clicked(); break;
        case 7: _t->printUse(); break;
        case 8: _t->printComposition(); break;
        case 9: { int _r = _t->getTipo((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->getDetails(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HComposizioneLotto::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HComposizioneLotto.data,
    qt_meta_data_HComposizioneLotto,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HComposizioneLotto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HComposizioneLotto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HComposizioneLotto.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HComposizioneLotto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
