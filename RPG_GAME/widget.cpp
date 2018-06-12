#include "widget.h"
#include "ui_widget.h"

/*Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}*/


Widget::Widget(QWidget *parent) :
    QWidget(parent)

{

    this->resize(891,510);//resize函数，用来设置mainWidget这个窗口的大小

    QPalette palette;
    this->setPalette(palette);
    startbutton=new QPushButton(this);
    startbutton->setIcon(QIcon("://Images/startbtn.png"));
    startbutton->setIconSize(QSize(75,75));
    startbutton->setGeometry(QRect(300,300,75,75));
    startbutton->setFlat(true);
    //startbutton->setStyleSheet("border:none");
    exitbutton=new QPushButton(this);
    exitbutton->setIcon(QIcon("://Images/exitbtn.png"));
    exitbutton->setIconSize(QSize(75,75));
    exitbutton->setGeometry(QRect(550,300,75,75));
    exitbutton->setFlat(true);
    connect(exitbutton,SIGNAL(clicked()),this,SLOT(exitSlot()));
    connect(startbutton,SIGNAL(clicked()),this,SLOT(startSlot()));
}
void Widget::paintEvent(QPaintEvent *p)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,891,510,QPixmap("://Images/menu.jpeg"));
    QFont title("幼圆",85,QFont::Bold,true);
    title.setUnderline(true);
    title.setOverline(true);
    painter.setFont(title);
    painter.setPen(Qt::white);
    painter.drawText(200,150,tr("Infinite War"));
}

Widget::~Widget()
{
    delete startbutton;
    delete exitbutton;
}
void Widget::exitSlot()
{
    if(QMessageBox::question(this,"退出游戏","是否退出当前游戏",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        delete this;
        exit(0);
    }
}
void Widget::startSlot()
{
    m=new menu(this);
    m->show();
    //w1=new world1(this);
    //w1->show();
}

