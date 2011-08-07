#include "rule1.h"
#include "ui_rule1.h"
#include <QRegExpValidator>
#include <QMessageBox>
#include "mapswidget.h"
#include <QValueSpace>
#include <QValueSpacePublisher>
#include <QValueSpaceSubscriber>
//#include <QSystemDeviceInfo> //currently useless since can't switch profiles only read them

Rule1::Rule1(QWidget *parent, QString RuleName, QPointer<QGeoPositionInfoSource> locationDataSource, QPointer<QSettings> settings) :
    QDialog(parent),
    ui(new Ui::Rule1)
{
    ui->setupUi(this);
    //set up regex validators
    const QRegExp rxRadius("[1-9]\\d{0,3}[mM]?");   //integers 1 to 9999, maybe an "m" at the end
    QValidator *radiusValidator = new QRegExpValidator(rxRadius, this);
    ui->txtlocSensitivity->setValidator(radiusValidator);
    const QRegExp rxRuleName("[0-9a-z\\s]+",Qt::CaseInsensitive);//matches most strings, excludes special chars
    QValidator *nameValidator = new QRegExpValidator(rxRuleName, this);
    ui->txtRuleName->setValidator(nameValidator);
    ui->txtCalendarKeywords->setValidator(nameValidator);

    MapDialog = 0;
    ui->txtRuleName->setText(RuleName);
    strOriginalRuleName = RuleName;
    //save original rule name so we can tell if it's renamed
    locationDataSource2 = locationDataSource;
    settings2 = settings;
    this->setAttribute(Qt::WA_DeleteOnClose);
    disconnect(ui->buttonBox_ruleSaveCancel, SIGNAL(accepted()), this, SLOT(accept()));//qt creator connects this by default which makes it impossible to validate things and abort a "save"
    //fill available profiles to combo box

    readCurrentSettings();
}

Rule1::~Rule1()
{
    delete ui;
    delete MapDialog;
}

void Rule1::readCurrentSettings()
{    
    settings2->beginGroup("rules/" + strOriginalRuleName);   
    //ACTION
    ui->chkRunCommand->setChecked(settings2->value("Actions/Run/enabled",false).toBool());
    ui->txtProgram2Run->setText(settings2->value("Actions/Run/COMMAND","").toString().replace("//","/"));
    //LOCATION
    ui->chk_loc_enabled->setChecked(settings2->value("Location/enabled",false).toBool());//default to false
    ui->chk_loc_not->setChecked(settings2->value("Location/NOT",false).toBool());//default to false
    ui->txtlocSensitivity->setText(settings2->value("Location/RADIUS","100").toString()+"m");
    ui->dial_locSensitivity->setValue(settings2->value("Location/RADIUS","100").toInt());
    ui->txtLocLongitude->setText(settings2->value("Location/LONGITUDE","").toString());
    ui->txtLocLatitude->setText(settings2->value("Location/LATITUDE","").toString());
    //TIMING
    ui->chk_time_enabled->setChecked(settings2->value("Time/enabled",false).toBool());//default to false
    ui->chk_time_not->setChecked(settings2->value("Time/NOT",false).toBool());//default to false
    ui->timeEdit->setTime(settings2->value("Time/TIME1",QTime::currentTime()).toTime());//default to current time
    ui->timeEdit_2->setTime(settings2->value("Time/TIME2",QTime::currentTime()).toTime());//default to current time
    //CALENDAR
    ui->chk_calendar_enabled->setChecked(settings2->value("Calendar/enabled",false).toBool());//default to false
    ui->chk_calendar_not->setChecked(settings2->value("Calendar/NOT",false).toBool());//default to false
    ui->txtCalendarKeywords->setText(settings2->value("Calendar/KEYWORDS","").toString());

    settings2->endGroup();
}

void Rule1::on_dial_locSensitivity_valueChanged(int value)
{
    ui->txtlocSensitivity->setText(QString::number(value) + "m");
}

void Rule1::on_txtlocSensitivity_editingFinished()
{
    //add back "m" if missing
    if (ui->txtlocSensitivity->text().right(1) != "m")
    {
        ui->txtlocSensitivity->setText(ui->txtlocSensitivity->text().append("m"));
    }

}

void Rule1::on_buttonBox_ruleSaveCancel_rejected()
{
    //msgbox confirmation
}

