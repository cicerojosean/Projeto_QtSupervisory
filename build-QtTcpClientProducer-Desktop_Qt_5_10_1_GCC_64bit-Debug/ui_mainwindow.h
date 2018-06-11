/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowserIP;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser_Execucao;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_Disconnect;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderMinimo;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcdNumberMinimo;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderMaximo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumberMaximo;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBoxTiming;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonStart;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonStop;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelStatus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(544, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowserIP = new QTextBrowser(centralWidget);
        textBrowserIP->setObjectName(QStringLiteral("textBrowserIP"));

        gridLayout->addWidget(textBrowserIP, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        textBrowser_Execucao = new QTextBrowser(centralWidget);
        textBrowser_Execucao->setObjectName(QStringLiteral("textBrowser_Execucao"));

        gridLayout->addWidget(textBrowser_Execucao, 0, 3, 6, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout->addWidget(pushButtonConnect);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_Disconnect = new QPushButton(centralWidget);
        pushButton_Disconnect->setObjectName(QStringLiteral("pushButton_Disconnect"));

        horizontalLayout->addWidget(pushButton_Disconnect);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSliderMinimo = new QSlider(centralWidget);
        horizontalSliderMinimo->setObjectName(QStringLiteral("horizontalSliderMinimo"));
        horizontalSliderMinimo->setMaximum(20);
        horizontalSliderMinimo->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderMinimo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lcdNumberMinimo = new QLCDNumber(centralWidget);
        lcdNumberMinimo->setObjectName(QStringLiteral("lcdNumberMinimo"));

        verticalLayout->addWidget(lcdNumberMinimo);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSliderMaximo = new QSlider(centralWidget);
        horizontalSliderMaximo->setObjectName(QStringLiteral("horizontalSliderMaximo"));
        horizontalSliderMaximo->setMinimum(21);
        horizontalSliderMaximo->setMaximum(30);
        horizontalSliderMaximo->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderMaximo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lcdNumberMaximo = new QLCDNumber(centralWidget);
        lcdNumberMaximo->setObjectName(QStringLiteral("lcdNumberMaximo"));
        lcdNumberMaximo->setProperty("value", QVariant(21));

        verticalLayout_2->addWidget(lcdNumberMaximo);


        horizontalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        spinBoxTiming = new QSpinBox(centralWidget);
        spinBoxTiming->setObjectName(QStringLiteral("spinBoxTiming"));
        spinBoxTiming->setMinimum(1);
        spinBoxTiming->setMaximum(10);

        horizontalLayout_4->addWidget(spinBoxTiming);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 4, 1, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout_5->addWidget(pushButtonStart);

        horizontalSpacer_8 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        horizontalLayout_5->addWidget(pushButtonStop);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 5, 1, 1, 2);

        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        gridLayout->addWidget(labelStatus, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 544, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonConnect, SIGNAL(clicked()), textBrowserIP, SLOT(show()));
        QObject::connect(horizontalSliderMinimo, SIGNAL(valueChanged(int)), lcdNumberMinimo, SLOT(display(int)));
        QObject::connect(horizontalSliderMaximo, SIGNAL(valueChanged(int)), lcdNumberMaximo, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        pushButton_Disconnect->setText(QApplication::translate("MainWindow", "Desconectar", nullptr));
        label->setText(QApplication::translate("MainWindow", "Minimo", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "M\303\241ximo", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        labelStatus->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
