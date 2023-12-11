#include "card.h"

Card::Card() {
    sushi_type = "";
    maki_count = 0;
}

// getSushiType
// Input: None
// Description: return string sushi_type
// Output: sushi_type
string Card::getSushiType() {
    return sushi_type;
}

// getMakiCount
// Input: None
// Description: return maki count
// Output: maki_count
int Card::getMakiCount() {
    return maki_count;
}

// set_sushiType
// Input: string sushi_type
// Description: set sushi_type as string type
// Output: None
void Card::set_sushiType(string type){
    sushi_type = type;
}

// set_makiCount
// Input: string maki_count
// Description: set maki_count as string pieces
// Output: None
void Card::set_makiCount(int pieces){
    maki_count = pieces;
}
