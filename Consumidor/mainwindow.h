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

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow(); 
  void tcpConnect();

  void timerEvent(QTimerEvent *time);

public slots:
  void getData();
  void conectar();
  void desconectar();
  void getList();
  void StartTimer();
  void mudaTimer();
  void stop();
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
