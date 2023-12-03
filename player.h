#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <fstream>
#include <string>
#include "termfuncs.h"
#include "vector.h"
#include "card.h"
using namespace std;

class Player{
    public:

    Player();
    ~Player();
    Vector* getPassingHand();
    Vector* getRevealedCards();
    int getScore();
    int getPuddingCount();

    private:
        Vector* hand;
        //constants
};

#endif
