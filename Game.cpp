#include "Game.h"

Game::Game(){
    option = 0;
    playing = true;
    //some code
}

void Game::mainMenu() {
    cout<<"Main menu"<<endl<<endl;
    cout<<"1. Start"<<endl;
    cout<<"0. Quit"<<endl<<endl;

    cout<<"Choose option: "<<endl;
    cin>>option;
    switch (option) {
        case 0: playing = false; break;
        default: break;

    }


}

int Game::getOption() const{
    return option;
}

bool Game::isPlaying() const {
    return playing;
}
