#include "decktradbuilder.h"
#include "joker.h"
DeckTradBuilder::DeckTradBuilder()
{

}

void DeckTradBuilder::add_jokers()
{
    deck->push_card(Joker{});
    deck->push_card(Joker{});
}

