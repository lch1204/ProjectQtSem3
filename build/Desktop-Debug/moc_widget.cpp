/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 34), // "on_setNewObjComboBox_textActi..."
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "arg1"
QT_MOC_LITERAL(4, 48, 35), // "on_trajectoryComboBox_textAct..."
QT_MOC_LITERAL(5, 84, 34), // "on_changeMapComboBox_textActi..."
QT_MOC_LITERAL(6, 119, 19), // "on_pbUpdate_clicked"
QT_MOC_LITERAL(7, 139, 16), // "on_pbSet_clicked"
QT_MOC_LITERAL(8, 156, 16), // "on_pbDel_clicked"
QT_MOC_LITERAL(9, 173, 11), // "delModemMap"
QT_MOC_LITERAL(10, 185, 1), // "x"
QT_MOC_LITERAL(11, 187, 1), // "y"
QT_MOC_LITERAL(12, 189, 19), // "on_pbSetAUV_toggled"
QT_MOC_LITERAL(13, 209, 7), // "checked"
QT_MOC_LITERAL(14, 217, 18), // "on_pbStart_clicked"
QT_MOC_LITERAL(15, 236, 24) // "on_checkBoxIdael_clicked"

    },
    "Widget\0on_setNewObjComboBox_textActivated\0"
    "\0arg1\0on_trajectoryComboBox_textActivated\0"
    "on_changeMapComboBox_textActivated\0"
    "on_pbUpdate_clicked\0on_pbSet_clicked\0"
    "on_pbDel_clicked\0delModemMap\0x\0y\0"
    "on_pbSetAUV_toggled\0checked\0"
    "on_pbStart_clicked\0on_checkBoxIdael_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

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
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    2,   76,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   10,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_setNewObjComboBox_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_trajectoryComboBox_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_changeMapComboBox_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pbUpdate_clicked(); break;
        case 4: _t->on_pbSet_clicked(); break;
        case 5: _t->on_pbDel_clicked(); break;
        case 6: _t->delModemMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 7: _t->on_pbSetAUV_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_pbStart_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxIdael_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
