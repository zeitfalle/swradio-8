/****************************************************************************
** Meta object code from reading C++ file 'cw-decoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/cw-decoder/cw-decoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cw-decoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cwDecoder_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cwDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cwDecoder_t qt_meta_stringdata_cwDecoder = {
    {
QT_MOC_LITERAL(0, 0, 9), // "cwDecoder"
QT_MOC_LITERAL(1, 10, 20), // "cw_setWordsperMinute"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "cw_setTracking"
QT_MOC_LITERAL(4, 47, 18), // "cw_setFilterDegree"
QT_MOC_LITERAL(5, 66, 18), // "cw_setSquelchValue"
QT_MOC_LITERAL(6, 85, 18), // "cw_adjustFrequency"
QT_MOC_LITERAL(7, 104, 11) // "handleClick"

    },
    "cwDecoder\0cw_setWordsperMinute\0\0"
    "cw_setTracking\0cw_setFilterDegree\0"
    "cw_setSquelchValue\0cw_adjustFrequency\0"
    "handleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cwDecoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       3,    0,   47,    2, 0x08 /* Private */,
       4,    1,   48,    2, 0x08 /* Private */,
       5,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void cwDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cwDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cw_setWordsperMinute((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cw_setTracking(); break;
        case 2: _t->cw_setFilterDegree((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->cw_setSquelchValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->cw_adjustFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handleClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cwDecoder::staticMetaObject = { {
    QMetaObject::SuperData::link<virtualDecoder::staticMetaObject>(),
    qt_meta_stringdata_cwDecoder.data,
    qt_meta_data_cwDecoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cwDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cwDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cwDecoder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_cwDecoder"))
        return static_cast< Ui_cwDecoder*>(this);
    return virtualDecoder::qt_metacast(_clname);
}

int cwDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = virtualDecoder::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
