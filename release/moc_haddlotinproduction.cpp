/****************************************************************************
** Meta object code from reading C++ file 'haddlotinproduction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../haddlotinproduction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'haddlotinproduction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HAddLotInProduction_t {
    QByteArrayData data[13];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HAddLotInProduction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HAddLotInProduction_t qt_meta_stringdata_HAddLotInProduction = {
    {
QT_MOC_LITERAL(0, 0, 19), // "HAddLotInProduction"
QT_MOC_LITERAL(1, 20, 8), // "lastLots"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "addLot"
QT_MOC_LITERAL(4, 37, 18), // "on_pdClose_clicked"
QT_MOC_LITERAL(5, 56, 16), // "on_pbAdd_clicked"
QT_MOC_LITERAL(6, 73, 27), // "on_lvLastLots_doubleClicked"
QT_MOC_LITERAL(7, 101, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 113, 5), // "index"
QT_MOC_LITERAL(9, 119, 14), // "findDefaultLot"
QT_MOC_LITERAL(10, 134, 6), // "p_prod"
QT_MOC_LITERAL(11, 141, 23), // "on_pbDefaultLot_clicked"
QT_MOC_LITERAL(12, 165, 19) // "on_pbCancel_clicked"

    },
    "HAddLotInProduction\0lastLots\0\0addLot\0"
    "on_pdClose_clicked\0on_pbAdd_clicked\0"
    "on_lvLastLots_doubleClicked\0QModelIndex\0"
    "index\0findDefaultLot\0p_prod\0"
    "on_pbDefaultLot_clicked\0on_pbCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HAddLotInProduction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x28 /* Private | MethodCloned */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::QString, QMetaType::QString,   10,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HAddLotInProduction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HAddLotInProduction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lastLots(); break;
        case 1: _t->addLot(); break;
        case 2: _t->on_pdClose_clicked(); break;
        case 3: _t->on_pbAdd_clicked(); break;
        case 4: _t->on_lvLastLots_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: { QString _r = _t->findDefaultLot((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->findDefaultLot();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_pbDefaultLot_clicked(); break;
        case 8: _t->on_pbCancel_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HAddLotInProduction::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HAddLotInProduction.data,
    qt_meta_data_HAddLotInProduction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HAddLotInProduction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HAddLotInProduction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HAddLotInProduction.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HAddLotInProduction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
