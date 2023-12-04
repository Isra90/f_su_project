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

    string line = "";
    //Discard first line
    deckFile >> line >> line;
    file_deck = new Vector();

    while (getline(deckFile, line)) {
        Card* card = new Card();
        stringstream ss(line);
        string element = "";
        int index = 0;
        while (ss >> element) {
            if (index == 0) {
                card->set_sushiType(element);
            } else if (index == 1) {
                card->set_makiCount(stoi(element));
            }
            index++;
        }
        index = 0;
        file_deck->push_back(card);
    }

}

//main game loop
void Game::playGame() {

    int card_index;
    string play_on;
    //play three rounds
    for (int round = 0; round < ROUNDS; round++) {

        /*   TODO (Part I): Deal 9 cards to each player          */
        for (int p = 0; p < PLAYER_COUNT; p++) {
            Vector* player_deck = new Vector();

            for (int card_count = 0; card_count < CARD_HAND; card_count++) {
                Card* file_deck_card = file_deck->back();
                file_deck->pop_back();
                player_deck->push_back(file_deck_card);
            }
            players[p].setPassingHand(player_deck);
        }
        
        //select and pass all 27 cards
        for (int card = 0; card < CARD_HAND; card++) {
            Card* revealed_cards[PLAYER_COUNT];
            for(int player = 0; player < PLAYER_COUNT; player++) {
                board.drawBoard(players, player);

                cout << " Player " << player + 1 << ", select a card: ";
                cin >> card_index;

                if (cin.fail()) {
                    cout << "INVALID INPUT: No game for you!" << endl;
                    return;
                }

                while (card_index < 1 || card_index > 9) {
                    cout << "     Please enter a valid number between 1 and 9: ";
                    cin >> card_index;
                    if (cin.fail()) {
                        cout << "INVALID INPUT: No game for you!" << endl;
                        return;
                    }
                }

                /*   TODO (Part I): Set aside selected card      */
                Card* selected = players[player].getPassingHand()->at(card_index - 1);
                players[player].getPassingHand()->erase(card_index - 1);
                revealed_cards[player] = selected;
            }
            
            /*   TODO (Part I): Reveal selected cards            */
            for(int player = 0; player < PLAYER_COUNT; player++) {
                players[player].pushRevealedHand(*revealed_cards[player]);
            }

            /*   TODO (Part I): Pass deck to the right           */
            Vector* temp = players[1].getPassingHand();
            players[1].setPassingHand(players[0].getPassingHand());
            players[2].setPassingHand(players[1].getPassingHand());
            players[0].setPassingHand(temp);
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

void Game::clean_playGame() {

}

//destructor
Game::~Game() {
    delete file_deck;
    // delete cards?
    /*-----------------------------------------------*/
    /*   TODO (Parts I and II): CLEAN UP THE GAME    */
    /*                                               */
    /*   Make sure you are passing valgrind.         */
    /*-----------------------------------------------*/ 
}
