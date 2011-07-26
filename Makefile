#############################################################################
# Makefile for building: ProfileAutoSwitch
# Generated by qmake (2.01a) (Qt 4.7.4) on: Tue Jul 26 00:06:50 2011
# Project:  ProfileAutoSwitch.pro
# Template: app
# Command: i:/qtsdk/madde/targets/harmattan-platform-api/bin/qmake.exe -spec ../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/default -unix CONFIG+=debug -after  OBJECTS_DIR=obj MOC_DIR=moc UI_DIR=ui RCC_DIR=rcc -o Makefile ProfileAutoSwitch.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_SVG_LIB -DQT_XML_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/default -I. -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtCore -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtNetwork -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtGui -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtXml -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtSvg -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4 -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtOrganizer -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtSystemInfo -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtLocation -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtPublishSubscribe -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4 -I../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/include/qt4/QtMobility -Imoc -Iui
LINK          = g++
LFLAGS        = -Wl,-rpath,I:/usr/lib
LIBS          = $(SUBLIBS)  -Li:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib -L/usr/lib -lQtPublishSubscribe -lQtLocation -lQtSystemInfo -lQtOrganizer -lQtSvg -lQtXml -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = i:/qtsdk/madde/targets/harmattan-platform-api/bin/qmake.exe
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = obj/

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		rule1.cpp \
		mapswidget.cpp moc/moc_mainwindow.cpp \
		moc/moc_rule1.cpp \
		moc/moc_mapswidget.cpp \
		rcc/qrc_ProfileAutoSwitch.cpp
OBJECTS       = obj/main.o \
		obj/mainwindow.o \
		obj/rule1.o \
		obj/mapswidget.o \
		obj/moc_mainwindow.o \
		obj/moc_rule1.o \
		obj/moc_mapswidget.o \
		obj/qrc_ProfileAutoSwitch.o
DIST          = ../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/g++.conf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/unix.conf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/linux.conf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/qconfig.pri \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt_functions.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt_config.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/default_pre.prf \
		deployment.pri \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/debug.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/default_post.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/mobility.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/warn_on.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/unix/thread.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/moc.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/resources.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/uic.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/yacc.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/lex.prf \
		ProfileAutoSwitch.pro
QMAKE_TARGET  = ProfileAutoSwitch
DESTDIR       = 
TARGET        = ProfileAutoSwitch

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui/ui_mainwindow.h ui/ui_rule1.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ProfileAutoSwitch.pro  ../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/default/qmake.conf ../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/g++.conf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/unix.conf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/linux.conf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/qconfig.pri \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt_functions.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt_config.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/default_pre.prf \
		deployment.pri \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/debug.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/default_post.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/mobility.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/warn_on.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/unix/thread.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/moc.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/resources.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/uic.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/yacc.prf \
		../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/lex.prf \
		i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtSvg.prl \
		i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtXml.prl \
		i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtGui.prl \
		i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtNetwork.prl \
		i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtCore.prl
	$(QMAKE) -spec ../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/default -unix CONFIG+=debug -after  OBJECTS_DIR=obj MOC_DIR=moc UI_DIR=ui RCC_DIR=rcc -o Makefile ProfileAutoSwitch.pro
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/g++.conf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/unix.conf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/common/linux.conf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/qconfig.pri:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt_functions.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt_config.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/default_pre.prf:
deployment.pri:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/debug.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/default_post.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/mobility.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/warn_on.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/qt.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/unix/thread.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/moc.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/resources.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/uic.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/yacc.prf:
../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/features/lex.prf:
i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtSvg.prl:
i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtXml.prl:
i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtGui.prl:
i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtNetwork.prl:
i:/QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec ../../QtSDK/Madde/sysroots/harmattan-meego-arm-sysroot-1122-slim/usr/share/qt4/mkspecs/default -unix CONFIG+=debug -after  OBJECTS_DIR=obj MOC_DIR=moc UI_DIR=ui RCC_DIR=rcc -o Makefile ProfileAutoSwitch.pro

dist: 
	@$(CHK_DIR_EXISTS) obj/ProfileAutoSwitch1.0.0 || $(MKDIR) obj/ProfileAutoSwitch1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) obj/ProfileAutoSwitch1.0.0/ && $(COPY_FILE) --parents mainwindow.h rule1.h mapswidget.h obj/ProfileAutoSwitch1.0.0/ && $(COPY_FILE) --parents ProfileAutoSwitch.qrc obj/ProfileAutoSwitch1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp rule1.cpp mapswidget.cpp obj/ProfileAutoSwitch1.0.0/ && $(COPY_FILE) --parents mainwindow.ui rule1.ui obj/ProfileAutoSwitch1.0.0/ && (cd `dirname obj/ProfileAutoSwitch1.0.0` && $(TAR) ProfileAutoSwitch1.0.0.tar ProfileAutoSwitch1.0.0 && $(COMPRESS) ProfileAutoSwitch1.0.0.tar) && $(MOVE) `dirname obj/ProfileAutoSwitch1.0.0`/ProfileAutoSwitch1.0.0.tar.gz . && $(DEL_FILE) -r obj/ProfileAutoSwitch1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc/moc_mainwindow.cpp moc/moc_rule1.cpp moc/moc_mapswidget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc/moc_mainwindow.cpp moc/moc_rule1.cpp moc/moc_mapswidget.cpp
