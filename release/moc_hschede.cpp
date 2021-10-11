/****************************************************************************
** Meta object code from reading C++ file 'hschede.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hschede.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hschede.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HSchede_t {
    QByteArrayData data[23];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HSchede_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HSchede_t qt_meta_stringdata_HSchede = {
    {
QT_MOC_LITERAL(0, 0, 7), // "HSchede"
QT_MOC_LITERAL(1, 8, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "on_pbMod_clicked"
QT_MOC_LITERAL(4, 45, 16), // "retrieveProducts"
QT_MOC_LITERAL(5, 62, 10), // "loadScheda"
QT_MOC_LITERAL(6, 73, 3), // "pcl"
QT_MOC_LITERAL(7, 77, 3), // "ppr"
QT_MOC_LITERAL(8, 81, 8), // "addImage"
QT_MOC_LITERAL(9, 90, 4), // "byte"
QT_MOC_LITERAL(10, 95, 6), // "number"
QT_MOC_LITERAL(11, 102, 4), // "name"
QT_MOC_LITERAL(12, 107, 5), // "width"
QT_MOC_LITERAL(13, 113, 6), // "height"
QT_MOC_LITERAL(14, 120, 11), // "resizeImage"
QT_MOC_LITERAL(15, 132, 2), // "wr"
QT_MOC_LITERAL(16, 135, 2), // "hr"
QT_MOC_LITERAL(17, 138, 11), // "addNewImage"
QT_MOC_LITERAL(18, 150, 10), // "loadImages"
QT_MOC_LITERAL(19, 161, 2), // "id"
QT_MOC_LITERAL(20, 164, 15), // "showContextMenu"
QT_MOC_LITERAL(21, 180, 3), // "pos"
QT_MOC_LITERAL(22, 184, 21) // "on_pushButton_clicked"

    },
    "HSchede\0on_pbClose_clicked\0\0"
    "on_pbMod_clicked\0retrieveProducts\0"
    "loadScheda\0pcl\0ppr\0addImage\0byte\0"
    "number\0name\0width\0height\0resizeImage\0"
    "wr\0hr\0addNewImage\0loadImages\0id\0"
    "showContextMenu\0pos\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HSchede[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    2,   77,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x28 /* Private | MethodCloned */,
       5,    0,   85,    2, 0x28 /* Private | MethodCloned */,
       8,    5,   86,    2, 0x08 /* Private */,
      14,    3,   97,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    1,  105,    2, 0x08 /* Private */,
      20,    1,  108,    2, 0x08 /* Private */,
      22,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   11,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QPoint,   21,
    QMetaType::Void,

       0        // eod
};

void HSchede::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HSchede *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbClose_clicked(); break;
        case 1: _t->on_pbMod_clicked(); break;
        case 2: _t->retrieveProducts(); break;
        case 3: _t->loadScheda((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->loadScheda((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->loadScheda(); break;
        case 6: _t->addImage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 7: _t->resizeImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->addNewImage(); break;
        case 9: _t->loadImages((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HSchede::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HSchede.data,
    qt_meta_data_HSchede,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HSchede::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HSchede::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HSchede.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HSchede::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
