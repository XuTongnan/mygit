/****************************************************************************
** Meta object code from reading C++ file 'serverwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../serverwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerWin_t {
    QByteArrayData data[21];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerWin_t qt_meta_stringdata_ServerWin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ServerWin"
QT_MOC_LITERAL(1, 10, 3), // "SET"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 11), // "new_connect"
QT_MOC_LITERAL(4, 27, 9), // "read_data"
QT_MOC_LITERAL(5, 37, 9), // "deal_data"
QT_MOC_LITERAL(6, 47, 4), // "data"
QT_MOC_LITERAL(7, 52, 11), // "QTcpSocket*"
QT_MOC_LITERAL(8, 64, 6), // "socket"
QT_MOC_LITERAL(9, 71, 13), // "socket_discon"
QT_MOC_LITERAL(10, 85, 9), // "showAbort"
QT_MOC_LITERAL(11, 95, 11), // "showBigTime"
QT_MOC_LITERAL(12, 107, 11), // "setConnParm"
QT_MOC_LITERAL(13, 119, 10), // "showMyself"
QT_MOC_LITERAL(14, 130, 11), // "set_IP_Port"
QT_MOC_LITERAL(15, 142, 2), // "IP"
QT_MOC_LITERAL(16, 145, 4), // "Port"
QT_MOC_LITERAL(17, 150, 30), // "on_tabWidget_tabCloseRequested"
QT_MOC_LITERAL(18, 181, 5), // "index"
QT_MOC_LITERAL(19, 187, 19), // "on_helpOver_clicked"
QT_MOC_LITERAL(20, 207, 19) // "on_clearPay_clicked"

    },
    "ServerWin\0SET\0\0new_connect\0read_data\0"
    "deal_data\0data\0QTcpSocket*\0socket\0"
    "socket_discon\0showAbort\0showBigTime\0"
    "setConnParm\0showMyself\0set_IP_Port\0"
    "IP\0Port\0on_tabWidget_tabCloseRequested\0"
    "index\0on_helpOver_clicked\0on_clearPay_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x09 /* Protected */,
       4,    0,   86,    2, 0x09 /* Protected */,
       5,    2,   87,    2, 0x09 /* Protected */,
       5,    1,   92,    2, 0x29 /* Protected | MethodCloned */,
       9,    0,   95,    2, 0x09 /* Protected */,
      10,    0,   96,    2, 0x09 /* Protected */,
      11,    0,   97,    2, 0x09 /* Protected */,
      12,    0,   98,    2, 0x09 /* Protected */,
      13,    0,   99,    2, 0x09 /* Protected */,
      14,    2,  100,    2, 0x09 /* Protected */,
      17,    1,  105,    2, 0x08 /* Private */,
      19,    0,  108,    2, 0x08 /* Private */,
      20,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   15,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SET(); break;
        case 1: _t->new_connect(); break;
        case 2: _t->read_data(); break;
        case 3: _t->deal_data((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        case 4: _t->deal_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->socket_discon(); break;
        case 6: _t->showAbort(); break;
        case 7: _t->showBigTime(); break;
        case 8: _t->setConnParm(); break;
        case 9: _t->showMyself(); break;
        case 10: { bool _r = _t->set_IP_Port((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_helpOver_clicked(); break;
        case 13: _t->on_clearPay_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerWin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerWin::SET)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerWin::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ServerWin.data,
    qt_meta_data_ServerWin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerWin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ServerWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ServerWin::SET()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
