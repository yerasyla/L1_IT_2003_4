#include <iostream>
using namespace std;
#include <string>
#include "Character.h"

#ifndef IT_2003_2004_L1_GAME_H
#define IT_2003_2004_L1_GAME_H


class Game {
public:
    Game();
    void mainMenu();
    int getOption() const;
    bool isPlaying() const;
    void playMenu();

private:
    int option; //choice of player
    bool playing; //if player is playing game?
    Character character;


    void showStats();

    void startGame();

    void exploreMenu();

    void getItem();
};


#endif //IT_2003_2004_L1_GAME_H
