/****************************************************************************
** Meta object code from reading C++ file 'getclipboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../getclipboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getclipboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_getclipboard_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_getclipboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_getclipboard_t qt_meta_stringdata_getclipboard = {
    {
QT_MOC_LITERAL(0, 0, 12), // "getclipboard"
QT_MOC_LITERAL(1, 13, 20), // "receiveMsgFromThread"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "start_btn_Clicked"
QT_MOC_LITERAL(4, 53, 17), // "clear_btn_Clicked"
QT_MOC_LITERAL(5, 71, 16), // "copy_btn_Clicked"
QT_MOC_LITERAL(6, 88, 16) // "stop_btn_Clicked"

    },
    "getclipboard\0receiveMsgFromThread\0\0"
    "start_btn_Clicked\0clear_btn_Clicked\0"
    "copy_btn_Clicked\0stop_btn_Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_getclipboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       3,    0,   44,    2, 0x0a /* Public */,
       4,    0,   45,    2, 0x0a /* Public */,
       5,    0,   46,    2, 0x0a /* Public */,
       6,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void getclipboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        getclipboard *_t = static_cast<getclipboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveMsgFromThread((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->start_btn_Clicked(); break;
        case 2: _t->clear_btn_Clicked(); break;
        case 3: _t->copy_btn_Clicked(); break;
        case 4: _t->stop_btn_Clicked(); break;
        default: ;
        }
    }
}

const QMetaObject getclipboard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_getclipboard.data,
      qt_meta_data_getclipboard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *getclipboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *getclipboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_getclipboard.stringdata0))
        return static_cast<void*>(const_cast< getclipboard*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int getclipboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
