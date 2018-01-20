TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Beverage.cpp \
    CondimentDecorator.cpp

HEADERS += \
    Beverage.h \
    CondimentDecorator.h
