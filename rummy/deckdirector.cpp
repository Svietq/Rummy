#include "deckdirector.h"


void DeckDirector::construct()
{
    for(int i = 0; i < no_of_decks; ++i)
    {
        builder->complete_deck();
//        builder->add_jokers();
//        builder->shuffle_deck();
    }
}
