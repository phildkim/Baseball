/****************************************************************************
** Meta object code from reading C++ file 'BaseballPlanner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseballPlanner/BaseballPlanner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseballPlanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseballPlanner_t {
    QByteArrayData data[5];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseballPlanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseballPlanner_t qt_meta_stringdata_BaseballPlanner = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BaseballPlanner"
QT_MOC_LITERAL(1, 16, 34), // "on_lineEdit_Password_returnPr..."
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 27), // "on_pushButton_Login_clicked"
QT_MOC_LITERAL(4, 80, 26) // "on_pushButton_Exit_clicked"

    },
    "BaseballPlanner\0on_lineEdit_Password_returnPressed\0"
    "\0on_pushButton_Login_clicked\0"
    "on_pushButton_Exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseballPlanner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BaseballPlanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseballPlanner *_t = static_cast<BaseballPlanner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_Password_returnPressed(); break;
        case 1: _t->on_pushButton_Login_clicked(); break;
        case 2: _t->on_pushButton_Exit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BaseballPlanner::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BaseballPlanner.data,
      qt_meta_data_BaseballPlanner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseballPlanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseballPlanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseballPlanner.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BaseballPlanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
