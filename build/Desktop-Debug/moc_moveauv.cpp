/****************************************************************************
** Meta object code from reading C++ file 'moveauv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../moveauv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moveauv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoveAUV_t {
    QByteArrayData data[9];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoveAUV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoveAUV_t qt_meta_stringdata_MoveAUV = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MoveAUV"
QT_MOC_LITERAL(1, 8, 9), // "updateAUV"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 1), // "X"
QT_MOC_LITERAL(4, 21, 1), // "Y"
QT_MOC_LITERAL(5, 23, 4), // "tick"
QT_MOC_LITERAL(6, 28, 9), // "setAUV_XY"
QT_MOC_LITERAL(7, 38, 4), // "setX"
QT_MOC_LITERAL(8, 43, 4) // "setY"

    },
    "MoveAUV\0updateAUV\0\0X\0Y\0tick\0setAUV_XY\0"
    "setX\0setY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoveAUV[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x0a /* Public */,
       6,    2,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar,    7,    8,

       0        // eod
};

void MoveAUV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoveAUV *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateAUV((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->tick(); break;
        case 2: _t->setAUV_XY((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MoveAUV::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveAUV::updateAUV)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MoveAUV::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MoveAUV.data,
    qt_meta_data_MoveAUV,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MoveAUV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoveAUV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoveAUV.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MoveAUV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MoveAUV::updateAUV(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