moc/moc_mainwindow.cpp: rule1.h \
		mapswidget.h \
		mainwindow.h
	i:/QtSDK/Madde/targets/harmattan-platform-api/bin/moc.exe $(DEFINES) $(INCPATH) mainwindow.h -o moc/moc_mainwindow.cpp

moc/moc_rule1.cpp: mapswidget.h \
		rule1.h
	i:/QtSDK/Madde/targets/harmattan-platform-api/bin/moc.exe $(DEFINES) $(INCPATH) rule1.h -o moc/moc_rule1.cpp

moc/moc_mapswidget.cpp: mapswidget.h
	i:/QtSDK/Madde/targets/harmattan-platform-api/bin/moc.exe $(DEFINES) $(INCPATH) mapswidget.h -o moc/moc_mapswidget.cpp

compiler_rcc_make_all: rcc/qrc_ProfileAutoSwitch.cpp
compiler_rcc_clean:
	-$(DEL_FILE) rcc/qrc_ProfileAutoSwitch.cpp
rcc/qrc_ProfileAutoSwitch.cpp: ProfileAutoSwitch.qrc \
		icons/mylocation.png
	i:/QtSDK/Madde/targets/harmattan-platform-api/bin/rcc.exe -name ProfileAutoSwitch ProfileAutoSwitch.qrc -o rcc/qrc_ProfileAutoSwitch.cpp

compiler_image_collection_make_all: ui/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) ui/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui/ui_mainwindow.h ui/ui_rule1.h
compiler_uic_clean:
	-$(DEL_FILE) ui/ui_mainwindow.h ui/ui_rule1.h
ui/ui_mainwindow.h: mainwindow.ui
	i:/QtSDK/Madde/targets/harmattan-platform-api/bin/uic.exe mainwindow.ui -o ui/ui_mainwindow.h

ui/ui_rule1.h: rule1.ui
	i:/QtSDK/Madde/targets/harmattan-platform-api/bin/uic.exe rule1.ui -o ui/ui_rule1.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

obj/main.o: main.cpp mainwindow.h \
		rule1.h \
		mapswidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/main.o main.cpp

obj/mainwindow.o: mainwindow.cpp mainwindow.h \
		rule1.h \
		mapswidget.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/mainwindow.o mainwindow.cpp

obj/rule1.o: rule1.cpp rule1.h \
		mapswidget.h \
		ui_rule1.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/rule1.o rule1.cpp

obj/mapswidget.o: mapswidget.cpp mapswidget.h \
		mainwindow.h \
		rule1.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/mapswidget.o mapswidget.cpp

obj/moc_mainwindow.o: moc/moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_mainwindow.o moc/moc_mainwindow.cpp

obj/moc_rule1.o: moc/moc_rule1.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_rule1.o moc/moc_rule1.cpp

obj/moc_mapswidget.o: moc/moc_mapswidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_mapswidget.o moc/moc_mapswidget.cpp

obj/qrc_ProfileAutoSwitch.o: rcc/qrc_ProfileAutoSwitch.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/qrc_ProfileAutoSwitch.o rcc/qrc_ProfileAutoSwitch.cpp

####### Install

install_desktopfile: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/share/applications/ || $(MKDIR) $(INSTALL_ROOT)/usr/share/applications/ 
	-$(INSTALL_FILE) i:/Qt/ProfileAutoSwitch/ProfileAutoSwitch.desktop $(INSTALL_ROOT)/usr/share/applications/


uninstall_desktopfile:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/applications/ProfileAutoSwitch.desktop
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/share/applications/ 


install_icon: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/share/icons/hicolor/64x64/apps/ || $(MKDIR) $(INSTALL_ROOT)/usr/share/icons/hicolor/64x64/apps/ 
	-$(INSTALL_FILE) i:/Qt/ProfileAutoSwitch/ProfileAutoSwitch.png $(INSTALL_ROOT)/usr/share/icons/hicolor/64x64/apps/


uninstall_icon:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/icons/hicolor/64x64/apps/ProfileAutoSwitch.png
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/share/icons/hicolor/64x64/apps/ 


install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/local/bin/ || $(MKDIR) $(INSTALL_ROOT)/usr/local/bin/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/usr/local/bin/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/usr/local/bin/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/local/bin/ 


install:  install_desktopfile install_icon install_target  FORCE

uninstall: uninstall_desktopfile uninstall_icon uninstall_target   FORCE

FORCE:

