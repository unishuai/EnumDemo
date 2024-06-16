/****************************************************************************
** Meta object code from reading C++ file 'simstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myEnumDemo/Types/simstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimStatus_t {
    QByteArrayData data[5];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimStatus_t qt_meta_stringdata_SimStatus = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SimStatus"
QT_MOC_LITERAL(1, 10, 6), // "Status"
QT_MOC_LITERAL(2, 17, 7), // "Success"
QT_MOC_LITERAL(3, 25, 6), // "Failed"
QT_MOC_LITERAL(4, 32, 8) // "Collided"

    },
    "SimStatus\0Status\0Success\0Failed\0"
    "Collided"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimStatus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    3,   18,

 // enum data: key, value
       2, uint(SimStatus::Success),
       3, uint(SimStatus::Failed),
       4, uint(SimStatus::Collided),

       0        // eod
};

void SimStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SimStatus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimStatus.data,
      qt_meta_data_SimStatus,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SimStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimStatus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
