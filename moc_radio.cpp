/****************************************************************************
** Meta object code from reading C++ file 'radio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "radio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioInterface_t {
    QByteArrayData data[36];
    char stringdata0[522];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioInterface_t qt_meta_stringdata_RadioInterface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RadioInterface"
QT_MOC_LITERAL(1, 15, 9), // "setDevice"
QT_MOC_LITERAL(2, 25, 14), // "deviceHandler*"
QT_MOC_LITERAL(3, 40, 0), // ""
QT_MOC_LITERAL(4, 41, 33), // "RingBuffer<std::complex<float..."
QT_MOC_LITERAL(5, 75, 18), // "adjustFrequency_hz"
QT_MOC_LITERAL(6, 94, 19), // "adjustFrequency_khz"
QT_MOC_LITERAL(7, 114, 13), // "handle_myLine"
QT_MOC_LITERAL(8, 128, 16), // "set_hfscopeLevel"
QT_MOC_LITERAL(9, 145, 16), // "set_lfscopeLevel"
QT_MOC_LITERAL(10, 162, 13), // "selectDecoder"
QT_MOC_LITERAL(11, 176, 15), // "virtualDecoder*"
QT_MOC_LITERAL(12, 192, 12), // "setFrequency"
QT_MOC_LITERAL(13, 205, 20), // "setStreamOutSelector"
QT_MOC_LITERAL(14, 226, 3), // "idx"
QT_MOC_LITERAL(15, 230, 17), // "handle_freqButton"
QT_MOC_LITERAL(16, 248, 10), // "wheelEvent"
QT_MOC_LITERAL(17, 259, 12), // "QWheelEvent*"
QT_MOC_LITERAL(18, 272, 18), // "set_mouseIncrement"
QT_MOC_LITERAL(19, 291, 7), // "setBand"
QT_MOC_LITERAL(20, 299, 12), // "set_inMiddle"
QT_MOC_LITERAL(21, 312, 12), // "set_freqSave"
QT_MOC_LITERAL(22, 325, 17), // "handle_quitButton"
QT_MOC_LITERAL(23, 343, 22), // "set_agcThresholdSlider"
QT_MOC_LITERAL(24, 366, 11), // "set_AGCMode"
QT_MOC_LITERAL(25, 378, 17), // "switch_hfViewMode"
QT_MOC_LITERAL(26, 396, 17), // "switch_lfViewMode"
QT_MOC_LITERAL(27, 414, 10), // "updateTime"
QT_MOC_LITERAL(28, 425, 14), // "set_dumpButton"
QT_MOC_LITERAL(29, 440, 10), // "closeEvent"
QT_MOC_LITERAL(30, 451, 12), // "QCloseEvent*"
QT_MOC_LITERAL(31, 464, 5), // "event"
QT_MOC_LITERAL(32, 470, 13), // "sampleHandler"
QT_MOC_LITERAL(33, 484, 6), // "amount"
QT_MOC_LITERAL(34, 491, 12), // "processAudio"
QT_MOC_LITERAL(35, 504, 17) // "setDetectorMarker"

    },
    "RadioInterface\0setDevice\0deviceHandler*\0"
    "\0RingBuffer<std::complex<float> >*\0"
    "adjustFrequency_hz\0adjustFrequency_khz\0"
    "handle_myLine\0set_hfscopeLevel\0"
    "set_lfscopeLevel\0selectDecoder\0"
    "virtualDecoder*\0setFrequency\0"
    "setStreamOutSelector\0idx\0handle_freqButton\0"
    "wheelEvent\0QWheelEvent*\0set_mouseIncrement\0"
    "setBand\0set_inMiddle\0set_freqSave\0"
    "handle_quitButton\0set_agcThresholdSlider\0"
    "set_AGCMode\0switch_hfViewMode\0"
    "switch_lfViewMode\0updateTime\0"
    "set_dumpButton\0closeEvent\0QCloseEvent*\0"
    "event\0sampleHandler\0amount\0processAudio\0"
    "setDetectorMarker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  144,    3, 0x08 /* Private */,
       5,    1,  147,    3, 0x08 /* Private */,
       6,    1,  150,    3, 0x08 /* Private */,
       7,    0,  153,    3, 0x08 /* Private */,
       8,    1,  154,    3, 0x08 /* Private */,
       9,    1,  157,    3, 0x08 /* Private */,
      10,    1,  160,    3, 0x08 /* Private */,
      12,    1,  163,    3, 0x08 /* Private */,
      13,    1,  166,    3, 0x08 /* Private */,
      15,    0,  169,    3, 0x08 /* Private */,
      16,    1,  170,    3, 0x08 /* Private */,
      18,    1,  173,    3, 0x08 /* Private */,
      19,    1,  176,    3, 0x08 /* Private */,
      20,    0,  179,    3, 0x08 /* Private */,
      21,    0,  180,    3, 0x08 /* Private */,
      22,    0,  181,    3, 0x08 /* Private */,
      23,    1,  182,    3, 0x08 /* Private */,
      24,    1,  185,    3, 0x08 /* Private */,
      25,    1,  188,    3, 0x08 /* Private */,
      26,    1,  191,    3, 0x08 /* Private */,
      27,    0,  194,    3, 0x08 /* Private */,
      28,    0,  195,    3, 0x08 /* Private */,
      29,    1,  196,    3, 0x08 /* Private */,
      32,    1,  199,    3, 0x0a /* Public */,
      34,    2,  202,    3, 0x0a /* Public */,
      35,    1,  207,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    0x80000000 | 11, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void RadioInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { deviceHandler* _r = _t->setDevice((*reinterpret_cast< RingBuffer<std::complex<float> >*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< deviceHandler**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->adjustFrequency_hz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->adjustFrequency_khz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->handle_myLine(); break;
        case 4: _t->set_hfscopeLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->set_lfscopeLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { virtualDecoder* _r = _t->selectDecoder((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< virtualDecoder**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setFrequency((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 8: _t->setStreamOutSelector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->handle_freqButton(); break;
        case 10: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 11: _t->set_mouseIncrement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setBand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->set_inMiddle(); break;
        case 14: _t->set_freqSave(); break;
        case 15: _t->handle_quitButton(); break;
        case 16: _t->set_agcThresholdSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->set_AGCMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->switch_hfViewMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->switch_lfViewMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->updateTime(); break;
        case 21: _t->set_dumpButton(); break;
        case 22: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 23: _t->sampleHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->processAudio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->setDetectorMarker((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RadioInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_RadioInterface.data,
    qt_meta_data_RadioInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioInterface.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RadioInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
