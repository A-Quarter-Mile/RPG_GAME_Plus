#include "menu.h"
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


menu::menu(QWidget *parent) : QWidget(parent)
{
    this->setAutoFillBackground(true);//设置父窗口背景可被覆盖填充
    this->resize(891,510);
    this->resize(891,510);//resize函数，用来设置mainWidget这个窗口的大小

    QPalette palette;
    this->setPalette(palette);
    ch1button=new QPushButton(this);
    ch1button->setIcon(QIcon("://Images/ch1.png"));
    ch1button->setIconSize(QSize(514/4,606/4));
    ch1button->setGeometry(QRect(250,300,514/4,606/4));
    ch1button->setFlat(true);
    //startbutton->setStyleSheet("border:none");
    ch2button=new QPushButton(this);
    ch2button->setIcon(QIcon("://Images/ch1.png"));
    ch2button->setIconSize(QSize(514/4,606/4));
    ch2button->setGeometry(QRect(530,300,514/4,606/4));
    ch2button->setFlat(true);
    connect(ch1button,SIGNAL(clicked()),this,SLOT(ch1Slot()));
    connect(ch2button,SIGNAL(clicked()),this,SLOT(ch2Slot()));

}
void menu::paintEvent(QPaintEvent*)//绘图事件
{
    QPainter painter(this);
    painter.drawPixmap(0,0,891,510,QPixmap("://Images/choose.jpg"));
    QFont title("幼圆",75,QFont::Bold,true);
    title.setUnderline(true);
    title.setOverline(true);
    painter.setFont(title);
    painter.setPen(Qt::white);
    painter.drawText(180,150,tr("Role Selection"));
}
void menu::ch1Slot()
{
    w1=new world1(this);
    w1->show();
}
void menu::ch2Slot()
{
    //w1=new world1(this);
    //w1->show();
}

