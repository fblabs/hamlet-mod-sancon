/****************************************************************************
** Meta object code from reading C++ file 'hschedeclienti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hschedeclienti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hschedeclienti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HSchedeClienti_t {
    QByteArrayData data[20];
    char stringdata[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HSchedeClienti_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HSchedeClienti_t qt_meta_stringdata_HSchedeClienti = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 22),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 13),
QT_MOC_LITERAL(4, 53, 21),
QT_MOC_LITERAL(5, 75, 23),
QT_MOC_LITERAL(6, 99, 27),
QT_MOC_LITERAL(7, 127, 7),
QT_MOC_LITERAL(8, 135, 14),
QT_MOC_LITERAL(9, 150, 7),
QT_MOC_LITERAL(10, 158, 10),
QT_MOC_LITERAL(11, 169, 11),
QT_MOC_LITERAL(12, 181, 8),
QT_MOC_LITERAL(13, 190, 12),
QT_MOC_LITERAL(14, 203, 9),
QT_MOC_LITERAL(15, 213, 17),
QT_MOC_LITERAL(16, 231, 23),
QT_MOC_LITERAL(17, 255, 23),
QT_MOC_LITERAL(18, 279, 18),
QT_MOC_LITERAL(19, 298, 10)
    },
    "HSchedeClienti\0selectRecipesforClient\0"
    "\0getSubclients\0on_pushButton_clicked\0"
    "on_pushButton_4_clicked\0"
    "on_cbSelectCriteria_toggled\0checked\0"
    "showSubclients\0toggled\0saveScheda\0"
    "setImgWidth\0newWidth\0setImgHeight\0"
    "newHeight\0on_btnDup_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_btnSave_clicked\0loadScheda"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HSchedeClienti[] = {

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
       6,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HSchedeClienti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HSchedeClienti *_t = static_cast<HSchedeClienti *>(_o);
        switch (_id) {
        case 0: _t->selectRecipesforClient(); break;
        case 1: _t->getSubclients(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_cbSelectCriteria_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showSubclients((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->saveScheda(); break;
        case 7: _t->setImgWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setImgHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_btnDup_clicked(); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_btnSave_clicked(); break;
        case 13: _t->loadScheda(); break;
        default: ;
        }
    }
}

const QMetaObject HSchedeClienti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HSchedeClienti.data,
      qt_meta_data_HSchedeClienti,  qt_static_metacall, 0, 0}
};


const QMetaObject *HSchedeClienti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HSchedeClienti::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HSchedeClienti.stringdata))
        return static_cast<void*>(const_cast< HSchedeClienti*>(this));
    return QWidget::qt_metacast(_clname);
}

int HSchedeClienti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
