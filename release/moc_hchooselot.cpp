/****************************************************************************
** Meta object code from reading C++ file 'hchooselot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hchooselot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hchooselot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HChooseLot_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HChooseLot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HChooseLot_t qt_meta_stringdata_HChooseLot = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HChooseLot"
QT_MOC_LITERAL(1, 11, 14), // "sg_lotSelected"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "plot"
QT_MOC_LITERAL(4, 32, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(5, 51, 25), // "on_leSearch_returnPressed"
QT_MOC_LITERAL(6, 77, 19), // "on_tvSearch_clicked"
QT_MOC_LITERAL(7, 97, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 109, 5), // "index"
QT_MOC_LITERAL(9, 115, 25) // "on_tvSearch_doubleClicked"

    },
    "HChooseLot\0sg_lotSelected\0\0plot\0"
    "on_pbClose_clicked\0on_leSearch_returnPressed\0"
    "on_tvSearch_clicked\0QModelIndex\0index\0"
    "on_tvSearch_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HChooseLot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::QString, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void HChooseLot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HChooseLot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->sg_lotSelected((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_pbClose_clicked(); break;
        case 2: _t->on_leSearch_returnPressed(); break;
        case 3: _t->on_tvSearch_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_tvSearch_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = QString (HChooseLot::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HChooseLot::sg_lotSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HChooseLot::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HChooseLot.data,
    qt_meta_data_HChooseLot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HChooseLot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HChooseLot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HChooseLot.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HChooseLot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
QString HChooseLot::sg_lotSelected(const QString _t1)
{
    QString _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