void Rule1::on_buttonBox_ruleSaveCancel_accepted()
{
    bool closeWindow = false;
    settings2->beginGroup("rules");
    QString strNewRuleName;
    strNewRuleName = ui->txtRuleName->text();

    if (strNewRuleName != strOriginalRuleName)
    {
        settings2->remove(strOriginalRuleName);
    }
    settings2->setValue(strNewRuleName + "/enabled", true);
    if (ui->chkRunCommand->isChecked())
    {
        settings2->setValue(strNewRuleName + "/Actions/Run/enabled",true);
    }
    else
    {
        settings2->setValue(strNewRuleName + "/Actions/Run/enabled",false);
    }
    QString strCommand;
    strCommand = ui->txtProgram2Run->text();
    strCommand.replace("/","//");
    settings2->setValue(strNewRuleName + "/Actions/Run/COMMAND",strCommand);
    if (ui->chkSwitchProfile->isChecked())
    {

    }
    if (ui->chk_loc_enabled)
    {
        settings2->setValue(strNewRuleName + "/Location/enabled",true);//enabled
        if (ui->chk_loc_not->isChecked())
            settings2->setValue(strNewRuleName + "/Location/NOT",true);
        else
            settings2->setValue(strNewRuleName + "/Location/NOT",false);
        //validator takes care of most, still need to check for blanks and out of range
        if (ui->txtlocSensitivity->text().isEmpty())
        {
             ui->txtlocSensitivity->setText("100m");
             QMessageBox msgBox;
              msgBox.setText("Location sensitivity was blank and has been set to 100m");
              msgBox.setIcon(QMessageBox::Information);
              msgBox.exec();
        }
        //convert loc sensitivity to int
        QString strlocSens;
        strlocSens = ui->txtlocSensitivity->text();
        strlocSens.chop(1);     
        settings2->setValue(strNewRuleName + "/Location/RADIUS", strlocSens.toInt());
        //need to check these
        double longitude;
        longitude = ui->txtLocLongitude->text().toDouble();
        double latitude;
        latitude = ui->txtLocLatitude->text().toDouble();
        settings2->setValue(strNewRuleName + "/Location/LONGITUDE", longitude);
        settings2->setValue(strNewRuleName + "/Location/LATITUDE", latitude);
    }
    else
        settings2->setValue(strNewRuleName + "/Location/enabled",false);//disabled

    if(ui->chk_time_enabled->isChecked())
    {
        if (ui->timeEdit->time() == ui->timeEdit_2->time())
        {
             QMessageBox msgBox;
             msgBox.setText("Times cannot be equal");
             msgBox.setIcon(QMessageBox::Critical);
             msgBox.exec();
             //set flag
            closeWindow = true;
        }
        settings2->setValue(strNewRuleName + "/Time/enabled",true);//enabled
        if (ui->chk_time_not->isChecked())
            settings2->setValue(strNewRuleName + "/Time/NOT",true);
        else
            settings2->setValue(strNewRuleName + "/Time/NOT",false);
        QTime time;
        time = ui->timeEdit->time();
        settings2->setValue(strNewRuleName + "/Time/TIME1",time);
        time = ui->timeEdit_2->time();
        settings2->setValue(strNewRuleName + "/Time/TIME2",time);
    }
    else
    {
        settings2->setValue(strNewRuleName + "/Time/enabled",false);//disabled
    }
    if(ui->chk_calendar_enabled->isChecked())
    {
        settings2->setValue(strNewRuleName + "/Calendar/enabled",true);//enabled
        if (ui->chk_calendar_not->isChecked())
            settings2->setValue(strNewRuleName + "/Calendar/NOT",true);
        else
            settings2->setValue(strNewRuleName + "/Calendar/NOT",false);
        QString keywords;
        keywords = ui->txtCalendarKeywords->text().toLower();
        settings2->setValue(strNewRuleName + "/Calendar/KEYWORDS",keywords);
    }
    else
    {
         settings2->setValue(strNewRuleName + "/Calendar/enabled",false);//disabled
    }
    settings2->sync();
    settings2->endGroup();
    if(!closeWindow)
    {
        connect(ui->buttonBox_ruleSaveCancel, SIGNAL(accepted()), this, SLOT(accept()));
        accept();
    }
}


void Rule1::on_btn_loc_fill_map_clicked()
{
    if (ui->txtlocSensitivity->text().isEmpty())
    {
         ui->txtlocSensitivity->setText("100m");
         QMessageBox msgBox;
          msgBox.setText("Location sensitivity was blank and has been set to 100m");
          msgBox.setIcon(QMessageBox::Information);
          msgBox.exec();
    }
    //convert loc sensitivity to int
    QString strlocSens;
    strlocSens = ui->txtlocSensitivity->text();
    strlocSens.chop(1);

    if (MapDialog == 0)
    {     
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

void Rule1::on_chkRunCommand_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)//enabled
    {
        ui->txtProgram2Run->setEnabled(true);
        ui->txtProgram2Run->setFocus();
    }
    else//disabled
    {
        ui->txtProgram2Run->setEnabled(false);
    }
}

void Rule1::on_chkSwitchProfile_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)//enabled
    {
        ui->cboProfiles->setEnabled(true);
        ui->cboProfiles->setFocus();
    }
    else//disabled
    {
         ui->cboProfiles->setEnabled(false);
    }
}

void Rule1::on_chk_loc_enabled_stateChanged(int arg1)
{
    bool EnableIt = false;
    if (arg1 == Qt::Checked) EnableIt = true;
    ui->txtLocLatitude->setEnabled(EnableIt);
    ui->txtLocLongitude->setEnabled(EnableIt);
    ui->txtlocSensitivity->setEnabled(EnableIt);
    ui->dial_locSensitivity->setEnabled(EnableIt);
    ui->btn_loc_fill_map->setEnabled(EnableIt);
    ui->lblRange->setEnabled(EnableIt);
    ui->lblLat->setEnabled(EnableIt);
    ui->lblLong->setEnabled(EnableIt);
}

void Rule1::on_chk_time_enabled_stateChanged(int arg1)
{
    bool EnableIt = false;
    if (arg1 == Qt::Checked) EnableIt = true;
    ui->timeEdit->setEnabled(EnableIt);
    ui->timeEdit_2->setEnabled(EnableIt);
    ui->lblTime->setEnabled(EnableIt);
}

void Rule1::on_chk_calendar_enabled_stateChanged(int arg1)
{
    bool EnableIt = false;
    if (arg1 == Qt::Checked) EnableIt = true;
    ui->txtCalendarKeywords->setEnabled(EnableIt);
    ui->lblCal->setEnabled(EnableIt);
    if (EnableIt == true) ui->txtCalendarKeywords->setFocus();
}
