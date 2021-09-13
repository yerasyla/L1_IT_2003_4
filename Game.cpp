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
        case 1: {
            startGame();
            playMenu();
        };
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
        case 2: {
            showStats();
            break;} //TODO show stats of the Player
        default: break;

    }
}

void Game::startGame(){
    cout<<"Enter your name: ";
    string name;
    cin>>name;
    character.initialize(name);
}

void Game::showStats(){
    cout<<character.showStats();
}

int Game::getOption() const{
    return option;
}

bool Game::isPlaying() const {
    return playing;
}
