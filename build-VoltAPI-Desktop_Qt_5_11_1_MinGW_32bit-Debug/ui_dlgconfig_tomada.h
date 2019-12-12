/********************************************************************************
** Form generated from reading UI file 'dlgconfig_tomada.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCONFIG_TOMADA_H
#define UI_DLGCONFIG_TOMADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgconfig_tomada
{
public:
    QGroupBox *groupBox;
    QComboBox *cbotomada;
    QLabel *label;
    QCheckBox *chktomada;
    QLineEdit *txttomada;
    QLabel *label_2;
    QPushButton *btn_salvar;
    QPushButton *btn_fechar;

    void setupUi(QDialog *dlgconfig_tomada)
    {
        if (dlgconfig_tomada->objectName().isEmpty())
            dlgconfig_tomada->setObjectName(QStringLiteral("dlgconfig_tomada"));
        dlgconfig_tomada->resize(400, 211);
        groupBox = new QGroupBox(dlgconfig_tomada);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 371, 151));
        cbotomada = new QComboBox(groupBox);
        cbotomada->setObjectName(QStringLiteral("cbotomada"));
        cbotomada->setGeometry(QRect(10, 40, 69, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 47, 13));
        chktomada = new QCheckBox(groupBox);
        chktomada->setObjectName(QStringLiteral("chktomada"));
        chktomada->setGeometry(QRect(100, 40, 101, 17));
        txttomada = new QLineEdit(groupBox);
        txttomada->setObjectName(QStringLiteral("txttomada"));
        txttomada->setGeometry(QRect(10, 90, 351, 31));
        txttomada->setMaxLength(14);
        txttomada->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 81, 16));
        btn_salvar = new QPushButton(dlgconfig_tomada);
        btn_salvar->setObjectName(QStringLiteral("btn_salvar"));
        btn_salvar->setGeometry(QRect(230, 170, 75, 31));
        btn_fechar = new QPushButton(dlgconfig_tomada);
        btn_fechar->setObjectName(QStringLiteral("btn_fechar"));
        btn_fechar->setGeometry(QRect(310, 170, 75, 31));

        retranslateUi(dlgconfig_tomada);
        QObject::connect(btn_fechar, SIGNAL(clicked()), dlgconfig_tomada, SLOT(close()));

        QMetaObject::connectSlotsByName(dlgconfig_tomada);
    } // setupUi

    void retranslateUi(QDialog *dlgconfig_tomada)
    {
        dlgconfig_tomada->setWindowTitle(QApplication::translate("dlgconfig_tomada", "Configurar Tomada", nullptr));
        groupBox->setTitle(QApplication::translate("dlgconfig_tomada", "Configura\303\247\303\243o da Tomada", nullptr));
        label->setText(QApplication::translate("dlgconfig_tomada", "Tomada:", nullptr));
        chktomada->setText(QApplication::translate("dlgconfig_tomada", "Habilitar Tomada", nullptr));
        label_2->setText(QApplication::translate("dlgconfig_tomada", "Identifica\303\247\303\243o:", nullptr));
        btn_salvar->setText(QApplication::translate("dlgconfig_tomada", "Salvar", nullptr));
        btn_fechar->setText(QApplication::translate("dlgconfig_tomada", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgconfig_tomada: public Ui_dlgconfig_tomada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCONFIG_TOMADA_H
