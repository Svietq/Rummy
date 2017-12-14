#include "card.h"

const std::vector<Card::Suit> Card::v_suit {Card::Suit::Clubs, Card::Suit::Diamonds, Card::Suit::Hearts, Card::Suit::Spades};
const std::vector<Card::Rank> Card::v_rank {Card::Rank::Two, Card::Rank::Three, Card::Rank::Four, Card::Rank::Five,
                          Card::Rank::Six, Card::Rank::Seven, Card::Rank::Eight, Card::Rank::Nine, Card::Rank::Ten, Card::Rank::Jack,
                          Card::Rank::Queen, Card::Rank::King, Card::Rank::Ace};

const std::map< Card::Suit, std::string > Card::suit_to_string
{
    {Card::Suit::Clubs,    "Clubs"},
    {Card::Suit::Diamonds, "Diamonds"},
    {Card::Suit::Hearts,   "Hearts"},
    {Card::Suit::Spades,   "Spades"}
};

const std::map< Card::Rank, std::string > Card::rank_to_string
{
    {Card::Rank::Two,    "Two"},
    {Card::Rank::Three,  "Three"},
    {Card::Rank::Four,   "Four"},
    {Card::Rank::Five,   "Five"},
    {Card::Rank::Six,    "Six"},
    {Card::Rank::Seven,  "Seven"},
    {Card::Rank::Eight,  "Eight"},
    {Card::Rank::Nine,   "Nine"},
    {Card::Rank::Ten,    "Ten"},
    {Card::Rank::Jack,   "Jack"},
    {Card::Rank::Queen,  "Queen"},
    {Card::Rank::King,   "King"},
    {Card::Rank::Ace,    "Ace"}
};
