#ifndef IT_2003_2004_L1_CHARACTER_H
#define IT_2003_2004_L1_CHARACTER_H
#include <iostream>
using namespace std;
#include <string>

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
    //Inventory inventory;
};


#endif //IT_2003_2004_L1_CHARACTER_H
