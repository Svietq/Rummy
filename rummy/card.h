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
    Card(Suit isuit, Rank irank) : suit{isuit}, rank{irank} {}
    Suit suit;
    Rank rank;

    friend std::ostream& operator<<(std::ostream& os, const Card& card);

};



#endif // CARD_H




















