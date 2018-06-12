#ifndef YOU_H
#define YOU_H
#include"obj.h"
#include"player.h"


class you:public player
{
public:
    you(){}
    ~you(){}
    void move(int direction, int steps=1);
    void set_blood(int blood_=100){blood=blood_;}
    void reset_blood(){blood=100;}
    void changedirection(int a){direction=a;}
    void changeaction(int aa){action=aa;}
private:
    int direction;
    int action;
};

#endif // YOU_H
