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
        case 1: playMenu();
        default: break;

    }
}

void Game::playMenu(){
    cout<<"Game menu"<<endl<<endl;
    cout<<"1. Explore"<<endl;
    cout<<"2. Show stats"<<endl;
    cout<<"0. Quit"<<endl<<endl;

    cout<<"Choose option: "<<endl;
    cin>>option;
    switch (option) {
        case 0: break;
        case 1: break;
        case 2:  break; //TODO show stats of the Player
        default: break;

    }
}

int Game::getOption() const{
    return option;
}

bool Game::isPlaying() const {
    return playing;
}
