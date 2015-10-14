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
    QByteArrayData data[13];
    char stringdata[211];
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
QT_MOC_LITERAL(6, 99, 23),
QT_MOC_LITERAL(7, 123, 27),
QT_MOC_LITERAL(8, 151, 7),
QT_MOC_LITERAL(9, 159, 14),
QT_MOC_LITERAL(10, 174, 7),
QT_MOC_LITERAL(11, 182, 17),
QT_MOC_LITERAL(12, 200, 10)
    },
    "HSchedeClienti\0selectRecipesforClient\0"
    "\0getSubclients\0on_pushButton_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_3_clicked\0"
    "on_cbSelectCriteria_toggled\0checked\0"
    "showSubclients\0toggled\0on_btnDup_clicked\0"
    "loadScheda"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HSchedeClienti[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
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
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_cbSelectCriteria_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showSubclients((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_btnDup_clicked(); break;
        case 8: _t->loadScheda(); break;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
