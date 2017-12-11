#include "card.h"

const std::vector<Card::Suit> Card::v_suit {Card::Suit::Clubs, Card::Suit::Diamonds, Card::Suit::Hearts, Card::Suit::Spades};
const std::vector<Card::Rank> Card::v_rank {Card:: Rank::Two, Card::Rank::Three, Card::Rank::Four, Card::Rank::Five,
                          Card::Rank::Six, Card::Rank::Seven, Card::Rank::Eight, Card::Rank::Nine, Card::Rank::Ten, Card::Rank::Jack,
                          Card::Rank::Queen, Card::Rank::King, Card::Rank::Ace};
