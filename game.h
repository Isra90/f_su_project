/*
 * game.h
 * COMP11 Sushi Go
 */

#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "termfuncs.h"
#include "board.h"
#include "deck.h"

#include <vector>
using namespace std;

class Game {
    public:
        //constructor/destructor
        Game(string filename, string play_chopsticks);
        ~Game();

        //main gameplay
        void playGame();

    private:
        //constants
        static const int PLAYER_COUNT = 3;
        static const int ROUNDS = 3;
        static const int CARD_HAND = 9;

        //chopsticks activated true/false
        bool play_chopsticks;

        void clean_playGame();

        //game objects
        Board board;
        Player players[PLAYER_COUNT];

        Vector* file_deck;
};

#endif
