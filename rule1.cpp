#include "rule1.h"
#include "ui_rule1.h"
#include <QRegExpValidator>
#include <QMessageBox>
#include "mapswidget.h"
#include <QValueSpace>
#include <QValueSpacePublisher>

Rule1::Rule1(QWidget *parent, QString RuleName, QPointer<QGeoPositionInfoSource> locationDataSource) :
    QDialog(parent),
    ui(new Ui::Rule1)
//    rx("[1-9]\\d{0,3}[mM]?"),
//    validator( new QRegExpValidator(rx, this))
{
    ui->setupUi(this);

    //set up validator
    const QRegExp rx("[1-9]\\d{0,3}[mM]?");   //integers 1 to 9999, maybe an "m" at the end
    QValidator *validator = new QRegExpValidator(rx, this);
    ui->lineEdit_locSensitivity->setValidator(validator);
    MapDialog = 0;
    ui->txtRuleName->setText(RuleName);
    strOriginalRuleName = RuleName;
    //save original rule name so we can tell if it's renamed
    locationDataSource2 = locationDataSource;
    this->setAttribute(Qt::WA_DeleteOnClose);

}

Rule1::~Rule1()
{
    delete ui;
    delete MapDialog;
}

void Rule1::on_dial_locSensitivity_valueChanged(int value)
{
    ui->lineEdit_locSensitivity->setText(QString::number(value) + "m");
}

void Rule1::on_lineEdit_locSensitivity_editingFinished()
{
    //add back "m" if missing
    if (ui->lineEdit_locSensitivity->text().right(1) != "m")
    {
        ui->lineEdit_locSensitivity->setText(ui->lineEdit_locSensitivity->text().append("m"));
    }

}

void Rule1::on_buttonBox_ruleSaveCancel_rejected()
{
    //msgbox confirmation
}

void Rule1::on_buttonBox_ruleSaveCancel_accepted()
{
    //save data to "/apps/Maemo/APP_NAME/
    QString publishPath = "/apps/Maemo/ProfileAutoSwitch/rules";
    QValueSpacePublisher* publisher;
    publisher = new QValueSpacePublisher(QValueSpace::WritableLayer, publishPath);

    if (ui->txtRuleName->text() != strOriginalRuleName)
    {   //delete old rule
        publisher->resetValue(strOriginalRuleName);
    }
    QString NewRuleName;
    NewRuleName = ui->txtRuleName->text();
    //sanitize NewRuleName 1st

    if (ui->chkRunProgram->isChecked())
    {

    }
    if (ui->chkSwitchProfile->isChecked())
    {

    }
    if (ui->chk_loc_enabled)
    {
        if (ui->chk_loc_not->isChecked())
            publisher->setValue(NewRuleName + "/Location/NOT",true);
        //validator takes care of most, still need to check for blanks and out of range
        if (ui->lineEdit_locSensitivity->text().isEmpty())
        {
             ui->lineEdit_locSensitivity->setText("100m");
             QMessageBox msgBox;
              msgBox.setText("Location sensitivity was blank and has been set to 100m");
              msgBox.setIcon(QMessageBox::Information);
              msgBox.exec();
        }
        //convert loc sensitivity to int
        QString strlocSens;
        strlocSens = ui->lineEdit_locSensitivity->text();
        strlocSens.chop(1);
        publisher->setValue(NewRuleName + "/Location/RADIUS", strlocSens.toInt());
        //need to check these
        double longitude;
        longitude = ui->txtLocLongitude->text().toDouble();
        double latitude;
        latitude = ui->txtLocLatitude->text().toDouble();
        publisher->setValue(NewRuleName + "/Location/LONGITUDE", longitude);
        publisher->setValue(NewRuleName + "/Location/LATITUDE", latitude);
    }
    else
        publisher->resetValue(NewRuleName + "/Location");

    if(ui->chk_time_enabled->isChecked())
    {

    }
    if(ui->chk_calendar_enabled->isChecked())
    {

    }
}


void Rule1::on_btn_loc_fill_map_clicked()
{
    if (ui->lineEdit_locSensitivity->text().isEmpty())
    {
         ui->lineEdit_locSensitivity->setText("100m");
         QMessageBox msgBox;
          msgBox.setText("Location sensitivity was blank and has been set to 100m");
          msgBox.setIcon(QMessageBox::Information);
          msgBox.exec();
    }
    //convert loc sensitivity to int
    QString strlocSens;
    strlocSens = ui->lineEdit_locSensitivity->text();
    strlocSens.chop(1);

    if (MapDialog == 0)
    {
        //MapDialog =  new MapsWidget(this);
        MapDialog = new MapWindow(locationDataSource2, (qint16)strlocSens.toInt());
    }
    else
    {
        MapDialog->radius = (qint16)strlocSens.toInt();
    }
    #ifdef Q_OS_SYMBIAN
          MapDialog->showFullScreen();//modeless to keep GPS running
    #elif defined(Q_WS_MAEMO_5) || defined(Q_WS_MAEMO_6)
          MapDialog->showMaximized();//modeless to keep GPS running
    #else
          MapDialog->show();//modeless to keep GPS running
    #endif
    MapDialog->resize(this->size());//still not fullscreen??? but its like 10 pixels wide without this. DAMN YOU NOKIA
    QList<QString> providers = QGeoServiceProvider::availableServiceProviders();
    QGeoServiceProvider *serviceProvider = new QGeoServiceProvider(providers[0]);
    //MapDialog->initialize(serviceProvider->mappingManager());
    MapDialog->mapsWidget->initialize(serviceProvider->mappingManager());
    //connect signal to update long/lat when map panned
    connect(MapDialog->mapsWidget,SIGNAL(mapPanned()),
            this, SLOT(updateLatLongFromMap()));
}
void Rule1::updateLatLongFromMap()
{
    QGeoCoordinate *mapCenterCoord = MapDialog->mapsWidget->mapCenterCoord;
    ui->txtLocLatitude->setText(QString::number(mapCenterCoord->latitude()));
    ui->txtLocLongitude->setText(QString::number(mapCenterCoord->longitude()));
}
