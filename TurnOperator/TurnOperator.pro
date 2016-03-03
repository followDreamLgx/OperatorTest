#-------------------------------------------------
#
# Project created by QtCreator 2016-01-06T23:30:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TurnOperator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Block.cpp \
    CreateJob.cpp \
    Resourse.cpp

HEADERS  += mainwindow.h \
    Block.h \
    CreateJob.h \
    Resourse.h

FORMS    += mainwindow.ui
