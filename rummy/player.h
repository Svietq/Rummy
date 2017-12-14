#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

#include <numeric>
#include <vector>

class Player
{

public:
    Player();
    static std::size_t no_of_players;
    std::size_t id;
    std::vector<Card> hand;
    void make_move() {}
};

#endif // PLAYER_H
