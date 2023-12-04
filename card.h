#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 
#include "termfuncs.h"

using namespace std;

class Card {
public:
    // // Constructor
    Card();
    //Card(string sushi_type); 
    void set_makiCount(int pieces);
    void set_sushiType(string type);
    string getSushiType();
    int getMakiCount();


    
    
private:
    // int suit;
    // int number;
    string sushi_type;
    int maki_count;
};

#endif
