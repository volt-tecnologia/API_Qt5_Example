/********************************************************************************
** Form generated from reading UI file 'dlg_config_eth.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_CONFIG_ETH_H
#define UI_DLG_CONFIG_ETH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_config_eth
{
public:
    QPushButton *btnsalvar;
    QPushButton *btnfechar;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txthost;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *txtmac;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *txtip;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLineEdit *txtmask;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QLineEdit *txtgtw;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QLineEdit *txtdns1;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QLineEdit *txtdns2;

    void setupUi(QDialog *dlg_config_eth)
    {
        if (dlg_config_eth->objectName().isEmpty())
            dlg_config_eth->setObjectName(QStringLiteral("dlg_config_eth"));
        dlg_config_eth->resize(358, 348);
        btnsalvar = new QPushButton(dlg_config_eth);
        btnsalvar->setObjectName(QStringLiteral("btnsalvar"));
        btnsalvar->setGeometry(QRect(180, 300, 75, 31));
        btnfechar = new QPushButton(dlg_config_eth);
        btnfechar->setObjectName(QStringLiteral("btnfechar"));
        btnfechar->setGeometry(QRect(260, 300, 75, 31));
        layoutWidget = new QWidget(dlg_config_eth);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 320, 262));
        gridLayout_8 = new QGridLayout(layoutWidget);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(110, 10));
        label->setMaximumSize(QSize(110, 10));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txthost = new QLineEdit(layoutWidget);
        txthost->setObjectName(QStringLiteral("txthost"));
        txthost->setMinimumSize(QSize(200, 30));
        txthost->setMaximumSize(QSize(200, 30));
        txthost->setMaxLength(15);
        txthost->setReadOnly(false);

        gridLayout->addWidget(txthost, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(110, 10));
        label_2->setMaximumSize(QSize(110, 10));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        txtmac = new QLineEdit(layoutWidget);
        txtmac->setObjectName(QStringLiteral("txtmac"));
        txtmac->setMinimumSize(QSize(200, 30));
        txtmac->setMaximumSize(QSize(200, 30));
        txtmac->setReadOnly(true);

        gridLayout_2->addWidget(txtmac, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(110, 10));
        label_3->setMaximumSize(QSize(110, 10));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        txtip = new QLineEdit(layoutWidget);
        txtip->setObjectName(QStringLiteral("txtip"));
        txtip->setMinimumSize(QSize(200, 30));
        txtip->setMaximumSize(QSize(200, 30));

        gridLayout_3->addWidget(txtip, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(110, 10));
        label_7->setMaximumSize(QSize(110, 10));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        txtmask = new QLineEdit(layoutWidget);
        txtmask->setObjectName(QStringLiteral("txtmask"));
        txtmask->setMinimumSize(QSize(200, 30));
        txtmask->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(txtmask, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(110, 15));
        label_4->setMaximumSize(QSize(110, 10));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        txtgtw = new QLineEdit(layoutWidget);
        txtgtw->setObjectName(QStringLiteral("txtgtw"));
        txtgtw->setMinimumSize(QSize(200, 30));
        txtgtw->setMaximumSize(QSize(200, 30));

        gridLayout_5->addWidget(txtgtw, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 4, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(110, 10));
        label_5->setMaximumSize(QSize(110, 10));

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        txtdns1 = new QLineEdit(layoutWidget);
        txtdns1->setObjectName(QStringLiteral("txtdns1"));
        txtdns1->setMinimumSize(QSize(200, 30));
        txtdns1->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(txtdns1, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 5, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(110, 10));
        label_6->setMaximumSize(QSize(110, 10));

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        txtdns2 = new QLineEdit(layoutWidget);
        txtdns2->setObjectName(QStringLiteral("txtdns2"));
        txtdns2->setMinimumSize(QSize(200, 30));
        txtdns2->setMaximumSize(QSize(200, 30));

        gridLayout_7->addWidget(txtdns2, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 6, 0, 1, 1);


        retranslateUi(dlg_config_eth);
        QObject::connect(btnfechar, SIGNAL(clicked()), dlg_config_eth, SLOT(close()));

        QMetaObject::connectSlotsByName(dlg_config_eth);
    } // setupUi

    void retranslateUi(QDialog *dlg_config_eth)
    {
        dlg_config_eth->setWindowTitle(QApplication::translate("dlg_config_eth", "Dialog", nullptr));
        btnsalvar->setText(QApplication::translate("dlg_config_eth", "Salvar", nullptr));
        btnfechar->setText(QApplication::translate("dlg_config_eth", "Fechar", nullptr));
        label->setText(QApplication::translate("dlg_config_eth", "Host:", nullptr));
        label_2->setText(QApplication::translate("dlg_config_eth", "MAC:", nullptr));
        label_3->setText(QApplication::translate("dlg_config_eth", "IP:", nullptr));
        label_7->setText(QApplication::translate("dlg_config_eth", "M\303\241scara de Subrede:", nullptr));
        label_4->setText(QApplication::translate("dlg_config_eth", "Gateway:", nullptr));
        label_5->setText(QApplication::translate("dlg_config_eth", "DNS Prim\303\241rio:", nullptr));
        label_6->setText(QApplication::translate("dlg_config_eth", "DNS Prim\303\241rio:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_config_eth: public Ui_dlg_config_eth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_CONFIG_ETH_H
