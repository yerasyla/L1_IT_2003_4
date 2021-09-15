#ifndef IT_2003_2004_L1_CHARACTER_H
#define IT_2003_2004_L1_CHARACTER_H
#include <iostream>
using namespace std;
#include <string>
#include "Item.h"

class Character {
public:
    Character();
    void initialize(string name);
    void levelUp();
    string showStats();

    const Item &getItem() const;

    void setItem(const Item &item);
    void gainExp(int exp);

private:
    string name;
    int HP;
    int maxHP;
    int atk;
    int exp;
    int level;
    Item item;


};


#endif //IT_2003_2004_L1_CHARACTER_H
