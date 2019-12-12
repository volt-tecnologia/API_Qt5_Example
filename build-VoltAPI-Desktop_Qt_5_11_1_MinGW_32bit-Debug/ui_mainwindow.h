/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTableWidget *tbeth;
    QPushButton *btn_config_eth;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnt1;
    QPushButton *btnt2;
    QPushButton *btnt3;
    QPushButton *btnt4;
    QPushButton *btnt5;
    QPushButton *btnt6;
    QPushButton *btnt7;
    QPushButton *btnt8;
    QPushButton *btnt9;
    QPushButton *btnt10;
    QCheckBox *chkreboot;
    QPushButton *btnhab_all;
    QPushButton *btndesab_all;
    QPushButton *btn_config_tomada;
    QWidget *gridLayoutWidget;
    QGridLayout *grid2;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLabel *lbluptime;
    QGroupBox *groupBox_4;
    QLabel *label_2;
    QLabel *lbltemperatura;
    QGroupBox *groupBox_5;
    QLabel *label_3;
    QLabel *lblcalendario;
    QGroupBox *groupBox_6;
    QLabel *label_5;
    QLabel *lblrelogio;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1338, 775);
        MainWindow->setMinimumSize(QSize(1338, 775));
        MainWindow->setMaximumSize(QSize(1338, 775));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 431, 321));
        tbeth = new QTableWidget(groupBox);
        tbeth->setObjectName(QStringLiteral("tbeth"));
        tbeth->setGeometry(QRect(20, 30, 371, 231));
        tbeth->setStyleSheet(QStringLiteral("font: 10pt \"Verdana\";"));
        tbeth->setRowCount(0);
        tbeth->setColumnCount(0);
        btn_config_eth = new QPushButton(groupBox);
        btn_config_eth->setObjectName(QStringLiteral("btn_config_eth"));
        btn_config_eth->setGeometry(QRect(250, 270, 141, 41));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 10, 861, 321));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 821, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnt1 = new QPushButton(layoutWidget);
        btnt1->setObjectName(QStringLiteral("btnt1"));
        btnt1->setMaximumSize(QSize(400, 150));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/PLUG32"), QSize(), QIcon::Normal, QIcon::Off);
        btnt1->setIcon(icon);
        btnt1->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt1, 0, 0, 1, 1);

        btnt2 = new QPushButton(layoutWidget);
        btnt2->setObjectName(QStringLiteral("btnt2"));
        btnt2->setMaximumSize(QSize(400, 150));
        btnt2->setIcon(icon);
        btnt2->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt2, 0, 1, 1, 1);

        btnt3 = new QPushButton(layoutWidget);
        btnt3->setObjectName(QStringLiteral("btnt3"));
        btnt3->setMaximumSize(QSize(400, 150));
        btnt3->setIcon(icon);
        btnt3->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt3, 0, 2, 1, 1);

        btnt4 = new QPushButton(layoutWidget);
        btnt4->setObjectName(QStringLiteral("btnt4"));
        btnt4->setMaximumSize(QSize(400, 150));
        btnt4->setIcon(icon);
        btnt4->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt4, 0, 3, 1, 1);

        btnt5 = new QPushButton(layoutWidget);
        btnt5->setObjectName(QStringLiteral("btnt5"));
        btnt5->setMaximumSize(QSize(400, 150));
        btnt5->setIcon(icon);
        btnt5->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt5, 0, 4, 1, 1);

        btnt6 = new QPushButton(layoutWidget);
        btnt6->setObjectName(QStringLiteral("btnt6"));
        btnt6->setMaximumSize(QSize(400, 150));
        btnt6->setIcon(icon);
        btnt6->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt6, 1, 0, 1, 1);

        btnt7 = new QPushButton(layoutWidget);
        btnt7->setObjectName(QStringLiteral("btnt7"));
        btnt7->setMaximumSize(QSize(400, 150));
        btnt7->setIcon(icon);
        btnt7->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt7, 1, 1, 1, 1);

        btnt8 = new QPushButton(layoutWidget);
        btnt8->setObjectName(QStringLiteral("btnt8"));
        btnt8->setMaximumSize(QSize(400, 150));
        btnt8->setIcon(icon);
        btnt8->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt8, 1, 2, 1, 1);

        btnt9 = new QPushButton(layoutWidget);
        btnt9->setObjectName(QStringLiteral("btnt9"));
        btnt9->setMaximumSize(QSize(400, 150));
        btnt9->setIcon(icon);
        btnt9->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt9, 1, 3, 1, 1);

        btnt10 = new QPushButton(layoutWidget);
        btnt10->setObjectName(QStringLiteral("btnt10"));
        btnt10->setMaximumSize(QSize(400, 150));
        btnt10->setIcon(icon);
        btnt10->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btnt10, 1, 4, 1, 1);

        chkreboot = new QCheckBox(groupBox_2);
        chkreboot->setObjectName(QStringLiteral("chkreboot"));
        chkreboot->setGeometry(QRect(20, 270, 201, 17));
        btnhab_all = new QPushButton(groupBox_2);
        btnhab_all->setObjectName(QStringLiteral("btnhab_all"));
        btnhab_all->setGeometry(QRect(260, 260, 121, 41));
        btndesab_all = new QPushButton(groupBox_2);
        btndesab_all->setObjectName(QStringLiteral("btndesab_all"));
        btndesab_all->setGeometry(QRect(390, 260, 121, 41));
        btn_config_tomada = new QPushButton(groupBox_2);
        btn_config_tomada->setObjectName(QStringLiteral("btn_config_tomada"));
        btn_config_tomada->setGeometry(QRect(720, 260, 121, 41));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 470, 1311, 251));
        grid2 = new QGridLayout(gridLayoutWidget);
        grid2->setObjectName(QStringLiteral("grid2"));
        grid2->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 350, 241, 101));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 51, 51));
        label->setAutoFillBackground(false);
        label->setPixmap(QPixmap(QString::fromUtf8(":/ICONS/UPTIME")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        lbluptime = new QLabel(groupBox_3);
        lbluptime->setObjectName(QStringLiteral("lbluptime"));
        lbluptime->setGeometry(QRect(90, 40, 121, 21));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lbluptime->setFont(font);
        lbluptime->setAlignment(Qt::AlignCenter);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(260, 350, 241, 101));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 51, 51));
        label_2->setAutoFillBackground(false);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/ICONS/TEMP")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);
        lbltemperatura = new QLabel(groupBox_4);
        lbltemperatura->setObjectName(QStringLiteral("lbltemperatura"));
        lbltemperatura->setGeometry(QRect(90, 40, 121, 21));
        lbltemperatura->setFont(font);
        lbltemperatura->setAlignment(Qt::AlignCenter);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(510, 350, 241, 101));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 51, 51));
        label_3->setAutoFillBackground(false);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/ICONS/CALENDAR")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        lblcalendario = new QLabel(groupBox_5);
        lblcalendario->setObjectName(QStringLiteral("lblcalendario"));
        lblcalendario->setGeometry(QRect(90, 40, 121, 21));
        lblcalendario->setFont(font);
        lblcalendario->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(760, 350, 241, 101));
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 30, 51, 51));
        label_5->setAutoFillBackground(false);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/ICONS/CLOCK")));
        label_5->setScaledContents(true);
        label_5->setWordWrap(false);
        lblrelogio = new QLabel(groupBox_6);
        lblrelogio->setObjectName(QStringLiteral("lblrelogio"));
        lblrelogio->setGeometry(QRect(90, 40, 121, 21));
        lblrelogio->setFont(font);
        lblrelogio->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1338, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Interface Ethernet", nullptr));
        btn_config_eth->setText(QApplication::translate("MainWindow", "Configurar Interface", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Controle das Tomadas", nullptr));
        btnt1->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt4->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt5->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt6->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt7->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt8->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt9->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnt10->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        chkreboot->setText(QApplication::translate("MainWindow", "Religar a Tomada Automaticamente", nullptr));
        btnhab_all->setText(QApplication::translate("MainWindow", "Habilitar Todas", nullptr));
        btndesab_all->setText(QApplication::translate("MainWindow", "Desabilitar Todas", nullptr));
        btn_config_tomada->setText(QApplication::translate("MainWindow", "Configurar Tomadas", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Uptime:", nullptr));
        label->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Temperatura:", nullptr));
        label_2->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Calend\303\241rio:", nullptr));
        label_3->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Rel\303\263gio:", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
