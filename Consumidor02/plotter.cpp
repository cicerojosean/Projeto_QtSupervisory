#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QMouseEvent>
#include <cmath>
#include <QDebug>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}


void Plotter::paintEvent(QPaintEvent *event){

  QPainter painter(this);
  QBrush brush;
  QPen pen;

  // habilita o anti aliasing (atenua o
  // efeito de serrilhado nas figuras geometricas)
  painter.setRenderHint(QPainter::Antialiasing);

  // brush com a cor amarela com preenchimento
  // solido
  brush.setColor(Qt::yellow);
  brush.setStyle(Qt::SolidPattern);
  // informa ao painter qual o pincel atual
  painter.setBrush(brush);

  // pen com cor vermelha e dois pixels de largura
  pen.setColor(Qt::red);
  pen.setWidth(2);

  // informa ao painter qual o pen atual
  painter.setPen(pen);

  // desenha um retangulo tomando toda a area
  // do componente
  painter.drawRect(0,0,width(), height());
  pen.setStyle(Qt::DotLine);
  pen.setWidth(1);
  painter.setPen(pen);
  for(float i=2.5; i<=30; i=i+2.5){
  painter.drawLine(0,height()-height()*(float)i/30.0,width(),height()-height()*(float)i/30.0);
}

  // muda o estilo do tracejado
  pen.setStyle(Qt::SolidLine);
  pen.setWidth(1);
  // desenha o seno com cor azul
  pen.setColor(Qt::black);
  // comunica ao painter a nova caneta
  painter.setPen(pen);


  for(int i=0; i<(tempo.size()-1) && tempo.size()!=0 ; i++){

  painter.drawLine(width()-width()*tempo[i],height()-height()*valor[i]/30.0,
                   width()-width()*tempo[i+1],height()-height()*valor[i+1]/30.0);

}

}

void Plotter::receberdados(vector<float> valor_, vector<float> tempo_)
{
    valor=valor_;
    tempo=tempo_;
    qDebug()<< tempo[3];
    repaint();
 }

