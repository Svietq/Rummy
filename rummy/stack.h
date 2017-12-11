#ifndef STACK_H
#define STACK_H

#include "card.h"

class Stack
{
public:
    Stack();
    virtual Card & top_card() = 0;
    virtual void pop_card() = 0;
    virtual void push_card(const Card &) = 0;
};

#endif // STACK_H
