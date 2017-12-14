#include "player.h"

#include <iostream>

std::size_t Player::no_of_players = 0;

Player::Player()
{
    id = no_of_players;
    no_of_players++;
}
