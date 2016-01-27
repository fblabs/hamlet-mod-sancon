/****************************************************************************
** Meta object code from reading C++ file 'hmodificascheda.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hmodificascheda.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hmodificascheda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HModificaScheda_t {
    QByteArrayData data[12];
    char stringdata[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HModificaScheda_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HModificaScheda_t qt_meta_stringdata_HModificaScheda = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 16),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 21),
QT_MOC_LITERAL(4, 56, 10),
QT_MOC_LITERAL(5, 67, 10),
QT_MOC_LITERAL(6, 78, 23),
QT_MOC_LITERAL(7, 102, 23),
QT_MOC_LITERAL(8, 126, 23),
QT_MOC_LITERAL(9, 150, 10),
QT_MOC_LITERAL(10, 161, 23),
QT_MOC_LITERAL(11, 185, 6)
    },
    "HModificaScheda\0schedaAggiornata\0\0"
    "on_pushButton_clicked\0updateFile\0"
    "reloadFile\0on_pushButton_3_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "loadScheda\0on_pushButton_5_clicked\0"
    "update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HModificaScheda[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HModificaScheda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HModificaScheda *_t = static_cast<HModificaScheda *>(_o);
        switch (_id) {
        case 0: _t->schedaAggiornata(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->updateFile(); break;
        case 3: _t->reloadFile(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->loadScheda(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HModificaScheda::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HModificaScheda::schedaAggiornata)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HModificaScheda::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HModificaScheda.data,
      qt_meta_data_HModificaScheda,  qt_static_metacall, 0, 0}
};


const QMetaObject *HModificaScheda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HModificaScheda::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HModificaScheda.stringdata))
        return static_cast<void*>(const_cast< HModificaScheda*>(this));
    return QDialog::qt_metacast(_clname);
}

int HModificaScheda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HModificaScheda::schedaAggiornata()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
