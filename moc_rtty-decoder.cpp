/****************************************************************************
** Meta object code from reading C++ file 'rtty-decoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/rtty-decoder/rtty-decoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtty-decoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rttyDecoder_t {
    QByteArrayData data[10];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rttyDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rttyDecoder_t qt_meta_stringdata_rttyDecoder = {
    {
QT_MOC_LITERAL(0, 0, 11), // "rttyDecoder"
QT_MOC_LITERAL(1, 12, 13), // "set_rttyAfcon"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "set_rttyReverse"
QT_MOC_LITERAL(4, 43, 13), // "set_rttyShift"
QT_MOC_LITERAL(5, 57, 16), // "set_rttyBaudrate"
QT_MOC_LITERAL(6, 74, 14), // "set_rttyParity"
QT_MOC_LITERAL(7, 89, 11), // "set_rttyMsb"
QT_MOC_LITERAL(8, 101, 13), // "set_rttyNbits"
QT_MOC_LITERAL(9, 115, 16) // "set_rttyStopbits"

    },
    "rttyDecoder\0set_rttyAfcon\0\0set_rttyReverse\0"
    "set_rttyShift\0set_rttyBaudrate\0"
    "set_rttyParity\0set_rttyMsb\0set_rttyNbits\0"
    "set_rttyStopbits"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rttyDecoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       3,    1,   57,    2, 0x08 /* Private */,
       4,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void rttyDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rttyDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_rttyAfcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->set_rttyReverse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->set_rttyShift((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->set_rttyBaudrate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->set_rttyParity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->set_rttyMsb((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->set_rttyNbits((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->set_rttyStopbits((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rttyDecoder::staticMetaObject = { {
    QMetaObject::SuperData::link<virtualDecoder::staticMetaObject>(),
    qt_meta_stringdata_rttyDecoder.data,
    qt_meta_data_rttyDecoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rttyDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rttyDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rttyDecoder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_rtty_widget"))
        return static_cast< Ui_rtty_widget*>(this);
    return virtualDecoder::qt_metacast(_clname);
}

int rttyDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = virtualDecoder::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
