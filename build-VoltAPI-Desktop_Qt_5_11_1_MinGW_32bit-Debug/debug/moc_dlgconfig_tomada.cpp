/****************************************************************************
** Meta object code from reading C++ file 'dlgconfig_tomada.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VoltAPI/dlgconfig_tomada.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgconfig_tomada.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlgconfig_tomada_t {
    QByteArrayData data[5];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlgconfig_tomada_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlgconfig_tomada_t qt_meta_stringdata_dlgconfig_tomada = {
    {
QT_MOC_LITERAL(0, 0, 16), // "dlgconfig_tomada"
QT_MOC_LITERAL(1, 17, 21), // "on_btn_salvar_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 32), // "on_cbotomada_currentIndexChanged"
QT_MOC_LITERAL(4, 73, 5) // "index"

    },
    "dlgconfig_tomada\0on_btn_salvar_clicked\0"
    "\0on_cbotomada_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgconfig_tomada[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void dlgconfig_tomada::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgconfig_tomada *_t = static_cast<dlgconfig_tomada *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_salvar_clicked(); break;
        case 1: _t->on_cbotomada_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlgconfig_tomada::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgconfig_tomada.data,
      qt_meta_data_dlgconfig_tomada,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dlgconfig_tomada::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgconfig_tomada::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlgconfig_tomada.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlgconfig_tomada::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
