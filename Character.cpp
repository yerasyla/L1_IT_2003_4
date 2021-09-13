#include "Character.h"

Character::Character() {
    name = "Player";
    HP = 0;
    maxHP = 0;
    atk = 0;
    exp = 0;
    level = 0;

}

void Character::initialize(string name){
    this->name = name;//keyword "this", helps to override variables with same naming;
    HP = 10;
    maxHP = 10;
    atk = 2;
    exp = 0;
    level = 1;

};

void Character::levelUp(){
    //exp->level->add stats;
    while (exp >= level*level*10){
        level++;
        exp=0;
        HP=HP+5;
        atk = atk+1;
    }

}

string Character::showStats(){

    string string1= "Name: "+name+"\n"+"HP: "+ to_string(HP)+"/"+ to_string(maxHP)+
            "\n"+ "Atk: "+ to_string(atk)+"\n"+"exp: "+to_string(exp)+"\n"+"level: "+to_string(level)+"\n"
            +"Item: "+ item.getName()+"\n";

    return string1;


}

const Item &Character::getItem() const {
    return item;
}

void Character::setItem(const Item &item) {
    Character::item = item;
}






