#include <iostream>
using namespace std;

#ifndef IT_2003_2004_L1_GAME_H
#define IT_2003_2004_L1_GAME_H


class Game {
public:
    Game();

    void mainMenu();

    int getOption() const;

    bool isPlaying() const;


private:
    int option; //choice of player
    bool playing; //if player is playing game?


};


#endif //IT_2003_2004_L1_GAME_H
