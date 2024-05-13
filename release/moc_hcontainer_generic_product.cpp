/****************************************************************************
** Meta object code from reading C++ file 'hcontainer_generic_product.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hcontainer_generic_product.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hcontainer_generic_product.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HContainer_generic_product_t {
    QByteArrayData data[12];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HContainer_generic_product_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HContainer_generic_product_t qt_meta_stringdata_HContainer_generic_product = {
    {
QT_MOC_LITERAL(0, 0, 26), // "HContainer_generic_product"
QT_MOC_LITERAL(1, 27, 15), // "component_added"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "item"
QT_MOC_LITERAL(4, 49, 6), // "amount"
QT_MOC_LITERAL(5, 56, 5), // "costo"
QT_MOC_LITERAL(6, 62, 11), // "getProducts"
QT_MOC_LITERAL(7, 74, 6), // "p_tipo"
QT_MOC_LITERAL(8, 81, 34), // "on_cb_prodotti_currentIndexCh..."
QT_MOC_LITERAL(9, 116, 5), // "index"
QT_MOC_LITERAL(10, 122, 4), // "data"
QT_MOC_LITERAL(11, 127, 25) // "on_leAmount_returnPressed"

    },
    "HContainer_generic_product\0component_added\0"
    "\0item\0amount\0costo\0getProducts\0p_tipo\0"
    "on_cb_prodotti_currentIndexChanged\0"
    "index\0data\0on_leAmount_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HContainer_generic_product[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x28 /* Private | MethodCloned */,
       8,    1,   55,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HContainer_generic_product::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HContainer_generic_product *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->component_added((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->getProducts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getProducts(); break;
        case 3: _t->on_cb_prodotti_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->data(); break;
        case 5: _t->on_leAmount_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HContainer_generic_product::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HContainer_generic_product::component_added)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HContainer_generic_product::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HContainer_generic_product.data,
    qt_meta_data_HContainer_generic_product,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HContainer_generic_product::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HContainer_generic_product::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HContainer_generic_product.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HContainer_generic_product::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HContainer_generic_product::component_added(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
