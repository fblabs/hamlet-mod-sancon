/****************************************************************************
** Meta object code from reading C++ file 'hcalcolo_costi_jolly.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hcalcolo_costi_jolly.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hcalcolo_costi_jolly.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HCalcolo_costi_jolly_t {
    QByteArrayData data[14];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HCalcolo_costi_jolly_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HCalcolo_costi_jolly_t qt_meta_stringdata_HCalcolo_costi_jolly = {
    {
QT_MOC_LITERAL(0, 0, 20), // "HCalcolo_costi_jolly"
QT_MOC_LITERAL(1, 21, 20), // "convert_recipe_model"
QT_MOC_LITERAL(2, 42, 13), // "HCosti_model*"
QT_MOC_LITERAL(3, 56, 0), // ""
QT_MOC_LITERAL(4, 57, 11), // "recalculate"
QT_MOC_LITERAL(5, 69, 22), // "recalculate_components"
QT_MOC_LITERAL(6, 92, 19), // "get_components_cost"
QT_MOC_LITERAL(7, 112, 10), // "get_factor"
QT_MOC_LITERAL(8, 123, 20), // "update_total_formato"
QT_MOC_LITERAL(9, 144, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(10, 163, 5), // "print"
QT_MOC_LITERAL(11, 169, 18), // "on_pbReset_clicked"
QT_MOC_LITERAL(12, 188, 18), // "on_pbPrint_clicked"
QT_MOC_LITERAL(13, 207, 19) // "on_pbUpdate_clicked"

    },
    "HCalcolo_costi_jolly\0convert_recipe_model\0"
    "HCosti_model*\0\0recalculate\0"
    "recalculate_components\0get_components_cost\0"
    "get_factor\0update_total_formato\0"
    "on_pbClose_clicked\0print\0on_pbReset_clicked\0"
    "on_pbPrint_clicked\0on_pbUpdate_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HCalcolo_costi_jolly[] = {

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
       1,    0,   69,    3, 0x08 /* Private */,
       4,    0,   70,    3, 0x08 /* Private */,
       5,    0,   71,    3, 0x08 /* Private */,
       6,    0,   72,    3, 0x08 /* Private */,
       7,    0,   73,    3, 0x08 /* Private */,
       8,    0,   74,    3, 0x08 /* Private */,
       9,    0,   75,    3, 0x08 /* Private */,
      10,    0,   76,    3, 0x08 /* Private */,
      11,    0,   77,    3, 0x08 /* Private */,
      12,    0,   78,    3, 0x08 /* Private */,
      13,    0,   79,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HCalcolo_costi_jolly::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HCalcolo_costi_jolly *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { HCosti_model* _r = _t->convert_recipe_model();
            if (_a[0]) *reinterpret_cast< HCosti_model**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->recalculate(); break;
        case 2: _t->recalculate_components(); break;
        case 3: { double _r = _t->get_components_cost();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 4: { double _r = _t->get_factor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->update_total_formato(); break;
        case 6: _t->on_pbClose_clicked(); break;
        case 7: _t->print(); break;
        case 8: _t->on_pbReset_clicked(); break;
        case 9: _t->on_pbPrint_clicked(); break;
        case 10: _t->on_pbUpdate_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HCalcolo_costi_jolly::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HCalcolo_costi_jolly.data,
    qt_meta_data_HCalcolo_costi_jolly,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HCalcolo_costi_jolly::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HCalcolo_costi_jolly::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HCalcolo_costi_jolly.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HCalcolo_costi_jolly::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
