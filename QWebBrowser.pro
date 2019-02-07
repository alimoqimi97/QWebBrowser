#-------------------------------------------------
#
# Project created by QtCreator 2019-01-09T09:20:55
#
#-------------------------------------------------

QT       += core gui

QT       += network
QT       += webkit
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QWebBrowser
TEMPLATE = app


CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
