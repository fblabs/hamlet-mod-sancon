/****************************************************************************
** Meta object code from reading C++ file 'hcontacts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hcontacts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hcontacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HContacts_t {
    QByteArrayData data[11];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HContacts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HContacts_t qt_meta_stringdata_HContacts = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HContacts"
QT_MOC_LITERAL(1, 10, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 57, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(5, 81, 13), // "removeContact"
QT_MOC_LITERAL(6, 95, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 119, 6), // "reload"
QT_MOC_LITERAL(8, 126, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(9, 150, 25), // "on_lineEdit_3_textChanged"
QT_MOC_LITERAL(10, 176, 4) // "arg1"

    },
    "HContacts\0on_pushButton_4_clicked\0\0"
    "on_pushButton_clicked\0on_pushButton_5_clicked\0"
    "removeContact\0on_pushButton_2_clicked\0"
    "reload\0on_pushButton_6_clicked\0"
    "on_lineEdit_3_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HContacts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void HContacts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HContacts *_t = static_cast<HContacts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_4_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_5_clicked(); break;
        case 3: { bool _r = _t->removeContact();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->reload(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_lineEdit_3_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HContacts::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HContacts.data,
      qt_meta_data_HContacts,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HContacts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HContacts::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HContacts.stringdata0))
        return static_cast<void*>(const_cast< HContacts*>(this));
    return QWidget::qt_metacast(_clname);
}

int HContacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
