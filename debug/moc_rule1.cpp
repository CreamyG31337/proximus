/****************************************************************************
** Meta object code from reading C++ file 'rule1.h'
**
** Created: Mon Jun 27 00:40:53 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rule1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rule1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Rule1[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,    7,    6,    6, 0x08,
      54,    6,    6,    6, 0x08,
      99,    6,    6,    6, 0x08,
     138,    6,    6,    6, 0x08,
     177,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Rule1[] = {
    "Rule1\0\0value\0on_dial_locSensitivity_valueChanged(int)\0"
    "on_lineEdit_locSensitivity_editingFinished()\0"
    "on_buttonBox_ruleSaveCancel_rejected()\0"
    "on_buttonBox_ruleSaveCancel_accepted()\0"
    "on_btn_loc_fill_map_clicked()\0"
};

const QMetaObject Rule1::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Rule1,
      qt_meta_data_Rule1, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Rule1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Rule1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Rule1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Rule1))
        return static_cast<void*>(const_cast< Rule1*>(this));
    return QDialog::qt_metacast(_clname);
}

int Rule1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_dial_locSensitivity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_lineEdit_locSensitivity_editingFinished(); break;
        case 2: on_buttonBox_ruleSaveCancel_rejected(); break;
        case 3: on_buttonBox_ruleSaveCancel_accepted(); break;
        case 4: on_btn_loc_fill_map_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
