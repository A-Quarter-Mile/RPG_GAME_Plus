#include "world1.h"

#include "obj.h"
#include <vector>
#include <string>
#include <QPainter>
#include "player.h"
#include "monster.h"
#include "you.h"
#include<QTime>
#include<QTimer>

world1::world1(QWidget *parent) : QWidget(parent)
{
    this->setAutoFillBackground(true);//设置父窗口背景可被覆盖填充
    this->resize(891,510);
}
void world1::paintEvent(QPaintEvent*)//绘图事件
{
    QPainter painter(this);
    painter.drawPixmap(0,0,891,510,QPixmap("://Images/1.jpeg"));
}

