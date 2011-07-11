#ifndef RULE1_H
#define RULE1_H

#include <QDialog>
#include "mapswidget.h"
#include <QGeoServiceProvider>
#include <QtCore/QPointer>


#if defined(Q_WS_MAEMO_5)
    #include <libprofile.h>
#else
    #if defined (Q_WS_SIMULATOR)
        //i dunno what to do in this case.
    #else //harmattan or symbian...
        #undef signals
        #include <gio/gio.h>
        //or #include <QtDBus>
    #endif
#endif

QTM_USE_NAMESPACE

namespace Ui {
    class Rule1;
}

class Rule1 : public QDialog
{
    Q_OBJECT

public:
    explicit Rule1(QWidget *parent = 0, QString RuleName = "Rule", QPointer<QGeoPositionInfoSource> locationDataSource = 0);
    ~Rule1();

private Q_SLOTS:
    void on_dial_locSensitivity_valueChanged(int value);
    void on_txtlocSensitivity_editingFinished();
    void on_buttonBox_ruleSaveCancel_rejected();
    void on_buttonBox_ruleSaveCancel_accepted();
    void on_btn_loc_fill_map_clicked();
    void updateLatLongFromMap();
    void readCurrentSettings();
    void on_chkRunCommand_stateChanged(int arg1);
    void on_chkSwitchProfile_stateChanged(int arg1);
    void on_chk_loc_enabled_stateChanged(int arg1);
    void on_chk_time_enabled_stateChanged(int arg1);
    void on_chk_calendar_enabled_stateChanged(int arg1);

private:
    Ui::Rule1 *ui;
    QPointer<MapWindow> MapDialog;
    QPointer<QGeoPositionInfoSource> locationDataSource2;
    QString strOriginalRuleName;
};

#endif // RULE1_H
