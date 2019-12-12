/****************************************************************************
** Meta object code from reading C++ file 'dlg_config_eth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VoltAPI/dlg_config_eth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_config_eth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlg_config_eth_t {
    QByteArrayData data[6];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlg_config_eth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlg_config_eth_t qt_meta_stringdata_dlg_config_eth = {
    {
QT_MOC_LITERAL(0, 0, 14), // "dlg_config_eth"
QT_MOC_LITERAL(1, 15, 20), // "on_btnsalvar_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "replayFinished"
QT_MOC_LITERAL(4, 52, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 67, 5) // "reply"

    },
    "dlg_config_eth\0on_btnsalvar_clicked\0"
    "\0replayFinished\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlg_config_eth[] = {

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
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void dlg_config_eth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlg_config_eth *_t = static_cast<dlg_config_eth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnsalvar_clicked(); break;
        case 1: _t->replayFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlg_config_eth::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlg_config_eth.data,
      qt_meta_data_dlg_config_eth,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dlg_config_eth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlg_config_eth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlg_config_eth.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlg_config_eth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
