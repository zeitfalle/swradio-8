/****************************************************************************
** Meta object code from reading C++ file 'fax-decoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/fax-decoder/fax-decoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fax-decoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_faxDecoder_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_faxDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_faxDecoder_t qt_meta_stringdata_faxDecoder = {
    {
QT_MOC_LITERAL(0, 0, 10), // "faxDecoder"
QT_MOC_LITERAL(1, 11, 5), // "reset"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "fax_setIOC"
QT_MOC_LITERAL(4, 29, 11), // "fax_setMode"
QT_MOC_LITERAL(5, 41, 12), // "fax_setPhase"
QT_MOC_LITERAL(6, 54, 12), // "fax_setColor"
QT_MOC_LITERAL(7, 67, 16), // "fax_setDeviation"
QT_MOC_LITERAL(8, 84, 21), // "fax_setsaveContinuous"
QT_MOC_LITERAL(9, 106, 17), // "fax_setsaveSingle"
QT_MOC_LITERAL(10, 124, 17), // "fax_setCorrection"
QT_MOC_LITERAL(11, 142, 12) // "fax_setCheat"

    },
    "faxDecoder\0reset\0\0fax_setIOC\0fax_setMode\0"
    "fax_setPhase\0fax_setColor\0fax_setDeviation\0"
    "fax_setsaveContinuous\0fax_setsaveSingle\0"
    "fax_setCorrection\0fax_setCheat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_faxDecoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       4,    1,   68,    2, 0x08 /* Private */,
       5,    1,   71,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       7,    1,   77,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void faxDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<faxDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->fax_setIOC((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fax_setMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->fax_setPhase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->fax_setColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fax_setDeviation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->fax_setsaveContinuous(); break;
        case 7: _t->fax_setsaveSingle(); break;
        case 8: _t->fax_setCorrection(); break;
        case 9: _t->fax_setCheat(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject faxDecoder::staticMetaObject = { {
    QMetaObject::SuperData::link<virtualDecoder::staticMetaObject>(),
    qt_meta_stringdata_faxDecoder.data,
    qt_meta_data_faxDecoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *faxDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *faxDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_faxDecoder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_fax_decoder"))
        return static_cast< Ui_fax_decoder*>(this);
    return virtualDecoder::qt_metacast(_clname);
}

int faxDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = virtualDecoder::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
