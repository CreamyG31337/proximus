# Add files and directories to ship with the application 
# by adapting the examples below.
# file1.source = myfile
# dir1.source = mydir
DEPLOYMENTFOLDERS = # file1 dir1

symbian:TARGET.UID3 = 0xE3FF63D8


symbian: {
    TARGET.CAPABILITY = Location \
                        NetworkServices \
                        ReadUserData \
                        WriteUserData
}

SOURCES += main.cpp mainwindow.cpp \
    rule1.cpp \
    mapswidget.cpp
HEADERS += mainwindow.h \
    rule1.h \
    mapswidget.h
FORMS += mainwindow.ui \
    rule1.ui

# Please do not modify the following two lines. Required for deployment.
include(deployment.pri)
qtcAddDeployment()

maemo5 {
  CONFIG += mobility12
} else {
  CONFIG += mobility
}

#gps
MOBILITY += location
#profiles
MOBILITY += systeminfo
#calendar
#MOBILITY += organizer
#gconf
MOBILITY += publishsubscribe

equals(QT_MAJOR_VERSION, 4):lessThan(QT_MINOR_VERSION, 7){
    MOBILITY += bearer
#    INCLUDEPATH += ../../src/bearer
} else {
    # use Bearer Management classes in QtNetwork module
}


QT += xml network svg

OTHER_FILES += \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog

RESOURCES += \
    ProfileAutoSwitch.qrc
