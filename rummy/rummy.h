#ifndef RUMMY_H
#define RUMMY_H

#include "rummyinterface.h"
#include "player.h"
#include "table.h"
#include "deck.h"
#include "stack.h"
#include "deckdirector.h"

#include <numeric>
#include <string>
#include <vector>

class Rummy : public RummyInterface
{
    Rummy(std::size_t no_of_players, GameType type);
    Rummy(const Rummy &iclass){instance_ = iclass.instance_;}
    Rummy &operator=(const Rummy &iclass);
    ~Rummy() {}

    static Rummy *instance_;

    std::vector<Player> players;
    Table table;
    std::unique_ptr<Deck>  deck;
    std::unique_ptr<Stack> stack;
    std::unique_ptr<DeckDirector> deck_director;

    void set_builder(std::size_t no_of_players, GameType type_of_game);

public:
    static Rummy &get(std::size_t n, GameType type_of_game);
    void play() override {}
    void print_impl_type() const;

};

#endif // RUMMY_H


