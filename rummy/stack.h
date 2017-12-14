#ifndef STACK_H
#define STACK_H

#include "card.h"
#include <stack>

class Stack
{
public:
    Stack();
    virtual std::stack<Card>::reference top_card() = 0;
    virtual void pop_card() = 0;
    virtual void push_card(const Card &) = 0;
    virtual bool empty() const = 0;
};

#endif // STACK_H
