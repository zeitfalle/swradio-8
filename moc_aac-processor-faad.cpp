/****************************************************************************
** Meta object code from reading C++ file 'aac-processor-faad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "decoders/drm-decoder/data/aac-processor-faad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aac-processor-faad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_aacProcessor_faad_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_aacProcessor_faad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_aacProcessor_faad_t qt_meta_stringdata_aacProcessor_faad = {
    {
QT_MOC_LITERAL(0, 0, 17), // "aacProcessor_faad"
QT_MOC_LITERAL(1, 18, 14), // "show_audioMode"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "putSample"
QT_MOC_LITERAL(4, 44, 11), // "faadSuccess"
QT_MOC_LITERAL(5, 56, 7) // "aacData"

    },
    "aacProcessor_faad\0show_audioMode\0\0"
    "putSample\0faadSuccess\0aacData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_aacProcessor_faad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    2,   37,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void aacProcessor_faad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<aacProcessor_faad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_audioMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->putSample((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->faadSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->aacData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (aacProcessor_faad::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&aacProcessor_faad::show_audioMode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (aacProcessor_faad::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&aacProcessor_faad::putSample)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (aacProcessor_faad::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&aacProcessor_faad::faadSuccess)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (aacProcessor_faad::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&aacProcessor_faad::aacData)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject aacProcessor_faad::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_aacProcessor_faad.data,
    qt_meta_data_aacProcessor_faad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *aacProcessor_faad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aacProcessor_faad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_aacProcessor_faad.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int aacProcessor_faad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void aacProcessor_faad::show_audioMode(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void aacProcessor_faad::putSample(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void aacProcessor_faad::faadSuccess(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void aacProcessor_faad::aacData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
