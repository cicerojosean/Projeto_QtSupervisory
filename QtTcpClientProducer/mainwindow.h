#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTime>


namespace Ui {
class MainWindow;
}

/**
 * @brief A Classe MainWindow é a classe principal do Cliente_Produtor
 * @details Ela irá gerar dados aleatório de acordo com limites e timing estabelecidos pelo usuário.
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:
    /**
   * @brief tcpConnect: Funcão para se conectar ao servidor
   */
  void tcpConnect();
  /**
   * @brief putData: Gera um dado e escreve no servidor
   */
  void putData();
  /**
   * @brief mudaTiming: Altera a velocidade com que os dados são gerados
   */
  void mudaTiming();
  /**
   * @brief mudaMargem: Muda os valores máximos e mínimos dos dados que serão gerados
   */
  void mudaMargem();
  /**
   * @brief comecar: Inicia a produção dos dados
   */
  void comecar();
  /**
   * @brief pausar: Pausa a produção dos dados
   */
  void pausar();
  /**
   * @brief encerrando: Desconecta a máquina
   */
  void encerrando();
  /**
   * @brief timerEvent: A cada intervalo de tempo, estabelecidado pelo Timing, será gerado um dado.
   * @param event
   */
  void timerEvent(QTimerEvent *event);


private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int timing=1;
  float maximo=21;
  float minimo=0;
  int tempo;
  bool rodando = 0;
};

#endif // MAINWINDOW_H
