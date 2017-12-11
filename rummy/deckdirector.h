#ifndef DECKDIRECTOR_H
#define DECKDIRECTOR_H

#include "deckbuilder.h"

#include <cmath>

class DeckDirector
{
    std::unique_ptr<DeckBuilder> builder;
    std::size_t no_of_decks;
public:
    DeckDirector(const DeckBuilder & ibuilder, std::size_t no_of_players) : builder{std::make_unique<DeckBuilder>(ibuilder)}
                                                                            { no_of_decks = std::ceil(no_of_players/2); }
    void construct();
};

#endif // DECKDIRECTOR_H
