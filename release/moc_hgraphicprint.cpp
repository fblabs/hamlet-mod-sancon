/****************************************************************************
** Meta object code from reading C++ file 'hgraphicprint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hgraphicprint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hgraphicprint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HGraphicPrint_t {
    QByteArrayData data[8];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HGraphicPrint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HGraphicPrint_t qt_meta_stringdata_HGraphicPrint = {
    {
QT_MOC_LITERAL(0, 0, 13), // "HGraphicPrint"
QT_MOC_LITERAL(1, 14, 7), // "addText"
QT_MOC_LITERAL(2, 22, 18), // "QGraphicsTextItem*"
QT_MOC_LITERAL(3, 41, 0), // ""
QT_MOC_LITERAL(4, 42, 4), // "text"
QT_MOC_LITERAL(5, 47, 11), // "setTextBold"
QT_MOC_LITERAL(6, 59, 4), // "item"
QT_MOC_LITERAL(7, 64, 4) // "bold"

    },
    "HGraphicPrint\0addText\0QGraphicsTextItem*\0"
    "\0text\0setTextBold\0item\0bold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HGraphicPrint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    3, 0x0a /* Public */,
       1,    0,   42,    3, 0x2a /* Public | MethodCloned */,
       5,    2,   43,    3, 0x0a /* Public */,
       5,    1,   48,    3, 0x2a /* Public | MethodCloned */,
       5,    0,   51,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void,

       0        // eod
};

void HGraphicPrint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HGraphicPrint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QGraphicsTextItem* _r = _t->addText((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsTextItem**>(_a[0]) = std::move(_r); }  break;
        case 1: { QGraphicsTextItem* _r = _t->addText();
            if (_a[0]) *reinterpret_cast< QGraphicsTextItem**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setTextBold((*reinterpret_cast< QGraphicsTextItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setTextBold((*reinterpret_cast< QGraphicsTextItem*(*)>(_a[1]))); break;
        case 4: _t->setTextBold(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsTextItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsTextItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HGraphicPrint::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HGraphicPrint.data,
    qt_meta_data_HGraphicPrint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HGraphicPrint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HGraphicPrint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HGraphicPrint.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HGraphicPrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
