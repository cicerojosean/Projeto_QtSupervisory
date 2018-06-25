#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <vector>

using namespace std;

namespace Ui {
class MainWindow;
}
/**
 * @brief The MainWindow class: é a classe principal do programa consumidor
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow(); 
  void tcpConnect();

  void timerEvent(QTimerEvent *time);

public slots:
  /**
   * @brief getData: Método para obtenção dos dados de um cliente que se conectou em um servidor especificado
   */
  void getData();
  /**
   * @brief conectar: Método para conectar o programa ao Servidor
   * @detail: Necessário fornecer um um IP para a conexão
   */
  void conectar();
  /**
   * @brief desconectar: Método para desconectar o programa do servidor.
   */
  void desconectar();
  /**
   * @brief getList: Método para listar os computadores que geraram dados ao servidor conectado.
   */
  void getList();
  /**
  /** * @brief StartTimer: Timer que define de quanto em quanto tempo os dados são apresentados no gráfico
  /** */
  void StartTimer();
  /**
   * @brief mudaTimer: Método que altera o intervalo de tempo que os dados são obtidos
   */
  void mudaTimer();
  /**
   * @brief stop: Método que para o recebimento de dados do servidor.
   */
  void stop();
  /**
   * @brief mudaIP_lista: Método utilizado para que o programa puxe a lista de IPs de um novo servidor escolhido.
   */
  void mudaIP_lista();

 signals:
vector <float> enviardados(vector <float>,vector <float>);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int time,timer=1;
  bool rodando=0;
  QString string_lista="";
};

#endif // MAINWINDOW_H
