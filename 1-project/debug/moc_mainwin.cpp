/****************************************************************************
** Meta object code from reading C++ file 'mainwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWin_t {
    QByteArrayData data[23];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWin_t qt_meta_stringdata_MainWin = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainWin"
QT_MOC_LITERAL(1, 8, 8), // "PAY_FLAG"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "flag"
QT_MOC_LITERAL(4, 23, 11), // "commitOrder"
QT_MOC_LITERAL(5, 35, 11), // "manual_conn"
QT_MOC_LITERAL(6, 47, 8), // "pay_wait"
QT_MOC_LITERAL(7, 56, 11), // "change_data"
QT_MOC_LITERAL(8, 68, 9), // "read_data"
QT_MOC_LITERAL(9, 78, 9), // "send_data"
QT_MOC_LITERAL(10, 88, 8), // "Init_Win"
QT_MOC_LITERAL(11, 97, 6), // "colnum"
QT_MOC_LITERAL(12, 104, 11), // "socket_conn"
QT_MOC_LITERAL(13, 116, 13), // "socket_discon"
QT_MOC_LITERAL(14, 130, 9), // "showAbort"
QT_MOC_LITERAL(15, 140, 11), // "showBigTime"
QT_MOC_LITERAL(16, 152, 11), // "setConnParm"
QT_MOC_LITERAL(17, 164, 10), // "showMyself"
QT_MOC_LITERAL(18, 175, 16), // "on_buyBt_clicked"
QT_MOC_LITERAL(19, 192, 17), // "on_helpBt_clicked"
QT_MOC_LITERAL(20, 210, 18), // "on_moneyBt_clicked"
QT_MOC_LITERAL(21, 229, 17), // "on_foodBt_clicked"
QT_MOC_LITERAL(22, 247, 22) // "on_InitOrderBt_clicked"

    },
    "MainWin\0PAY_FLAG\0\0flag\0commitOrder\0"
    "manual_conn\0pay_wait\0change_data\0"
    "read_data\0send_data\0Init_Win\0colnum\0"
    "socket_conn\0socket_discon\0showAbort\0"
    "showBigTime\0setConnParm\0showMyself\0"
    "on_buyBt_clicked\0on_helpBt_clicked\0"
    "on_moneyBt_clicked\0on_foodBt_clicked\0"
    "on_InitOrderBt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  117,    2, 0x0a /* Public */,
       5,    0,  118,    2, 0x0a /* Public */,
       6,    0,  119,    2, 0x0a /* Public */,
       7,    0,  120,    2, 0x09 /* Protected */,
       8,    0,  121,    2, 0x09 /* Protected */,
       9,    0,  122,    2, 0x09 /* Protected */,
      10,    1,  123,    2, 0x09 /* Protected */,
      10,    0,  126,    2, 0x29 /* Protected | MethodCloned */,
      12,    0,  127,    2, 0x09 /* Protected */,
      13,    0,  128,    2, 0x09 /* Protected */,
      14,    0,  129,    2, 0x09 /* Protected */,
      15,    0,  130,    2, 0x09 /* Protected */,
      16,    0,  131,    2, 0x09 /* Protected */,
      17,    0,  132,    2, 0x09 /* Protected */,
      18,    0,  133,    2, 0x08 /* Private */,
      19,    0,  134,    2, 0x08 /* Private */,
      20,    0,  135,    2, 0x08 /* Private */,
      21,    0,  136,    2, 0x08 /* Private */,
      22,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,   11,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PAY_FLAG((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->commitOrder();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->manual_conn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->pay_wait(); break;
        case 4: _t->change_data(); break;
        case 5: _t->read_data(); break;
        case 6: _t->send_data(); break;
        case 7: { bool _r = _t->Init_Win((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->Init_Win();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->socket_conn(); break;
        case 10: _t->socket_discon(); break;
        case 11: _t->showAbort(); break;
        case 12: _t->showBigTime(); break;
        case 13: _t->setConnParm(); break;
        case 14: _t->showMyself(); break;
        case 15: _t->on_buyBt_clicked(); break;
        case 16: _t->on_helpBt_clicked(); break;
        case 17: _t->on_moneyBt_clicked(); break;
        case 18: _t->on_foodBt_clicked(); break;
        case 19: _t->on_InitOrderBt_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWin::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWin::PAY_FLAG)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWin::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWin.data,
    qt_meta_data_MainWin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MainWin::PAY_FLAG(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
