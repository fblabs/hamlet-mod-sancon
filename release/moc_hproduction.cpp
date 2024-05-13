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
    QByteArrayData data[73];
    char stringdata0[1125];
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
QT_MOC_LITERAL(5, 38, 11), // "p_allergene"
QT_MOC_LITERAL(6, 50, 11), // "show_window"
QT_MOC_LITERAL(7, 62, 9), // "getNewRow"
QT_MOC_LITERAL(8, 72, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(9, 94, 4), // "list"
QT_MOC_LITERAL(10, 99, 10), // "getClients"
QT_MOC_LITERAL(11, 110, 13), // "getSubclients"
QT_MOC_LITERAL(12, 124, 19), // "getRecipesForClient"
QT_MOC_LITERAL(13, 144, 9), // "getRecipe"
QT_MOC_LITERAL(14, 154, 10), // "addLotProd"
QT_MOC_LITERAL(15, 165, 19), // "addLotFuoriRicettaN"
QT_MOC_LITERAL(16, 185, 3), // "row"
QT_MOC_LITERAL(17, 189, 18), // "addLotFuoriRicetta"
QT_MOC_LITERAL(18, 208, 14), // "saveProduction"
QT_MOC_LITERAL(19, 223, 16), // "recalculateTotal"
QT_MOC_LITERAL(20, 240, 20), // "calculateActualTotal"
QT_MOC_LITERAL(21, 261, 12), // "updateTotals"
QT_MOC_LITERAL(22, 274, 27), // "setAddProductFuoriRicettaUI"
QT_MOC_LITERAL(23, 302, 10), // "saveNewLot"
QT_MOC_LITERAL(24, 313, 3), // "lot"
QT_MOC_LITERAL(25, 317, 8), // "prodotto"
QT_MOC_LITERAL(26, 326, 11), // "saveLotLoad"
QT_MOC_LITERAL(27, 338, 7), // "idlotto"
QT_MOC_LITERAL(28, 346, 13), // "saveOperation"
QT_MOC_LITERAL(29, 360, 6), // "action"
QT_MOC_LITERAL(30, 367, 16), // "saveComposizione"
QT_MOC_LITERAL(31, 384, 11), // "lottotarget"
QT_MOC_LITERAL(32, 396, 10), // "operazione"
QT_MOC_LITERAL(33, 407, 17), // "updateComposition"
QT_MOC_LITERAL(34, 425, 11), // "printRecipe"
QT_MOC_LITERAL(35, 437, 15), // "printProduction"
QT_MOC_LITERAL(36, 453, 5), // "print"
QT_MOC_LITERAL(37, 459, 25), // "const QStandardItemModel*"
QT_MOC_LITERAL(38, 485, 6), // "prtmod"
QT_MOC_LITERAL(39, 492, 3), // "pdf"
QT_MOC_LITERAL(40, 496, 12), // "lastInsertId"
QT_MOC_LITERAL(41, 509, 14), // "getLotToModify"
QT_MOC_LITERAL(42, 524, 9), // "getNewLot"
QT_MOC_LITERAL(43, 534, 4), // "prod"
QT_MOC_LITERAL(44, 539, 23), // "saveUpdatedComposizione"
QT_MOC_LITERAL(45, 563, 21), // "saveUpdatedOperazione"
QT_MOC_LITERAL(46, 585, 9), // "resetForm"
QT_MOC_LITERAL(47, 595, 9), // "pcomplete"
QT_MOC_LITERAL(48, 605, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(49, 627, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(50, 651, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(51, 675, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(52, 699, 27), // "on_leQtyTotal_returnPressed"
QT_MOC_LITERAL(53, 727, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(54, 751, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(55, 775, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(56, 799, 23), // "on_pushButton_7_toggled"
QT_MOC_LITERAL(57, 823, 7), // "checked"
QT_MOC_LITERAL(58, 831, 33), // "on_pbAddLottoFuoriRicetta_cli..."
QT_MOC_LITERAL(59, 865, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(60, 890, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(61, 910, 20), // "on_pbAnnulla_clicked"
QT_MOC_LITERAL(62, 931, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(63, 956, 9), // "ui_enable"
QT_MOC_LITERAL(64, 966, 3), // "arg"
QT_MOC_LITERAL(65, 970, 16), // "addPreferredLots"
QT_MOC_LITERAL(66, 987, 16), // "findPreferredLot"
QT_MOC_LITERAL(67, 1004, 7), // "id_prod"
QT_MOC_LITERAL(68, 1012, 26), // "on_pbPreferredLots_clicked"
QT_MOC_LITERAL(69, 1039, 34), // "on_cbTipoLotto_currentIndexCh..."
QT_MOC_LITERAL(70, 1074, 20), // "getrecipeForPrinting"
QT_MOC_LITERAL(71, 1095, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(72, 1115, 9) // "idricetta"

    },
    "HProduction\0addLot\0\0QModelIndex\0index\0"
    "p_allergene\0show_window\0getNewRow\0"
    "QList<QStandardItem*>\0list\0getClients\0"
    "getSubclients\0getRecipesForClient\0"
    "getRecipe\0addLotProd\0addLotFuoriRicettaN\0"
    "row\0addLotFuoriRicetta\0saveProduction\0"
    "recalculateTotal\0calculateActualTotal\0"
    "updateTotals\0setAddProductFuoriRicettaUI\0"
    "saveNewLot\0lot\0prodotto\0saveLotLoad\0"
    "idlotto\0saveOperation\0action\0"
    "saveComposizione\0lottotarget\0operazione\0"
    "updateComposition\0printRecipe\0"
    "printProduction\0print\0const QStandardItemModel*\0"
    "prtmod\0pdf\0lastInsertId\0getLotToModify\0"
    "getNewLot\0prod\0saveUpdatedComposizione\0"
    "saveUpdatedOperazione\0resetForm\0"
    "pcomplete\0on_pushButton_clicked\0"
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
    "on_pbPreferredLots_clicked\0"
    "on_cbTipoLotto_currentIndexChanged\0"
    "getrecipeForPrinting\0QStandardItemModel*\0"
    "idricetta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HProduction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,  284,    2, 0x08 /* Private */,
       1,    2,  291,    2, 0x28 /* Private | MethodCloned */,
       1,    1,  296,    2, 0x28 /* Private | MethodCloned */,
       7,    1,  299,    2, 0x08 /* Private */,
      10,    0,  302,    2, 0x08 /* Private */,
      11,    0,  303,    2, 0x08 /* Private */,
      12,    0,  304,    2, 0x08 /* Private */,
      13,    0,  305,    2, 0x08 /* Private */,
      14,    0,  306,    2, 0x08 /* Private */,
      15,    1,  307,    2, 0x08 /* Private */,
      17,    0,  310,    2, 0x08 /* Private */,
      18,    0,  311,    2, 0x08 /* Private */,
      19,    0,  312,    2, 0x08 /* Private */,
      20,    0,  313,    2, 0x08 /* Private */,
      21,    0,  314,    2, 0x08 /* Private */,
      22,    1,  315,    2, 0x08 /* Private */,
      23,    2,  318,    2, 0x08 /* Private */,
      26,    2,  323,    2, 0x08 /* Private */,
      28,    2,  328,    2, 0x08 /* Private */,
      30,    2,  333,    2, 0x08 /* Private */,
      33,    0,  338,    2, 0x08 /* Private */,
      34,    0,  339,    2, 0x08 /* Private */,
      35,    0,  340,    2, 0x08 /* Private */,
      36,    2,  341,    2, 0x08 /* Private */,
      36,    1,  346,    2, 0x28 /* Private | MethodCloned */,
      36,    0,  349,    2, 0x28 /* Private | MethodCloned */,
      40,    0,  350,    2, 0x08 /* Private */,
      41,    1,  351,    2, 0x08 /* Private */,
      42,    1,  354,    2, 0x08 /* Private */,
      44,    0,  357,    2, 0x08 /* Private */,
      45,    1,  358,    2, 0x08 /* Private */,
      46,    1,  361,    2, 0x08 /* Private */,
      48,    0,  364,    2, 0x08 /* Private */,
      49,    0,  365,    2, 0x08 /* Private */,
      50,    0,  366,    2, 0x08 /* Private */,
      51,    0,  367,    2, 0x08 /* Private */,
      52,    0,  368,    2, 0x08 /* Private */,
      53,    0,  369,    2, 0x08 /* Private */,
      54,    0,  370,    2, 0x08 /* Private */,
      55,    0,  371,    2, 0x08 /* Private */,
      56,    1,  372,    2, 0x08 /* Private */,
      58,    0,  375,    2, 0x08 /* Private */,
      59,    0,  376,    2, 0x08 /* Private */,
      60,    1,  377,    2, 0x08 /* Private */,
      61,    0,  380,    2, 0x08 /* Private */,
      62,    0,  381,    2, 0x08 /* Private */,
      63,    1,  382,    2, 0x08 /* Private */,
      65,    0,  385,    2, 0x08 /* Private */,
      66,    1,  386,    2, 0x08 /* Private */,
      66,    0,  389,    2, 0x28 /* Private | MethodCloned */,
      68,    0,  390,    2, 0x08 /* Private */,
      69,    1,  391,    2, 0x08 /* Private */,
      70,    1,  394,    2, 0x08 /* Private */,
      70,    0,  397,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   16,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   24,   25,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   27,   25,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   16,   29,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   38,   39,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::QString, QMetaType::Int,   43,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   67,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    0x80000000 | 71, QMetaType::Int,   72,
    0x80000000 | 71,

       0        // eod
};

void HProduction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HProduction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLot((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 1: _t->addLot((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 2: _t->addLot((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->getNewRow((*reinterpret_cast< QList<QStandardItem*>(*)>(_a[1]))); break;
        case 4: _t->getClients(); break;
        case 5: _t->getSubclients(); break;
        case 6: _t->getRecipesForClient(); break;
        case 7: _t->getRecipe(); break;
        case 8: _t->addLotProd(); break;
        case 9: _t->addLotFuoriRicettaN((*reinterpret_cast< QList<QStandardItem*>(*)>(_a[1]))); break;
        case 10: _t->addLotFuoriRicetta(); break;
        case 11: { bool _r = _t->saveProduction();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->recalculateTotal(); break;
        case 13: _t->calculateActualTotal(); break;
        case 14: _t->updateTotals(); break;
        case 15: _t->setAddProductFuoriRicettaUI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->saveNewLot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->saveLotLoad((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->saveOperation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->saveComposizione((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->updateComposition();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->printRecipe(); break;
        case 22: _t->printProduction(); break;
        case 23: _t->print((*reinterpret_cast< const QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->print((*reinterpret_cast< const QStandardItemModel*(*)>(_a[1]))); break;
        case 25: _t->print(); break;
        case 26: { int _r = _t->lastInsertId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->getLotToModify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: { QString _r = _t->getNewLot((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->saveUpdatedComposizione();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->saveUpdatedOperazione((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->resetForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_pushButton_clicked(); break;
        case 33: _t->on_pushButton_5_clicked(); break;
        case 34: _t->on_pushButton_6_clicked(); break;
        case 35: _t->on_pushButton_3_clicked(); break;
        case 36: _t->on_leQtyTotal_returnPressed(); break;
        case 37: _t->on_pushButton_7_clicked(); break;
        case 38: _t->on_pushButton_4_clicked(); break;
        case 39: _t->on_pushButton_2_clicked(); break;
        case 40: _t->on_pushButton_7_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_pbAddLottoFuoriRicetta_clicked(); break;
        case 42: _t->on_pushButton_10_clicked(); break;
        case 43: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_pbAnnulla_clicked(); break;
        case 45: _t->on_pushButton_11_clicked(); break;
        case 46: _t->ui_enable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->addPreferredLots(); break;
        case 48: { QString _r = _t->findPreferredLot((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->findPreferredLot();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->on_pbPreferredLots_clicked(); break;
        case 51: _t->on_cbTipoLotto_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: { QStandardItemModel* _r = _t->getrecipeForPrinting((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = std::move(_r); }  break;
        case 53: { QStandardItemModel* _r = _t->getrecipeForPrinting();
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = std::move(_r); }  break;
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
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
