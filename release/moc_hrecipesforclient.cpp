/****************************************************************************
** Meta object code from reading C++ file 'hrecipesforclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hrecipesforclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hrecipesforclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HRecipesForClient_t {
    QByteArrayData data[10];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HRecipesForClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HRecipesForClient_t qt_meta_stringdata_HRecipesForClient = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HRecipesForClient"
QT_MOC_LITERAL(1, 18, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 32), // "on_cbRecipes_currentIndexChanged"
QT_MOC_LITERAL(4, 71, 5), // "index"
QT_MOC_LITERAL(5, 77, 19), // "getClientsForRecipe"
QT_MOC_LITERAL(6, 97, 8), // "idrecipe"
QT_MOC_LITERAL(7, 106, 10), // "getRecipes"
QT_MOC_LITERAL(8, 117, 18), // "on_pbPrint_clicked"
QT_MOC_LITERAL(9, 136, 5) // "print"

    },
    "HRecipesForClient\0on_pbClose_clicked\0"
    "\0on_cbRecipes_currentIndexChanged\0"
    "index\0getClientsForRecipe\0idrecipe\0"
    "getRecipes\0on_pbPrint_clicked\0print"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HRecipesForClient[] = {

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
       5,    1,   53,    2, 0x08 /* Private */,
       5,    0,   56,    2, 0x28 /* Private | MethodCloned */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HRecipesForClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HRecipesForClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbClose_clicked(); break;
        case 1: _t->on_cbRecipes_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getClientsForRecipe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->getClientsForRecipe(); break;
        case 4: _t->getRecipes(); break;
        case 5: _t->on_pbPrint_clicked(); break;
        case 6: _t->print(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HRecipesForClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HRecipesForClient.data,
    qt_meta_data_HRecipesForClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HRecipesForClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HRecipesForClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HRecipesForClient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HRecipesForClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
