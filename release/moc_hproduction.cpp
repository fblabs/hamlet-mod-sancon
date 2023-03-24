/****************************************************************************
** Meta object code from reading C++ file 'hproduction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../hproduction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hproduction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HProduction_t {
    QByteArrayData data[66];
    char stringdata0[1012];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HProduction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HProduction_t qt_meta_stringdata_HProduction = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HProduction"
QT_MOC_LITERAL(1, 12, 6), // "addLot"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 32, 5), // "index"
QT_MOC_LITERAL(5, 38, 11), // "show_window"
QT_MOC_LITERAL(6, 50, 9), // "getNewRow"
QT_MOC_LITERAL(7, 60, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(8, 82, 4), // "list"
QT_MOC_LITERAL(9, 87, 10), // "getClients"
QT_MOC_LITERAL(10, 98, 13), // "getSubclients"
QT_MOC_LITERAL(11, 112, 19), // "getRecipesForClient"
QT_MOC_LITERAL(12, 132, 9), // "getRecipe"
QT_MOC_LITERAL(13, 142, 15), // "productSelected"
QT_MOC_LITERAL(14, 158, 11), // "getLotModel"
QT_MOC_LITERAL(15, 170, 10), // "addLotProd"
QT_MOC_LITERAL(16, 181, 19), // "addLotFuoriRicettaN"
QT_MOC_LITERAL(17, 201, 3), // "row"
QT_MOC_LITERAL(18, 205, 18), // "addLotFuoriRicetta"
QT_MOC_LITERAL(19, 224, 14), // "saveProduction"
QT_MOC_LITERAL(20, 239, 16), // "recalculateTotal"
QT_MOC_LITERAL(21, 256, 20), // "calculateActualTotal"
QT_MOC_LITERAL(22, 277, 12), // "updateTotals"
QT_MOC_LITERAL(23, 290, 27), // "setAddProductFuoriRicettaUI"
QT_MOC_LITERAL(24, 318, 10), // "saveNewLot"
QT_MOC_LITERAL(25, 329, 3), // "lot"
QT_MOC_LITERAL(26, 333, 8), // "prodotto"
QT_MOC_LITERAL(27, 342, 11), // "saveLotLoad"
QT_MOC_LITERAL(28, 354, 7), // "idlotto"
QT_MOC_LITERAL(29, 362, 13), // "saveOperation"
QT_MOC_LITERAL(30, 376, 6), // "action"
QT_MOC_LITERAL(31, 383, 16), // "saveComposizione"
QT_MOC_LITERAL(32, 400, 11), // "lottotarget"
QT_MOC_LITERAL(33, 412, 10), // "operazione"
QT_MOC_LITERAL(34, 423, 17), // "updateComposition"
QT_MOC_LITERAL(35, 441, 11), // "printRecipe"
QT_MOC_LITERAL(36, 453, 15), // "printProduction"
QT_MOC_LITERAL(37, 469, 12), // "lastInsertId"
QT_MOC_LITERAL(38, 482, 14), // "getLotToModify"
QT_MOC_LITERAL(39, 497, 9), // "getNewLot"
QT_MOC_LITERAL(40, 507, 4), // "prod"
QT_MOC_LITERAL(41, 512, 23), // "saveUpdatedComposizione"
QT_MOC_LITERAL(42, 536, 21), // "saveUpdatedOperazione"
QT_MOC_LITERAL(43, 558, 9), // "resetForm"
QT_MOC_LITERAL(44, 568, 9), // "pcomplete"
QT_MOC_LITERAL(45, 578, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(46, 600, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(47, 624, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(48, 648, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(49, 672, 27), // "on_leQtyTotal_returnPressed"
QT_MOC_LITERAL(50, 700, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(51, 724, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(52, 748, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(53, 772, 23), // "on_pushButton_7_toggled"
QT_MOC_LITERAL(54, 796, 7), // "checked"
QT_MOC_LITERAL(55, 804, 33), // "on_pbAddLottoFuoriRicetta_cli..."
QT_MOC_LITERAL(56, 838, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(57, 863, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(58, 883, 20), // "on_pbAnnulla_clicked"
QT_MOC_LITERAL(59, 904, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(60, 929, 9), // "ui_enable"
QT_MOC_LITERAL(61, 939, 3), // "arg"
QT_MOC_LITERAL(62, 943, 16), // "addPreferredLots"
QT_MOC_LITERAL(63, 960, 16), // "findPreferredLot"
QT_MOC_LITERAL(64, 977, 7), // "id_prod"
QT_MOC_LITERAL(65, 985, 26) // "on_pbPreferredLots_clicked"

    },
    "HProduction\0addLot\0\0QModelIndex\0index\0"
    "show_window\0getNewRow\0QList<QStandardItem*>\0"
    "list\0getClients\0getSubclients\0"
    "getRecipesForClient\0getRecipe\0"
    "productSelected\0getLotModel\0addLotProd\0"
    "addLotFuoriRicettaN\0row\0addLotFuoriRicetta\0"
    "saveProduction\0recalculateTotal\0"
    "calculateActualTotal\0updateTotals\0"
    "setAddProductFuoriRicettaUI\0saveNewLot\0"
    "lot\0prodotto\0saveLotLoad\0idlotto\0"
    "saveOperation\0action\0saveComposizione\0"
    "lottotarget\0operazione\0updateComposition\0"
    "printRecipe\0printProduction\0lastInsertId\0"
    "getLotToModify\0getNewLot\0prod\0"
    "saveUpdatedComposizione\0saveUpdatedOperazione\0"
    "resetForm\0pcomplete\0on_pushButton_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_3_clicked\0"
    "on_leQtyTotal_returnPressed\0"
    "on_pushButton_7_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_7_toggled\0"
    "checked\0on_pbAddLottoFuoriRicetta_clicked\0"
    "on_pushButton_10_clicked\0on_checkBox_toggled\0"
    "on_pbAnnulla_clicked\0on_pushButton_11_clicked\0"
    "ui_enable\0arg\0addPreferredLots\0"
    "findPreferredLot\0id_prod\0"
    "on_pbPreferredLots_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HProduction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  259,    2, 0x08 /* Private */,
       1,    1,  264,    2, 0x28 /* Private | MethodCloned */,
       6,    1,  267,    2, 0x08 /* Private */,
       9,    0,  270,    2, 0x08 /* Private */,
      10,    0,  271,    2, 0x08 /* Private */,
      11,    0,  272,    2, 0x08 /* Private */,
      12,    0,  273,    2, 0x08 /* Private */,
      13,    0,  274,    2, 0x08 /* Private */,
      14,    0,  275,    2, 0x08 /* Private */,
      15,    0,  276,    2, 0x08 /* Private */,
      16,    1,  277,    2, 0x08 /* Private */,
      18,    0,  280,    2, 0x08 /* Private */,
      19,    0,  281,    2, 0x08 /* Private */,
      20,    0,  282,    2, 0x08 /* Private */,
      21,    0,  283,    2, 0x08 /* Private */,
      22,    0,  284,    2, 0x08 /* Private */,
      23,    1,  285,    2, 0x08 /* Private */,
      24,    2,  288,    2, 0x08 /* Private */,
      27,    2,  293,    2, 0x08 /* Private */,
      29,    2,  298,    2, 0x08 /* Private */,
      31,    2,  303,    2, 0x08 /* Private */,
      34,    0,  308,    2, 0x08 /* Private */,
      35,    0,  309,    2, 0x08 /* Private */,
      36,    0,  310,    2, 0x08 /* Private */,
      37,    0,  311,    2, 0x08 /* Private */,
      38,    1,  312,    2, 0x08 /* Private */,
      39,    1,  315,    2, 0x08 /* Private */,
      41,    0,  318,    2, 0x08 /* Private */,
      42,    1,  319,    2, 0x08 /* Private */,
      43,    1,  322,    2, 0x08 /* Private */,
      45,    0,  325,    2, 0x08 /* Private */,
      46,    0,  326,    2, 0x08 /* Private */,
      47,    0,  327,    2, 0x08 /* Private */,
      48,    0,  328,    2, 0x08 /* Private */,
      49,    0,  329,    2, 0x08 /* Private */,
      50,    0,  330,    2, 0x08 /* Private */,
      51,    0,  331,    2, 0x08 /* Private */,
      52,    0,  332,    2, 0x08 /* Private */,
      53,    1,  333,    2, 0x08 /* Private */,
      55,    0,  336,    2, 0x08 /* Private */,
      56,    0,  337,    2, 0x08 /* Private */,
      57,    1,  338,    2, 0x08 /* Private */,
      58,    0,  341,    2, 0x08 /* Private */,
      59,    0,  342,    2, 0x08 /* Private */,
      60,    1,  343,    2, 0x08 /* Private */,
      62,    0,  346,    2, 0x08 /* Private */,
      63,    1,  347,    2, 0x08 /* Private */,
      63,    0,  350,    2, 0x28 /* Private | MethodCloned */,
      65,    0,  351,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   17,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   25,   26,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   28,   26,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   17,   30,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   32,   33,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::QString, QMetaType::Int,   40,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   64,
    QMetaType::QString,
    QMetaType::Void,

       0        // eod
};

