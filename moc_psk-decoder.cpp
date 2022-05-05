/****************************************************************************
** Meta object code from reading C++ file 'psk-decoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/psk-decoder/psk-decoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psk-decoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pskDecoder_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pskDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pskDecoder_t qt_meta_stringdata_pskDecoder = {
    {
QT_MOC_LITERAL(0, 0, 10), // "pskDecoder"
QT_MOC_LITERAL(1, 11, 12), // "psk_setAfcon"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "psk_setReverse"
QT_MOC_LITERAL(4, 40, 19), // "psk_setSquelchLevel"
QT_MOC_LITERAL(5, 60, 11), // "psk_setMode"
QT_MOC_LITERAL(6, 72, 19), // "psk_setFilterDegree"
QT_MOC_LITERAL(7, 92, 11), // "handleClick"
QT_MOC_LITERAL(8, 104, 15) // "set_searchRange"

    },
    "pskDecoder\0psk_setAfcon\0\0psk_setReverse\0"
    "psk_setSquelchLevel\0psk_setMode\0"
    "psk_setFilterDegree\0handleClick\0"
    "set_searchRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pskDecoder[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void pskDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pskDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->psk_setAfcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->psk_setReverse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->psk_setSquelchLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->psk_setMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->psk_setFilterDegree((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handleClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->set_searchRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject pskDecoder::staticMetaObject = { {
    QMetaObject::SuperData::link<virtualDecoder::staticMetaObject>(),
    qt_meta_stringdata_pskDecoder.data,
    qt_meta_data_pskDecoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pskDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pskDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pskDecoder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_psk_widget"))
        return static_cast< Ui_psk_widget*>(this);
    return virtualDecoder::qt_metacast(_clname);
}

int pskDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = virtualDecoder::qt_metacall(_c, _id, _a);
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
