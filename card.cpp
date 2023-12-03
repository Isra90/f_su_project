#include "card.h"

Card::Card() {

}


string Card::getSushiType() {
    return "";
}

int Card::getMakiCount() {
    return 0;
}

void Card::set_sushiType(string type){
    sushi_type = type;
}

void Card::set_makiCount(int pieces){
    maki_count = pieces;
}
