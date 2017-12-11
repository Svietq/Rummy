#ifndef STACKADAPTER_H
#define STACKADAPTER_H

#include "stack.h"

#include <stack>

class StackAdapter : public Stack, private std::stack<Card>
{
public:
    StackAdapter();
    Card & top_card() override { return std::stack<Card>::top(); }
    void pop_card() override { std::stack<Card>::pop(); }
    void push_card(const Card & icard) override { std::stack<Card>::push(icard); }
};

#endif // STACKADAPTER_H
