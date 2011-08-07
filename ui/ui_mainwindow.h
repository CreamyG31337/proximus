/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Aug 6 19:43:53 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Status;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *lblLatitude;
    QLabel *label_2;
    QLabel *lblLongitude;
    QLabel *label_3;
    QLabel *lblLastUpdatedTime;
    QLabel *lblDescrAccuracy;
    QLabel *lblAccuracy;
    QWidget *tab_Settings;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkGPSMode;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidgetRules;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnNewRule;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QPushButton *btnEnable;
    QMenuBar *menuBar;
    QMenu *menuMagic_Profile_Switcher;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(813, 430);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab_Status = new QWidget();
        tab_Status->setObjectName(QString::fromUtf8("tab_Status"));
        verticalLayout_3 = new QVBoxLayout(tab_Status);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(tab_Status);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lblLatitude = new QLabel(tab_Status);
        lblLatitude->setObjectName(QString::fromUtf8("lblLatitude"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblLatitude);

        label_2 = new QLabel(tab_Status);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lblLongitude = new QLabel(tab_Status);
        lblLongitude->setObjectName(QString::fromUtf8("lblLongitude"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblLongitude);

        label_3 = new QLabel(tab_Status);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lblLastUpdatedTime = new QLabel(tab_Status);
        lblLastUpdatedTime->setObjectName(QString::fromUtf8("lblLastUpdatedTime"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblLastUpdatedTime);

        lblDescrAccuracy = new QLabel(tab_Status);
        lblDescrAccuracy->setObjectName(QString::fromUtf8("lblDescrAccuracy"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lblDescrAccuracy);

        lblAccuracy = new QLabel(tab_Status);
        lblAccuracy->setObjectName(QString::fromUtf8("lblAccuracy"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lblAccuracy);


        verticalLayout_3->addLayout(formLayout);

        tabWidget->addTab(tab_Status, QString());
        tab_Settings = new QWidget();
        tab_Settings->setObjectName(QString::fromUtf8("tab_Settings"));
        verticalLayout_4 = new QVBoxLayout(tab_Settings);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        chkGPSMode = new QCheckBox(tab_Settings);
        chkGPSMode->setObjectName(QString::fromUtf8("chkGPSMode"));
        sizePolicy.setHeightForWidth(chkGPSMode->sizePolicy().hasHeightForWidth());
        chkGPSMode->setSizePolicy(sizePolicy);
        chkGPSMode->setChecked(true);

        verticalLayout_4->addWidget(chkGPSMode);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidgetRules = new QListWidget(tab_Settings);
        listWidgetRules->setObjectName(QString::fromUtf8("listWidgetRules"));

        horizontalLayout_2->addWidget(listWidgetRules);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnNewRule = new QPushButton(tab_Settings);
        btnNewRule->setObjectName(QString::fromUtf8("btnNewRule"));

        verticalLayout_2->addWidget(btnNewRule);

        btnEdit = new QPushButton(tab_Settings);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        verticalLayout_2->addWidget(btnEdit);

        btnDelete = new QPushButton(tab_Settings);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        verticalLayout_2->addWidget(btnDelete);

        btnEnable = new QPushButton(tab_Settings);
        btnEnable->setObjectName(QString::fromUtf8("btnEnable"));
        btnEnable->setEnabled(false);

        verticalLayout_2->addWidget(btnEnable);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_Settings, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 813, 21));
        menuMagic_Profile_Switcher = new QMenu(menuBar);
        menuMagic_Profile_Switcher->setObjectName(QString::fromUtf8("menuMagic_Profile_Switcher"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMagic_Profile_Switcher->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Latitude", 0, QApplication::UnicodeUTF8));
        lblLatitude->setText(QApplication::translate("MainWindow", "searching...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Longitude", 0, QApplication::UnicodeUTF8));
        lblLongitude->setText(QApplication::translate("MainWindow", "searching...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Last Updated", 0, QApplication::UnicodeUTF8));
        lblLastUpdatedTime->setText(QApplication::translate("MainWindow", "--", 0, QApplication::UnicodeUTF8));
        lblDescrAccuracy->setText(QApplication::translate("MainWindow", "Accuracy", 0, QApplication::UnicodeUTF8));
        lblAccuracy->setText(QApplication::translate("MainWindow", "--", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_Status), QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
        chkGPSMode->setText(QApplication::translate("MainWindow", "Only NonSatellitePositioningMethods", 0, QApplication::UnicodeUTF8));
        btnNewRule->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        btnEnable->setText(QApplication::translate("MainWindow", "Enable", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_Settings), QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        menuMagic_Profile_Switcher->setTitle(QApplication::translate("MainWindow", "Magic Profile Switcher", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
