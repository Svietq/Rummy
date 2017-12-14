#ifndef PLAYER_H
#define PLAYER_H

#include "cardgroup.h"

#include <numeric>
#include <vector>

class Player
{
    std::vector<CardGroup> hand;
public:
    Player();
    static std::size_t id;
};

#endif // PLAYER_H
