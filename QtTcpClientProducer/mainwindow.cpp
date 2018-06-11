#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->labelStatus->setText("");

    socket = new QTcpSocket(this);

    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(comecar()));
    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect()));
    connect(ui->spinBoxTiming,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(mudaTiming()));
    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(pausar()));
    connect(ui->pushButton_Disconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(encerrando()));
    connect((ui->horizontalSliderMaximo),
            SIGNAL(valueChanged(int)),
            this,
            SLOT(mudaMargem()));
    connect((ui->horizontalSliderMinimo),
            SIGNAL(valueChanged(int)),
            this,
            SLOT(mudaMargem()));
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    putData();
}


void MainWindow::comecar()
{
    if(socket->state()== QAbstractSocket::ConnectedState && rodando==0){
        rodando = 1;
        tempo = startTimer(1000*ui->spinBoxTiming->value());
        qDebug() << "comecou o Timer";
    }
    else{
        qDebug() <<"Já foi dado o Start ou não Conectou";
    }
}

void MainWindow::pausar()
{
    if(rodando == 1){
    killTimer(tempo);
    rodando = 0;
    }
}

void MainWindow::encerrando()
{
    qDebug() << "desconectaaaando";
    if(rodando == 1){
            killTimer(tempo);
            rodando = 0;
     }
    ui->labelStatus->setText("Desconectado");
    socket->disconnectFromHost();
}

void MainWindow::tcpConnect(){
    socket->connectToHost(ui->lineEdit_IP->text(),1234);
    if(socket->waitForConnected(3000)){
        ui->labelStatus->setText("Conectado");
        qDebug() << "Connected";
    }
    else{
        qDebug() << "Não conseguiu conectar - Disconnected";
        ui->labelStatus->setText("Desconectado");
    }
}

void MainWindow::putData(){
    QDateTime datetime;
    QString str;
    qint64 msecdate;

    if(socket->state()== QAbstractSocket::ConnectedState){
        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " + QString::number((float)qrand()/(RAND_MAX)*(maximo-minimo)+minimo)+"\r\n";
        qDebug() << str;
        ui->textBrowser_Execucao->append(str);
        qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
    }
}

void MainWindow::mudaTiming()
{
    if(rodando == 1){
        killTimer(tempo);
        tempo = startTimer(1000*ui->spinBoxTiming->value());
        //qDebug() << "comecou o Timer";
    }
}

void MainWindow::mudaMargem()
{
    minimo = ui->horizontalSliderMinimo->value();
    maximo = ui->horizontalSliderMaximo->value();
}

MainWindow::~MainWindow(){
    qDebug() << "Destrutor";
    delete socket;
    delete ui;
}
