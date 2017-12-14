#ifndef CARDCOMPOSITE_H
#define CARDCOMPOSITE_H

#include "cardgroup.h"

#include <vector>

class CardComposite : public CardGroup
{
    std::vector<CardGroup*> components;
public:
    CardComposite();
    void add(CardGroup & comp) { components.push_back(&comp);}
};

#endif // CARDCOMPOSITE_H
