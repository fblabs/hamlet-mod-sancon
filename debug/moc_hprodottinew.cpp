/****************************************************************************
** Meta object code from reading C++ file 'hprodottinew.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hprodottinew.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hprodottinew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HProdottiNew_t {
    QByteArrayData data[15];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HProdottiNew_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HProdottiNew_t qt_meta_stringdata_HProdottiNew = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HProdottiNew"
QT_MOC_LITERAL(1, 13, 22), // "on_radioButton_toggled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "checked"
QT_MOC_LITERAL(4, 45, 24), // "on_radioButton_2_toggled"
QT_MOC_LITERAL(5, 70, 24), // "on_radioButton_3_toggled"
QT_MOC_LITERAL(6, 95, 24), // "on_radioButton_4_toggled"
QT_MOC_LITERAL(7, 120, 24), // "on_radioButton_5_toggled"
QT_MOC_LITERAL(8, 145, 24), // "on_radioButton_6_toggled"
QT_MOC_LITERAL(9, 170, 4), // "save"
QT_MOC_LITERAL(10, 175, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 199, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 221, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(13, 241, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(14, 265, 4) // "arg1"

    },
    "HProdottiNew\0on_radioButton_toggled\0"
    "\0checked\0on_radioButton_2_toggled\0"
    "on_radioButton_3_toggled\0"
    "on_radioButton_4_toggled\0"
    "on_radioButton_5_toggled\0"
    "on_radioButton_6_toggled\0save\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked\0"
    "on_checkBox_toggled\0on_lineEdit_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HProdottiNew[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       7,    1,   81,    2, 0x08 /* Private */,
       8,    1,   84,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void HProdottiNew::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HProdottiNew *_t = static_cast<HProdottiNew *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_radioButton_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_radioButton_3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_radioButton_4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radioButton_5_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioButton_6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->save(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HProdottiNew::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HProdottiNew.data,
      qt_meta_data_HProdottiNew,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HProdottiNew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HProdottiNew::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HProdottiNew.stringdata0))
        return static_cast<void*>(const_cast< HProdottiNew*>(this));
    return QWidget::qt_metacast(_clname);
}

int HProdottiNew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
