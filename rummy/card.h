#ifndef CARD_H
#define CARD_H

#include "cardgroup.h"

#include <vector>
#include <map>

class Card : public CardGroup
{
public:
    enum class Suit { Clubs, Diamonds, Hearts, Spades };
    enum class Rank  { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

    static const std::vector<Suit> v_suit;
    static const std::vector<Rank> v_rank;
    static const std::map< Suit, std::string > suit_to_string;
    static const std::map< Rank, std::string > rank_to_string;

    Card(){}
    Card(Suit isuite, Rank irank) : suite{isuite}, rank{irank} {}
    Suit suite;
    Rank rank;

};

#endif // CARD_H
