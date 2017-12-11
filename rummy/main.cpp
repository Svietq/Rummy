#include "rummy.h"

int main()
{
    const auto &game = Rummy::get(3, Rummy::GameType::Traditional);
    game.print_impl_type();

}
