/****************************************************************************
** Meta object code from reading C++ file 'sdrplay-handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "devices/sdrplay-handler/sdrplay-handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sdrplay-handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sdrplayHandler_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sdrplayHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sdrplayHandler_t qt_meta_stringdata_sdrplayHandler = {
    {
QT_MOC_LITERAL(0, 0, 14), // "sdrplayHandler"
QT_MOC_LITERAL(1, 15, 19), // "set_ifgainReduction"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "set_lnagainReduction"
QT_MOC_LITERAL(4, 57, 18), // "agcControl_toggled"
QT_MOC_LITERAL(5, 76, 20), // "debugControl_toggled"
QT_MOC_LITERAL(6, 97, 14), // "set_ppmControl"
QT_MOC_LITERAL(7, 112, 17), // "set_antennaSelect"
QT_MOC_LITERAL(8, 130, 15) // "set_tunerSelect"

    },
    "sdrplayHandler\0set_ifgainReduction\0\0"
    "set_lnagainReduction\0agcControl_toggled\0"
    "debugControl_toggled\0set_ppmControl\0"
    "set_antennaSelect\0set_tunerSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sdrplayHandler[] = {

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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void sdrplayHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sdrplayHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_ifgainReduction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->set_lnagainReduction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->agcControl_toggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->debugControl_toggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->set_ppmControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->set_antennaSelect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->set_tunerSelect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sdrplayHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<deviceHandler::staticMetaObject>(),
    qt_meta_stringdata_sdrplayHandler.data,
    qt_meta_data_sdrplayHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sdrplayHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sdrplayHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sdrplayHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_sdrplayWidget"))
        return static_cast< Ui_sdrplayWidget*>(this);
    return deviceHandler::qt_metacast(_clname);
}

int sdrplayHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = deviceHandler::qt_metacall(_c, _id, _a);
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
