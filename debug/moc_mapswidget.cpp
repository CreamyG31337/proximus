/****************************************************************************
** Meta object code from reading C++ file 'mapswidget.h'
**
** Created: Mon Jun 27 00:40:54 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mapswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   11,   10,   10, 0x08,
      51,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapWindow[] = {
    "MapWindow\0\0info\0updateMyPosition(QGeoPositionInfo)\0"
    "disableTracking()\0"
};

const QMetaObject MapWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MapWindow,
      qt_meta_data_MapWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapWindow))
        return static_cast<void*>(const_cast< MapWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MapWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateMyPosition((*reinterpret_cast< QGeoPositionInfo(*)>(_a[1]))); break;
        case 1: disableTracking(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_GeoMap[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,

 // properties: name, type, flags
      24,   17, 0x06095103,
      39,   17, 0x06095103,

       0        // eod
};

static const char qt_meta_stringdata_GeoMap[] = {
    "GeoMap\0\0panned()\0double\0centerLatitude\0"
    "centerLongitude\0"
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
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: panned(); break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = centerLatitude(); break;
        case 1: *reinterpret_cast< double*>(_v) = centerLongitude(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCenterLatitude(*reinterpret_cast< double*>(_v)); break;
        case 1: setCenterLongitude(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GeoMap::panned()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_FixedGraphicsView[] = {

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

static const char qt_meta_stringdata_FixedGraphicsView[] = {
    "FixedGraphicsView\0"
};

const QMetaObject FixedGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_FixedGraphicsView,
      qt_meta_data_FixedGraphicsView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FixedGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FixedGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FixedGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FixedGraphicsView))
        return static_cast<void*>(const_cast< FixedGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int FixedGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MapsWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   24,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MapsWidget[] = {
    "MapsWidget\0\0mapPanned()\0manager\0"
    "initialize(QGeoMappingManager*)\0"
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
        case 0: mapPanned(); break;
        case 1: initialize((*reinterpret_cast< QGeoMappingManager*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MapsWidget::mapPanned()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Marker[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    8,    7,    7, 0x05,
      48,   43,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   43,    7,    7, 0x0a,

 // properties: name, type, flags
      97,   86, 0x0049510b,
      43,  108, 0x0a495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_Marker[] = {
    "Marker\0\0type\0markerTypeChanged(MarkerType)\0"
    "name\0nameChanged(QString)\0setName(QString)\0"
    "MarkerType\0markerType\0QString\0"
};

const QMetaObject Marker::staticMetaObject = {
    { &QGeoMapPixmapObject::staticMetaObject, qt_meta_stringdata_Marker,
      qt_meta_data_Marker, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Marker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Marker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Marker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Marker))
        return static_cast<void*>(const_cast< Marker*>(this));
    return QGeoMapPixmapObject::qt_metacast(_clname);
}

int Marker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoMapPixmapObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: markerTypeChanged((*reinterpret_cast< const MarkerType(*)>(_a[1]))); break;
        case 1: nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MarkerType*>(_v) = markerType(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMarkerType(*reinterpret_cast< MarkerType*>(_v)); break;
        case 1: setName(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Marker::markerTypeChanged(const MarkerType & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Marker::nameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_MarkerManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x0a,
      50,   44,   14,   14, 0x0a,
      89,   80,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MarkerManager[] = {
    "MarkerManager\0\0map\0setMap(QGraphicsGeoMap*)\0"
    "coord\0setMyLocation(QGeoCoordinate)\0"
    "location\0myLocationChanged(QGeoCoordinate)\0"
};

const QMetaObject MarkerManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MarkerManager,
      qt_meta_data_MarkerManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MarkerManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MarkerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MarkerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MarkerManager))
        return static_cast<void*>(const_cast< MarkerManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MarkerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setMap((*reinterpret_cast< QGraphicsGeoMap*(*)>(_a[1]))); break;
        case 1: setMyLocation((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 2: myLocationChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
