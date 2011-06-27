/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jun 23 01:10:20 2011
**      by: Qt User Interface Compiler version 4.7.3
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
    QLabel *lblLongitude;
    QLabel *lblLatitude;
    QWidget *tab_Settings;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkGPS;
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
        lblLongitude = new QLabel(tab_Status);
        lblLongitude->setObjectName(QString::fromUtf8("lblLongitude"));
        lblLongitude->setGeometry(QRect(10, 40, 182, 13));
        lblLatitude = new QLabel(tab_Status);
        lblLatitude->setObjectName(QString::fromUtf8("lblLatitude"));
        lblLatitude->setGeometry(QRect(10, 80, 182, 13));
        tabWidget->addTab(tab_Status, QString());
        tab_Settings = new QWidget();
        tab_Settings->setObjectName(QString::fromUtf8("tab_Settings"));
        verticalLayout_4 = new QVBoxLayout(tab_Settings);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        chkGPS = new QCheckBox(tab_Settings);
        chkGPS->setObjectName(QString::fromUtf8("chkGPS"));
        sizePolicy.setHeightForWidth(chkGPS->sizePolicy().hasHeightForWidth());
        chkGPS->setSizePolicy(sizePolicy);
        chkGPS->setChecked(true);

        verticalLayout_4->addWidget(chkGPS);

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
        lblLongitude->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        lblLatitude->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_Status), QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
        chkGPS->setText(QApplication::translate("MainWindow", "Only NonSatellitePositioningMethods", 0, QApplication::UnicodeUTF8));
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
