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

// setPassingHand
// Input: string passing_hand
// Description: set passing_hand as string hand
// Output: None
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

// pushRevealedHand
// Input: card
// Description: push a card onto the revealed hand vector
// Output: None
void Player::pushRevealedHand(Card &card) {
    revealed_hand->push_back(&card);
}

// getPassingHand
// Input: None
// Description: return the passing hand
// Output: passing_hand
Vector* Player::getPassingHand() {
    return passing_hand;
}

// getRevealedCards
// Input: None
// Description: return the revealed
// Output: revealed_hand
Vector* Player::getRevealedCards(){
    return revealed_hand;
}

// getsScore
// Input: 
// Description: 
// Output: 
int Player::getScore(){
    return 0;
}

// getPuddingCount
// Input:
// Description: 
// Output: 
int Player::getPuddingCount(){
    return 0;
}
