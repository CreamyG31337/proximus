/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Aug 6 19:05:05 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataLocation[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   46,   13,   13, 0x0a,
      83,   46,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataLocation[] = {
    "DataLocation\0\0ruleStruct\0activeChanged(Rule*)\0"
    "update\0areaEntered(QGeoPositionInfo)\0"
    "areaExited(QGeoPositionInfo)\0"
};

const QMetaObject DataLocation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataLocation,
      qt_meta_data_DataLocation, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataLocation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataLocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataLocation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataLocation))
        return static_cast<void*>(const_cast< DataLocation*>(this));
    return QObject::qt_metacast(_clname);
}

int DataLocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: activeChanged((*reinterpret_cast< Rule*(*)>(_a[1]))); break;
        case 1: areaEntered((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 2: areaExited((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DataLocation::activeChanged(Rule * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Rule[] = {

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

static const char qt_meta_stringdata_Rule[] = {
    "Rule\0"
};

const QMetaObject Rule::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Rule,
      qt_meta_data_Rule, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Rule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Rule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Rule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Rule))
        return static_cast<void*>(const_cast< Rule*>(this));
    return QObject::qt_metacast(_clname);
}

int Rule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   12,   11,   11, 0x0a,
      73,   62,   11,   11, 0x0a,
     122,   62,   11,   11, 0x0a,
     172,   11,   11,   11, 0x0a,
     219,  211,  194,   11, 0x08,
     251,   11,   11,   11, 0x08,
     275,   11,   11,   11, 0x08,
     299,   11,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     344,   11,   11,   11, 0x08,
     379,  367,   11,   11, 0x08,
     426,   11,   11,   11, 0x08,
     449,   11,   11,   11, 0x08,
     477,  466,   11,   11, 0x08,
     505,  466,   11,   11, 0x08,
     535,  466,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0geoPositionInfo\0"
    "positionUpdated(QGeoPositionInfo)\0"
    "satellites\0satellitesInUseUpdated(QList<QGeoSatelliteInfo>)\0"
    "satellitesInViewUpdated(QList<QGeoSatelliteInfo>)\0"
    "rulesStorageChanged()\0QGeoAreaMonitor*\0"
    "Dataloc\0initAreaMonitor(DataLocation*&)\0"
    "startSatelliteMonitor()\0on_btnNewRule_clicked()\0"
    "on_chkGPSMode_clicked()\0on_btnEdit_clicked()\0"
    "on_btnDelete_clicked()\0currentText\0"
    "on_listWidgetRules_currentTextChanged(QString)\0"
    "on_btnEnable_clicked()\0updateCalendar()\0"
    "ruleStruct\0activateCalendarRule(Rule*)\0"
    "deactivateCalendarRule(Rule*)\0"
    "checkStatus(Rule*)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionUpdated((*reinterpret_cast< QGeoPositionInfo(*)>(_a[1]))); break;
        case 1: satellitesInUseUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        case 2: satellitesInViewUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        case 3: rulesStorageChanged(); break;
        case 4: { QGeoAreaMonitor* _r = initAreaMonitor((*reinterpret_cast< DataLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoAreaMonitor**>(_a[0]) = _r; }  break;
        case 5: startSatelliteMonitor(); break;
        case 6: on_btnNewRule_clicked(); break;
        case 7: on_chkGPSMode_clicked(); break;
        case 8: on_btnEdit_clicked(); break;
        case 9: on_btnDelete_clicked(); break;
        case 10: on_listWidgetRules_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: on_btnEnable_clicked(); break;
        case 12: updateCalendar(); break;
        case 13: activateCalendarRule((*reinterpret_cast< Rule*(*)>(_a[1]))); break;
        case 14: deactivateCalendarRule((*reinterpret_cast< Rule*(*)>(_a[1]))); break;
        case 15: checkStatus((*reinterpret_cast< Rule*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
