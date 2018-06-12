#ifndef PLAYER_H
#define PLAYER_H
#include "obj.h"

class player: public Obj
{
public:
    player(){}
    ~player(){}
    void move(int direction, int steps=1);
        //direction =1,2,3,4 for 上下左右
    //获取属性值
    int get_blood() const {return blood;}
    int get_attack() const {return attack;}
    int get_defense() const {return defense;}
    //设置属性值
    virtual void set_blood(int blood_=100)=0;
    void set_attack(int attack_=10){attack=attack_;}
    void set_defense(int defense_=20){defense=defense_;}
    //增加属性值（增加装备或技能点时）
    void add_blood(int addblood){blood+=addblood;}
    void add_attack(int addattack){attack+=addattack;}
    void add_defense(int adddefense){defense+=adddefense;}
    //重置属性值（改变装备属性时）
    virtual void reset_blood(){blood=100;}
    void reset_attack(){attack=10;}
    void reset_defense(){defense=10;}
    //减少属性值（战斗时）
    void dec_blood(int decblood){blood-=decblood;}
    void dec_attack(int decattack){attack-=decattack;}
    void dec_defense(int decdefense){defense-=decdefense;}

protected:
    int blood;
    int attack;
    int defense;
};

#endif // PLAYER_H
