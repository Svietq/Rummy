#include "rummy.h"

int main()
{
    const auto &game = Rummy::get(4, Rummy::GameType::Traditional);
    game.print_impl_type();

}
