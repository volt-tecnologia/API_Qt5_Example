#ifndef DLGCONFIG_TOMADA_H
#define DLGCONFIG_TOMADA_H

#include <QDialog>
#include <QJsonDocument>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>

namespace Ui {
class dlgconfig_tomada;
}

class dlgconfig_tomada : public QDialog
{
    Q_OBJECT

public:
    explicit dlgconfig_tomada(QWidget *parent = nullptr);
    ~dlgconfig_tomada();

    void setJsondoc(const QJsonDocument value);
private slots:
    void on_btn_salvar_clicked();

    void on_cbotomada_currentIndexChanged(int index);

private:
    void getPortInfo(int _port);

private:
    Ui::dlgconfig_tomada *ui;
    QJsonDocument jsondoc;

};

#endif // DLGCONFIG_TOMADA_H
