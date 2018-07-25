/****************************************************************************
** Meta object code from reading C++ file 'hrecipes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hrecipes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hrecipes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HRecipes_t {
    QByteArrayData data[20];
    char stringdata[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HRecipes_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HRecipes_t qt_meta_stringdata_HRecipes = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 23),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 4),
QT_MOC_LITERAL(4, 39, 13),
QT_MOC_LITERAL(5, 53, 8),
QT_MOC_LITERAL(6, 62, 16),
QT_MOC_LITERAL(7, 79, 10),
QT_MOC_LITERAL(8, 90, 23),
QT_MOC_LITERAL(9, 114, 21),
QT_MOC_LITERAL(10, 136, 23),
QT_MOC_LITERAL(11, 160, 5),
QT_MOC_LITERAL(12, 166, 19),
QT_MOC_LITERAL(13, 186, 23),
QT_MOC_LITERAL(14, 210, 23),
QT_MOC_LITERAL(15, 234, 23),
QT_MOC_LITERAL(16, 258, 19),
QT_MOC_LITERAL(17, 278, 5),
QT_MOC_LITERAL(18, 284, 17),
QT_MOC_LITERAL(19, 302, 23)
    },
    "HRecipes\0on_lineEdit_textChanged\0\0"
    "arg1\0caricaRicetta\0getMaxID\0"
    "updateDataRecipe\0updateNote\0"
    "on_pushButton_5_clicked\0on_pushButton_clicked\0"
    "on_pushButton_6_clicked\0setDB\0"
    "onConnectionNameSet\0on_pushButton_4_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_7_clicked\0"
    "on_tvRecipe_clicked\0index\0on_pbNote_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HRecipes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    0,   97,    2, 0x08 /* Private */,
       5,    0,   98,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HRecipes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HRecipes *_t = static_cast<HRecipes *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->caricaRicetta(); break;
        case 2: { int _r = _t->getMaxID();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->updateDataRecipe(); break;
        case 4: _t->updateNote(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: { int _r = _t->setDB();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->onConnectionNameSet(); break;
        case 10: _t->on_pushButton_4_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->on_pushButton_7_clicked(); break;
        case 13: _t->on_tvRecipe_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->on_pbNote_clicked(); break;
        case 15: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject HRecipes::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HRecipes.data,
      qt_meta_data_HRecipes,  qt_static_metacall, 0, 0}
};


const QMetaObject *HRecipes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HRecipes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HRecipes.stringdata))
        return static_cast<void*>(const_cast< HRecipes*>(this));
    return QWidget::qt_metacast(_clname);
}

int HRecipes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
