#-------------------------------------------------
#
# Project created by QtCreator 2015-09-26T12:35:18
#
#-------------------------------------------------

QT       += core gui
QT += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QLearn
TEMPLATE = app


SOURCES += main.cpp \
    MyRect.cpp \
    Bullet.cpp \
    Enemy.cpp \
    Game.cpp

HEADERS  += \
    MyRect.h \
    Bullet.h \
    Enemy.h \
    Game.h

FORMS    += mainwindow.ui

CONFIG += c++11
