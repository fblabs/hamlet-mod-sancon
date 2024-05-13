/****************************************************************************
** Meta object code from reading C++ file 'hmagazzino.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hmagazzino.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hmagazzino.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HMagazzino_t {
    QByteArrayData data[18];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HMagazzino_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HMagazzino_t qt_meta_stringdata_HMagazzino = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HMagazzino"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "queryOperations"
QT_MOC_LITERAL(4, 50, 12), // "loadProdotti"
QT_MOC_LITERAL(5, 63, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 87, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 111, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(8, 135, 14), // "on_cbP_toggled"
QT_MOC_LITERAL(9, 150, 7), // "checked"
QT_MOC_LITERAL(10, 158, 14), // "on_cbC_toggled"
QT_MOC_LITERAL(11, 173, 14), // "on_cbS_toggled"
QT_MOC_LITERAL(12, 188, 33), // "on_cbProdotti_currentIndexCha..."
QT_MOC_LITERAL(13, 222, 5), // "index"
QT_MOC_LITERAL(14, 228, 15), // "updateOperation"
QT_MOC_LITERAL(15, 244, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(16, 271, 11), // "QModelIndex"
QT_MOC_LITERAL(17, 283, 20) // "on_pbLotInfo_clicked"

    },
    "HMagazzino\0on_pushButton_clicked\0\0"
    "queryOperations\0loadProdotti\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_4_clicked\0on_cbP_toggled\0"
    "checked\0on_cbC_toggled\0on_cbS_toggled\0"
    "on_cbProdotti_currentIndexChanged\0"
    "index\0updateOperation\0on_tableView_doubleClicked\0"
    "QModelIndex\0on_pbLotInfo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HMagazzino[] = {

 // content:
       8,       // revision
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
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      11,    1,   91,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    1,   98,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   13,
    QMetaType::Void,

       0        // eod
};

void HMagazzino::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HMagazzino *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->queryOperations(); break;
        case 2: _t->loadProdotti(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_cbP_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_cbC_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_cbS_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_cbProdotti_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateOperation(); break;
        case 11: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_pbLotInfo_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HMagazzino::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HMagazzino.data,
    qt_meta_data_HMagazzino,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HMagazzino::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HMagazzino::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HMagazzino.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HMagazzino::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
