#include "rummy.h"

int main()
{
    const auto &game = Rummy::get(5, Rummy::GameType::Traditional);
    game.print_impl_type();

}
