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
    QByteArrayData data[24];
    char stringdata0[159];
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
QT_MOC_LITERAL(5, 23, 7), // "endMove"
QT_MOC_LITERAL(6, 31, 7), // "checked"
QT_MOC_LITERAL(7, 39, 12), // "setTimeModel"
QT_MOC_LITERAL(8, 52, 1), // "t"
QT_MOC_LITERAL(9, 54, 12), // "updateBorder"
QT_MOC_LITERAL(10, 67, 4), // "minX"
QT_MOC_LITERAL(11, 72, 4), // "minY"
QT_MOC_LITERAL(12, 77, 4), // "maxX"
QT_MOC_LITERAL(13, 82, 4), // "maxY"
QT_MOC_LITERAL(14, 87, 4), // "tick"
QT_MOC_LITERAL(15, 92, 9), // "setAUV_XY"
QT_MOC_LITERAL(16, 102, 4), // "setX"
QT_MOC_LITERAL(17, 107, 4), // "setY"
QT_MOC_LITERAL(18, 112, 14), // "tipeTrajectory"
QT_MOC_LITERAL(19, 127, 2), // "tr"
QT_MOC_LITERAL(20, 130, 14), // "updateGALSDist"
QT_MOC_LITERAL(21, 145, 1), // "d"
QT_MOC_LITERAL(22, 147, 8), // "setSpeed"
QT_MOC_LITERAL(23, 156, 2) // "sp"

    },
    "MoveAUV\0updateAUV\0\0X\0Y\0endMove\0checked\0"
    "setTimeModel\0t\0updateBorder\0minX\0minY\0"
    "maxX\0maxY\0tick\0setAUV_XY\0setX\0setY\0"
    "tipeTrajectory\0tr\0updateGALSDist\0d\0"
    "setSpeed\0sp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoveAUV[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   67,    2, 0x0a /* Public */,
       9,    4,   70,    2, 0x0a /* Public */,
      14,    0,   79,    2, 0x0a /* Public */,
      15,    2,   80,    2, 0x0a /* Public */,
      18,    1,   85,    2, 0x0a /* Public */,
      20,    1,   88,    2, 0x0a /* Public */,
      22,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar, QMetaType::SChar, QMetaType::SChar,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar,   16,   17,
    QMetaType::Void, QMetaType::Char,   19,
    QMetaType::Void, QMetaType::Float,   21,
    QMetaType::Void, QMetaType::Float,   23,

       0        // eod
};

void MoveAUV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoveAUV *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateAUV((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->endMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setTimeModel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->updateBorder((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2])),(*reinterpret_cast< qint8(*)>(_a[3])),(*reinterpret_cast< qint8(*)>(_a[4]))); break;
        case 4: _t->tick(); break;
        case 5: _t->setAUV_XY((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 6: _t->tipeTrajectory((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 7: _t->updateGALSDist((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setSpeed((*reinterpret_cast< float(*)>(_a[1]))); break;
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
        {
            using _t = void (MoveAUV::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveAUV::endMove)) {
                *result = 1;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MoveAUV::updateAUV(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MoveAUV::endMove(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
