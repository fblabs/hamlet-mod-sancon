/****************************************************************************
** Meta object code from reading C++ file 'hnew_recipe_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hnew_recipe_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hnew_recipe_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HNew_recipe_main_t {
    QByteArrayData data[12];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HNew_recipe_main_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HNew_recipe_main_t qt_meta_stringdata_HNew_recipe_main = {
    {
QT_MOC_LITERAL(0, 0, 16), // "HNew_recipe_main"
QT_MOC_LITERAL(1, 17, 26), // "sig_add_recipe_and_product"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "p_tipo"
QT_MOC_LITERAL(4, 52, 25), // "sig_add_recipe_to_product"
QT_MOC_LITERAL(5, 78, 11), // "id_prodotto"
QT_MOC_LITERAL(6, 90, 12), // "get_products"
QT_MOC_LITERAL(7, 103, 32), // "on_pbAddRecipeAndproduct_clicked"
QT_MOC_LITERAL(8, 136, 32), // "on_leSearchProduct_returnPressed"
QT_MOC_LITERAL(9, 169, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(10, 188, 18), // "on_cb_what_toggled"
QT_MOC_LITERAL(11, 207, 7) // "checked"

    },
    "HNew_recipe_main\0sig_add_recipe_and_product\0"
    "\0p_tipo\0sig_add_recipe_to_product\0"
    "id_prodotto\0get_products\0"
    "on_pbAddRecipeAndproduct_clicked\0"
    "on_leSearchProduct_returnPressed\0"
    "on_pbClose_clicked\0on_cb_what_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HNew_recipe_main[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void HNew_recipe_main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HNew_recipe_main *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_add_recipe_and_product((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->sig_add_recipe_to_product((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->get_products(); break;
        case 3: _t->on_pbAddRecipeAndproduct_clicked(); break;
        case 4: _t->on_leSearchProduct_returnPressed(); break;
        case 5: _t->on_pbClose_clicked(); break;
        case 6: _t->on_cb_what_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HNew_recipe_main::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HNew_recipe_main::sig_add_recipe_and_product)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HNew_recipe_main::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HNew_recipe_main::sig_add_recipe_to_product)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HNew_recipe_main::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HNew_recipe_main.data,
    qt_meta_data_HNew_recipe_main,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HNew_recipe_main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HNew_recipe_main::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HNew_recipe_main.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HNew_recipe_main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void HNew_recipe_main::sig_add_recipe_and_product(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HNew_recipe_main::sig_add_recipe_to_product(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
