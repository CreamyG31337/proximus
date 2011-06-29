#ifndef RULE1_H
#define RULE1_H

#include <QDialog>
#include "mapswidget.h"
#include <QGeoServiceProvider>
#include <QtCore/QPointer>

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

private slots:
    void on_dial_locSensitivity_valueChanged(int value);
    void on_lineEdit_locSensitivity_editingFinished();
    void on_buttonBox_ruleSaveCancel_rejected();
    void on_buttonBox_ruleSaveCancel_accepted();
    void on_btn_loc_fill_map_clicked();
    void updateLatLongFromMap();

private:
    Ui::Rule1 *ui;
   // MapsWidget *MapDialog;
    MapWindow *MapDialog;
    //qint8 RuleNumber;//# of rule we are creating or editing, passed in constructor
    QPointer<QGeoPositionInfoSource> locationDataSource2;
    //MarkerManager *markerManager;
    QString strOriginalRuleName;
//    const QRegExp rx;

};

#endif // RULE1_H
