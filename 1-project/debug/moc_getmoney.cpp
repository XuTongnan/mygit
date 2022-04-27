/****************************************************************************
** Meta object code from reading C++ file 'getmoney.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../getmoney.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getmoney.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_getMoney_t {
    QByteArrayData data[11];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_getMoney_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_getMoney_t qt_meta_stringdata_getMoney = {
    {
QT_MOC_LITERAL(0, 0, 8), // "getMoney"
QT_MOC_LITERAL(1, 9, 6), // "PAYING"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "PAYEND"
QT_MOC_LITERAL(4, 24, 7), // "PAYWAIT"
QT_MOC_LITERAL(5, 32, 8), // "down_pic"
QT_MOC_LITERAL(6, 41, 5), // "isPAY"
QT_MOC_LITERAL(7, 47, 4), // "flag"
QT_MOC_LITERAL(8, 52, 19), // "on_updataBt_clicked"
QT_MOC_LITERAL(9, 72, 18), // "on_buyedBt_clicked"
QT_MOC_LITERAL(10, 91, 17) // "on_waitBt_clicked"

    },
    "getMoney\0PAYING\0\0PAYEND\0PAYWAIT\0"
    "down_pic\0isPAY\0flag\0on_updataBt_clicked\0"
    "on_buyedBt_clicked\0on_waitBt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_getMoney[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    1,   58,    2, 0x09 /* Protected */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void getMoney::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<getMoney *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PAYING(); break;
        case 1: _t->PAYEND(); break;
        case 2: _t->PAYWAIT(); break;
        case 3: _t->down_pic(); break;
        case 4: { bool _r = _t->isPAY((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_updataBt_clicked(); break;
        case 6: _t->on_buyedBt_clicked(); break;
        case 7: _t->on_waitBt_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (getMoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&getMoney::PAYING)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (getMoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&getMoney::PAYEND)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (getMoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&getMoney::PAYWAIT)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject getMoney::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_getMoney.data,
    qt_meta_data_getMoney,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *getMoney::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *getMoney::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_getMoney.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int getMoney::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void getMoney::PAYING()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void getMoney::PAYEND()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void getMoney::PAYWAIT()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
