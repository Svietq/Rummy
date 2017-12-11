#ifndef DECKADAPTER_H
#define DECKADAPTER_H

#include "deck.h"

#include <stack>

class DeckAdapter : public Deck, public std::stack<Card>
{
public:
    DeckAdapter();
    Card & top_card() override { return std::stack<Card>::top(); }
    void pop_card() override { std::stack<Card>::pop(); }
    void push_card(const Card & icard) override { std::stack<Card>::push(icard); }
};

#endif // DECKADAPTER_H
