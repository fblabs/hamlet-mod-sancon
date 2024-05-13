/****************************************************************************
** Meta object code from reading C++ file 'hrecipesforingredient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hrecipesforingredient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hrecipesforingredient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HRecipesForIngredient_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HRecipesForIngredient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HRecipesForIngredient_t qt_meta_stringdata_HRecipesForIngredient = {
    {
QT_MOC_LITERAL(0, 0, 21), // "HRecipesForIngredient"
QT_MOC_LITERAL(1, 22, 14), // "getIngredients"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "getRecipes"
QT_MOC_LITERAL(4, 49, 3), // "pid"
QT_MOC_LITERAL(5, 53, 5), // "print"
QT_MOC_LITERAL(6, 59, 36), // "on_cbIngredients_currentIndex..."
QT_MOC_LITERAL(7, 96, 5), // "index"
QT_MOC_LITERAL(8, 102, 18), // "on_pbPrint_clicked"
QT_MOC_LITERAL(9, 121, 18) // "on_pbClose_clicked"

    },
    "HRecipesForIngredient\0getIngredients\0"
    "\0getRecipes\0pid\0print\0"
    "on_cbIngredients_currentIndexChanged\0"
    "index\0on_pbPrint_clicked\0on_pbClose_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HRecipesForIngredient[] = {

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
       3,    1,   50,    2, 0x08 /* Private */,
       3,    0,   53,    2, 0x28 /* Private | MethodCloned */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HRecipesForIngredient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HRecipesForIngredient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getIngredients(); break;
        case 1: _t->getRecipes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getRecipes(); break;
        case 3: _t->print(); break;
        case 4: _t->on_cbIngredients_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pbPrint_clicked(); break;
        case 6: _t->on_pbClose_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HRecipesForIngredient::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HRecipesForIngredient.data,
    qt_meta_data_HRecipesForIngredient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HRecipesForIngredient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HRecipesForIngredient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HRecipesForIngredient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HRecipesForIngredient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
