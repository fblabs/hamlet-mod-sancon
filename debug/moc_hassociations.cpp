/****************************************************************************
** Meta object code from reading C++ file 'hassociations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hassociations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hassociations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HAssociations_t {
    QByteArrayData data[25];
    char stringdata[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HAssociations_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HAssociations_t qt_meta_stringdata_HAssociations = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 8),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 14),
QT_MOC_LITERAL(4, 39, 14),
QT_MOC_LITERAL(5, 54, 14),
QT_MOC_LITERAL(6, 69, 14),
QT_MOC_LITERAL(7, 84, 19),
QT_MOC_LITERAL(8, 104, 9),
QT_MOC_LITERAL(9, 114, 19),
QT_MOC_LITERAL(10, 134, 9),
QT_MOC_LITERAL(11, 144, 26),
QT_MOC_LITERAL(12, 171, 4),
QT_MOC_LITERAL(13, 176, 15),
QT_MOC_LITERAL(14, 192, 7),
QT_MOC_LITERAL(15, 200, 15),
QT_MOC_LITERAL(16, 216, 23),
QT_MOC_LITERAL(17, 240, 14),
QT_MOC_LITERAL(18, 255, 9),
QT_MOC_LITERAL(19, 265, 26),
QT_MOC_LITERAL(20, 292, 26),
QT_MOC_LITERAL(21, 319, 21),
QT_MOC_LITERAL(22, 341, 23),
QT_MOC_LITERAL(23, 365, 17),
QT_MOC_LITERAL(24, 383, 4)
    },
    "HAssociations\0initForm\0\0getClientsList\0"
    "getClientsView\0getRecipesView\0"
    "getRecipesList\0getAssociateRecipes\0"
    "iClientId\0getAssociateClients\0iRecipeId\0"
    "on_cb1_currentIndexChanged\0arg1\0"
    "on_rbRC_toggled\0checked\0on_rbCR_toggled\0"
    "on_pushButton_5_clicked\0addAssociation\0"
    "bIsRecipe\0addRecipeClientAssociation\0"
    "addClientRecipeAssociation\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "setConnectionName\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HAssociations[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    1,  104,    2, 0x08 /* Private */,
       9,    1,  107,    2, 0x08 /* Private */,
      11,    1,  110,    2, 0x08 /* Private */,
      13,    1,  113,    2, 0x08 /* Private */,
      15,    1,  116,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    1,  120,    2, 0x08 /* Private */,
      19,    0,  123,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    0,  125,    2, 0x08 /* Private */,
      22,    0,  126,    2, 0x08 /* Private */,
      23,    1,  127,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Bool,   18,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

void HAssociations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HAssociations *_t = static_cast<HAssociations *>(_o);
        switch (_id) {
        case 0: _t->initForm(); break;
        case 1: _t->getClientsList(); break;
        case 2: _t->getClientsView(); break;
        case 3: _t->getRecipesView(); break;
        case 4: _t->getRecipesList(); break;
        case 5: _t->getAssociateRecipes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->getAssociateClients((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_cb1_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_rbRC_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_rbCR_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_5_clicked(); break;
        case 11: { int _r = _t->addAssociation((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->addRecipeClientAssociation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->addClientRecipeAssociation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->on_pushButton_clicked(); break;
        case 15: _t->on_pushButton_3_clicked(); break;
        case 16: _t->setConnectionName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HAssociations::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HAssociations.data,
      qt_meta_data_HAssociations,  qt_static_metacall, 0, 0}
};


const QMetaObject *HAssociations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HAssociations::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HAssociations.stringdata))
        return static_cast<void*>(const_cast< HAssociations*>(this));
    return QDialog::qt_metacast(_clname);
}

int HAssociations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
