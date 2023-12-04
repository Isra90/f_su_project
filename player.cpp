#include "player.h"
#include "vector.h"

//constructor
Player::Player() {
    passing_hand = new Vector();
    revealed_hand = new Vector();
}

Player::~Player() {
    delete passing_hand;
    delete revealed_hand;
}

void Player::setPassingHand(Vector* hand) {
    //passing_hand->push_back(&card);
    passing_hand = hand;
}

/*void Player::setRevealedHand(Vector* hand) {
    revealed_hand = hand;
}*/

/*void Player::pushPassingHand(Card &card) {
    passing_hand->push_back(&card);
}*/

void Player::pushRevealedHand(Card &card) {
    revealed_hand->push_back(&card);
}

Vector* Player::getPassingHand() {
    return passing_hand;
}
Vector* Player::getRevealedCards(){
    return revealed_hand;
}

int Player::getScore(){
    return 0;
}

int Player::getPuddingCount(){
    return 0;
}

