#ifndef RUMMY_H
#define RUMMY_H

#include "rummyinterface.h"

#include <numeric>
#include <string>

class Rummy : public RummyInterface
{
    Rummy(std::size_t n, GameType type);
    Rummy(const Rummy &iclass){instance_ = iclass.instance_;}
    Rummy &operator=(const Rummy &iclass);
    ~Rummy() {}

    static Rummy *instance_;

    std::size_t no_of_players;

public:
    static Rummy &get(std::size_t n, GameType type_of_game);
    void play() override {}
    void print_impl_type() const;

};

#endif // RUMMY_H


