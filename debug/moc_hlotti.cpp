/****************************************************************************
** Meta object code from reading C++ file 'hlotti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hlotti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hlotti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HLotti_t {
    QByteArrayData data[18];
    char stringdata[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HLotti_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HLotti_t qt_meta_stringdata_HLotti = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 21),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 23),
QT_MOC_LITERAL(4, 54, 13),
QT_MOC_LITERAL(5, 68, 19),
QT_MOC_LITERAL(6, 88, 9),
QT_MOC_LITERAL(7, 98, 23),
QT_MOC_LITERAL(8, 122, 23),
QT_MOC_LITERAL(9, 146, 9),
QT_MOC_LITERAL(10, 156, 15),
QT_MOC_LITERAL(11, 172, 3),
QT_MOC_LITERAL(12, 176, 9),
QT_MOC_LITERAL(13, 186, 7),
QT_MOC_LITERAL(14, 194, 5),
QT_MOC_LITERAL(15, 200, 10),
QT_MOC_LITERAL(16, 211, 23),
QT_MOC_LITERAL(17, 235, 23)
    },
    "HLotti\0on_pushButton_clicked\0\0"
    "on_pushButton_3_clicked\0searchProduct\0"
    "onConnectionNameSet\0resetData\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "setFilter\0showContextMenu\0pos\0copyField\0"
    "editLot\0print\0updateData\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HLotti[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HLotti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HLotti *_t = static_cast<HLotti *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->searchProduct(); break;
        case 3: _t->onConnectionNameSet(); break;
        case 4: _t->resetData(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->setFilter(); break;
        case 8: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->copyField(); break;
        case 10: _t->editLot(); break;
        case 11: _t->print(); break;
        case 12: _t->updateData(); break;
        case 13: _t->on_pushButton_6_clicked(); break;
        case 14: _t->on_pushButton_7_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject HLotti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HLotti.data,
      qt_meta_data_HLotti,  qt_static_metacall, 0, 0}
};


const QMetaObject *HLotti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HLotti::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HLotti.stringdata))
        return static_cast<void*>(const_cast< HLotti*>(this));
    return QWidget::qt_metacast(_clname);
}

int HLotti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
