/****************************************************************************
** Meta object code from reading C++ file 'hschedeclienti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hschedeclienti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hschedeclienti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HSchedeClienti_t {
    QByteArrayData data[22];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HSchedeClienti_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HSchedeClienti_t qt_meta_stringdata_HSchedeClienti = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HSchedeClienti"
QT_MOC_LITERAL(1, 15, 22), // "selectRecipesforClient"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "getSubclients"
QT_MOC_LITERAL(4, 53, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 75, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 99, 27), // "on_cbSelectCriteria_toggled"
QT_MOC_LITERAL(7, 127, 7), // "checked"
QT_MOC_LITERAL(8, 135, 14), // "showSubclients"
QT_MOC_LITERAL(9, 150, 7), // "toggled"
QT_MOC_LITERAL(10, 158, 10), // "saveScheda"
QT_MOC_LITERAL(11, 169, 11), // "setImgWidth"
QT_MOC_LITERAL(12, 181, 8), // "newWidth"
QT_MOC_LITERAL(13, 190, 12), // "setImgHeight"
QT_MOC_LITERAL(14, 203, 9), // "newHeight"
QT_MOC_LITERAL(15, 213, 12), // "exportImages"
QT_MOC_LITERAL(16, 226, 17), // "on_btnDup_clicked"
QT_MOC_LITERAL(17, 244, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(18, 268, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(19, 292, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(20, 311, 19), // "on_pbExport_clicked"
QT_MOC_LITERAL(21, 331, 10) // "loadScheda"

    },
    "HSchedeClienti\0selectRecipesforClient\0"
    "\0getSubclients\0on_pushButton_clicked\0"
    "on_pushButton_4_clicked\0"
    "on_cbSelectCriteria_toggled\0checked\0"
    "showSubclients\0toggled\0saveScheda\0"
    "setImgWidth\0newWidth\0setImgHeight\0"
    "newHeight\0exportImages\0on_btnDup_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_btnSave_clicked\0on_pbExport_clicked\0"
    "loadScheda"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HSchedeClienti[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    1,   98,    2, 0x08 /* Private */,
       8,    1,  101,    2, 0x08 /* Private */,
      10,    0,  104,    2, 0x08 /* Private */,
      11,    1,  105,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    0,  116,    2, 0x08 /* Private */,
      21,    0,  117,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HSchedeClienti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HSchedeClienti *>(_o);
        Q_UNUSED(_t)
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
        case 9: _t->exportImages(); break;
        case 10: _t->on_btnDup_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        case 13: _t->on_btnSave_clicked(); break;
        case 14: _t->on_pbExport_clicked(); break;
        case 15: _t->loadScheda(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HSchedeClienti::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HSchedeClienti.data,
    qt_meta_data_HSchedeClienti,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HSchedeClienti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HSchedeClienti::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HSchedeClienti.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HSchedeClienti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
