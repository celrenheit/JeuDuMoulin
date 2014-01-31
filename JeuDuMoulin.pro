#-------------------------------------------------
#
# Project created by QtCreator 2014-01-29T21:26:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JeuDuMoulin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamefield.cpp \
    position.cpp \
    piece.cpp

HEADERS  += mainwindow.h \
    gamefield.h \
    position.h \
    piece.h

FORMS    += mainwindow.ui
