#ifndef DECKBUILDER_H
#define DECKBUILDER_H

#include "deck.h"

#include <memory>

class DeckBuilder
{
    std::shared_ptr<Deck> deck;
public:
    DeckBuilder() {}
    DeckBuilder(const DeckBuilder &copy) : deck{std::move(copy.deck)} {}
    void complete_deck();
//    virtual void add_jokers() = 0;
    void shuffle_deck();

};

#endif // DECKBUILDER_H
