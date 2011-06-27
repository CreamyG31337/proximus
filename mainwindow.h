// checksum 0x9a77 version 0x30001
/*
  This file was generated by the Mobile Qt Application wizard of Qt Creator.
  MainWindow is a convenience class containing mobile device specific code
  such as screen orientation handling.
  It is recommended not to modify this file, since newer versions of Qt Creator
  may offer an updated version of it.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QSystemDeviceInfo>
#include <QtCore/QPointer>
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfo>
#include <QGeoSatelliteInfoSource>
#include <QGeoSatelliteInfo>
#include <QGeoCoordinate>
#include <QGeoAreaMonitor>
#include <QtCore/QCoreApplication>
#include <QtGui/QMessageBox>
#include <QValueSpace>
#include <QValueSpaceSubscriber>
#include <QValueSpacePublisher>
#include "rule1.h"

QTM_USE_NAMESPACE



namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    enum ScreenOrientation {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };
    //constructor
    explicit MainWindow(QWidget *parent = 0);
    //destructor
    virtual ~MainWindow();

    void setOrientation(ScreenOrientation orientation);
    void showExpanded();
    QPointer<QGeoPositionInfoSource> locationDataSource;


public slots:
    /**
     * Called when the current position is updated.
     */
    void positionUpdated(QGeoPositionInfo geoPositionInfo);
    /**
     * Called when the current position is in range of the area.
     */
    void areaEntered(const QGeoPositionInfo &update);
    /**
     * Called when the current position moves out of range of the area.
     */
    void areaExited(const QGeoPositionInfo &update);
    /**
     * Called when the number of satellites in use is updated.
     */
    void satellitesInUseUpdated(
            const QList<QGeoSatelliteInfo> &satellites);
    /**
     * Called when the number of satellites in view is updated.
     */
    void satellitesInViewUpdated(
            const QList<QGeoSatelliteInfo> &satellites);

private slots:
    /**
     * Initializes the area monitor.
     */
    void initAreaMonitor();
    /**
     * Starts to monitor updates in the number of satellites.
     */
    void startSatelliteMonitor();

    void on_btnNewRule_clicked();

    void rulesListChanged();

    void on_chkGPS_clicked();

    void on_btnEdit_clicked();

    void on_btnDelete_clicked();

    void on_listWidgetRules_currentTextChanged(const QString &currentText);

    void on_btnEnable_clicked();

private:
    Ui::MainWindow *ui;
    QPointer<QGeoSatelliteInfoSource> satelliteInfoSource;

    /**
     * Obtains the location data source and starts listening for position
     * changes.
     */
    void startGPS();
    QStringList rulesList;
    //some pointers
    Rule1 *Ruledialog;
    QValueSpaceSubscriber *subscriber;
    QValueSpacePublisher *publisher;

};

#endif // MAINWINDOW_H