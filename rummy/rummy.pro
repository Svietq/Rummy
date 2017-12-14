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
    stack.cpp \
    card.cpp \
    joker.cpp \
    stackadapter.cpp \
    deckadapter.cpp \
    deckdirector.cpp \
    deckbuilder.cpp \
    decktradbuilder.cpp \
    deck500builder.cpp \
    deckginbuilder.cpp \
    cardgroup.cpp \
    cardcomposite.cpp

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
    stack.h \
    card.h \
    joker.h \
    stackadapter.h \
    deckadapter.h \
    deckdirector.h \
    deckbuilder.h \
    decktradbuilder.h \
    deck500builder.h \
    deckginbuilder.h \
    cardgroup.h \
    cardcomposite.h
