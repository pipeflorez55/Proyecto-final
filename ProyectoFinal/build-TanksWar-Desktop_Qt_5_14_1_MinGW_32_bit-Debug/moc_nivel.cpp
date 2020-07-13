/****************************************************************************
** Meta object code from reading C++ file 'nivel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../TanksWar/nivel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nivel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Nivel_t {
<<<<<<< HEAD
    QByteArrayData data[4];
    char stringdata0[40];
=======
    QByteArrayData data[1];
    char stringdata0[6];
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nivel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nivel_t qt_meta_stringdata_Nivel = {
    {
<<<<<<< HEAD
QT_MOC_LITERAL(0, 0, 5), // "Nivel"
QT_MOC_LITERAL(1, 6, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10) // "actualizar"

    },
    "Nivel\0on_pushButton_clicked\0\0actualizar"
=======
QT_MOC_LITERAL(0, 0, 5) // "Nivel"

    },
    "Nivel"
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nivel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
       2,   14, // methods
=======
       0,    0, // methods
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

<<<<<<< HEAD
 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
       0        // eod
};

void Nivel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
<<<<<<< HEAD
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Nivel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->actualizar(); break;
        default: ;
        }
    }
=======
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Nivel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Nivel.data,
    qt_meta_data_Nivel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Nivel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nivel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Nivel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Nivel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
<<<<<<< HEAD
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
