#include "rummy.h"
#include "stackadapter.h"
#include "deckadapter.h"
#include "decktradbuilder.h"
#include "deck500builder.h"
#include "deckginbuilder.h"

Rummy *Rummy::instance_ = nullptr;

Rummy::Rummy(std::size_t no_of_players, GameType type_of_game)
{
    players.resize(no_of_players);
    rummy_impl = std::move(impl_map[type_of_game]);
    stack = std::make_unique<StackAdapter>();
    deck = std::make_unique<DeckAdapter>();
    set_builder(no_of_players, type_of_game);

}

Rummy &Rummy::operator=(const Rummy &iclass)
{
    if(this != &iclass)
        instance_ = iclass.instance_;
    return *this;
}

void Rummy::set_builder(std::size_t no_of_players, GameType type_of_game)
{
    switch(type_of_game)
    {
    case GameType::Traditional:
        deck_director = std::make_shared<DeckDirector>(DeckTradBuilder{}, no_of_players);
        break;
    case GameType::FiveHundred:
        deck_director = std::make_shared<DeckDirector>(Deck500Builder{}, no_of_players);
        break;
    case GameType::Gin:
        deck_director = std::make_shared<DeckDirector>(DeckGinBuilder{}, no_of_players);
        break;
    }
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

