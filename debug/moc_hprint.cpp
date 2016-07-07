/****************************************************************************
** Meta object code from reading C++ file 'hprint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hprint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hprint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HPrint_t {
    QByteArrayData data[17];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HPrint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HPrint_t qt_meta_stringdata_HPrint = {
    {
QT_MOC_LITERAL(0, 0, 6), // "HPrint"
QT_MOC_LITERAL(1, 7, 11), // "imgwChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "imghChanged"
QT_MOC_LITERAL(4, 32, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 56, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 78, 15), // "onConnectionSet"
QT_MOC_LITERAL(7, 94, 8), // "addImage"
QT_MOC_LITERAL(8, 103, 5), // "bytes"
QT_MOC_LITERAL(9, 109, 12), // "printPreview"
QT_MOC_LITERAL(10, 122, 9), // "QPrinter*"
QT_MOC_LITERAL(11, 132, 7), // "printer"
QT_MOC_LITERAL(12, 140, 16), // "on_pbant_clicked"
QT_MOC_LITERAL(13, 157, 19), // "on_sbW_valueChanged"
QT_MOC_LITERAL(14, 177, 4), // "arg1"
QT_MOC_LITERAL(15, 182, 19), // "on_sbH_valueChanged"
QT_MOC_LITERAL(16, 202, 26) // "on_spCharSize_valueChanged"

    },
    "HPrint\0imgwChanged\0\0imghChanged\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked\0"
    "onConnectionSet\0addImage\0bytes\0"
    "printPreview\0QPrinter*\0printer\0"
    "on_pbant_clicked\0on_sbW_valueChanged\0"
    "arg1\0on_sbH_valueChanged\0"
    "on_spCharSize_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HPrint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   75,    2, 0x08 /* Private */,
       5,    0,   76,    2, 0x08 /* Private */,
       6,    0,   77,    2, 0x08 /* Private */,
       7,    1,   78,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      15,    1,   88,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int,    2,
    QMetaType::Int, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void HPrint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HPrint *_t = static_cast<HPrint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->imgwChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->imghChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->onConnectionSet(); break;
        case 5: _t->addImage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 7: _t->on_pbant_clicked(); break;
        case 8: _t->on_sbW_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_sbH_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_spCharSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (HPrint::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HPrint::imgwChanged)) {
                *result = 0;
            }
        }
        {
            typedef int (HPrint::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HPrint::imghChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject HPrint::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HPrint.data,
      qt_meta_data_HPrint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HPrint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HPrint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HPrint.stringdata0))
        return static_cast<void*>(const_cast< HPrint*>(this));
    return QWidget::qt_metacast(_clname);
}

int HPrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
int HPrint::imgwChanged(int _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int HPrint::imghChanged(int _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
