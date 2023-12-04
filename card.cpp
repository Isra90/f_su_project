#include "card.h"

Card::Card() {
    sushi_type = "";
    maki_count = 0;
}


string Card::getSushiType() {
    return sushi_type;
}

int Card::getMakiCount() {
    return maki_count;
}

void Card::set_sushiType(string type){
    sushi_type = type;
}

void Card::set_makiCount(int pieces){
    maki_count = pieces;
}
