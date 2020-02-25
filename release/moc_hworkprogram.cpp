/****************************************************************************
** Meta object code from reading C++ file 'hworkprogram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hworkprogram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hworkprogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HWorkProgram_t {
    QByteArrayData data[23];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HWorkProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HWorkProgram_t qt_meta_stringdata_HWorkProgram = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HWorkProgram"
QT_MOC_LITERAL(1, 13, 16), // "on_pbAdd_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "createSheet"
QT_MOC_LITERAL(4, 43, 9), // "getSheets"
QT_MOC_LITERAL(5, 53, 20), // "on_tvStorico_clicked"
QT_MOC_LITERAL(6, 74, 5), // "index"
QT_MOC_LITERAL(7, 80, 21), // "on_pbNewSheet_clicked"
QT_MOC_LITERAL(8, 102, 12), // "refreshSheet"
QT_MOC_LITERAL(9, 115, 11), // "updateSheet"
QT_MOC_LITERAL(10, 127, 3), // "lix"
QT_MOC_LITERAL(11, 131, 5), // "oldix"
QT_MOC_LITERAL(12, 137, 5), // "newix"
QT_MOC_LITERAL(13, 143, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(14, 161, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(15, 180, 21), // "on_cbshowrows_toggled"
QT_MOC_LITERAL(16, 202, 7), // "checked"
QT_MOC_LITERAL(17, 210, 19), // "on_pbRemove_clicked"
QT_MOC_LITERAL(18, 230, 26), // "on_tvGeneral_doubleClicked"
QT_MOC_LITERAL(19, 257, 19), // "on_pbModify_clicked"
QT_MOC_LITERAL(20, 277, 10), // "showModRow"
QT_MOC_LITERAL(21, 288, 20), // "on_deDal_dateChanged"
QT_MOC_LITERAL(22, 309, 4) // "date"

    },
    "HWorkProgram\0on_pbAdd_clicked\0\0"
    "createSheet\0getSheets\0on_tvStorico_clicked\0"
    "index\0on_pbNewSheet_clicked\0refreshSheet\0"
    "updateSheet\0lix\0oldix\0newix\0"
    "on_pbSave_clicked\0on_pbClose_clicked\0"
    "on_cbshowrows_toggled\0checked\0"
    "on_pbRemove_clicked\0on_tvGeneral_doubleClicked\0"
    "on_pbModify_clicked\0showModRow\0"
    "on_deDal_dateChanged\0date"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HWorkProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    3,   97,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    1,  106,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    1,  110,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,
      20,    0,  114,    2, 0x08 /* Private */,
      21,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   22,

       0        // eod
};

void HWorkProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HWorkProgram *_t = static_cast<HWorkProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbAdd_clicked(); break;
        case 1: { bool _r = _t->createSheet();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->getSheets(); break;
        case 3: _t->on_tvStorico_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pbNewSheet_clicked(); break;
        case 5: _t->refreshSheet(); break;
        case 6: _t->updateSheet((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->on_pbSave_clicked(); break;
        case 8: _t->on_pbClose_clicked(); break;
        case 9: _t->on_cbshowrows_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_pbRemove_clicked(); break;
        case 11: _t->on_tvGeneral_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_pbModify_clicked(); break;
        case 13: _t->showModRow(); break;
        case 14: _t->on_deDal_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HWorkProgram::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HWorkProgram.data,
      qt_meta_data_HWorkProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HWorkProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HWorkProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HWorkProgram.stringdata0))
        return static_cast<void*>(const_cast< HWorkProgram*>(this));
    return QWidget::qt_metacast(_clname);
}

int HWorkProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
