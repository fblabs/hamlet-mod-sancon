/****************************************************************************
** Meta object code from reading C++ file 'hlastlots.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hlastlots.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hlastlots.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HLastLots_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HLastLots_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HLastLots_t qt_meta_stringdata_HLastLots = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HLastLots"
QT_MOC_LITERAL(1, 10, 8), // "rowAdded"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(4, 42, 3), // "row"
QT_MOC_LITERAL(5, 46, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 70, 8), // "lastLots"
QT_MOC_LITERAL(7, 79, 13), // "lastLotsByLot"
QT_MOC_LITERAL(8, 93, 4), // "plot"
QT_MOC_LITERAL(9, 98, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 120, 25) // "on_leSearch_returnPressed"

    },
    "HLastLots\0rowAdded\0\0QList<QStandardItem*>\0"
    "row\0on_pushButton_2_clicked\0lastLots\0"
    "lastLotsByLot\0plot\0on_pushButton_clicked\0"
    "on_leSearch_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HLastLots[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x28 /* Private | MethodCloned */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HLastLots::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HLastLots *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowAdded((*reinterpret_cast< QList<QStandardItem*>(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->lastLots(); break;
        case 3: _t->lastLotsByLot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->lastLotsByLot(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_leSearch_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HLastLots::*)(QList<QStandardItem*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HLastLots::rowAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HLastLots::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HLastLots.data,
    qt_meta_data_HLastLots,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HLastLots::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HLastLots::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HLastLots.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HLastLots::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HLastLots::rowAdded(QList<QStandardItem*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
