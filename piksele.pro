#-------------------------------------------------
#
# Project created by QtCreator 2015-03-03T00:14:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = piksele
TEMPLATE = app


SOURCES += main.cpp\
        bezi.cpp \
        bsklejany.cpp \
        elipsa.cpp \
        linia.cpp \
        mywindow.cpp \
        okrag.cpp \
        rysowanie.cpp

HEADERS  += mywindow.h \
    bezi.h \
    bsklejany.h \
    elipsa.h \
    linia.h \
    okrag.h \
    punkt.h \
    rysowanie.h

FORMS    += mywindow.ui

DISTFILES += \
    light.qss \
    night.qss
