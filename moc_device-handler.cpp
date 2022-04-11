/****************************************************************************
** Meta object code from reading C++ file 'device-handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "devices/device-handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device-handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_deviceHandler_t {
    QByteArrayData data[9];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deviceHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deviceHandler_t qt_meta_stringdata_deviceHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "deviceHandler"
QT_MOC_LITERAL(1, 14, 13), // "dataAvailable"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "set_ExtFrequency"
QT_MOC_LITERAL(4, 46, 9), // "set_ExtLO"
QT_MOC_LITERAL(5, 56, 10), // "set_lockLO"
QT_MOC_LITERAL(6, 67, 12), // "set_unlockLO"
QT_MOC_LITERAL(7, 80, 10), // "set_stopHW"
QT_MOC_LITERAL(8, 91, 11) // "set_startHW"

    },
    "deviceHandler\0dataAvailable\0\0"
    "set_ExtFrequency\0set_ExtLO\0set_lockLO\0"
    "set_unlockLO\0set_stopHW\0set_startHW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deviceHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,
       7,    0,   60,    2, 0x06 /* Public */,
       8,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void deviceHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<deviceHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataAvailable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->set_ExtFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_ExtLO((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->set_lockLO(); break;
        case 4: _t->set_unlockLO(); break;
        case 5: _t->set_stopHW(); break;
        case 6: _t->set_startHW(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (deviceHandler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&deviceHandler::dataAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (deviceHandler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&deviceHandler::set_ExtFrequency)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (deviceHandler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&deviceHandler::set_ExtLO)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (deviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&deviceHandler::set_lockLO)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (deviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&deviceHandler::set_unlockLO)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (deviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&deviceHandler::set_stopHW)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (deviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&deviceHandler::set_startHW)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject deviceHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_deviceHandler.data,
    qt_meta_data_deviceHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *deviceHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deviceHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_deviceHandler.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int deviceHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void deviceHandler::dataAvailable(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void deviceHandler::set_ExtFrequency(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void deviceHandler::set_ExtLO(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void deviceHandler::set_lockLO()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void deviceHandler::set_unlockLO()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void deviceHandler::set_stopHW()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void deviceHandler::set_startHW()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
