#-------------------------------------------------
#
# Project created by QtCreator 2015-12-02T12:53:20
#
#-------------------------------------------------

QT       += core gui
QT 	 += sql xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = manager
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h \
    connection.h

FORMS    += widget.ui
