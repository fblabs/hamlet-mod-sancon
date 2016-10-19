/****************************************************************************
** Meta object code from reading C++ file 'hnschede.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hnschede.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hnschede.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HNSChede_t {
    QByteArrayData data[15];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HNSChede_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HNSChede_t qt_meta_stringdata_HNSChede = {
    {
QT_MOC_LITERAL(0, 0, 8), // "HNSChede"
QT_MOC_LITERAL(1, 9, 11), // "insertImage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 46, 15), // "showContextMenu"
QT_MOC_LITERAL(5, 62, 3), // "pos"
QT_MOC_LITERAL(6, 66, 8), // "saveCard"
QT_MOC_LITERAL(7, 75, 11), // "getProducts"
QT_MOC_LITERAL(8, 87, 8), // "loadCard"
QT_MOC_LITERAL(9, 96, 17), // "on_pbsave_clicked"
QT_MOC_LITERAL(10, 114, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(11, 133, 11), // "resizeImage"
QT_MOC_LITERAL(12, 145, 2), // "nw"
QT_MOC_LITERAL(13, 148, 2), // "nh"
QT_MOC_LITERAL(14, 151, 15) // "showResizeImage"

    },
    "HNSChede\0insertImage\0\0on_pushButton_2_clicked\0"
    "showContextMenu\0pos\0saveCard\0getProducts\0"
    "loadCard\0on_pbsave_clicked\0"
    "on_pbClose_clicked\0resizeImage\0nw\0nh\0"
    "showResizeImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HNSChede[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    2,   74,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void,

       0        // eod
};

void HNSChede::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HNSChede *_t = static_cast<HNSChede *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertImage(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: { bool _r = _t->saveCard();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->getProducts(); break;
        case 5: _t->loadCard(); break;
        case 6: _t->on_pbsave_clicked(); break;
        case 7: _t->on_pbClose_clicked(); break;
        case 8: _t->resizeImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->showResizeImage(); break;
        default: ;
        }
    }
}

const QMetaObject HNSChede::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HNSChede.data,
      qt_meta_data_HNSChede,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HNSChede::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HNSChede::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HNSChede.stringdata0))
        return static_cast<void*>(const_cast< HNSChede*>(this));
    return QWidget::qt_metacast(_clname);
}

int HNSChede::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
