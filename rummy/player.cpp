#include "player.h"

#include <iostream>

std::size_t Player::id = 0;

Player::Player()
{
    std::cout << "I am player with id: " << id << '\n';
    id++;
}
