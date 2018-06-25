#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>

using namespace std;
/**
 * @brief The Plotter class: Classe para fazer o Plot dos dados obtidos do servidor.
 */
class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    vector <float> tempo, valor;
signals:

public slots:
    /**
    * @brief receberdados: Método para o recebimento dos dados que serão lançados no gráfico.
    * @param valor_: Valor do dado obtido
    * @param tempo_: Tempo que o dado foi gerado
    */
   void receberdados(vector <float> valor_, vector <float> tempo_);

};

#endif // PLOTTER_H
