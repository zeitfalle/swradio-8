/****************************************************************************
** Meta object code from reading C++ file 'am-decoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/am-decoder/am-decoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'am-decoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_amDecoder_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_amDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_amDecoder_t qt_meta_stringdata_amDecoder = {
    {
QT_MOC_LITERAL(0, 0, 9), // "amDecoder"
QT_MOC_LITERAL(1, 10, 18), // "set_adaptiveFilter"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "set_adaptiveFiltersize"
QT_MOC_LITERAL(4, 53, 17) // "set_lowpassFilter"

    },
    "amDecoder\0set_adaptiveFilter\0\0"
    "set_adaptiveFiltersize\0set_lowpassFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_amDecoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       4,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void amDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<amDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_adaptiveFilter(); break;
        case 1: _t->set_adaptiveFiltersize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_lowpassFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject amDecoder::staticMetaObject = { {
    QMetaObject::SuperData::link<virtualDecoder::staticMetaObject>(),
    qt_meta_stringdata_amDecoder.data,
    qt_meta_data_amDecoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *amDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *amDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_amDecoder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_am_decoder"))
        return static_cast< Ui_am_decoder*>(this);
    return virtualDecoder::qt_metacast(_clname);
}

int amDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = virtualDecoder::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
