/****************************************************************************
** Meta object code from reading C++ file 'word-collector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/drm-decoder/ofdm/word-collector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'word-collector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_wordCollector_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wordCollector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wordCollector_t qt_meta_stringdata_wordCollector = {
    {
QT_MOC_LITERAL(0, 0, 13), // "wordCollector"
QT_MOC_LITERAL(1, 14, 17), // "show_coarseOffset"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "show_fineOffset"
QT_MOC_LITERAL(4, 49, 15), // "show_timeOffset"
QT_MOC_LITERAL(5, 65, 14), // "show_timeDelay"
QT_MOC_LITERAL(6, 80, 16), // "show_clockOffset"
QT_MOC_LITERAL(7, 97, 10) // "show_angle"

    },
    "wordCollector\0show_coarseOffset\0\0"
    "show_fineOffset\0show_timeOffset\0"
    "show_timeDelay\0show_clockOffset\0"
    "show_angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wordCollector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

       0        // eod
};

void wordCollector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<wordCollector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_coarseOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->show_fineOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->show_timeOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->show_timeDelay((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->show_clockOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->show_angle((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (wordCollector::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCollector::show_coarseOffset)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (wordCollector::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCollector::show_fineOffset)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (wordCollector::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCollector::show_timeOffset)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (wordCollector::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCollector::show_timeDelay)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (wordCollector::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCollector::show_clockOffset)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (wordCollector::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCollector::show_angle)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject wordCollector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_wordCollector.data,
    qt_meta_data_wordCollector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *wordCollector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wordCollector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_wordCollector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int wordCollector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void wordCollector::show_coarseOffset(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void wordCollector::show_fineOffset(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void wordCollector::show_timeOffset(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void wordCollector::show_timeDelay(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void wordCollector::show_clockOffset(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void wordCollector::show_angle(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
