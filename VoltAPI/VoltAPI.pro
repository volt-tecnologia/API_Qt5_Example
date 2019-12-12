QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network charts

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dlg_config_eth.cpp \
    dlgconfig_tomada.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dlg_config_eth.h \
    dlgconfig_tomada.h \
    mainwindow.h

FORMS += \
    dlg_config_eth.ui \
    dlgconfig_tomada.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    assests/calendar.png \
    assests/clock.png \
    assests/plug1.png \
    assests/plug48.png \
    assests/plug64.png \
    assests/temp.png \
    assests/uptime.png
