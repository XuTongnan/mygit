/****************************************************************************
** Meta object code from reading C++ file 'fondshow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../fondshow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fondshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fondShow_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fondShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fondShow_t qt_meta_stringdata_fondShow = {
    {
QT_MOC_LITERAL(0, 0, 8), // "fondShow"
QT_MOC_LITERAL(1, 9, 3), // "ADD"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 3), // "SUB"
QT_MOC_LITERAL(4, 18, 10), // "textEdited"
QT_MOC_LITERAL(5, 29, 10), // "changeData"
QT_MOC_LITERAL(6, 40, 16), // "on_addBt_clicked"
QT_MOC_LITERAL(7, 57, 18), // "on_addBt_2_clicked"
QT_MOC_LITERAL(8, 76, 21), // "on_numEdit_textEdited"
QT_MOC_LITERAL(9, 98, 4) // "arg1"

    },
    "fondShow\0ADD\0\0SUB\0textEdited\0changeData\0"
    "on_addBt_clicked\0on_addBt_2_clicked\0"
    "on_numEdit_textEdited\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fondShow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void fondShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fondShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ADD(); break;
        case 1: _t->SUB(); break;
        case 2: _t->textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_addBt_clicked(); break;
        case 4: _t->on_addBt_2_clicked(); break;
        case 5: _t->on_numEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (fondShow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fondShow::ADD)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (fondShow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fondShow::SUB)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (fondShow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fondShow::textEdited)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject fondShow::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_fondShow.data,
    qt_meta_data_fondShow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fondShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fondShow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fondShow.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int fondShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void fondShow::ADD()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fondShow::SUB()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fondShow::textEdited(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
