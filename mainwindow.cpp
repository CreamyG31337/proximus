// checksum 0xa193 version 0x30001
/*
  This file was generated by the Mobile Qt Application wizard of Qt Creator.
  MainWindow is a convenience class containing mobile device specific code
  such as screen orientation handling.
  It is recommended not to modify this file, since newer versions of Qt Creator
  may offer an updated version of it.
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rule1.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), subscriber(new QValueSpaceSubscriber("/apps/Maemo/Proximus"))
    , publisher(new QValueSpacePublisher(QValueSpace::WritableLayer,"/apps/Maemo/Proximus"))
{
    ui->setupUi(this);
    // Start the GPS
    startGPS();
    //ptr to dialog
    Ruledialog = 0;    
    //fill current rules list,settings from "/apps/Maemo/Proximus/";

    if (!subscriber->value().isValid()) //need to create /apps/Maemo/Proximus/
    {
        if (publisher->isConnected())
        {   //set default options
            publisher->setValue("settings/GPS",false);
        }
        else
        {
            //critical error - unable to write to gconf
        }
    }
    ui->chkGPS->setChecked(subscriber->value("settings/GPS").Bool);

    subscriber->cd("rules");
    if (!subscriber->value().isValid()) //need to create /apps/Maemo/Proximus/rules
    {
        //set default rule, disable it
        publisher->setValue("rules/Example Rule/deleted",(bool)false);//for some reason setting the value of a node that contains subkeys doesn't work properly
        publisher->setValue("rules/Example Rule/enabled",(bool)false);//so i have to program it this stupid way instead.
        publisher->setValue("rules/Example Rule/Location/enabled",(bool)true);
        publisher->setValue("rules/Example Rule/Location/NOT",(bool)false);
        publisher->setValue("rules/Example Rule/Location/RADIUS",(double)250);
        publisher->setValue("rules/Example Rule/Location/LONGITUDE",(double)-113.485336);
        publisher->setValue("rules/Example Rule/Location/LATITUDE",(double)53.533064);

        publisher->sync();
    }
    //update rules list if anything changes
    QObject::connect(subscriber, SIGNAL(contentsChanged()), this, SLOT(rulesStorageChanged()));
    rulesStorageChanged();//call once now to populate initial rules
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Ruledialog;
    delete subscriber;
    delete publisher;
}

void MainWindow::setOrientation(ScreenOrientation orientation)
{
#if defined(Q_OS_SYMBIAN)
    // If the version of Qt on the device is < 4.7.2, that attribute won't work
    if (orientation != ScreenOrientationAuto) {
        const QStringList v = QString::fromAscii(qVersion()).split(QLatin1Char('.'));
        if (v.count() == 3 && (v.at(0).toInt() << 16 | v.at(1).toInt() << 8 | v.at(2).toInt()) < 0x040702) {
            qWarning("Screen orientation locking only supported with Qt 4.7.2 and above");
            return;
        }
    }
#endif // Q_OS_SYMBIAN

    Qt::WidgetAttribute attribute;
    switch (orientation) {
#if QT_VERSION < 0x040702
    // Qt < 4.7.2 does not yet have the Qt::WA_*Orientation attributes
    case ScreenOrientationLockPortrait:
        attribute = static_cast<Qt::WidgetAttribute>(128);
        break;
    case ScreenOrientationLockLandscape:
        attribute = static_cast<Qt::WidgetAttribute>(129);
        break;
    default:
    case ScreenOrientationAuto:
        attribute = static_cast<Qt::WidgetAttribute>(130);
        break;
#else // QT_VERSION < 0x040702
    case ScreenOrientationLockPortrait:
        attribute = Qt::WA_LockPortraitOrientation;
        break;
    case ScreenOrientationLockLandscape:
        attribute = Qt::WA_LockLandscapeOrientation;
        break;
    default:
    case ScreenOrientationAuto:
        attribute = Qt::WA_AutoOrientation;
        break;
#endif // QT_VERSION < 0x040702
    };
    setAttribute(attribute, true);
}

void MainWindow::showExpanded()
{
#ifdef Q_OS_SYMBIAN
    showFullScreen();
#elif defined(Q_WS_MAEMO_5) || defined(Q_WS_MAEMO_6)
    showMaximized();
#else
    show();
#endif
}

void MainWindow::rulesStorageChanged() {
    //setup memory structure used to keep track of rules being active or not
    //also recreate qstringlist obj on screen
    //as this DOES NOT happen often, it's okay to recreate from scratch
    Rules.clear();
    ui->listWidgetRules->clear();

    //fill list
    //foreach
            Q_FOREACH(const QString &strRuleName, subscriber->subPaths()){//for each rule
        //TODO: file bug and replace this retarded line of code with a simple "isValid" check. not holding my breath.
        if (!subscriber->value(strRuleName + "/deleted",true).toBool() == true)//if 'not deleted' (reset values is NOT working as it should, buggy??)
        {
            ui->listWidgetRules->addItem(strRuleName);//add name to screen list
            if (subscriber->value(strRuleName + "/enabled").toBool() == true)//if enabled
                ui->listWidgetRules->item(ui->listWidgetRules->count() - 1)->setForeground(Qt::green);
                //ui->listWidgetRules->findItems(str,Qt::MatchExactly).first()->setForeground(Qt::green);
            else
                ui->listWidgetRules->item(ui->listWidgetRules->count() - 1)->setForeground(Qt::red);
                //ui->listWidgetRules->findItems(str,Qt::MatchExactly).first()->setForeground(Qt::red);
            //need some objects
           // DataLocation ruleDataLoc;
            DataLocation* ptrRuleDataLoc = new DataLocation;//this one needs to be ptr because it's a qobject
            DataTime ruleDataTime;
            DataCalendar ruleDataCal;
            //fill them -- TODO: need to check if the paths exist, default them
            ptrRuleDataLoc->active = false;//we can default the status to false, it will be re-evaluated within a minute
            ptrRuleDataLoc->enabled = subscriber->value(strRuleName + "/Location/enabled").toBool();
            ptrRuleDataLoc->inverseCond = subscriber->value(strRuleName + "/Location/NOT").toBool();
            ptrRuleDataLoc->radius = subscriber->value(strRuleName + "/Location/RADIUS").toInt();
            ptrRuleDataLoc->location.setLongitude(subscriber->value(strRuleName + "/Location/LONGITUDE").toDouble());
            ptrRuleDataLoc->location.setLatitude(subscriber->value(strRuleName + "/Location/LATITUDE").toDouble());
            if (ptrRuleDataLoc->enabled)
            {
                ptrRuleDataLoc->areaMon = initAreaMonitor(ptrRuleDataLoc);
            }

            ruleDataTime.active = false;
            ruleDataTime.enabled = subscriber->value(strRuleName + "/Time/enabled").toBool();
            ruleDataTime.inverseCond = subscriber->value(strRuleName + "/Time/NOT").toBool();
            ruleDataTime.time1 = subscriber->value(strRuleName + "/Time/TIME1").toTime();
            ruleDataTime.time2 = subscriber->value(strRuleName + "/Time/TIME2").toTime();

            ruleDataCal.active = false;
            ruleDataCal.enabled = subscriber->value(strRuleName + "/Calendar/enabled").toBool();
            ruleDataCal.inverseCond = subscriber->value(strRuleName + "/Calendar/NOT").toBool();
            ruleDataCal.keywords = subscriber->value(strRuleName + "/Calendar/KEYWORDS").toString();

        }
    }
}

void MainWindow::positionUpdated(QGeoPositionInfo geoPositionInfo)
{
    if (geoPositionInfo.isValid())
    {
        //gps never stops
        locationDataSource->setUpdateInterval(30000);//30 sec //TODO: for meego we should sync this to WAKEUP_SLOT_30_SEC in MeeGo::QmHeartbeat
        // Get the current location as latitude and longitude
        QGeoCoordinate geoCoordinate = geoPositionInfo.coordinate();
        qreal latitude = geoCoordinate.latitude();
        qreal longitude = geoCoordinate.longitude();
        ui->lblLongitude->setText(QString::number(longitude));
        ui->lblLatitude->setText(QString::number(latitude));
    }
}

void MainWindow::startGPS()
{
    // Obtain the location data source if it is not obtained already
    if (!locationDataSource)
    {
        locationDataSource = QGeoPositionInfoSource::createDefaultSource(this);
        if (locationDataSource)
        {
            // Whenever the location data source signals that the current
            // position is updated, the positionUpdated function is called.
            QObject::connect(locationDataSource,
                             SIGNAL(positionUpdated(QGeoPositionInfo)),
                             this,
                             SLOT(positionUpdated(QGeoPositionInfo)));
            // Start listening for position updates
            locationDataSource->startUpdates();

            locationDataSource->setPreferredPositioningMethods(QGeoPositionInfoSource::NonSatellitePositioningMethods);
        } else {
            // Not able to obtain the location data source
            // TODO: Error handling
        }
    } else {
        // Start listening for position updates
        locationDataSource->startUpdates();
    }
}

//create and return a (pointer to) a single QGeoAreaMonitor
QGeoAreaMonitor * MainWindow::initAreaMonitor(DataLocation *& Dataloc)
{
    // Create the area monitor
    QGeoAreaMonitor *monitor = QGeoAreaMonitor::createDefaultMonitor(this);

    // Connect the area monitoring signals to the corresponding slots
    connect(monitor, SIGNAL(areaEntered(QGeoPositionInfo)),
            Dataloc, SLOT(areaEntered(QGeoPositionInfo)));
    connect(monitor, SIGNAL(areaExited(QGeoPositionInfo)),
            Dataloc, SLOT(areaExited(QGeoPositionInfo)));
    monitor->setCenter(Dataloc->location);
    monitor->setRadius(Dataloc->radius);
    return monitor;
}

void DataLocation::areaEntered(const QGeoPositionInfo &update) {
    // The area has been entered
    QMessageBox::information(NULL,"debug","entered area",QMessageBox::Ok);
    if (this->inverseCond == false)
        this->active = true;
    else
        this->active = false;
}

void DataLocation::areaExited(const QGeoPositionInfo &update) {
    // The area has been exited
     QMessageBox::information(NULL,"debug","exited area",QMessageBox::Ok);
     if (this->inverseCond == false)
         this->active = false;
     else
         this->active = true;
}

void MainWindow::startSatelliteMonitor()
{
    satelliteInfoSource =
        QGeoSatelliteInfoSource::createDefaultSource(this);
    // Whenever the satellite info source signals that the number of
    // satellites in use is updated, the satellitesInUseUpdated function
    // is called
    QObject::connect(satelliteInfoSource,
                     SIGNAL(satellitesInUseUpdated(
                             const QList<QGeoSatelliteInfo>&)),
                     this,
                     SLOT(satellitesInUseUpdated(
                             const QList<QGeoSatelliteInfo>&)));

    // Whenever the satellite info source signals that the number of
    // satellites in view is updated, the satellitesInViewUpdated function
    // is called
    QObject::connect(satelliteInfoSource,
                     SIGNAL(satellitesInViewUpdated(
                             const QList<QGeoSatelliteInfo>&)),
                     this,
                     SLOT(satellitesInViewUpdated(
                             const QList<QGeoSatelliteInfo>&)));

    // Start listening for satellite updates
    satelliteInfoSource->startUpdates();
}

void MainWindow::satellitesInUseUpdated(
        const QList<QGeoSatelliteInfo> &satellites) {
    // The number of satellites in use is updated
    QMessageBox msgBox;
    msgBox.setText("The number of satellites in use is updated: " +
                   QString::number(satellites.count()));
    msgBox.exec();
}

void MainWindow::satellitesInViewUpdated(
        const QList<QGeoSatelliteInfo> &satellites) {
    // The number of satellites in view is updated
    QMessageBox msgBox;
    msgBox.setText("The number of satellites in view is updated: " +
                   QString::number(satellites.count()));
    msgBox.exec();
}

void MainWindow::on_btnNewRule_clicked()
{

    qint8 intRuleToEdit =  ui->listWidgetRules->count() + 1;
    if (Ruledialog == 0)
    {
        Ruledialog =  new Rule1(topLevelWidget(),"Rule " +  QString::number(intRuleToEdit),locationDataSource);
    }
    #ifdef Q_OS_SYMBIAN
         Ruledialog->showFullScreen();//modeless to keep GPS running
    #elif defined(Q_WS_MAEMO_5) || defined(Q_WS_MAEMO_6)
         Ruledialog->showMaximized();//modeless to keep GPS running
    #else
         Ruledialog->show();//modeless to keep GPS running
    #endif
}

void MainWindow::on_chkGPS_clicked()
{
    if (publisher->isConnected())
    {
        publisher->setValue("settings/GPS",ui->chkGPS->isChecked());
        //todo: restart gps

    }
    else
    {
        //error
    }

}

void MainWindow::on_btnEdit_clicked()
{
    if (!ui->listWidgetRules->currentItem()) return;//no item selected; could show messagebox, if even possible to end up in this situation
    if (Ruledialog == 0)
    {
        Ruledialog =  new Rule1(window(), ui->listWidgetRules->currentItem()->text(),locationDataSource);
    }
    #ifdef Q_OS_SYMBIAN
         Ruledialog->showFullScreen();//modeless to keep GPS running
    #elif defined(Q_WS_MAEMO_5) || defined(Q_WS_MAEMO_6)
         Ruledialog->showMaximized();//modeless to keep GPS running
    #else
         Ruledialog->show();//modeless to keep GPS running
    #endif
}

void MainWindow::on_btnDelete_clicked()
{
    if (!ui->listWidgetRules->currentItem()) return;//no item selected; could show messagebox, if even possible to end up in this situation
    int ret = (QMessageBox::question(this,
                             "Please confirm",
                             "Do you wish to delete rule: '"+ ui->listWidgetRules->currentItem()->text()+"'",
                             QMessageBox::Yes | QMessageBox::No,
                             QMessageBox::No)
              );
    if (ret == QMessageBox::Yes){//hi, i'm nokia and i can't make a resetValue function that works properly. this will NOT delete the root node for some stupid reason. more hours of my life gone.
        publisher->resetValue("rules/" + ui->listWidgetRules->currentItem()->text());//yeah so it doesn't seem to be doing ANYTHING right now.
        publisher->setValue("rules/" + ui->listWidgetRules->currentItem()->text() + "/deleted",true);//i guess i will write stupid code then.
    }
    publisher->sync();
}

void MainWindow::on_listWidgetRules_currentTextChanged(const QString &currentText)
{
    if (currentText.isNull())//nothing selected
    {
        ui->btnDelete->setEnabled(false);
        ui->btnEnable->setEnabled(false);
        ui->btnEdit->setEnabled(false);
        return;
    }
    else
    {
        ui->btnDelete->setEnabled(true);
        ui->btnEnable->setEnabled(true);
        ui->btnEdit->setEnabled(true);
    }   
    if (subscriber->value(currentText + "/enabled").toBool())//enabled
        ui->btnEnable->setText("Disable");
    else//disabled
        ui->btnEnable->setText("Enable");
}

void MainWindow::on_btnEnable_clicked()
{

    QString curr = ui->listWidgetRules->currentItem()->text();

    if ( ui->btnEnable->text() == "Enable")
    {
        publisher->setValue("rules/" + curr + "/enabled",true);
        ui->listWidgetRules->currentItem()->setForeground(Qt::green);
        ui->btnEnable->setText("Disable");
    }
    else
    {
        publisher->setValue("rules/" + curr + "/enabled",false);
        ui->listWidgetRules->currentItem()->setForeground(Qt::red);
        ui->btnEnable->setText("Enable");
    }
}
