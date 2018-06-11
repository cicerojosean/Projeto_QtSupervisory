#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
  connect(ui->pushButton_Connect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(conectar()));
  connect(ui->pushButton_Disconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(desconectar()));
  connect(ui->pushButton_Listar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getList()));
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->lineEdit_IP->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->label_Status->setText("Connected");
    getList();
  }
  else{
    qDebug() << "Disconnected";
    ui->label_Status->setText("Disconnected");
  }
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      str = ui->listWidget->currentItem()->text();
      str = "get "+str+" 5\r\n";
      qDebug() << str;
      socket->write(str.toStdString().c_str());
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}



void MainWindow::conectar()
{
    tcpConnect();
}

void MainWindow::desconectar()
{
    socket->disconnectFromHost();
    qDebug() << "Disconnected";
    ui->label_Status->setText("Disconnected");
}


void MainWindow::getList(){
  QString str;
  qDebug() << "to list servers...";
  ui->listWidget->clear();
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("list");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        ui->listWidget->addItem(str);
        qDebug() << str;
        }
      }
    }
  }


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
