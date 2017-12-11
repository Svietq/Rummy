#ifndef DECK_H
#define DECK_H

#include "card.h"

class Deck
{
public:
    Deck();
    virtual Card & top_card() = 0;
    virtual void pop_card() = 0;
    virtual void push_card(const Card &) = 0;
};

#endif // DECK_H
