/********************************************************************************
** Form generated from reading UI file 'rule1.ui'
**
** Created: Sun Jul 10 23:27:08 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULE1_H
#define UI_RULE1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rule1
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout;
    QCheckBox *chkRunCommand;
    QLineEdit *txtProgram2Run;
    QCheckBox *chkSwitchProfile;
    QComboBox *cboProfiles;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chk_loc_enabled;
    QCheckBox *chk_loc_not;
    QGridLayout *locGridLayout;
    QLabel *lblLong;
    QLineEdit *txtLocLongitude;
    QLabel *lblLat;
    QLineEdit *txtLocLatitude;
    QPushButton *btn_loc_fill_map;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblRange;
    QDial *dial_locSensitivity;
    QLineEdit *txtlocSensitivity;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *chk_time_enabled;
    QCheckBox *chk_time_not;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblTime;
    QVBoxLayout *verticalLayout_7;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *chk_calendar_enabled;
    QCheckBox *chk_calendar_not;
    QVBoxLayout *verticalLayout_9;
    QLabel *lblCal;
    QLineEdit *txtCalendarKeywords;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *txtRuleName;
    QDialogButtonBox *buttonBox_ruleSaveCancel;

    void setupUi(QDialog *Rule1)
    {
        if (Rule1->objectName().isEmpty())
            Rule1->setObjectName(QString::fromUtf8("Rule1"));
        Rule1->resize(749, 560);
        verticalLayout_3 = new QVBoxLayout(Rule1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(Rule1);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 729, 483));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        chkRunCommand = new QCheckBox(groupBox_4);
        chkRunCommand->setObjectName(QString::fromUtf8("chkRunCommand"));

        formLayout->setWidget(0, QFormLayout::LabelRole, chkRunCommand);

        txtProgram2Run = new QLineEdit(groupBox_4);
        txtProgram2Run->setObjectName(QString::fromUtf8("txtProgram2Run"));
        txtProgram2Run->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtProgram2Run);

        chkSwitchProfile = new QCheckBox(groupBox_4);
        chkSwitchProfile->setObjectName(QString::fromUtf8("chkSwitchProfile"));

        formLayout->setWidget(1, QFormLayout::LabelRole, chkSwitchProfile);

        cboProfiles = new QComboBox(groupBox_4);
        cboProfiles->setObjectName(QString::fromUtf8("cboProfiles"));
        cboProfiles->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, cboProfiles);


        horizontalLayout_6->addLayout(formLayout);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        chk_loc_enabled = new QCheckBox(groupBox);
        chk_loc_enabled->setObjectName(QString::fromUtf8("chk_loc_enabled"));

        verticalLayout_4->addWidget(chk_loc_enabled);

        chk_loc_not = new QCheckBox(groupBox);
        chk_loc_not->setObjectName(QString::fromUtf8("chk_loc_not"));

        verticalLayout_4->addWidget(chk_loc_not);


        horizontalLayout->addLayout(verticalLayout_4);

        locGridLayout = new QGridLayout();
        locGridLayout->setObjectName(QString::fromUtf8("locGridLayout"));
        lblLong = new QLabel(groupBox);
        lblLong->setObjectName(QString::fromUtf8("lblLong"));
        lblLong->setEnabled(false);

        locGridLayout->addWidget(lblLong, 0, 0, 1, 1);

        txtLocLongitude = new QLineEdit(groupBox);
        txtLocLongitude->setObjectName(QString::fromUtf8("txtLocLongitude"));
        txtLocLongitude->setEnabled(false);
        txtLocLongitude->setMaxLength(12);

        locGridLayout->addWidget(txtLocLongitude, 0, 1, 1, 1);

        lblLat = new QLabel(groupBox);
        lblLat->setObjectName(QString::fromUtf8("lblLat"));
        lblLat->setEnabled(false);

        locGridLayout->addWidget(lblLat, 1, 0, 1, 1);

        txtLocLatitude = new QLineEdit(groupBox);
        txtLocLatitude->setObjectName(QString::fromUtf8("txtLocLatitude"));
        txtLocLatitude->setEnabled(false);
        txtLocLatitude->setMaxLength(12);

        locGridLayout->addWidget(txtLocLatitude, 1, 1, 1, 1);

        btn_loc_fill_map = new QPushButton(groupBox);
        btn_loc_fill_map->setObjectName(QString::fromUtf8("btn_loc_fill_map"));
        btn_loc_fill_map->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_loc_fill_map->sizePolicy().hasHeightForWidth());
        btn_loc_fill_map->setSizePolicy(sizePolicy1);

        locGridLayout->addWidget(btn_loc_fill_map, 2, 1, 1, 1);


        horizontalLayout->addLayout(locGridLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblRange = new QLabel(groupBox);
        lblRange->setObjectName(QString::fromUtf8("lblRange"));
        lblRange->setEnabled(false);
        lblRange->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblRange);

        dial_locSensitivity = new QDial(groupBox);
        dial_locSensitivity->setObjectName(QString::fromUtf8("dial_locSensitivity"));
        dial_locSensitivity->setEnabled(false);
        dial_locSensitivity->setMinimum(1);
        dial_locSensitivity->setMaximum(1000);
        dial_locSensitivity->setSliderPosition(100);
        dial_locSensitivity->setInvertedAppearance(false);
        dial_locSensitivity->setInvertedControls(false);
        dial_locSensitivity->setNotchesVisible(true);

        verticalLayout_2->addWidget(dial_locSensitivity);

        txtlocSensitivity = new QLineEdit(groupBox);
        txtlocSensitivity->setObjectName(QString::fromUtf8("txtlocSensitivity"));
        txtlocSensitivity->setEnabled(false);
        txtlocSensitivity->setMaxLength(5);
        txtlocSensitivity->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(txtlocSensitivity);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        chk_time_enabled = new QCheckBox(groupBox_2);
        chk_time_enabled->setObjectName(QString::fromUtf8("chk_time_enabled"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chk_time_enabled->sizePolicy().hasHeightForWidth());
        chk_time_enabled->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(chk_time_enabled);

        chk_time_not = new QCheckBox(groupBox_2);
        chk_time_not->setObjectName(QString::fromUtf8("chk_time_not"));
        sizePolicy2.setHeightForWidth(chk_time_not->sizePolicy().hasHeightForWidth());
        chk_time_not->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(chk_time_not);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lblTime = new QLabel(groupBox_2);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        lblTime->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblTime->sizePolicy().hasHeightForWidth());
        lblTime->setSizePolicy(sizePolicy3);
        lblTime->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lblTime);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);

        verticalLayout_7->addWidget(timeEdit);

        timeEdit_2 = new QTimeEdit(groupBox_2);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));
        timeEdit_2->setEnabled(false);

        verticalLayout_7->addWidget(timeEdit_2);


        verticalLayout_5->addLayout(verticalLayout_7);


        horizontalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        chk_calendar_enabled = new QCheckBox(groupBox_3);
        chk_calendar_enabled->setObjectName(QString::fromUtf8("chk_calendar_enabled"));
        sizePolicy2.setHeightForWidth(chk_calendar_enabled->sizePolicy().hasHeightForWidth());
        chk_calendar_enabled->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(chk_calendar_enabled);

        chk_calendar_not = new QCheckBox(groupBox_3);
        chk_calendar_not->setObjectName(QString::fromUtf8("chk_calendar_not"));
        sizePolicy2.setHeightForWidth(chk_calendar_not->sizePolicy().hasHeightForWidth());
        chk_calendar_not->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(chk_calendar_not);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lblCal = new QLabel(groupBox_3);
        lblCal->setObjectName(QString::fromUtf8("lblCal"));
        lblCal->setEnabled(false);
        lblCal->setAlignment(Qt::AlignCenter);
        lblCal->setWordWrap(true);

        verticalLayout_9->addWidget(lblCal);

        txtCalendarKeywords = new QLineEdit(groupBox_3);
        txtCalendarKeywords->setObjectName(QString::fromUtf8("txtCalendarKeywords"));
        txtCalendarKeywords->setEnabled(false);
        txtCalendarKeywords->setMaxLength(255);

        verticalLayout_9->addWidget(txtCalendarKeywords);


        horizontalLayout_3->addLayout(verticalLayout_9);


        verticalLayout->addWidget(groupBox_3);


        verticalLayout_12->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(Rule1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        txtRuleName = new QLineEdit(Rule1);
        txtRuleName->setObjectName(QString::fromUtf8("txtRuleName"));
        txtRuleName->setMaxLength(20);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtRuleName);


        verticalLayout_3->addLayout(formLayout_2);

        buttonBox_ruleSaveCancel = new QDialogButtonBox(Rule1);
        buttonBox_ruleSaveCancel->setObjectName(QString::fromUtf8("buttonBox_ruleSaveCancel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBox_ruleSaveCancel->sizePolicy().hasHeightForWidth());
        buttonBox_ruleSaveCancel->setSizePolicy(sizePolicy4);
        buttonBox_ruleSaveCancel->setLayoutDirection(Qt::LeftToRight);
        buttonBox_ruleSaveCancel->setOrientation(Qt::Horizontal);
        buttonBox_ruleSaveCancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::SaveAll);
        buttonBox_ruleSaveCancel->setCenterButtons(true);

        verticalLayout_3->addWidget(buttonBox_ruleSaveCancel);


        retranslateUi(Rule1);
        QObject::connect(buttonBox_ruleSaveCancel, SIGNAL(accepted()), Rule1, SLOT(accept()));
        QObject::connect(buttonBox_ruleSaveCancel, SIGNAL(rejected()), Rule1, SLOT(reject()));

        QMetaObject::connectSlotsByName(Rule1);
    } // setupUi

    void retranslateUi(QDialog *Rule1)
    {
        Rule1->setWindowTitle(QApplication::translate("Rule1", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Rule1", "Action to take", 0, QApplication::UnicodeUTF8));
        chkRunCommand->setText(QApplication::translate("Rule1", "Run Command", 0, QApplication::UnicodeUTF8));
        chkSwitchProfile->setText(QApplication::translate("Rule1", "Switch Profile", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Rule1", "Location", 0, QApplication::UnicodeUTF8));
        chk_loc_enabled->setText(QApplication::translate("Rule1", "Enabled", 0, QApplication::UnicodeUTF8));
        chk_loc_not->setText(QApplication::translate("Rule1", "Not", 0, QApplication::UnicodeUTF8));
        lblLong->setText(QApplication::translate("Rule1", "Longitude", 0, QApplication::UnicodeUTF8));
        lblLat->setText(QApplication::translate("Rule1", "Latitude", 0, QApplication::UnicodeUTF8));
        btn_loc_fill_map->setText(QApplication::translate("Rule1", "Fill\n"
"From\n"
"Map", 0, QApplication::UnicodeUTF8));
        lblRange->setText(QApplication::translate("Rule1", "Range", 0, QApplication::UnicodeUTF8));
        txtlocSensitivity->setText(QApplication::translate("Rule1", "100m", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Rule1", "Timing", 0, QApplication::UnicodeUTF8));
        chk_time_enabled->setText(QApplication::translate("Rule1", "Enabled", 0, QApplication::UnicodeUTF8));
        chk_time_not->setText(QApplication::translate("Rule1", "Not", 0, QApplication::UnicodeUTF8));
        lblTime->setText(QApplication::translate("Rule1", "Between these times", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Rule1", "Calendar", 0, QApplication::UnicodeUTF8));
        chk_calendar_enabled->setText(QApplication::translate("Rule1", "Enabled", 0, QApplication::UnicodeUTF8));
        chk_calendar_not->setText(QApplication::translate("Rule1", "Not", 0, QApplication::UnicodeUTF8));
        lblCal->setText(QApplication::translate("Rule1", "Activate when calendar event matches the following word(s)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Rule1", "Name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Rule1: public Ui_Rule1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULE1_H
