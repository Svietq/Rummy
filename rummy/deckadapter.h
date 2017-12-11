#ifndef DECKADAPTER_H
#define DECKADAPTER_H

#include "deck.h"

#include <deque>

class DeckAdapter : public Deck, public std::deque<Card>
{
public:
    DeckAdapter();
    Card & top_card() override { return std::deque<Card>::back(); }
    void pop_card() override { std::deque<Card>::pop_back(); }
    void push_card( const Card & icard ) override { std::deque<Card>::push_back(icard); }
    Card * begin() { return static_cast<Card*>(std::deque<Card>::begin()); }
    Card * end() { return static_cast<Card*>(std::deque<Card>::end()); }
};

#endif // DECKADAPTER_H
