#include "rummy.h"
#include "stackadapter.h"

Rummy *Rummy::instance_ = nullptr;

Rummy::Rummy(std::size_t no_of_players, GameType type_of_game)
{
    players.resize(no_of_players);
    rummy_impl = std::move(impl_map[type_of_game]);
    stack = std::make_unique<StackAdapter>();
}

Rummy &Rummy::operator=(const Rummy &iclass)
{
    if(this != &iclass)
        instance_ = iclass.instance_;
    return *this;
}

Rummy &Rummy::get(std::size_t n, GameType type_of_game)
{
    static Rummy temp{ n, type_of_game };
    instance_ = &temp;

    return *instance_;
}

void Rummy::print_impl_type() const
{
    rummy_impl->print_impl_type();
}

