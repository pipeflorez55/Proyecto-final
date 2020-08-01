QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

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
    bala.cpp \
    circular.cpp \
    cuerpo.cpp \
    enemy.cpp \
    finalsingle.cpp \
    funcioneslogin.cpp \
    ganadorj1.cpp \
    ganadorj2.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    movible.cpp \
    multiplayer.cpp \
    myrect.cpp \
    nivel.cpp \
    pantallaf.cpp \
    pendulo.cpp

HEADERS += \
    bala.h \
    circular.h \
    cuerpo.h \
    enemy.h \
    finalsingle.h \
    funcioneslogin.h \
    ganadorj1.h \
    ganadorj2.h \
    mainwindow.h \
    menu.h \
    movible.h \
    multiplayer.h \
    myrect.h \
    nivel.h \
    pantallaf.h \
    pendulo.h

FORMS += \
    finalsingle.ui \
    ganadorj1.ui \
    ganadorj2.ui \
    mainwindow.ui \
    menu.ui \
    multiplayer.ui \
    nivel.ui \
    pantallaf.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagenes.qrc
