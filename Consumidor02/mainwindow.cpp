#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <sstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);

    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(StartTimer()));
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
    connect (this,
             SIGNAL(enviardados(vector<float>,vector<float>)),
             ui->widget,
             SLOT(receberdados(vector<float>,vector<float>)));
    connect(ui->spinBoxTimer,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(mudaTimer()));
    connect(ui->pushButtonGet_Stop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stop()));
    connect(ui->listWidget,
            SIGNAL(itemClicked(QListWidgetItem*)),
            this,
            SLOT(mudaIP_lista()));
}

void MainWindow::StartTimer()
{
    if(rodando==0){
        time = startTimer(1000*timer);
        rodando=1;
    }
}

void MainWindow::mudaTimer()
{

    timer=ui->spinBoxTimer->value();
    if(rodando==1)
    {
        killTimer(time);
        time = startTimer(1000*timer);
    }
}

void MainWindow::stop()
{
    if(rodando==1)
    {
        killTimer(time);
        rodando=0;
    }
}

void MainWindow::mudaIP_lista()
{
    qDebug()<<"mudou IP de receber dados";
    string_lista=ui->listWidget->currentItem()->text();
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
    vector <qint64> auxtempo;
    qint64 thetime;
    vector <float> tempo, valor;
    qDebug() << "to get data...";
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            qDebug() << "reading...";
            qDebug() <<string_lista;
            if(string_lista!=""){
                str = "get "+string_lista+" "+ QVariant(ui->horizontalSlider_dados->value()).toString();+"\r\n";
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
                        auxtempo.push_back(thetime);
                        str = list.at(1);
                        valor.push_back(str.toFloat());
                        qDebug() << thetime << ": " << str;
                    }
                }

                for(int i=0; i<auxtempo.size() ; i++){
                    tempo.push_back((float)(auxtempo[i]-auxtempo[0])/(float)(auxtempo[auxtempo.size()-1]-auxtempo[0]));
                }

                emit enviardados(valor,tempo);
            }
            else{
                qDebug()<<"vazio";
                if(rodando==1){
                    rodando=0;
                    killTimer(time);
                }

            }
        }
    }
    else{
        if(rodando==1){
            killTimer(time);
            rodando=0;
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
    ui->listWidget->clear();
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



void MainWindow::timerEvent(QTimerEvent *)
{
    getData();
}

MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}
