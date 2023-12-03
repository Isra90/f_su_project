#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 
#include "termfuncs.h"
#include "card.h"
#include "vector.h"

using namespace std;

class Deck {
public:
    // // Constructor

    Card getTopCard();
    void addCard(Card &card);
    int getSize();
    //pushback to add cards
private:

    Vector* main_deck;
};

#endif
