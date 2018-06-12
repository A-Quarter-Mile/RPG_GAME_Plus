#ifndef WIDGET_H
#define WIDGET_H
#include "world1.h"
#include "world2.h"
#include "world3.h"
#include "menu.h"
#include <QWidget>
#include <QIcon>
#include <QPalette>
#include <QBrush>
#include <QPixmap>
#include <QPushButton>
#include <QMessageBox>
#include <QLabel>
#include <QFont>
#include <QWidget>

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *p);
    ~Widget();

private:
    Ui::Widget *ui;
    QPushButton *startbutton;
    QPushButton *exitbutton;
    //world1 *w1;
    menu *m;
    QLabel *label;
public slots:
    void startSlot();
    void exitSlot();
};

#endif // WIDGET_H
