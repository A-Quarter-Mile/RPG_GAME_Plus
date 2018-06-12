#ifndef MENU_H
#define MENU_H
#include <QWidget>
//既然继承自QWidget，肯定需要include相关的头文件
#include <QPalette>
#include <QIcon>
//这些是为了让你在显示背景图片和窗口图标，一般做游戏（自己设计UI）都要用
#include <QPushButton>
//这个库在你有鼠标事件的事后非常好用
#include <QPainter>
//如果有动画，需要包含QPainter库（如果只是显示图片可以用其他方法，但游戏一般都有动画）
#include <QDebug>
//主要用于调试代码，类似于std::cout的替代品，支持QT的数据类型。
#include <QTime>
#include <QTimer>
//和计时有关的库，做游戏也一般都要用到
#include <QMessageBox>
//如果你的游戏有弹出框，就要包含（非必须）
#include <QKeyEvent>
//如果你的游戏可以用键盘操纵，需要包含
#include <QLabel>
//可以用来显示字（也可以显示图片）
#include "world1.h"

class menu:public QWidget
{
public:
    explicit menu(QWidget *parent);
    void paintEvent(QPaintEvent*);
    ~menu(){}

private:
    //Ui::Widget *ui;
    QPushButton *ch1button;
    QPushButton *ch2button;
    //QPushButton *exitbutton;
    world1 *w1;
    //menu *m;
   //QLabel *label;
public slots:
    void ch1Slot();
    void ch2Slot();
    //void exitSlot();

};

#endif // MENU_H
