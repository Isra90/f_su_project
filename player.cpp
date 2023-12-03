#include "player.h"
#include "vector.h"

//constructor
Player::Player() {
    
}

Player::~Player() {
    
}

Vector* Player::getPassingHand() {
    return hand;
}
Vector* Player::getRevealedCards(){
    return hand;
}

int Player::getScore(){
    return 0;
}

int Player::getPuddingCount(){
    return 0;
}

