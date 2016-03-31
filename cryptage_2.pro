#-------------------------------------------------
#
# Project created by QtCreator 2015-08-31T02:45:19
#
#-------------------------------------------------

QT       += core gui
QT       += widgets
CONFIG += mobility qxt
QXT     += core gui network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cryptage_2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    classes.cpp \
    chiffre_de_vernam.cpp \
    chiffrement_RSA.cpp

HEADERS  += mainwindow.h \
    classes.h \
    chiffre_de_vernam.h \
    chiffrement_RSA.h

FORMS    += mainwindow.ui

RESOURCES += \
    1.qrc


