TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++14

SOURCES += main.cpp \
    rummy.cpp \
    rummyinterface.cpp \
    rummyimpl.cpp \
    rummytradimpl.cpp \
    rummy500impl.cpp \
    rummyginimpl.cpp \
    player.cpp \
    table.cpp \
    deck.cpp \
    stack.cpp

HEADERS += \
    rummy.h \
    rummyinterface.h \
    rummyimpl.h \
    rummytradimpl.h \
    rummy500impl.h \
    rummyginimpl.h \
    player.h \
    table.h \
    deck.h \
    stack.h
