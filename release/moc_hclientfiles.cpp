/****************************************************************************
** Meta object code from reading C++ file 'hclientfiles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hclientfiles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hclientfiles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HClientFiles_t {
    QByteArrayData data[17];
    char stringdata[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HClientFiles_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HClientFiles_t qt_meta_stringdata_HClientFiles = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 17),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 4),
QT_MOC_LITERAL(4, 37, 21),
QT_MOC_LITERAL(5, 59, 11),
QT_MOC_LITERAL(6, 71, 6),
QT_MOC_LITERAL(7, 78, 15),
QT_MOC_LITERAL(8, 94, 23),
QT_MOC_LITERAL(9, 118, 23),
QT_MOC_LITERAL(10, 142, 4),
QT_MOC_LITERAL(11, 147, 21),
QT_MOC_LITERAL(12, 169, 23),
QT_MOC_LITERAL(13, 193, 18),
QT_MOC_LITERAL(14, 212, 7),
QT_MOC_LITERAL(15, 220, 19),
QT_MOC_LITERAL(16, 240, 17)
    },
    "HClientFiles\0setConnectionName\0\0conn\0"
    "on_pushButton_clicked\0checkRecipe\0"
    "getIDS\0getAssociations\0on_pushButton_2_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_leProd_textChanged\0on_pushButton_3_clicked\0"
    "on_rbRight_toggled\0checked\0"
    "on_checkBox_toggled\0on_rbLeft_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HClientFiles[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void HClientFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HClientFiles *_t = static_cast<HClientFiles *>(_o);
        switch (_id) {
        case 0: _t->setConnectionName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->checkRecipe(); break;
        case 3: _t->getIDS(); break;
        case 4: _t->getAssociations(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_leProd_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        case 9: _t->on_rbRight_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_rbLeft_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HClientFiles::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HClientFiles.data,
      qt_meta_data_HClientFiles,  qt_static_metacall, 0, 0}
};


const QMetaObject *HClientFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HClientFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HClientFiles.stringdata))
        return static_cast<void*>(const_cast< HClientFiles*>(this));
    return QWidget::qt_metacast(_clname);
}

int HClientFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
