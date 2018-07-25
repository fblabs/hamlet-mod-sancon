/****************************************************************************
** Meta object code from reading C++ file 'hclientsfiles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hclientsfiles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hclientsfiles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HClientsFiles_t {
    QByteArrayData data[12];
    char stringdata[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HClientsFiles_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HClientsFiles_t qt_meta_stringdata_HClientsFiles = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 17),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 4),
QT_MOC_LITERAL(4, 38, 23),
QT_MOC_LITERAL(5, 62, 4),
QT_MOC_LITERAL(6, 67, 15),
QT_MOC_LITERAL(7, 83, 7),
QT_MOC_LITERAL(8, 91, 13),
QT_MOC_LITERAL(9, 105, 21),
QT_MOC_LITERAL(10, 127, 21),
QT_MOC_LITERAL(11, 149, 5)
    },
    "HClientsFiles\0setConnectionName\0\0conn\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pbCR_toggled\0checked\0on_RC_toggled\0"
    "on_pushButton_clicked\0on_listView_2_clicked\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HClientsFiles[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   11,

       0        // eod
};

void HClientsFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HClientsFiles *_t = static_cast<HClientsFiles *>(_o);
        switch (_id) {
        case 0: _t->setConnectionName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pbCR_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_RC_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_listView_2_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HClientsFiles::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HClientsFiles.data,
      qt_meta_data_HClientsFiles,  qt_static_metacall, 0, 0}
};


const QMetaObject *HClientsFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HClientsFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HClientsFiles.stringdata))
        return static_cast<void*>(const_cast< HClientsFiles*>(this));
    return QDialog::qt_metacast(_clname);
}

int HClientsFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
