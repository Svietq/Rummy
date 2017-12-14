#include "rummy.h"

int main()
{
    auto &game = Rummy::get(4, Rummy::GameType::Traditional);
    game.play();
}
