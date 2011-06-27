/****************************************************************************
** Meta object code from reading C++ file 'mapswidget.h'
**
** Created: Tue Jun 21 01:50:48 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mapswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GeoMap[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GeoMap[] = {
    "GeoMap\0"
};

const QMetaObject GeoMap::staticMetaObject = {
    { &QGraphicsGeoMap::staticMetaObject, qt_meta_stringdata_GeoMap,
      qt_meta_data_GeoMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GeoMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GeoMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GeoMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GeoMap))
        return static_cast<void*>(const_cast< GeoMap*>(this));
    return QGraphicsGeoMap::qt_metacast(_clname);
}

int GeoMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsGeoMap::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MapsWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MapsWidget[] = {
    "MapsWidget\0\0manager\0initialize(QGeoMappingManager*)\0"
};

const QMetaObject MapsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MapsWidget,
      qt_meta_data_MapsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapsWidget))
        return static_cast<void*>(const_cast< MapsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MapsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initialize((*reinterpret_cast< QGeoMappingManager*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
