/****************************************************************************
** Meta object code from reading C++ file 'hproducts_for_calcolo_costi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hproducts_for_calcolo_costi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hproducts_for_calcolo_costi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HProducts_for_calcolo_costi_t {
    QByteArrayData data[15];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HProducts_for_calcolo_costi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HProducts_for_calcolo_costi_t qt_meta_stringdata_HProducts_for_calcolo_costi = {
    {
QT_MOC_LITERAL(0, 0, 27), // "HProducts_for_calcolo_costi"
QT_MOC_LITERAL(1, 28, 7), // "sg_data"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "sg_item_added"
QT_MOC_LITERAL(4, 51, 4), // "item"
QT_MOC_LITERAL(5, 56, 8), // "quantita"
QT_MOC_LITERAL(6, 65, 5), // "costo"
QT_MOC_LITERAL(7, 71, 13), // "get_tipologie"
QT_MOC_LITERAL(8, 85, 15), // "select_tipology"
QT_MOC_LITERAL(9, 101, 34), // "on_cbTipologie_currentIndexCh..."
QT_MOC_LITERAL(10, 136, 5), // "index"
QT_MOC_LITERAL(11, 142, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(12, 161, 21), // "on_chkGeneric_toggled"
QT_MOC_LITERAL(13, 183, 7), // "checked"
QT_MOC_LITERAL(14, 191, 16) // "on_pbAdd_clicked"

    },
    "HProducts_for_calcolo_costi\0sg_data\0"
    "\0sg_item_added\0item\0quantita\0costo\0"
    "get_tipologie\0select_tipology\0"
    "on_cbTipologie_currentIndexChanged\0"
    "index\0on_pbClose_clicked\0on_chkGeneric_toggled\0"
    "checked\0on_pbAdd_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HProducts_for_calcolo_costi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    3,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   62,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x28 /* Private | MethodCloned */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    1,   70,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

void HProducts_for_calcolo_costi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HProducts_for_calcolo_costi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sg_data(); break;
        case 1: _t->sg_item_added((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->get_tipologie((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->get_tipologie(); break;
        case 4: _t->on_cbTipologie_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pbClose_clicked(); break;
        case 6: _t->on_chkGeneric_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_pbAdd_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HProducts_for_calcolo_costi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HProducts_for_calcolo_costi::sg_data)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HProducts_for_calcolo_costi::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HProducts_for_calcolo_costi::sg_item_added)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HProducts_for_calcolo_costi::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HProducts_for_calcolo_costi.data,
    qt_meta_data_HProducts_for_calcolo_costi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HProducts_for_calcolo_costi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HProducts_for_calcolo_costi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HProducts_for_calcolo_costi.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HProducts_for_calcolo_costi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void HProducts_for_calcolo_costi::sg_data()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HProducts_for_calcolo_costi::sg_item_added(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
