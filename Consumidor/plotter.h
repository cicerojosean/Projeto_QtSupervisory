#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>

using namespace std;

class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    vector <float> tempo, valor;
signals:

public slots:
   void receberdados(vector <float> valor_, vector <float> tempo_);

};

#endif // PLOTTER_H
