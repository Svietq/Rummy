#ifndef DECKGINBUILDER_H
#define DECKGINBUILDER_H

#include "deckbuilder.h"

class DeckGinBuilder : public DeckBuilder
{
public:
    DeckGinBuilder();
    void add_jokers() override {}
};

#endif // DECKGINBUILDER_H
