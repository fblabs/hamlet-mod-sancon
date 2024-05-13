/****************************************************************************
** Meta object code from reading C++ file 'hcalcolo_costi_item_set.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hcalcolo_costi_item_set.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hcalcolo_costi_item_set.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HCalcolo_costi_item_set_t {
    QByteArrayData data[14];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HCalcolo_costi_item_set_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HCalcolo_costi_item_set_t qt_meta_stringdata_HCalcolo_costi_item_set = {
    {
QT_MOC_LITERAL(0, 0, 23), // "HCalcolo_costi_item_set"
QT_MOC_LITERAL(1, 24, 13), // "item_modified"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 51, 5), // "index"
QT_MOC_LITERAL(5, 57, 4), // "item"
QT_MOC_LITERAL(6, 62, 6), // "amount"
QT_MOC_LITERAL(7, 69, 5), // "costo"
QT_MOC_LITERAL(8, 75, 25), // "on_le_costo_returnPressed"
QT_MOC_LITERAL(9, 101, 33), // "on_cbProdotti_currentIndexCha..."
QT_MOC_LITERAL(10, 135, 25), // "on_leAmount_returnPressed"
QT_MOC_LITERAL(11, 161, 25), // "on_leResult_returnPressed"
QT_MOC_LITERAL(12, 187, 15), // "on_pbOk_clicked"
QT_MOC_LITERAL(13, 203, 18) // "on_pbClose_clicked"

    },
    "HCalcolo_costi_item_set\0item_modified\0"
    "\0QModelIndex\0index\0item\0amount\0costo\0"
    "on_le_costo_returnPressed\0"
    "on_cbProdotti_currentIndexChanged\0"
    "on_leAmount_returnPressed\0"
    "on_leResult_returnPressed\0on_pbOk_clicked\0"
    "on_pbClose_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HCalcolo_costi_item_set[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   58,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HCalcolo_costi_item_set::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HCalcolo_costi_item_set *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->item_modified((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->on_le_costo_returnPressed(); break;
        case 2: _t->on_cbProdotti_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_leAmount_returnPressed(); break;
        case 4: _t->on_leResult_returnPressed(); break;
        case 5: _t->on_pbOk_clicked(); break;
        case 6: _t->on_pbClose_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HCalcolo_costi_item_set::*)(QModelIndex , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HCalcolo_costi_item_set::item_modified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HCalcolo_costi_item_set::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HCalcolo_costi_item_set.data,
    qt_meta_data_HCalcolo_costi_item_set,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HCalcolo_costi_item_set::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HCalcolo_costi_item_set::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HCalcolo_costi_item_set.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HCalcolo_costi_item_set::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void HCalcolo_costi_item_set::item_modified(QModelIndex _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
