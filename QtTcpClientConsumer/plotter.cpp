#include "plotter.h"

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}


void Plotter::timerEvent(QTimerEvent *event)
{
    repaint();
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter desenho(this);
    QBrush brush;
    QPen pen;
    int x1=0;
    int y1=height()/2;
    int x2,y2;
    desenho.setRenderHint(QPainter::Antialiasing);

    brush.setColor(Qt::blue);
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(Qt::red);
    pen.setWidth(5);

    desenho.setBrush(brush);
    desenho.setPen(pen);
    //desenho.drawRect(5,5,104,115);
    desenho.drawRect(0,0,width(),height());

    pen.setColor(Qt::yellow);
    pen.setWidth(3);
    desenho.setPen(pen);
    desenho.drawLine(0,height()/2,width(),height()/2);

    pen.setColor(Qt::green);
    desenho.setPen(pen);


}

