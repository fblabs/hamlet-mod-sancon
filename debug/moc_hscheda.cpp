/****************************************************************************
** Meta object code from reading C++ file 'hscheda.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hscheda.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hscheda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HScheda_t {
    QByteArrayData data[19];
    char stringdata[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HScheda_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HScheda_t qt_meta_stringdata_HScheda = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 21),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 19),
QT_MOC_LITERAL(4, 51, 13),
QT_MOC_LITERAL(5, 65, 10),
QT_MOC_LITERAL(6, 76, 13),
QT_MOC_LITERAL(7, 90, 19),
QT_MOC_LITERAL(8, 110, 7),
QT_MOC_LITERAL(9, 118, 12),
QT_MOC_LITERAL(10, 131, 8),
QT_MOC_LITERAL(11, 140, 8),
QT_MOC_LITERAL(12, 149, 4),
QT_MOC_LITERAL(13, 154, 32),
QT_MOC_LITERAL(14, 187, 5),
QT_MOC_LITERAL(15, 193, 23),
QT_MOC_LITERAL(16, 217, 23),
QT_MOC_LITERAL(17, 241, 23),
QT_MOC_LITERAL(18, 265, 23)
    },
    "HScheda\0on_pushButton_clicked\0\0"
    "getRecipesForClient\0getSubclients\0"
    "loadScheda\0loadSchedaOld\0on_checkBox_toggled\0"
    "checked\0setIDCLiente\0readFile\0filename\0"
    "save\0on_cbClienti_currentIndexChanged\0"
    "index\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_4_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HScheda[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    1,   97,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   11,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void HScheda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HScheda *_t = static_cast<HScheda *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->getRecipesForClient(); break;
        case 2: _t->getSubclients(); break;
        case 3: _t->loadScheda(); break;
        case 4: _t->loadSchedaOld(); break;
        case 5: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setIDCLiente(); break;
        case 7: { bool _r = _t->readFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->on_cbClienti_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        case 11: _t->on_pushButton_4_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        case 13: _t->on_pushButton_4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HScheda::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HScheda.data,
      qt_meta_data_HScheda,  qt_static_metacall, 0, 0}
};


const QMetaObject *HScheda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HScheda::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HScheda.stringdata))
        return static_cast<void*>(const_cast< HScheda*>(this));
    return QWidget::qt_metacast(_clname);
}

int HScheda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
