/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonStart;
    QLabel *label;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QLineEdit *lineEdit_IP;
    QLabel *label_Status;
    QListWidget *listWidget;
    QPushButton *pushButton_Listar;
    Plotter *widget;
    QSpinBox *spinBoxTimer;
    QPushButton *pushButtonGet_Stop;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(658, 453);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(20, 340, 91, 29));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 101, 17));
        label->setScaledContents(false);
        label->setWordWrap(false);
        pushButton_Connect = new QPushButton(centralWidget);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));
        pushButton_Connect->setGeometry(QRect(20, 70, 89, 25));
        pushButton_Disconnect = new QPushButton(centralWidget);
        pushButton_Disconnect->setObjectName(QStringLiteral("pushButton_Disconnect"));
        pushButton_Disconnect->setGeometry(QRect(130, 70, 89, 25));
        lineEdit_IP = new QLineEdit(centralWidget);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(20, 30, 201, 25));
        label_Status = new QLabel(centralWidget);
        label_Status->setObjectName(QStringLiteral("label_Status"));
        label_Status->setGeometry(QRect(20, 280, 91, 17));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 100, 201, 181));
        pushButton_Listar = new QPushButton(centralWidget);
        pushButton_Listar->setObjectName(QStringLiteral("pushButton_Listar"));
        pushButton_Listar->setGeometry(QRect(130, 290, 89, 25));
        widget = new Plotter(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(240, 10, 381, 321));
        spinBoxTimer = new QSpinBox(centralWidget);
        spinBoxTimer->setObjectName(QStringLiteral("spinBoxTimer"));
        spinBoxTimer->setGeometry(QRect(490, 350, 42, 22));
        spinBoxTimer->setMinimum(1);
        spinBoxTimer->setMaximum(10);
        pushButtonGet_Stop = new QPushButton(centralWidget);
        pushButtonGet_Stop->setObjectName(QStringLiteral("pushButtonGet_Stop"));
        pushButtonGet_Stop->setGeometry(QRect(120, 340, 91, 29));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 350, 41, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QApplication::translate("MainWindow", "IP do Servidor", nullptr));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        label_Status->setText(QApplication::translate("MainWindow", "Disconnected", nullptr));
        pushButton_Listar->setText(QApplication::translate("MainWindow", "Update", nullptr));
        pushButtonGet_Stop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Timer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
