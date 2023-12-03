#include "deck.h"


Card Deck::getTopCard() {
    Card* card = main_deck->back();
    main_deck->pop_back();
    return *card;
}
//pushback to add a card to deck?

void Deck::addCard(Card &card) {
    return main_deck->push_back(&card);
}

int Deck::getSize() {
    return main_deck->size();
}
