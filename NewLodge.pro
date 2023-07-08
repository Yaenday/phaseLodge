QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    address.cpp \
    cubicle.cpp \
    dictionary.cpp \
    item.cpp \
    location.cpp \
    lodge.cpp \
    main.cpp \
    mainwindow.cpp \
    master.cpp \
    player.cpp \
    referee.cpp \
    scene.cpp \
    utils.cpp

HEADERS += \
    address.h \
    cubicle.h \
    dictionary.h \
    item.h \
    location.h \
    lodge.h \
    mainwindow.h \
    master.h \
    player.h \
    referee.h \
    scene.h \
    utils.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
