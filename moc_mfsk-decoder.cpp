/****************************************************************************
** Meta object code from reading C++ file 'mfsk-decoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/mfsk-decoder/mfsk-decoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mfsk-decoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mfskDecoder_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mfskDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mfskDecoder_t qt_meta_stringdata_mfskDecoder = {
    {
QT_MOC_LITERAL(0, 0, 11), // "mfskDecoder"
QT_MOC_LITERAL(1, 12, 13), // "mfsk_setAfcon"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "mfsk_setReverse"
QT_MOC_LITERAL(4, 43, 12), // "mfsk_setMode"
QT_MOC_LITERAL(5, 56, 15), // "mfsk_setSquelch"
QT_MOC_LITERAL(6, 72, 11) // "handleClick"

    },
    "mfskDecoder\0mfsk_setAfcon\0\0mfsk_setReverse\0"
    "mfsk_setMode\0mfsk_setSquelch\0handleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mfskDecoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       3,    1,   42,    2, 0x08 /* Private */,
       4,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void mfskDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mfskDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mfsk_setAfcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->mfsk_setReverse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mfsk_setMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mfsk_setSquelch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mfskDecoder::staticMetaObject = { {
    QMetaObject::SuperData::link<virtualDecoder::staticMetaObject>(),
    qt_meta_stringdata_mfskDecoder.data,
    qt_meta_data_mfskDecoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mfskDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mfskDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mfskDecoder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_mfsk_widget"))
        return static_cast< Ui_mfsk_widget*>(this);
    return virtualDecoder::qt_metacast(_clname);
}

int mfskDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = virtualDecoder::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
