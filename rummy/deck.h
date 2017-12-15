#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <deque>

class Deck
{
public:
    Deck();
    virtual Card & top_card() = 0;
    virtual void pop_card() = 0;
    virtual void push_card(Card &&) = 0;
    virtual std::deque<Card>::iterator begin() = 0;
    virtual std::deque<Card>::iterator end() = 0;
};

#endif // DECK_H