void HProduction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HProduction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLot((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->addLot((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->getNewRow((*reinterpret_cast< QList<QStandardItem*>(*)>(_a[1]))); break;
        case 3: _t->getClients(); break;
        case 4: _t->getSubclients(); break;
        case 5: _t->getRecipesForClient(); break;
        case 6: _t->getRecipe(); break;
        case 7: _t->productSelected(); break;
        case 8: _t->getLotModel(); break;
        case 9: _t->addLotProd(); break;
        case 10: _t->addLotFuoriRicettaN((*reinterpret_cast< QList<QStandardItem*>(*)>(_a[1]))); break;
        case 11: _t->addLotFuoriRicetta(); break;
        case 12: { bool _r = _t->saveProduction();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->recalculateTotal(); break;
        case 14: _t->calculateActualTotal(); break;
        case 15: _t->updateTotals(); break;
        case 16: _t->setAddProductFuoriRicettaUI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: { bool _r = _t->saveNewLot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->saveLotLoad((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->saveOperation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->saveComposizione((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->updateComposition();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->printRecipe(); break;
        case 23: _t->printProduction(); break;
        case 24: { int _r = _t->lastInsertId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->getLotToModify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: { QString _r = _t->getNewLot((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->saveUpdatedComposizione();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->saveUpdatedOperazione((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->resetForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->on_pushButton_clicked(); break;
        case 31: _t->on_pushButton_5_clicked(); break;
        case 32: _t->on_pushButton_6_clicked(); break;
        case 33: _t->on_pushButton_3_clicked(); break;
        case 34: _t->on_leQtyTotal_returnPressed(); break;
        case 35: _t->on_pushButton_7_clicked(); break;
        case 36: _t->on_pushButton_4_clicked(); break;
        case 37: _t->on_pushButton_2_clicked(); break;
        case 38: _t->on_pushButton_7_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_pbAddLottoFuoriRicetta_clicked(); break;
        case 40: _t->on_pushButton_10_clicked(); break;
        case 41: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_pbAnnulla_clicked(); break;
        case 43: _t->on_pushButton_11_clicked(); break;
        case 44: _t->ui_enable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->addPreferredLots(); break;
        case 46: { QString _r = _t->findPreferredLot((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 47: { QString _r = _t->findPreferredLot();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->on_pbPreferredLots_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HProduction::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HProduction.data,
    qt_meta_data_HProduction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HProduction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HProduction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HProduction.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HProduction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
