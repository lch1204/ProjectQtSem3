/****************************************************************************
** Meta object code from reading C++ file 'mapgidroform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mapgidroform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapgidroform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapGidroForm_t {
    QByteArrayData data[13];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapGidroForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapGidroForm_t qt_meta_stringdata_MapGidroForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MapGidroForm"
QT_MOC_LITERAL(1, 13, 11), // "newDataAqua"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "minX"
QT_MOC_LITERAL(4, 31, 4), // "minY"
QT_MOC_LITERAL(5, 36, 4), // "maxX"
QT_MOC_LITERAL(6, 41, 4), // "maxY"
QT_MOC_LITERAL(7, 46, 8), // "tickMove"
QT_MOC_LITERAL(8, 55, 1), // "X"
QT_MOC_LITERAL(9, 57, 1), // "Y"
QT_MOC_LITERAL(10, 59, 7), // "checkXY"
QT_MOC_LITERAL(11, 67, 7), // "checked"
QT_MOC_LITERAL(12, 75, 7) // "endMove"

    },
    "MapGidroForm\0newDataAqua\0\0minX\0minY\0"
    "maxX\0maxY\0tickMove\0X\0Y\0checkXY\0checked\0"
    "endMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapGidroForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   43,    2, 0x0a /* Public */,
      10,    1,   48,    2, 0x0a /* Public */,
      12,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar, QMetaType::SChar, QMetaType::SChar,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void MapGidroForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapGidroForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newDataAqua((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2])),(*reinterpret_cast< qint8(*)>(_a[3])),(*reinterpret_cast< qint8(*)>(_a[4]))); break;
        case 1: _t->tickMove((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->checkXY((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->endMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapGidroForm::*)(qint8 , qint8 , qint8 , qint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapGidroForm::newDataAqua)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapGidroForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MapGidroForm.data,
    qt_meta_data_MapGidroForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapGidroForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapGidroForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapGidroForm.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MapGidroForm"))
        return static_cast< Ui::MapGidroForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int MapGidroForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void MapGidroForm::newDataAqua(qint8 _t1, qint8 _t2, qint8 _t3, qint8 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
