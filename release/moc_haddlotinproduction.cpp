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
    QByteArrayData data[16];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HAddLotInProduction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HAddLotInProduction_t qt_meta_stringdata_HAddLotInProduction = {
    {
QT_MOC_LITERAL(0, 0, 19), // "HAddLotInProduction"
QT_MOC_LITERAL(1, 20, 9), // "lot_added"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "lastLots"
QT_MOC_LITERAL(4, 40, 6), // "addLot"
QT_MOC_LITERAL(5, 47, 18), // "on_pdClose_clicked"
QT_MOC_LITERAL(6, 66, 16), // "on_pbAdd_clicked"
QT_MOC_LITERAL(7, 83, 14), // "findDefaultLot"
QT_MOC_LITERAL(8, 98, 6), // "p_prod"
QT_MOC_LITERAL(9, 105, 23), // "on_pbDefaultLot_clicked"
QT_MOC_LITERAL(10, 129, 19), // "on_pbCancel_clicked"
QT_MOC_LITERAL(11, 149, 23), // "on_tvLots_doubleClicked"
QT_MOC_LITERAL(12, 173, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 185, 5), // "index"
QT_MOC_LITERAL(14, 191, 5), // "clean"
QT_MOC_LITERAL(15, 197, 5) // "click"

    },
    "HAddLotInProduction\0lot_added\0\0lastLots\0"
    "addLot\0on_pdClose_clicked\0on_pbAdd_clicked\0"
    "findDefaultLot\0p_prod\0on_pbDefaultLot_clicked\0"
    "on_pbCancel_clicked\0on_tvLots_doubleClicked\0"
    "QModelIndex\0index\0clean\0click"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HAddLotInProduction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       7,    0,   82,    2, 0x28 /* Private | MethodCloned */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
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
        case 0: _t->lot_added(); break;
        case 1: _t->lastLots(); break;
        case 2: _t->addLot(); break;
        case 3: _t->on_pdClose_clicked(); break;
        case 4: _t->on_pbAdd_clicked(); break;
        case 5: { QString _r = _t->findDefaultLot((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->findDefaultLot();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_pbDefaultLot_clicked(); break;
        case 8: _t->on_pbCancel_clicked(); break;
        case 9: _t->on_tvLots_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->clean(); break;
        case 11: _t->click(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HAddLotInProduction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HAddLotInProduction::lot_added)) {
                *result = 0;
                return;
            }
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void HAddLotInProduction::lot_added()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
