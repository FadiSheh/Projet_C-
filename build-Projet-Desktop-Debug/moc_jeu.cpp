/****************************************************************************
** Meta object code from reading C++ file 'jeu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Projet/jeu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jeu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_jeu_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_jeu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_jeu_t qt_meta_stringdata_jeu = {
    {
QT_MOC_LITERAL(0, 0, 3), // "jeu"
QT_MOC_LITERAL(1, 4, 27), // "on_progressBar_valueChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 17), // "on_Action_clicked"
QT_MOC_LITERAL(5, 57, 23), // "on_l_action_itemClicked"
QT_MOC_LITERAL(6, 81, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 98, 4), // "item"
QT_MOC_LITERAL(8, 103, 25) // "on_l_deplacer_itemClicked"

    },
    "jeu\0on_progressBar_valueChanged\0\0value\0"
    "on_Action_clicked\0on_l_action_itemClicked\0"
    "QListWidgetItem*\0item\0on_l_deplacer_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_jeu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       8,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void jeu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<jeu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;

        case 2: _t->on_l_action_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;

        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject jeu::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_jeu.data,
    qt_meta_data_jeu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *jeu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *jeu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_jeu.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int jeu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE