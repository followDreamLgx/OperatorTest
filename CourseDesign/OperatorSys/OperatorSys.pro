#-------------------------------------------------
#
# Project created by QtCreator 2016-01-02T21:04:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OperatorSys
TEMPLATE = app


SOURCES += main.cpp\
    Block.cpp \
    CreateJob.cpp \
    JobControl.cpp \
    ProcessControl.cpp \
    MainWindow.cpp \
    MyLock.cpp

HEADERS  += \
    Block.h \
    CreateJob.h \
    JobControl.h \
    ProcessControl.h \
    MainWindow.h \
    MyLock.h

FORMS    += mainwindow.ui
