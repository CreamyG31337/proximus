/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Jun 27 00:40:52 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   12,   11,   11, 0x0a,
      69,   62,   11,   11, 0x0a,
      99,   62,   11,   11, 0x0a,
     139,  128,   11,   11, 0x0a,
     188,  128,   11,   11, 0x0a,
     238,   11,   11,   11, 0x08,
     256,   11,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,
     304,   11,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     343,   11,   11,   11, 0x08,
     364,   11,   11,   11, 0x08,
     399,  387,   11,   11, 0x08,
     446,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0geoPositionInfo\0"
    "positionUpdated(QGeoPositionInfo)\0"
    "update\0areaEntered(QGeoPositionInfo)\0"
    "areaExited(QGeoPositionInfo)\0satellites\0"
    "satellitesInUseUpdated(QList<QGeoSatelliteInfo>)\0"
    "satellitesInViewUpdated(QList<QGeoSatelliteInfo>)\0"
    "initAreaMonitor()\0startSatelliteMonitor()\0"
    "on_btnNewRule_clicked()\0rulesListChanged()\0"
    "on_chkGPS_clicked()\0on_btnEdit_clicked()\0"
    "on_btnDelete_clicked()\0currentText\0"
    "on_listWidgetRules_currentTextChanged(QString)\0"
    "on_btnEnable_clicked()\0"
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
        case 1: areaEntered((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 2: areaExited((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 3: satellitesInUseUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        case 4: satellitesInViewUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        case 5: initAreaMonitor(); break;
        case 6: startSatelliteMonitor(); break;
        case 7: on_btnNewRule_clicked(); break;
        case 8: rulesListChanged(); break;
        case 9: on_chkGPS_clicked(); break;
        case 10: on_btnEdit_clicked(); break;
        case 11: on_btnDelete_clicked(); break;
        case 12: on_listWidgetRules_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: on_btnEnable_clicked(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE