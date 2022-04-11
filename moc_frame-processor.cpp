/****************************************************************************
** Meta object code from reading C++ file 'frame-processor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/drm-decoder/frame-processor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame-processor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frameProcessor_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frameProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frameProcessor_t qt_meta_stringdata_frameProcessor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "frameProcessor"
QT_MOC_LITERAL(1, 15, 11), // "setTimeSync"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "setFACSync"
QT_MOC_LITERAL(4, 39, 10), // "setSDCSync"
QT_MOC_LITERAL(5, 50, 9), // "show_Mode"
QT_MOC_LITERAL(6, 60, 13), // "show_Spectrum"
QT_MOC_LITERAL(7, 74, 13), // "show_services"
QT_MOC_LITERAL(8, 88, 14), // "show_audioMode"
QT_MOC_LITERAL(9, 103, 6), // "showEq"
QT_MOC_LITERAL(10, 110, 7), // "showSNR"
QT_MOC_LITERAL(11, 118, 10) // "show_freq2"

    },
    "frameProcessor\0setTimeSync\0\0setFACSync\0"
    "setSDCSync\0show_Mode\0show_Spectrum\0"
    "show_services\0show_audioMode\0showEq\0"
    "showSNR\0show_freq2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frameProcessor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,
       6,    1,   76,    2, 0x06 /* Public */,
       7,    2,   79,    2, 0x06 /* Public */,
       8,    1,   84,    2, 0x06 /* Public */,
       9,    1,   87,    2, 0x06 /* Public */,
      10,    1,   90,    2, 0x06 /* Public */,
      11,    1,   93,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

       0        // eod
};

void frameProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frameProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTimeSync((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFACSync((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSDCSync((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->show_Mode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->show_Spectrum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->show_services((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->show_audioMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->showEq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->showSNR((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->show_freq2((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (frameProcessor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::setTimeSync)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::setFACSync)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::setSDCSync)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::show_Mode)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::show_Spectrum)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::show_services)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::show_audioMode)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::showEq)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::showSNR)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (frameProcessor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frameProcessor::show_freq2)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frameProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_frameProcessor.data,
    qt_meta_data_frameProcessor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frameProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frameProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frameProcessor.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int frameProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void frameProcessor::setTimeSync(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void frameProcessor::setFACSync(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void frameProcessor::setSDCSync(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void frameProcessor::show_Mode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void frameProcessor::show_Spectrum(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void frameProcessor::show_services(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void frameProcessor::show_audioMode(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void frameProcessor::showEq(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void frameProcessor::showSNR(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void frameProcessor::show_freq2(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
