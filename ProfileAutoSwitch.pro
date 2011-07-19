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
    INCLUDEPATH += /usr/include/profiled \
                 /usr/include/dbus-1.0 \
                 /usr/lib/dbus-1.0/include \
                 /opt/qtm12/
} else {
    simulator {
    CONFIG += mobility
    #no idea what to do for this...
    } else {
    #harmattan (or symbian). Why can't we just get an environment macro for harmattan? >:(
    CONFIG += mobility
    #conflict in some dbus stuff i need from glib-2.0 which is the only way to set active profile in harmattan at this time >:(
   # CONFIG += no_keywords
    INCLUDEPATH += /usr/include/glib-2.0 \
                   /usr/lib/glib-2.0/include
    }
}


#gps
MOBILITY += location
#profiles (read only?? whyyyyyyyy); SystemAlignedTimer
MOBILITY += systeminfo
#calendar
MOBILITY += organizer
#gconf
MOBILITY += publishsubscribe

equals(QT_MAJOR_VERSION, 4):lessThan(QT_MINOR_VERSION, 7){
    MOBILITY += bearer
#    INCLUDEPATH += ../../src/bearer
} else {
    # use Bearer Management classes in QtNetwork module
}


QT += xml network svg
#QT += dbus

OTHER_FILES += \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog

RESOURCES += \
    ProfileAutoSwitch.qrc
