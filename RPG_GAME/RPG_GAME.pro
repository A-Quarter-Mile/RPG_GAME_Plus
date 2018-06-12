#-------------------------------------------------
#
# Project created by QtCreator 2018-06-09T20:43:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RPG_GAME
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        widget.cpp \
    world1.cpp \
    world2.cpp \
    world3.cpp \
    player.cpp \
    monster.cpp \
    you.cpp \
    obj.cpp \
    icon.cpp \
    menu.cpp

HEADERS  += widget.h \
    world1.h \
    world2.h \
    world3.h \
    player.h \
    monster.h \
    you.h \
    obj.h \
    icon.h \
    menu.h

FORMS    += widget.ui

RESOURCES += \
    images.qrc