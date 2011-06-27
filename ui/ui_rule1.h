/********************************************************************************
** Form generated from reading UI file 'rule1.ui'
**
** Created: Tue Jun 21 01:50:40 2011
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
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_2;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chk_loc_enabled;
    QCheckBox *chk_loc_not;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *txtLocLongitude;
    QLabel *label_3;
    QLineEdit *txtLocLatitude;
    QPushButton *btn_loc_fill_map;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QDial *dial_locSensitivity;
    QLineEdit *lineEdit_locSensitivity;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *chk_time_enabled;
    QCheckBox *chk_time_not;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_7;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *chk_calendar_enabled;
    QCheckBox *chk_calendar_not;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QLineEdit *txtCalendarKeywords;
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 729, 511));
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
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(0, QFormLayout::LabelRole, checkBox);

        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBox_2);

        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);


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

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtLocLongitude = new QLineEdit(groupBox);
        txtLocLongitude->setObjectName(QString::fromUtf8("txtLocLongitude"));

        gridLayout->addWidget(txtLocLongitude, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txtLocLatitude = new QLineEdit(groupBox);
        txtLocLatitude->setObjectName(QString::fromUtf8("txtLocLatitude"));

        gridLayout->addWidget(txtLocLatitude, 2, 1, 1, 1);

        btn_loc_fill_map = new QPushButton(groupBox);
        btn_loc_fill_map->setObjectName(QString::fromUtf8("btn_loc_fill_map"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_loc_fill_map->sizePolicy().hasHeightForWidth());
        btn_loc_fill_map->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_loc_fill_map, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        dial_locSensitivity = new QDial(groupBox);
        dial_locSensitivity->setObjectName(QString::fromUtf8("dial_locSensitivity"));
        dial_locSensitivity->setMinimum(1);
        dial_locSensitivity->setMaximum(1000);
        dial_locSensitivity->setSliderPosition(100);
        dial_locSensitivity->setInvertedAppearance(false);
        dial_locSensitivity->setInvertedControls(false);
        dial_locSensitivity->setNotchesVisible(true);

        verticalLayout_2->addWidget(dial_locSensitivity);

        lineEdit_locSensitivity = new QLineEdit(groupBox);
        lineEdit_locSensitivity->setObjectName(QString::fromUtf8("lineEdit_locSensitivity"));
        lineEdit_locSensitivity->setMaxLength(32767);
        lineEdit_locSensitivity->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_locSensitivity);


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
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(chk_time_enabled->sizePolicy().hasHeightForWidth());
        chk_time_enabled->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(chk_time_enabled);

        chk_time_not = new QCheckBox(groupBox_2);
        chk_time_not->setObjectName(QString::fromUtf8("chk_time_not"));
        sizePolicy3.setHeightForWidth(chk_time_not->sizePolicy().hasHeightForWidth());
        chk_time_not->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(chk_time_not);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        verticalLayout_7->addWidget(timeEdit);

        timeEdit_2 = new QTimeEdit(groupBox_2);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));

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
        sizePolicy3.setHeightForWidth(chk_calendar_enabled->sizePolicy().hasHeightForWidth());
        chk_calendar_enabled->setSizePolicy(sizePolicy3);

        verticalLayout_8->addWidget(chk_calendar_enabled);

        chk_calendar_not = new QCheckBox(groupBox_3);
        chk_calendar_not->setObjectName(QString::fromUtf8("chk_calendar_not"));
        sizePolicy3.setHeightForWidth(chk_calendar_not->sizePolicy().hasHeightForWidth());
        chk_calendar_not->setSizePolicy(sizePolicy3);

        verticalLayout_8->addWidget(chk_calendar_not);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        verticalLayout_9->addWidget(label_5);

        txtCalendarKeywords = new QLineEdit(groupBox_3);
        txtCalendarKeywords->setObjectName(QString::fromUtf8("txtCalendarKeywords"));

        verticalLayout_9->addWidget(txtCalendarKeywords);


        horizontalLayout_3->addLayout(verticalLayout_9);

        groupBox_2->raise();

        verticalLayout->addWidget(groupBox_3);


        verticalLayout_12->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

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
        checkBox->setText(QApplication::translate("Rule1", "Run Program", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Rule1", "Switch Profile", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Rule1", "Location", 0, QApplication::UnicodeUTF8));
        chk_loc_enabled->setText(QApplication::translate("Rule1", "Enabled", 0, QApplication::UnicodeUTF8));
        chk_loc_not->setText(QApplication::translate("Rule1", "Not", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Rule1", "Longitude", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Rule1", "Latitude", 0, QApplication::UnicodeUTF8));
        btn_loc_fill_map->setText(QApplication::translate("Rule1", "Fill\n"
"From\n"
"Map", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Rule1", "Activate when at this location", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Rule1", "Sensitivity", 0, QApplication::UnicodeUTF8));
        lineEdit_locSensitivity->setText(QApplication::translate("Rule1", "100m", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Rule1", "Timing", 0, QApplication::UnicodeUTF8));
        chk_time_enabled->setText(QApplication::translate("Rule1", "Enabled", 0, QApplication::UnicodeUTF8));
        chk_time_not->setText(QApplication::translate("Rule1", "Not", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Rule1", "Activates between these times", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Rule1", "Calendar", 0, QApplication::UnicodeUTF8));
        chk_calendar_enabled->setText(QApplication::translate("Rule1", "Enabled", 0, QApplication::UnicodeUTF8));
        chk_calendar_not->setText(QApplication::translate("Rule1", "Not", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Rule1", "Activate when calendar shows you are scheduled for something containing the following word(s)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Rule1: public Ui_Rule1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULE1_H
