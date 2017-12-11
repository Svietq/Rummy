#include "deckbuilder.h"
#include "card.h"

#include <algorithm>
#include <chrono>

void DeckBuilder::complete_deck()
{
    for(auto suit : Card::v_suit)
    {
        for(auto rank : Card::v_rank)
        {
            deck->push_card(Card{suit, rank});
        }
    }
}

void DeckBuilder::shuffle_deck()
{
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine eng(seed);
    std::shuffle(deck->begin(), deck->end(), eng);
}
