#ifndef RUMMY_H
#define RUMMY_H

#include <numeric>
#include <string>

class Rummy
{
    Rummy(std::size_t n,const std::string & type) : no_of_players{n}, type_of_game{type} {}
    Rummy(const Rummy &iclass){instance_ = iclass.instance_;}
    Rummy &operator=(const Rummy &iclass);
    ~Rummy() {}

    static Rummy *instance_;

    std::size_t no_of_players;
    std::string type_of_game;

public:
    static Rummy &get(std::size_t n, const std::string & type);


};

#endif // RUMMY_H


