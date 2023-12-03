/*
 * game.cpp
 * CS11 Sushi Go
 */

#include "game.h"

//constructor
Game::Game(string filename, string play_chopsticks) {
    //include chopsticks or not
    if(play_chopsticks == "true"){
        this->play_chopsticks = true;
    }else{
        this->play_chopsticks = false;
    }  

    /*-----------------------------------------------*/
    /*   TODO (Part I): FINISH SETTING UP THE GAME   */
    /*                                               */
    /*   Read from the input file to initialize the  */
    /*   deck.                                       */
    /*-----------------------------------------------*/  
    ifstream deckFile(filename);
    if (deckFile.fail()) {
        cerr << "Failed to open deck file: " << filename << endl;
        exit(EXIT_FAILURE);
    }
    //read into cards and then put them into the deck

    string line;
    //Discard first line
    deckFile >> line >> line;
    while (getline(deckFile, line)) {
        Card card;
        stringstream ss(line);
        string element;
        int index = 0;
        while (ss >> element) {
            if (index == 0) {
                card.set_sushiType(element);
            } else if (index == 1) {
                card.set_makiCount(stoi(element));
            }
        }
        file_deck.addCard(card);
    }

}

//main game loop
void Game::playGame() {

    int card_index;
    string play_on;

    //play three rounds
    for(int round = 0; round < ROUNDS; round++){
        /*   TODO (Part I): Deal 9 cards to each player          */
        Deck draw_deck;
        //select and pass all 27 cards
        for(int card = 0; card < CARD_HAND; card++) {
            Card file_deck_card = file_deck.getTopCard();
            draw_deck.addCard(file_deck_card);
            cout << "Hello" << endl;
            for(int player = 0; player < PLAYER_COUNT; player++) {
                cout << "Hellour" << endl;
                board.drawBoard(players, player);

                cout << " Player " << player + 1 << ", select a card: ";
                cin >> card_index;

                /*   TODO (Part I): Set aside selected card      */
            }
            /*   TODO (Part I): Reveal selected cards            */
            /*   TODO (Part I): Pass deck to the right           */
        }
        
        break;
        /*   TODO (Part II): Remove the above break statement    */
        /*   TODO (Part II): Update Scores                       */
        /*   TODO (Part II): Call board.drawScore(players);      */
        /*   TODO (Part II): Prompt to go on to next round       
        if(round < 2){
            cout << " End of round! Ready for Round "
                 << round + 2 << " ? (y/n): ";
            cin >> play_on;
            if(play_on != "y"){
                break;
            }
        }                                                        */

        /*   TODO (Part II): Reset for next round                */
    }

    /*   TODO (Part II): Score pudding and determine winner      */
    /*   TODO (Part II): Call board.drawWinner(players, winner); */
}

//destructor
Game::~Game() {
    /*-----------------------------------------------*/
    /*   TODO (Parts I and II): CLEAN UP THE GAME    */
    /*                                               */
    /*   Make sure you are passing valgrind.         */
    /*-----------------------------------------------*/ 
}
