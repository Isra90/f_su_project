#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <fstream>
#include <string>
#include "termfuncs.h"
#include "vector.h"
#include "card.h"
#include "deck.h"
using namespace std;

class Player{
    public:

    Player();
    ~Player();
    void setPassingHand(Vector* hand);
    //void setRevealedHand(Vector* hand);
    //void pushPassingHand(Card &card);
    void pushRevealedHand(Card &card);
    Vector* getPassingHand();
    Vector* getRevealedCards();
    Deck getPassingDeck();
    Deck getRevealedDeck();
    int getScore();
    int getPuddingCount();

    private:
        Vector* passing_hand;
        Vector* revealed_hand;
        //constants
};

#endif
