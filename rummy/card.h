#ifndef CARD_H
#define CARD_H


class Card
{
public:
    enum class Color { Spades, Clubs, Diamonds, Hearts };
    enum class Rank  { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };
    Card();
    Card(Color icolor, Rank irank) : color{icolor}, rank{irank} {}
    Color color;
    Rank rank;

};

#endif // CARD_H
