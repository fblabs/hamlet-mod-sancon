/****************************************************************************
** Meta object code from reading C++ file 'hpdfprint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hpdfprint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hpdfprint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HPDFPrint_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HPDFPrint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HPDFPrint_t qt_meta_stringdata_HPDFPrint = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HPDFPrint"
QT_MOC_LITERAL(1, 10, 21), // "on_pbSave_pdf_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "on_pbPrint_clicked"
QT_MOC_LITERAL(4, 52, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(5, 71, 26), // "on_sbFontSize_valueChanged"
QT_MOC_LITERAL(6, 98, 4), // "arg1"
QT_MOC_LITERAL(7, 103, 20), // "on_pbPreview_clicked"
QT_MOC_LITERAL(8, 124, 13), // "print_preview"
QT_MOC_LITERAL(9, 138, 9), // "QPrinter*"
QT_MOC_LITERAL(10, 148, 9), // "p_printer"
QT_MOC_LITERAL(11, 158, 21), // "on_rbPortrait_toggled"
QT_MOC_LITERAL(12, 180, 7) // "checked"

    },
    "HPDFPrint\0on_pbSave_pdf_clicked\0\0"
    "on_pbPrint_clicked\0on_pbClose_clicked\0"
    "on_sbFontSize_valueChanged\0arg1\0"
    "on_pbPreview_clicked\0print_preview\0"
    "QPrinter*\0p_printer\0on_rbPortrait_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HPDFPrint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      11,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void HPDFPrint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HPDFPrint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbSave_pdf_clicked(); break;
        case 1: _t->on_pbPrint_clicked(); break;
        case 2: _t->on_pbClose_clicked(); break;
        case 3: _t->on_sbFontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pbPreview_clicked(); break;
        case 5: _t->print_preview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 6: _t->on_rbPortrait_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HPDFPrint::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HPDFPrint.data,
    qt_meta_data_HPDFPrint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HPDFPrint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HPDFPrint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HPDFPrint.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HPDFPrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
