#ifndef IT_2003_2004_L1_CHARACTER_H
#define IT_2003_2004_L1_CHARACTER_H
#include "Game.h"

class Character {
public:
    Character();
    void initialize(string name);
    void levelUp();
    string showStats();

private:
    string name;
    int HP;
    int maxHP;
    int atk;
    int exp;
    int level;
};


#endif //IT_2003_2004_L1_CHARACTER_H
