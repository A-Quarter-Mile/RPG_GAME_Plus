#ifndef MONSTER_H
#define MONSTER_H
#include "obj.h"
#include"player.h"

class Monster :public player
{
public:
    Monster(){}
    ~Monster(){}
     void move(int direction, int steps=1);
     void set_blood(int blood_=20){blood=blood_;}
     void reset_blood(){blood=20;}
};

#endif // MONSTER_H
