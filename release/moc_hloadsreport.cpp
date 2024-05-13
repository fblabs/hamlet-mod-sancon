/****************************************************************************
** Meta object code from reading C++ file 'hloadsreport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hloadsreport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hloadsreport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HLoadsReport_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HLoadsReport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HLoadsReport_t qt_meta_stringdata_HLoadsReport = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HLoadsReport"
QT_MOC_LITERAL(1, 13, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "loadData"
QT_MOC_LITERAL(4, 42, 9), // "get_types"
QT_MOC_LITERAL(5, 52, 5), // "print"
QT_MOC_LITERAL(6, 58, 14), // "on_rbL_toggled"
QT_MOC_LITERAL(7, 73, 7), // "checked"
QT_MOC_LITERAL(8, 81, 24), // "on_leCerca_returnPressed"
QT_MOC_LITERAL(9, 106, 18) // "on_pbPrint_clicked"

    },
    "HLoadsReport\0on_pbClose_clicked\0\0"
    "loadData\0get_types\0print\0on_rbL_toggled\0"
    "checked\0on_leCerca_returnPressed\0"
    "on_pbPrint_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HLoadsReport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HLoadsReport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HLoadsReport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbClose_clicked(); break;
        case 1: _t->loadData(); break;
        case 2: _t->get_types(); break;
        case 3: _t->print(); break;
        case 4: _t->on_rbL_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_leCerca_returnPressed(); break;
        case 6: _t->on_pbPrint_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HLoadsReport::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HLoadsReport.data,
    qt_meta_data_HLoadsReport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HLoadsReport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HLoadsReport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HLoadsReport.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HLoadsReport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
